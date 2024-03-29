/*****************************************************************************
MQ2Main.dll: MacroQuest2's extension DLL for EverQuest
Copyright (C) 2002-2003 Plazmic, 2003-2005 Lax

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
******************************************************************************/
#if !defined(ISXEQ) && !defined(ISXEQ_LEGACY)

#if !defined(CINTERFACE)
#error /DCINTERFACE
#endif

#define DBG_SPEW

//#define DEBUG_PLUGINS

#ifdef DEBUG_PLUGINS
#define PluginDebug DebugSpew
#else
#define PluginDebug //
#endif

#include "MQ2Main.h"


CRITICAL_SECTION gPluginCS = { 0 };
BOOL bPluginCS=0;

DWORD checkme(char *module)
{
    char *p;
    PIMAGE_DOS_HEADER pd = (PIMAGE_DOS_HEADER)module;
    PIMAGE_FILE_HEADER pf;
    p = module + pd->e_lfanew;
    p += 4;  //skip sig
    pf = (PIMAGE_FILE_HEADER) p;
    return pf->TimeDateStamp;
}

static unsigned int mq2mainstamp = 0;


DWORD LoadMQ2Plugin(const PCHAR pszFilename,BOOL bCustom)
{
    CHAR Filename[MAX_PATH]={0};

    strcpy_s(Filename,pszFilename);
    _strlwr_s(Filename);
    PCHAR Temp=strstr(Filename,".dll");
	if (Temp)
        Temp[0]=0;
    if (!_stricmp(Filename,"mq2warp")) // ^_^
    {
        return 0;
    }
    CHAR TheFilename[MAX_STRING]={0};
    sprintf_s(TheFilename,"%s.dll",Filename);
	if(HMODULE hThemod = GetModuleHandle(TheFilename)) {
		DebugSpew("LoadMQ2Plugin(0)(%s) already loaded",TheFilename);
		return 2;
	}
    CAutoLock Lock(&gPluginCS);
    DebugSpew("LoadMQ2Plugin(%s)",Filename);

    CHAR FullFilename[MAX_STRING]={0};
    sprintf_s(FullFilename,"%s\\%s.dll",gszINIPath,Filename);
    HMODULE hmod=LoadLibrary(FullFilename);
    if (!hmod)
    {
        DebugSpew("LoadMQ2Plugin(%s) Failed",Filename);
        return 0;
    }
	//im disabling this check in debug builds because i can't just make a minor change and rebuild just mq2main
	//without having to actually rebuild ALL my plugins even though its technically not needed for them to work -eqmule sep 11 2016
#if !defined(_DEBUG) && !defined(NO_TIMESTAMP_CHECK)
	if (!mq2mainstamp) {
        mq2mainstamp = checkme((char*)GetCurrentModule());
    }
    if (mq2mainstamp > checkme((char*)hmod)) {
        char tmpbuff[MAX_PATH];
        sprintf_s(tmpbuff, "Please recompile %s -- it is out of date with respect to mq2main (%d>%d)", FullFilename, mq2mainstamp, checkme((char*)hmod));
        DebugSpew("%s", tmpbuff);
        MessageBoxA(NULL, tmpbuff, "Plugin Load Failed", MB_OK);
        FreeLibrary(hmod);
        return 0;
    }
#endif // !_DEBUG
    PMQPLUGIN pPlugin=pPlugins;
    while(pPlugin)
    {
        if (hmod==pPlugin->hModule)
        {
            DebugSpew("LoadMQ2Plugin(%s) already loaded",Filename);
            // LoadLibrary count must match FreeLibrary count for unloading to work.
            FreeLibrary(hmod);
            return 2; // already loaded
        }
        pPlugin=pPlugin->pNext;
    }
    pPlugin = new MQPLUGIN;
    memset(pPlugin,0,sizeof(MQPLUGIN));
	pPlugin->bCustom=bCustom;
    pPlugin->hModule=hmod;
    strcpy_s(pPlugin->szFilename,Filename);
    pPlugin->Initialize=(fMQInitializePlugin)GetProcAddress(hmod,"InitializePlugin");
    pPlugin->Shutdown=(fMQShutdownPlugin)GetProcAddress(hmod,"ShutdownPlugin");
    pPlugin->IncomingChat=(fMQIncomingChat)GetProcAddress(hmod,"OnIncomingChat");
    pPlugin->Pulse=(fMQPulse)GetProcAddress(hmod,"OnPulse");
    pPlugin->WriteChatColor=(fMQWriteChatColor)GetProcAddress(hmod,"OnWriteChatColor");
    pPlugin->Zoned=(fMQZoned)GetProcAddress(hmod,"OnZoned");
    pPlugin->CleanUI=(fMQCleanUI)GetProcAddress(hmod,"OnCleanUI");
    pPlugin->ReloadUI=(fMQReloadUI)GetProcAddress(hmod,"OnReloadUI");
    pPlugin->DrawHUD=(fMQDrawHUD)GetProcAddress(hmod,"OnDrawHUD");
    pPlugin->SetGameState=(fMQSetGameState)GetProcAddress(hmod,"SetGameState");
    pPlugin->AddSpawn=(fMQSpawn)GetProcAddress(hmod,"OnAddSpawn");
    pPlugin->RemoveSpawn=(fMQSpawn)GetProcAddress(hmod,"OnRemoveSpawn");
    pPlugin->AddGroundItem=(fMQGroundItem)GetProcAddress(hmod,"OnAddGroundItem");
    pPlugin->RemoveGroundItem=(fMQGroundItem)GetProcAddress(hmod,"OnRemoveGroundItem");
    pPlugin->BeginZone=(fMQBeginZone)GetProcAddress(hmod,"OnBeginZone"); 
    pPlugin->EndZone=(fMQEndZone)GetProcAddress(hmod,"OnEndZone"); 

    float *ftmp = (float*) GetProcAddress(hmod,"?MQ2Version@@3MA");
    if (ftmp)
		pPlugin->fpVersion = *ftmp;
    else pPlugin->fpVersion = 1.0;
    if (pPlugin->Initialize)
        pPlugin->Initialize();
    PluginCmdSort();
	if (pPlugin->SetGameState) {
		pPlugin->SetGameState(GetGameState());
	}
    if (pPlugin->AddSpawn && GetGameState()==GAMESTATE_INGAME)
    {
        PSPAWNINFO pSpawn=(PSPAWNINFO)pSpawnList;
        while(pSpawn)
        {
            pPlugin->AddSpawn(pSpawn);
            pSpawn=pSpawn->pNext;
        }
    }
    if (pPlugin->AddGroundItem && GetGameState()==GAMESTATE_INGAME)
    {
        PGROUNDITEM pItem=*(PGROUNDITEM*)pItemList;
        while(pItem)
        {
            pPlugin->AddGroundItem(pItem);
            pItem=pItem->pNext;
        }
    }

    pPlugin->pLast=0;
    pPlugin->pNext=pPlugins;
    if (pPlugins)
        pPlugins->pLast=pPlugin;
    pPlugins=pPlugin;

    sprintf_s(FullFilename,"%s-AutoExec",Filename);
    LoadCfgFile(FullFilename,false);
    return 1;
}
//what is this?
//Well, microsoft decided that it was a grat idea to SILENTLY add dlls that crash to 2 registrykeys
//since mq2 uses plugins, there is no telling which will crash now and then
//and its likely this happens on patchdays as well
//anyway if they end up in any of these 2 reg keys freelibrary will fail
//it will look like this:
//"C:\\Program Files\\Company\\MyApp.exe"="$ IgnoreFreeLibrary<externModule.dll>"
//so we need to workaround this so called "feature" by checking of we exist in the keys
//and delete us if we do so we can unload properly. -eqmule Nov 19 2015
//also this crap is checked once on launch, so
//we cant just delete the value and freelibrary will work again
//at least next time they use mq2 it will unload
//maybe i should hook the freelibraryhook...
//gonna have to spend some time on this.
//maybe there is a application compatibility api we can call to unhook it...

void DeleteLayers(PMQPLUGIN pPlugin)
{
	//work in progress, patch was needed i got interrupted.
	return;
	//HKEY_CURRENT_USER\SOFTWARE\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers
	//HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\AppCompatFlags\Layers
	HKEY HkeyTemp = { 0 };
	HANDLE hFile = NULL;
	VALENT vl = { 0 };
	if (ERROR_SUCCESS == RegOpenKey(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Layers", &HkeyTemp)) {
	//	RegQueryMultipleValues(HkeyTemp,&vl,
	}

}

typedef struct _FAKEGPSTRING {
	USHORT Length;
	USHORT MaximumLength;
	PCHAR  Buffer;
} FAKEGPSTRING, *PFAKEGPSTRING;
typedef BOOL(WINAPI *fLdrGetProcedureAddress)(HMODULE, PFAKEGPSTRING, WORD, PVOID);
typedef BOOL(WINAPI *fFreeLibrary)(HMODULE);
static fFreeLibrary pFreeLibrary = 0;
static fLdrGetProcedureAddress pLdrGetProcedureAddress = 0;

BOOL UnloadMQ2Plugin(const PCHAR pszFilename)
{
    DebugSpew("UnloadMQ2Plugin");
    CHAR Filename[MAX_PATH]={0};
    strcpy_s(Filename,pszFilename);
    _strlwr_s(Filename);
    PCHAR Temp=strstr(Filename,".dll");
    if (Temp)
        Temp[0]=0;

    // find plugin in list
    CAutoLock Lock(&gPluginCS);

	//work in progress, move on, nothing to see here need to test this, but they keep patching on me...
	//well after messing with this for a while, I realized I couldn't bypass it by just deleting the registry key
	//need to check if we can just bypass the GetprocAddress hook and call the nt version which isnt hooked by the shim engine...
	/*if (pLdrGetProcedureAddress = (fLdrGetProcedureAddress)GetProcAddress(GetModuleHandle("ntdll.dll"), "LdrGetProcedureAddress")) {
		if (HMODULE h = GetModuleHandle("Kernel32.dll")) {
			CHAR szFreeLib[32] = { 0 };
			strcpy_s(szFreeLib, "FreeLibrary");
			FAKEGPSTRING as = { 0 };
			as.Buffer = szFreeLib;
			as.Length = 11;
			as.MaximumLength = 11;
			DWORD addr = 0;
			BOOL ret = pLdrGetProcedureAddress(h, &as, NULL, (PVOID)&pFreeLibrary);
			Sleep(0);
			//pFreeLibrary = (fFreeLibrary)addr;
		}
	}*/
    PMQPLUGIN pPlugin=pPlugins;
    while(pPlugin)
    {
        if (!_stricmp(Filename,pPlugin->szFilename))
        {
            if (pPlugin->pLast)
                pPlugin->pLast->pNext=pPlugin->pNext;
            else
                pPlugins=pPlugin->pNext;
            if (pPlugin->pNext)
                pPlugin->pNext->pLast=pPlugin->pLast;

            if (pPlugin->CleanUI)
                pPlugin->CleanUI();
            if (pPlugin->Shutdown)
                pPlugin->Shutdown();

			//DeleteLayers(pPlugin);
			if (pFreeLibrary)
				pFreeLibrary(pPlugin->hModule);
			else
				FreeLibrary(pPlugin->hModule);
            delete pPlugin;
            return 1;
        }
        pPlugin=pPlugin->pNext;
    }

    return 0;
}

VOID SaveMQ2PluginLoadStatus(char*Name, bool bLoad)
{
    CAutoLock Lock(&gPluginCS);

    CHAR MainINI[MAX_STRING] = {0};
    sprintf_s(MainINI,"%s\\macroquest.ini",gszINIPath);
	DWORD dwAttrs = 0,bChangedfileattribs = 0;
	if ((dwAttrs = GetFileAttributes(MainINI))!=INVALID_FILE_ATTRIBUTES) {
		if(dwAttrs & FILE_ATTRIBUTE_READONLY) {
			bChangedfileattribs = 1;
			SetFileAttributes(MainINI,FILE_ATTRIBUTE_NORMAL);
		}
	}
	WritePrivateProfileString("Plugins",Name,bLoad ? "1":"0",gszINIFilename);
	if(bChangedfileattribs) {
		SetFileAttributes(MainINI,dwAttrs);
	}
    return;
}
VOID InitializeMQ2Plugins()
{
    DebugSpew("Initializing plugins");
    bmWriteChatColor=AddMQ2Benchmark("WriteChatColor");
    bmPluginsIncomingChat=AddMQ2Benchmark("PluginsIncomingChat");
    bmPluginsPulse=AddMQ2Benchmark("PluginsPulse");
    bmPluginsOnZoned=AddMQ2Benchmark("PluginsOnZoned");
    bmPluginsCleanUI=AddMQ2Benchmark("PluginsCleanUI");
    bmPluginsReloadUI=AddMQ2Benchmark("PluginsReloadUI");
    bmPluginsDrawHUD=AddMQ2Benchmark("PluginsDrawHUD");
    bmPluginsSetGameState=AddMQ2Benchmark("PluginsSetGameState");
    bmCalculate=AddMQ2Benchmark("Calculate");
    bmBeginZone=AddMQ2Benchmark("BeginZone"); 
    bmEndZone=AddMQ2Benchmark("EndZone"); 


    bPluginCS=1;

    CHAR PluginList[MAX_STRING*10] = {0};
    CHAR szBuffer[MAX_STRING] = {0};
    CHAR MainINI[MAX_STRING] = {0};
    sprintf_s(MainINI,"%s\\macroquest.ini",gszINIPath);
    GetPrivateProfileString("Plugins",NULL,"",PluginList,MAX_STRING*10,MainINI);
    PCHAR pPluginList = PluginList;
	BOOL loadvalue = 0;
    while (pPluginList[0]!=0) {
        GetPrivateProfileString("Plugins",pPluginList,"",szBuffer,MAX_STRING,MainINI);
        if (IsNumber(szBuffer)) {
			loadvalue=atoi(szBuffer);
			szBuffer[0] = '\0';
		}
		if(loadvalue==1 || szBuffer[0]!=0) {
            LoadMQ2Plugin(pPluginList);
        }
        pPluginList+=strlen(pPluginList)+1;
    }
	//ok now check if user has a CustomPlugin.ini and load those as well...
	sprintf_s(MainINI,"%s\\CustomPlugins.ini",gszINIPath);
    GetPrivateProfileString("Plugins",NULL,"",PluginList,MAX_STRING*10,MainINI);
    pPluginList = PluginList;
    while (pPluginList[0]!=0) {
        GetPrivateProfileString("Plugins",pPluginList,"",szBuffer,MAX_STRING,MainINI);
        if (IsNumber(szBuffer)) {
			loadvalue=atoi(szBuffer);
			szBuffer[0] = '\0';
		}
		if(loadvalue==1 || szBuffer[0]!=0) {
            LoadMQ2Plugin(pPluginList,1);
        }
        pPluginList+=strlen(pPluginList)+1;
    }
}

VOID UnloadMQ2Plugins()
{
    CAutoLock Lock(&gPluginCS);
    while(pPlugins)
    {
        DebugSpew("%s->Unload()",pPlugins->szFilename);
        UnloadMQ2Plugin(pPlugins->szFilename);
    }
}

VOID ShutdownMQ2Plugins()
{
    bPluginCS=0;
    {
        CAutoLock Lock(&gPluginCS);
		PMQPLUGIN pPlugin = 0;
        while(pPlugins)
        {
			if (!_stricmp(pPlugins->szFilename, "mq2ic"))//has to be the last one we unload...
			{
				pPlugin = pPlugins;
				pPlugins = pPlugins->pNext;
				continue;
			}
            DebugSpew("%s->Unload()",pPlugins->szFilename);
            UnloadMQ2Plugin(pPlugins->szFilename);
        }
		pPlugins = pPlugin;
		UnloadMQ2Plugin("mq2ic");
    }
    Sleep(50); // fixes crash on Windows 7 (Vista too?) in RtlpWaitOnCriticalSection
    DeleteCriticalSection(&gPluginCS);
}

VOID WriteChatColor(PCHAR Line, DWORD Color, DWORD Filter)
{
    if (!bPluginCS)
        return;
    if (gFilterMQ)
        return;
    PluginDebug("Begin WriteChatColor()");
    EnterMQ2Benchmark(bmWriteChatColor);

	if(size_t len = strlen(Line)) {
		if(char *PlainText = (char*)LocalAlloc(LPTR,len+1)) {
			StripMQChat(Line,PlainText);
			CheckChatForEvent(PlainText);
			LocalFree(PlainText);
		}
		DebugSpew("WriteChatColor(%s)",Line);
	}
	CAutoLock Lock(&gPluginCS);
	PMQPLUGIN pPlugin=pPlugins;
	while(pPlugin)
	{
		if (pPlugin->WriteChatColor)
		{
			pPlugin->WriteChatColor(Line,Color,Filter);
		}
		pPlugin=pPlugin->pNext;
	}
    ExitMQ2Benchmark(bmWriteChatColor);
}

BOOL PluginsIncomingChat(PCHAR Line, DWORD Color)
{
    PluginDebug("PluginsIncomingChat()");
    if (!bPluginCS)
        return 0;
    if(!Line[0])
        return 0;
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
    BOOL Ret=0;
    while(pPlugin)
    {
        if (pPlugin->IncomingChat)
        {
            Ret|=pPlugin->IncomingChat(Line,Color);
        }
        pPlugin=pPlugin->pNext;
    }
    return Ret;
}

VOID PulsePlugins()
{
    PluginDebug("PulsePlugins()");
    if (!bPluginCS)
        return;
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
    while(pPlugin)
    {
        if (pPlugin->Pulse)
        {
            //DebugSpew("%s->Pulse()",pPlugin->szFilename);
            pPlugin->Pulse();
        }
		if(pPlugin && pPlugin->pNext) {
			pPlugin=pPlugin->pNext;
		} else {
			pPlugin=0;
		}
    }    
}

VOID PluginsZoned()
{
    PluginDebug("PluginsZoned()");
    if (!bPluginCS)
        return;
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
    while(pPlugin)
    {
        if (pPlugin->Zoned)
        {
            DebugSpew("%s->Zoned()",pPlugin->szFilename);
            pPlugin->Zoned();
        }
        pPlugin=pPlugin->pNext;
    }
	if (pZoneInfo) {
		char szTemp[2048];
		sprintf_s(szTemp, "You have entered %s.", ((PZONEINFO)pZoneInfo)->LongName);
		CheckChatForEvent(szTemp);
	}
}

VOID PluginsCleanUI()
{
    PluginDebug("PluginsCleanUI()");
    if (!bPluginCS)
        return;
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
    DeleteMQ2NewsWindow();
	RemoveAutoBankMenu();
    while(pPlugin)
    {
        if (pPlugin->CleanUI)
        {
            DebugSpew("%s->CleanUI()",pPlugin->szFilename);
            pPlugin->CleanUI();
        }
        pPlugin=pPlugin->pNext;
    }
}

VOID PluginsReloadUI()
{
    PluginDebug("PluginsReloadUI()");
    if (!bPluginCS)
        return;
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
    while(pPlugin)
    {
        if (pPlugin->ReloadUI)
        {
            DebugSpew("%s->ReloadUI()",pPlugin->szFilename);
            pPlugin->ReloadUI();
        }
        pPlugin=pPlugin->pNext;
    }
}

VOID PluginsSetGameState(DWORD GameState)
{
    PluginDebug("PluginsSetGameState()");
    static bool AutoExec=false;
    static bool CharSelect=true;
    DrawHUDParams[0]=0;
    if (!bPluginCS)
        return;
    gGameState=GameState;
	if (GameState!=GAMESTATE_INGAME && GameState!=GAMESTATE_LOGGINGIN) {
		gbSpelldbLoaded = 0;
		ghInitializeMQ2SpellDb = 0;
	}
    if (GameState==GAMESTATE_INGAME)
    {
		if (!gbSpelldbLoaded && ghInitializeMQ2SpellDb==0) {
			DWORD nThreadId = 0;
			ghInitializeMQ2SpellDb = CreateThread(NULL, 0, InitializeMQ2SpellDb, (void*)1, 0, &nThreadId);
		}
        gZoning=false;
        gbDoAutoRun=TRUE;
        if (!AutoExec)
        {
            AutoExec=true;
            LoadCfgFile("AutoExec",false);
        }
		if (CharSelect)
		{
			CharSelect = false;
			CHAR szBuffer[MAX_STRING] = { 0 };

			DebugSpew("PluginsSetGameState( %s server)", EQADDR_SERVERNAME);
			if (PCHARINFO pCharInfo = GetCharInfo())
			{
				DebugSpew("PluginsSetGameState( %s name)", pCharInfo->Name);
				sprintf_s(szBuffer, "%s_%s", EQADDR_SERVERNAME, pCharInfo->Name);
				LoadCfgFile(szBuffer, false);
			}
			if (PCHARINFO2 pCharInfo2 = GetCharInfo2())
			{
				DebugSpew("PluginsSetGameState( %d class)", pCharInfo2->Class);
				sprintf_s(szBuffer, "%s", GetClassDesc(pCharInfo2->Class));
				LoadCfgFile(szBuffer, false);
				IC_ClassLvl(pCharInfo2->Class, pCharInfo2->Level, GetCurrentProcessId());
			}
		}
    }
    else if (GameState==GAMESTATE_CHARSELECT)
    {
        if (!AutoExec)
        {
            AutoExec=true;
            LoadCfgFile("AutoExec",false);
        }
        CharSelect=true;
        LoadCfgFile("CharSelect",false);
	}

    CAutoLock Lock(&gPluginCS);
    DebugSpew("PluginsSetGameState(%d)",GameState);
    PMQPLUGIN pPlugin=pPlugins;
    while(pPlugin)
    {
        if (pPlugin->SetGameState)
        {
            DebugSpew("%s->SetGameState(%d)",pPlugin->szFilename,GameState);
            pPlugin->SetGameState(GameState);
        }
        pPlugin=pPlugin->pNext;
    }
}

VOID PluginsDrawHUD()
{
    PluginDebug("PluginsDrawHUD()");
    if (!bPluginCS)
        return;
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
    while(pPlugin)
    {
        if (pPlugin->DrawHUD)
        {
            pPlugin->DrawHUD();
        }
        pPlugin=pPlugin->pNext;
    }
}

VOID PluginsAddSpawn(PSPAWNINFO pNewSpawn)
{
    DWORD BodyType=GetBodyType(pNewSpawn);
    PluginDebug("PluginsAddSpawn(%s,%d,%d)",pNewSpawn->Name,pNewSpawn->mActorClient.Race,BodyType);
    if (!bPluginCS)
        return;
    if (GetGameState()>GAMESTATE_CHARSELECT)
        SetNameSpriteState(pNewSpawn,1);
    if (GetBodyTypeDesc(BodyType)[0]=='*')
    {
        WriteChatf("Spawn '%s' has unknown bodytype %d",pNewSpawn->Name,BodyType);
    }
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
    while(pPlugin)
    {
        if (pPlugin->AddSpawn)
        {
            pPlugin->AddSpawn(pNewSpawn);
        }
        pPlugin=pPlugin->pNext;
    }
}

VOID PluginsRemoveSpawn(PSPAWNINFO pSpawn)
{
    PluginDebug("PluginsRemoveSpawn(%s)",pSpawn->Name);
    SpawnByName.erase(pSpawn->Name);
    if (!bPluginCS)
        return;
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
	if (pSpawn->Type != SPAWN_NPC)
	{
		ClearCachedBuffs(pSpawn->SpawnID);
	}
    while(pPlugin)
    {
        if (pPlugin->RemoveSpawn)
        {
            pPlugin->RemoveSpawn(pSpawn);
        }
        pPlugin=pPlugin->pNext;
    }
}

VOID PluginsAddGroundItem(PGROUNDITEM pNewGroundItem)
{
	if (!pNewGroundItem) {
		DebugSpew("PluginsAddGroundItem was NULL");
		return;
	}
    PluginDebug("PluginsAddGroundItem()");
    if (!bPluginCS)
        return;
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
    DebugSpew("PluginsAddGroundItem(%s) %.1f,%.1f,%.1f",pNewGroundItem->Name,pNewGroundItem->X,pNewGroundItem->Y,pNewGroundItem->Z);
    while(pPlugin)
    {
        if (pPlugin->AddGroundItem)
        {
            pPlugin->AddGroundItem(pNewGroundItem);
        }
        pPlugin=pPlugin->pNext;
    }
}

VOID PluginsRemoveGroundItem(PGROUNDITEM pGroundItem)
{
    PluginDebug("PluginsRemoveGroundItem()");
    if (!bPluginCS)
        return;
    CAutoLock Lock(&gPluginCS);
    PMQPLUGIN pPlugin=pPlugins;
    while(pPlugin)
    {
        if (pPlugin->RemoveGroundItem)
        {
            pPlugin->RemoveGroundItem(pGroundItem);
        }
        pPlugin=pPlugin->pNext;
    }
}

VOID PluginsBeginZone() 
{ 
    PluginDebug("PluginsBeginZone()"); 
    if (!bPluginCS) 
        return; 
    gbInZone=false;
	gZoning = TRUE;
    CAutoLock Lock(&gPluginCS); 
    PMQPLUGIN pPlugin=pPlugins; 
    while(pPlugin) 
    { 
        if (pPlugin->BeginZone) 
        { 
            DebugSpew("%s->BeginZone()",pPlugin->szFilename); 
            pPlugin->BeginZone(); 
        } 
        pPlugin=pPlugin->pNext; 
    } 
} 

VOID PluginsEndZone()
{
	PluginDebug("PluginsEndZone()");
	if (!bPluginCS)
		return;
	gbInZone = true;
	WereWeZoning = TRUE;
	LastEnteredZone = MQGetTickCount64();
	CAutoLock Lock(&gPluginCS);
	PMQPLUGIN pPlugin = pPlugins;
	while (pPlugin)
	{
		if (pPlugin->EndZone)
		{
			DebugSpew("%s->EndZone()", pPlugin->szFilename);
			pPlugin->EndZone();
		}
		pPlugin = pPlugin->pNext;
	}
	//HideDoCommand(((PSPAWNINFO)pLocalPlayer),"/loadcfg zoned",TRUE);
	LoadCfgFile("zoned", true);
	if (PZONEINFO pthezone = (PZONEINFO)pZoneInfo) {
		LoadCfgFile(pthezone->ShortName, false);
	}
} 

#endif
