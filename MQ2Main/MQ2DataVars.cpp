/*****************************************************************************
    MQ2Main.dll: MacroQuest2's extension DLL for EverQuest
    Copyright (C) 2002-2003 Plazmic, 2003-2004 Lax

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License, version 2, as published by
    the Free Software Foundation.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
******************************************************************************/

#if !defined(CINTERFACE)
#error /DCINTERFACE
#endif

#define DBG_SPEW


#include "MQ2Main.h"

#ifdef USEMQ2DATAVARS





map<string,PDATAVAR> VariableMap;

inline VOID DeleteMQ2DataVariable(PDATAVAR pVar)
{
	if (pVar->ppHead==&pMacroVariables || pVar->ppHead==&pGlobalVariables)
		VariableMap[pVar->szName]=0;
	if (pVar->pNext)
		pVar->pNext->pPrev=pVar->pPrev;
	if (pVar->pPrev)
		pVar->pPrev->pNext=pVar->pNext;
	else
		*pVar->ppHead=pVar->pNext;
	pVar->Var.Type->FreeVariable(pVar->Var.VarPtr);
	delete pVar;
}

inline PDATAVAR FindMQ2DataVariable(PCHAR Name)
{
	PDATAVAR pFind=VariableMap[Name];
	if (pFind)
		return pFind;
	// local?
	if (gMacroStack)
	{
		PDATAVAR pVar=gMacroStack->Parameters;
		while(pVar)
		{
			if (!strcmp(pVar->szName,Name))
				return pVar;
			pVar=pVar->pNext;
		}
		pVar=gMacroStack->LocalVariables;
		while(pVar)
		{
			if (!strcmp(pVar->szName,Name))
				return pVar;
			pVar=pVar->pNext;
		}
	}
	return 0;
}

BOOL AddMQ2DataEventVariable(PCHAR Name, PCHAR Index, MQ2Type *pType, PDATAVAR *ppHead, PCHAR Default)
{
	if (!ppHead || !Name[0])
		return FALSE;
	if (!Index)
		Index="";
	if (!Default)
		Default="";
	if (FindMQ2Data(Name) || FindMQ2DataType(Name))
		return FALSE; // name in use
	if (!pType)
		return FALSE;

	// create variable
	PDATAVAR pVar = new DATAVAR;
	pVar->ppHead=ppHead;
	pVar->pNext=*ppHead;
	*ppHead=pVar;
	pVar->pPrev=0;
	if (pVar->pNext)
		pVar->pNext->pPrev=pVar;
	strcpy(pVar->szName,Name);
	if (Index[0])
	{
		CDataArray *pArray=new CDataArray(pType,Index,Default);
		pVar->Var.Ptr=pArray;

	}
	else
	{
		pVar->Var.Type=pType;
		pType->InitVariable(pVar->Var.VarPtr);
		pType->FromString(pVar->Var.VarPtr,Default);
	}
	if (pVar->ppHead==&pMacroVariables || pVar->ppHead==&pGlobalVariables)
	{
		VariableMap[Name]=pVar;
	}
	return TRUE;
}


BOOL AddMQ2DataVariable(PCHAR Name, PCHAR Index, MQ2Type *pType, PDATAVAR *ppHead, PCHAR Default)
{
	if (!ppHead || !Name[0])
		return FALSE;
	if (!Index)
		Index="";
	if (!Default)
		Default="";
	if (FindMQ2DataVariable(Name) || FindMQ2Data(Name) || FindMQ2DataType(Name))
		return FALSE; // name in use
	if (!pType)
		return FALSE;

	// create variable
	PDATAVAR pVar = new DATAVAR;
	pVar->ppHead=ppHead;
	pVar->pNext=*ppHead;
	*ppHead=pVar;
	pVar->pPrev=0;
	if (pVar->pNext)
		pVar->pNext->pPrev=pVar;
	strcpy(pVar->szName,Name);
	if (Index[0])
	{
		CDataArray *pArray=new CDataArray(pType,Index,Default);
		pVar->Var.Ptr=pArray;
		pVar->Var.Type=pArrayType;
	}
	else
	{
		pVar->Var.Type=pType;
		pType->InitVariable(pVar->Var.VarPtr);
		pType->FromString(pVar->Var.VarPtr,Default);
	}
	if (!(gMacroStack && (ppHead==&gMacroStack->LocalVariables || ppHead==&gMacroStack->Parameters)))
	{
		VariableMap[Name]=pVar;
	}
	return TRUE;
}

PDATAVAR *FindVariableScope(PCHAR Name)
{
	if (!stricmp(Name,"global"))
		return &pGlobalVariables;
	if (!stricmp(Name,"outer"))
		return &pMacroVariables;
	if (gMacroStack && !stricmp(Name,"local"))
		return &gMacroStack->LocalVariables;
	return 0;
}

BOOL DeleteMQ2DataVariable(PCHAR Name)
{
	if (PDATAVAR pVar=FindMQ2DataVariable(Name))
	{
		DeleteMQ2DataVariable(pVar);
		return TRUE;
	}
	return FALSE;
}

VOID ClearMQ2DataVariables(PDATAVAR *ppHead)
{
	PDATAVAR pVar=*ppHead;
	while(pVar)
	{
		PDATAVAR pNext=pVar->pNext;
		DeleteMQ2DataVariable(pVar);
		pVar=pNext;
	}
	*ppHead=0;
}

VOID NewDeclareVar(PSPAWNINFO pChar, PCHAR szLine)
{
	if (!szLine[0])
	{
		SyntaxError("Usage: /declare <varname|varname[array extents]> [type] [global|outer|local] [default value]");
		return;
	}
	PDATAVAR *pScope=0;
	MQ2Type *pType=0;
	CHAR szIndex[MAX_STRING]={0};
	CHAR szName[MAX_STRING]={0};
	GetArg(szName,szLine,1);
	CHAR Arg[MAX_STRING]={0};
	GetArg(Arg,szLine,2);
	PCHAR pDefault;
	if (pScope=FindVariableScope(Arg))
	{
		// scope comes AFTER type, so next must be default
		pDefault=GetNextArg(szLine,2);
	}
	else if (pType=FindMQ2DataType(Arg))
	{
		// next is either scope or default
		GetArg(Arg,szLine,3);
		if (pScope=FindVariableScope(Arg))
		{
			// next is default
			pDefault=GetNextArg(szLine,3);
		}
		else
		{
			// this is default
			pDefault=GetNextArg(szLine,2);
		}
	}
	else
	{
		// this is default
		pDefault=GetNextArg(szLine);
	}
	if (!pScope)
	{ 
		if (gMacroStack)
			pScope=&gMacroStack->LocalVariables;
		else
		{
			MacroError("/declare '%s' failed.  No macro in execution and no variable scope given",szName);
			return;
		}
	}
	if (!pType)
		pType=pStringType;
	if (pType==pArrayType)
	{
		MacroError("/declare array failed.  To declare an array use: /declare name[size] <type> <scope> <default element value>");
		MacroError("Example: /declare MyStringArray[25] string local ARRAY-UNDEFINED-ELEMENT");
		return;
	}

	if (PCHAR pBracket=strchr(szName,'['))
	{
		*pBracket=0;
		strcpy(szIndex,&pBracket[1]);
		szIndex[strlen(szIndex)-1]=0;
	}
	if (pType==pTimerType && szIndex[0])
	{
		MacroError("Cannot /declare an array of timers");
		return;
	}

	if (!AddMQ2DataVariable(szName,szIndex,pType,pScope,pDefault))
	{
		MacroError("/declare '%s' failed.  Name already in use.",szName);
	}
	else
	{
		if (pType==pTimerType)
		{
			PTIMER pTimer=(PTIMER)((*pScope)->Var.Ptr);
			strcpy(pTimer->szName,szName);
		}
	}
}

VOID NewDeleteVarCmd(PSPAWNINFO pChar, PCHAR szLine)
{
	if (szLine[0]==0) {
		SyntaxError("Usage: /deletevar <varname>");
	} 
	else 
	{
		// destroy old variable
		if (!DeleteMQ2DataVariable(szLine))
		{
			MacroError("Variable '%s' does not exist",szLine);
		}
	}
}

VOID NewVarset(PSPAWNINFO pChar, PCHAR szLine)
{
	if (!szLine[0])
	{
		SyntaxError("Usage: /varset <varname> <new value>");
		return;
	}
	CHAR szName[MAX_STRING]={0};
	GetArg(szName,szLine,1);
	PCHAR szRest=GetNextArg(szLine);
	CHAR szIndex[MAX_STRING]={0};
	if (PCHAR pBracket=strchr(szName,'['))
	{
		*pBracket=0;
		strcpy(szIndex,&pBracket[1]);
	}
	PDATAVAR pVar=FindMQ2DataVariable(szName);
	if (!pVar)
	{
		MacroError("/varset failed, variable '%s' not found",szName);
		return;
	}
	if (szIndex[0])
	{
		if (pVar->Var.Type!=pArrayType)
		{
			MacroError("/varset '%s' failed, array form on non-array",szName);
			return;
		}
		CDataArray *pArray=(CDataArray*)pVar->Var.Ptr;
		int N=pArray->GetElement(szIndex);
		if (N==-1)
		{
			MacroError("/varset '%s[%d]' failed, out of bounds on array",szName,N);
			return;
		}
		if (!pArray->pType->FromString(pArray->pData[N],szRest))
		{
			MacroError("/varset '%s[%d]' failed, array element type rejected new value",szName,N);
		}
	}
	else
	{
		if (!pVar->Var.Type->FromString(pVar->Var.VarPtr,szRest))
		{
			MacroError("/varset '%s' failed, variable type rejected new value",szName);
		}
	}
}

VOID NewVarcalc(PSPAWNINFO pChar, PCHAR szLine)
{
	if (!szLine[0])
	{
		SyntaxError("Usage: /varcalc <varname> <formula>");
		return;
	}
	CHAR szName[MAX_STRING]={0};
	GetArg(szName,szLine,1);
	PCHAR szRest=GetNextArg(szLine);
	if (!szRest || !szRest[0])
	{
		SyntaxError("Usage: /varcalc <varname> <formula>");
		return;
	}

	DOUBLE Result;
	if (!Calculate(szRest,Result))
	{
		MacroError("/varcalc '%s' failed.  Could not calculate '%s'",szName,szRest);
		return;
	}
	sprintf(szRest,"%f",Result);


	CHAR szIndex[MAX_STRING]={0};
	if (PCHAR pBracket=strchr(szName,'['))
	{
		*pBracket=0;
		strcpy(szIndex,&pBracket[1]);
		*pBracket='[';
	}
	PDATAVAR pVar=FindMQ2DataVariable(szName);
	if (!pVar)
	{
		MacroError("/varcalc failed, variable '%s' not found",szName);
		return;
	}
	if (szIndex[0])
	{
		if (pVar->Var.Type!=pArrayType)
		{
			MacroError("/varcalc '%s' failed, array form on non-array",szName);
			return;
		}
		CDataArray *pArray=(CDataArray*)pVar->Var.Ptr;
		int N=pArray->GetElement(szIndex);
		if (N==-1)
		{
			MacroError("/varcalc '%s[%d]' failed, out of bounds on array",szName,N);
			return;
		}
		if (!pArray->pType->FromString(pArray->pData[N],szRest))
		{
			MacroError("/varcalc '%s[%d]' failed, array element type rejected new value",szName,N);
		}
	}
	else
	{
		if (!pVar->Var.Type->FromString(pVar->Var.VarPtr,szRest))
		{
			MacroError("/varcalc '%s' failed, variable type rejected new value",szName);
		}
	}
}

VOID NewVardata(PSPAWNINFO pChar, PCHAR szLine)
{
	if (!szLine[0])
	{
		SyntaxError("Usage: /vardata <varname> <new mq2data value>");
		return;
	}
	CHAR szName[MAX_STRING]={0};
	GetArg(szName,szLine,1);
	PCHAR szRest=GetNextArg(szLine);
	if (!szRest || !szRest[0])
	{
		SyntaxError("Usage: /vardata <varname> <new mq2data value>");
		return;
	}
	CHAR szIndex[MAX_STRING]={0};
	if (PCHAR pBracket=strchr(szName,'['))
	{
		*pBracket=0;
		strcpy(szIndex,&pBracket[1]);
		*pBracket='[';
	}
	PDATAVAR pVar=FindMQ2DataVariable(szName);
	if (!pVar)
	{
		MacroError("/vardata '%s' failed, variable not found",szName);
		return;
	}
	MQ2TYPEVAR Result;
	if (!ParseMQ2DataPortion(szRest,Result))
	{
		MacroError("/vardata '%s' failed, MQ2Data portion '%s' unparsable",szName,szRest);
		return;
	}

	if (szIndex[0])
	{
		if (pVar->Var.Type!=pArrayType)
		{
			MacroError("/vardata '%s' failed, array form on non-array",szName);
			return;
		}
		CDataArray *pArray=(CDataArray*)pVar->Var.Ptr;
		int N=pArray->GetElement(szIndex);
		if (N==-1)
		{
			MacroError("/vardata '%s[%d]' failed, out of bounds on array",szName,N);
			return;
		}
		if (!pVar->Var.Type->FromData(pVar->Var.VarPtr,Result))
		{
			MacroError("/vardata '%s[%d]'failed, array element type rejected new value",szName,N);
		}
	}
	else
	{
		if (!pVar->Var.Type->FromData(pVar->Var.VarPtr,Result))
		{
			MacroError("/vardata '%s' failed, variable type rejected new value",szName);
		}
	}
}

VOID AddEvent(DWORD Event, PCHAR FirstArg, ...)
{ 
	PEVENTSTACK pEvent = NULL; 
	if (!gEventFunc[Event]) {	return; }
	pEvent = (PEVENTSTACK)malloc(sizeof(EVENTSTACK)); 
	if (!pEvent) {	return; }
	ZeroMemory(pEvent,sizeof(EVENTSTACK)); 
	pEvent->Type = Event; 
	pEvent->pEventList = NULL; 
	if (FirstArg) {
		va_list marker;
		DWORD i=0;
		PCHAR CurrentArg = FirstArg;
		va_start(marker, FirstArg);

		while (CurrentArg) {
			CHAR szParamName[MAX_STRING] = {0};
			CHAR szParamType[MAX_STRING] = {0};
			GetFuncParam(gEventFunc[Event]->Line,i,szParamName,szParamType);
			MQ2Type *pType = FindMQ2DataType(szParamType);
			if (!pType)
				pType=pStringType;
			AddMQ2DataEventVariable(szParamName,"",pType,&pEvent->Parameters,CurrentArg);
			i++;
			CurrentArg = va_arg(marker,PCHAR);
		}
		va_end(marker);
	}

	if (!gEventStack) { 
		gEventStack = pEvent; 
	} else { 
		PEVENTSTACK pTemp = NULL; 
		for (pTemp = gEventStack;pTemp->pNext;pTemp=pTemp->pNext); 
		pTemp->pNext = pEvent; 
	} 
} 

VOID AddCustomEvent(PEVENTLIST pEList, PCHAR szLine)
{
    PEVENTSTACK pEvent = NULL;
    if (!pEList->pEventFunc) return;
    pEvent = (PEVENTSTACK)malloc(sizeof(EVENTSTACK));
    if (!pEvent) return;
    ZeroMemory(pEvent,sizeof(EVENTSTACK));
    pEvent->Type = EVENT_CUSTOM;
    pEvent->pEventList = pEList;
    CHAR szParamName[MAX_STRING] = {0};
	CHAR szParamType[MAX_STRING] = {0};
	GetFuncParam(pEList->pEventFunc->Line,0,szParamName,szParamType);
	MQ2Type *pType = FindMQ2DataType(szParamType);
	if (!pType)
		pType=pStringType;

	AddMQ2DataEventVariable(szParamName,"",pType,&pEvent->Parameters,szLine);

    if (!gEventStack) {
        gEventStack = pEvent;
    } else {
        PEVENTSTACK pTemp = NULL;
        for (pTemp = gEventStack;pTemp->pNext;pTemp=pTemp->pNext);
        pTemp->pNext = pEvent;
    }
}

VOID CheckChatForEvent(PCHAR szMsg)
{
		if ((gMacroBlock) && (!gMacroPause) && (!gbUnload) && (!gZoning)) { 
			CHAR Arg1[MAX_STRING] = {0}; 
			CHAR Arg2[MAX_STRING] = {0}; 
			CHAR Arg3[MAX_STRING] = {0}; 

			if ((strstr(szMsg," tells the guild, '")) && (CHATEVENT(CHAT_GUILD))) { 
				strncpy(Arg1,szMsg,(DWORD)(strstr(szMsg," tells the guild, '")-szMsg)); 
				strcpy(Arg2,strstr(szMsg," tells the guild, '")+19); 
				Arg2[strlen(Arg2)-1]=0; 
				AddEvent(EVENT_CHAT,"guild",Arg1,Arg2,NULL); 
			} else if ((strstr(szMsg," tells the group, '")) && (CHATEVENT(CHAT_GROUP))) { 
				strncpy(Arg1,szMsg,(DWORD)(strstr(szMsg," tells the group, '")-szMsg)); 
				strcpy(Arg2,strstr(szMsg," tells the group, '")+19); 
				Arg2[strlen(Arg2)-1]=0; 
				AddEvent(EVENT_CHAT,"group",Arg1,Arg2,NULL); 
			} else if ((strstr(szMsg," tells you, '")) && (CHATEVENT(CHAT_TELL))) { 
				strncpy(Arg1,szMsg,(DWORD)(strstr(szMsg," tells you, '")-szMsg)); 
				strcpy(Arg2,strstr(szMsg," tells you, '")+13); 
				Arg2[strlen(Arg2)-1]=0; 
				AddEvent(EVENT_CHAT,"tell",Arg1,Arg2,NULL); 
			} else if ((strstr(szMsg," says out of character, '")) && (CHATEVENT(CHAT_OOC))) { 
				strncpy(Arg1,szMsg,(DWORD)(strstr(szMsg," says out of character, '")-szMsg)); 
				strcpy(Arg2,strstr(szMsg," says out of character, '")+25); 
				Arg2[strlen(Arg2)-1]=0; 
				AddEvent(EVENT_CHAT,"ooc",Arg1,Arg2,NULL); 
			} else if ((strstr(szMsg," shouts, '")) && (CHATEVENT(CHAT_SHOUT))) { 
				strncpy(Arg1,szMsg,(DWORD)(strstr(szMsg," shouts, '")-szMsg)); 
				strcpy(Arg2,strstr(szMsg," shouts, '")+10); 
				Arg2[strlen(Arg2)-1]=0; 
				AddEvent(EVENT_CHAT,"shout",Arg1,Arg2,NULL); 
			} else if ((strstr(szMsg," auctions, '")) && (CHATEVENT(CHAT_AUC))) { 
				strncpy(Arg1,szMsg,(DWORD)(strstr(szMsg," auctions, '")-szMsg)); 
				strcpy(Arg2,strstr(szMsg," auctions, '")+12); 
				Arg2[strlen(Arg2)-1]=0; 
				AddEvent(EVENT_CHAT,"auc",Arg1,Arg2,NULL); 
			} else if ((strstr(szMsg," says '")) && (CHATEVENT(CHAT_SAY))) { 
				strncpy(Arg1,szMsg,(DWORD)(strstr(szMsg," says '")-szMsg)); 
				strcpy(Arg2,strstr(szMsg," says '")+7); 
				Arg2[strlen(Arg2)-1]=0; 
				AddEvent(EVENT_CHAT,"say",Arg1,Arg2,NULL); 
			} else if ((strstr(szMsg," says, '")) && (CHATEVENT(CHAT_SAY))) { 
				strncpy(Arg1,szMsg,(DWORD)(strstr(szMsg," says, '")-szMsg)); 
				strcpy(Arg2,strstr(szMsg," says, '")+8); 
				Arg2[strlen(Arg2)-1]=0; 
				AddEvent(EVENT_CHAT,"say",Arg1,Arg2,NULL); 
			} else if ( (strstr(szMsg," tells ")) && (strstr(szMsg,":")) && (strstr(szMsg,", '")) && (CHATEVENT(CHAT_CHAT)) ) {
				strncpy(Arg1,szMsg,(DWORD)(strstr(szMsg," tells ")-szMsg)); 
				strcpy(Arg3,strstr(szMsg," tells ")+7); 
				Arg3[strlen(Arg3)-1]=0; 
				strcpy(Arg2,strstr(Arg3,", '")+3); 
				Arg3[strstr(Arg3,":")-Arg3]=0; 
				AddEvent(EVENT_CHAT,Arg3,Arg1,Arg2,NULL); 
			} else { 
				PEVENTLIST pEvent = pEventList; 
				while (pEvent) { 
					if (strstr(szMsg,pEvent->szMatch)) { 
						AddCustomEvent(pEvent,szMsg); 
					} 
					pEvent = pEvent->pNext; 
				} 
			} 
		} 
}

VOID DropTimers(VOID)
{
	PTIMER pTimer=gTimer;
	CHAR szOrig[MAX_STRING] = {0};
	while(pTimer)
	{
		if (pTimer->Current)
		{
			pTimer->Current--;
			if (!pTimer->Current)
			{
				itoa(pTimer->Original,szOrig,10);
				AddEvent(EVENT_TIMER,pTimer->szName,szOrig,NULL);
			}
		}
		pTimer=pTimer->pNext;
	}
}


#else
PDATAVAR FindMQ2DataVariable(PCHAR Name)
{
	return 0;
}
#endif