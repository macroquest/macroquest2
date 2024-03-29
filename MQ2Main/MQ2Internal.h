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
#include <memory>
EQLIB_API VOID WriteChatfSafe(PCHAR szFormat, ...);
EQLIB_VAR HANDLE ghMemberMapLock;
namespace MQ2Internal {

	enum eAdventureTheme
	{
		eAT_None,
		eAT_DeepGuk,
		eAT_Miraguls,
		eAT_Mistmoore,
		eAT_Rujarkian,
		eAT_Takish,
	};
    enum ePVPServer
    {
        PVP_NONE = 0,
        PVP_TEAM = 1,
        PVP_RALLOS = 2,
        PVP_SULLON = 3,
    };

    enum eSpawnType
    {
        NONE=0,
        PC,
        MOUNT,
        PET,
        PCPET,
        NPCPET,
		XTARHATER,
        NPC,
        CORPSE,
        TRIGGER,
        TRAP,
        TIMER,
        UNTARGETABLE,
        CHEST,
        ITEM,
        AURA,
        OBJECT,
        BANNER,
        CAMPFIRE,
        MERCENARY,
        FLYER,
        NPCCORPSE=2000,
        PCCORPSE,
    };

    typedef struct _SEARCHSPAWN {
        DWORD MinLevel;
        DWORD MaxLevel;
        eSpawnType SpawnType;
        DWORD SpawnID;
        DWORD FromSpawnID;
        FLOAT Radius;
        CHAR szName[MAX_STRING];
        CHAR szBodyType[MAX_STRING];
        CHAR szRace[MAX_STRING];
        CHAR szClass[MAX_STRING];
        CHAR szLight[MAX_STRING];
		#if !defined(ROF2EMU) && !defined(UFEMU)
		__int64 GuildID;
		#else
		DWORD GuildID;
		#endif
        BOOL bSpawnID;
        BOOL bNotNearAlert;
        BOOL bNearAlert;
        BOOL bNoAlert;
        BOOL bAlert;
        BOOL bLFG;
        BOOL bTrader;
        BOOL bLight;
        BOOL bTargNext;
        BOOL bTargPrev;
        BOOL bGroup;
		BOOL bFellowship;
        BOOL bXTarHater;
        BOOL bNoGroup;
        BOOL bRaid;
        BOOL bGM;
        BOOL bNamed;
        BOOL bMerchant;
		BOOL bBanker;
        BOOL bTributeMaster;
        BOOL bKnight;
        BOOL bTank;
        BOOL bHealer;
        BOOL bDps;
        BOOL bSlower;
        BOOL bAura;
        BOOL bBanner;
        BOOL bCampfire;
        DWORD NotID;
        DWORD NotNearAlertList;
        DWORD NearAlertList;
        DWORD NoAlertList;
        DWORD AlertList;
        DOUBLE ZRadius;
        DOUBLE FRadius;
        FLOAT xLoc;
		FLOAT yLoc;
		FLOAT zLoc;
        BOOL bKnownLocation;
        BOOL bNoPet;
        DWORD SortBy;
        BOOL bNoGuild;
        BOOL bLoS;
        BOOL bExactName;
        BOOL bTargetable;
        DWORD PlayerState;
        BOOL bSeeInvis;
        BOOL bSeeSOS;
        BOOL bSeeIVU;
    } SEARCHSPAWN, *PSEARCHSPAWN;

    enum SearchItemFlag
    {
        Lore=1,
        NoDrop=2,
        NoRent=3,
        Magic=4,
        Book=5,
        Pack=6,
        Combinable=7,
        Summoned=8,
        Weapon=9,
        Normal=10,
        Instrument=11,

        // item locations...
        Worn=100,
        Inventory=101,
        Bank=102,
        Merchant=103,
        Corpse=104,
        SharedBank=105,
        Trade=106,
        Bazaar=107,
        Inspect=108,
        Enviro=109,

    };

    typedef struct _SEARCHITEM {
        CHAR FlagMask[MAX_STRING];
        CHAR Flag[MAX_STRING];

        CHAR szName[MAX_STRING];
        CHAR szStat[MAX_STRING];
        CHAR szSlot[MAX_STRING];
        CHAR szRace[MAX_STRING];
        CHAR szClass[MAX_STRING];
		
        DWORD ID;

    } SEARCHITEM, *PSEARCHITEM;

    typedef struct _SWHOFILTER {
        BOOL Lastname;
        BOOL Class;
        BOOL Race;
        BOOL Body;
        BOOL Level;
        BOOL Distance;
        BOOL GM;
        BOOL Guild;
        BOOL LD;
        BOOL Sneak;
        BOOL Anon;
        BOOL LFG;
        BOOL NPCTag;
        BOOL SpawnID;
        BOOL Trader;
        BOOL AFK;
        BOOL Light;
        BOOL Holding;
        BOOL ConColor;
        BOOL Invisible;
    } SWHOFILTER, *PSWHOFILTER;

    typedef struct _SWHOSORT {
        CHAR szName[MAX_STRING];
        CHAR szLine[MAX_STRING];
        BYTE Level;
        DWORD SpawnID;
        FLOAT Distance;
        DWORD Class;
        DWORD Race;
        __int64 GuildID;
    } SWHOSORT, *PSWHOSORT;

    typedef struct _CONNECTION {
        unsigned int socket;
        BOOL Auth;
        struct _CONNECTION *pNext;
    } CONNECTION, *PCONNECTION;

    typedef struct _CHATBUF {
        CHAR szText[MAX_STRING];
        struct _CHATBUF *pNext;
    } CHATBUF, *PCHATBUF;

	typedef struct _MOUSEINFO {
		DWORD X;
		DWORD Y;
		DWORD SpeedX;
		DWORD SpeedY;
		DWORD Scroll;
	} MOUSEINFO, *PMOUSEINFO;

    typedef struct _SPELLINFO {
        CHAR Name[32];
        CHAR Target[32];
    } SPELLINFO, *PSPELLINFO;

    typedef struct _PACKLOC {
        DWORD X;
        DWORD Y;
    } PACKLOC, *PPACKLOC;

	typedef struct _MACROLINE {
		std::string Command;
		std::string SourceFile;
		int LoopStart;
		int LoopEnd;//used for loops/while if its 0 no action is taken, otherwise it will jump to the line indicated. -eqmule
		int LineNumber;
#ifdef MQ2_PROFILING
		DWORD ExecutionCount;
		LONGLONG ExecutionTime;
#endif
	} MACROLINE,*PMACROLINE;
	struct MACROBLOCK {
		std::string Name;//our macro Name
		BOOL Paused;
		int CurrIndex;//the current macro line we are on
		int BindStackIndex;//where we were at before calling the bind.
		std::string BindCmd;//the actual command including parameters
		std::map<int, MACROLINE>Line;
		bool Removed;
	};
	using PMACROBLOCK = std::shared_ptr<MACROBLOCK>;

    typedef struct _MQTIMER {
        CHAR szName[MAX_VARNAME];
        ULONG Original;
        ULONG Current;
        struct _MQTIMER *pNext;
        struct _MQTIMER *pPrev;
    } MQTIMER, *PMQTIMER;

    typedef struct _KEYPRESS {
        WORD KeyId;
        BOOL Pressed;
        struct _KEYPRESS *pNext;
    } KEYPRESS, *PKEYPRESS;

    typedef struct _DIKEYID {
        CHAR szName[32];
        WORD Id;
    } DIKEYID, *PDIKEYID;

    typedef struct _ITEMDB {
        struct _ITEMDB *pNext;
        DWORD ID;
		DWORD StackSize;
        CHAR szName[256];
    } ITEMDB, *PITEMDB;

    typedef struct _DEFINE {
        struct _DEFINE *pNext;
        CHAR szName[MAX_STRING];
        CHAR szReplace[MAX_STRING];
    } DEFINE, *PDEFINE;

    typedef struct _EVENTLIST {
        struct _EVENTLIST *pNext;
        CHAR szName[MAX_STRING];
        CHAR szMatch[MAX_STRING];
        int pEventFunc;
#ifdef USEBLECHEVENTS
        DWORD BlechID;
#endif
    } EVENTLIST, *PEVENTLIST;

    typedef struct _BINDLIST {
        struct _BINDLIST *pNext;
        CHAR szName[MAX_STRING];
        CHAR szFuncName[MAX_STRING];
		bool Parse = true;
    } BINDLIST, *PBINDLIST;

    typedef struct _SUB {
        struct _SUB *pNext;
        struct _SUB *pLast;
        CHAR szOrig[MAX_STRING];
        CHAR szSub[MAX_STRING];
    } SUB, *PSUB;
    typedef struct _MQCOMMAND {
        CHAR Command[64];
		fEQCommand Function;
        BOOL EQ;
		BOOL Parse;
        BOOL InGameOnly;
        struct _MQCOMMAND* pLast;
        struct _MQCOMMAND* pNext;
    } MQCOMMAND, *PMQCOMMAND;


    typedef struct _FILTER {
        struct _FILTER *pNext;
        CHAR FilterText[MAX_STRING];
        DWORD Length;
        PBOOL pEnabled;
    } FILTER, *PFILTER;

    typedef struct _PARMLIST {
        CHAR szName[MAX_STRING];
        DWORD (__cdecl *fAddress)(PCHAR, PCHAR, PSPAWNINFO);
    } PARMLIST, *PPARMLIST;

    typedef struct _MQBENCH
    {
        CHAR szName[64];
        ULONGLONG Entry;
        ULONGLONG LastTime;
        ULONGLONG TotalTime;
        ULONGLONG Count;
    } MQBENCH, *PMQBENCH;

    typedef struct _MQGroundPending
    {
        PGROUNDITEM pGroundItem;
        struct _MQGroundPending *pLast;
        struct _MQGroundPending *pNext;
    } MQGROUNDPENDING, *PMQGROUNDPENDING;

    typedef struct _MQPlugin
    {
        char szFilename[MAX_PATH];
        HMODULE hModule;
        float fpVersion;
		BOOL bCustom;
		struct _MQPlugin()
		{
			bCustom = 0;
		}
        fMQInitializePlugin Initialize;
        fMQShutdownPlugin Shutdown;
        fMQZoned Zoned;
        fMQWriteChatColor WriteChatColor;
        fMQPulse Pulse;
        fMQIncomingChat IncomingChat;
        fMQCleanUI CleanUI;
        fMQReloadUI ReloadUI;
        fMQDrawHUD DrawHUD;
        fMQSetGameState SetGameState;
        fMQSpawn AddSpawn;
        fMQSpawn RemoveSpawn;
        fMQGroundItem AddGroundItem;
        fMQGroundItem RemoveGroundItem;
        fMQBeginZone BeginZone; 
        fMQEndZone EndZone; 
        struct _MQPlugin* pLast;
        struct _MQPlugin* pNext;
    } MQPLUGIN, *PMQPLUGIN;

    typedef struct _actordefentry {
        unsigned int Def;
		int ZoneID;
        char Name[256]; 
    } ACTORDEFENTRY, *PACTORDEFENTRY;

    class CAutoLock {
    public:
        inline void Lock() {if (!bLocked) {if(TryEnterCriticalSection(pLock)) {bLocked = TRUE;}}}
		
        inline void Unlock() {if (bLocked) {LeaveCriticalSection(pLock);bLocked = FALSE;}}
		
        CAutoLock(LPCRITICAL_SECTION _pLock) {bLocked = FALSE;pLock = _pLock;Lock();}
        ~CAutoLock() { Unlock(); }

    private:
        LPCRITICAL_SECTION pLock;
        BOOL bLocked;
    };
	//2015-01-14 Lock class for mutexes... -eqmule
	class lockit {
	private:
		bool _locked;
		HANDLE _hMutex;
	public:
		BOOL ok;
		lockit(HANDLE hMutex, char*Name=0)
		{
			_hMutex = hMutex;
			ok = 0;
			_locked = 0;
			DWORD ret = WaitForSingleObject(_hMutex,5000);
			if(ret==WAIT_OBJECT_0)
			{
				_locked = 1;
				ok = 1;
			} else {
				if (Name) {
					WriteChatfSafe("lockit timed out in %s",Name);
				}
				ok = ret;
			}
		}
		~lockit()
		{
			//this is COMPLETELY safe to do even if we nest calls, according to doc for ReleaseMutex at MSDN:
			//http://msdn.microsoft.com/en-us/library/windows/desktop/ms685066(v=vs.85).aspx
			//A thread can specify a mutex that it already owns in a call to one of the wait functions without blocking its execution.
			//This prevents a thread from deadlocking itself while waiting for a mutex that it already owns.
			//However, to release its ownership, the thread must call ReleaseMutex one time for each time
			//that it obtained ownership (either through CreateMutex or a wait function). -eqmule
			ReleaseMutex(_hMutex);
			_locked = 0;
		}

	};
	class CMQ2Alerts
	{
	private:
		HANDLE _hLockMapWrite;
		std::map<DWORD,std::list<SEARCHSPAWN>>_AlertMap;
	public:
		CMQ2Alerts()
		{
			_hLockMapWrite = CreateMutex(NULL,FALSE,NULL);
		}
		~CMQ2Alerts()
		{
			if(_hLockMapWrite) {
				ReleaseMutex(_hLockMapWrite);
				CloseHandle(_hLockMapWrite);
				_hLockMapWrite = 0;
				_AlertMap.clear();
			}
		}
		BOOL AddNewAlertList(DWORD Id, PSEARCHSPAWN pSearchSpawn);
		BOOL CheckAlertForRecursion(PSEARCHSPAWN pSearchSpawn,DWORD List);
		BOOL RemoveAlertFromList(DWORD Id, PSEARCHSPAWN pSearchSpawn);
		BOOL GetAlert(DWORD Id,std::list<SEARCHSPAWN>&ss)
		{
			lockit lk(_hLockMapWrite);
			if(_AlertMap.find(Id)!=_AlertMap.end()) {
				ss = _AlertMap[Id];
				return TRUE;
			}
			return FALSE;
		}
		BOOL AlertExist(DWORD List)
		{
			lockit lk(_hLockMapWrite);
			if(_AlertMap.find(List)!=_AlertMap.end()) {
				return TRUE;
			}
			return FALSE;
		}
		BOOL ListAlerts(PCHAR szOut,size_t max)
		{
			lockit lk(_hLockMapWrite);
			if(_AlertMap.size()==0)
				return FALSE;
			CHAR szTemp[32] = {0};

			for(std::map<DWORD,std::list<SEARCHSPAWN>>::iterator i = _AlertMap.begin();i!=_AlertMap.end();i++) {
				_itoa_s((*i).first,szTemp,10);
				strcat_s(szOut,max,szTemp);
				strcat_s(szOut,max,"|");
			}
			size_t len = strlen(szOut);
			if(len && szOut[len-1] == '|')
				szOut[len-1] = '\0';
			return TRUE;
		}
		VOID FreeAlerts(DWORD List);
	};
	#pragma pack(push)
	#pragma pack(4)
    class CCustomWnd : public CSidlScreenWnd
    {
    public:
        CCustomWnd(CXStr &screenpiece):CSidlScreenWnd(0,screenpiece,0xFFFFFFFF/*ini store all*/)
        {
			this;
            CreateChildrenFromSidl();
            pXWnd()->Show(true,true,true);
            ReplacevfTable();
			SetEscapable(false);
//            CloseOnESC=0;
        }

        CCustomWnd(char *screenpiece):CSidlScreenWnd(0,CXStr(screenpiece),0xFFFFFFFF/*ini store all*/)
        {
			this;
            CreateChildrenFromSidl();
            pXWnd()->Show(true,true);
            ReplacevfTable();
			SetEscapable(false);
            //CloseOnESC=0;
        }

        ~CCustomWnd()
        {
            RemovevfTable();
        }

        //    int WndNotification(CXWnd *pWnd, unsigned int Message, void *unknown)
        //    {    
        //        return CSidlScreenWnd::WndNotification(pWnd,Message,unknown);
        //    }

        void ReplacevfTable()
        {
            OldvfTable=((_CSIDLWND*)this)->pvfTable;
            PCSIDLWNDVFTABLE NewvfTable=new CSIDLWNDVFTABLE;
            memcpy(NewvfTable,OldvfTable,sizeof(CSIDLWNDVFTABLE));
            ((_CSIDLWND*)this)->pvfTable=NewvfTable;
        }

        void RemovevfTable()
        {
            PCSIDLWNDVFTABLE NewvfTable=((_CSIDLWND*)this)->pvfTable;
            ((_CSIDLWND*)this)->pvfTable=OldvfTable;
            delete NewvfTable;
        }

        void SetvfTable(DWORD index, DWORD value)
        {
            DWORD* vtable=(DWORD*)((_CSIDLWND*)this)->pvfTable;
            vtable[index]=value;
        }

        PCSIDLWNDVFTABLE OldvfTable;

        //    inline CXWnd *GetChildItem(const char *Name) {return CSidlScreenWnd::GetChildItem(Name);};
    };
	#pragma pack(pop)
	
	class CCustomMenu : public CContextMenu
	{
	public://class CXWnd *,unsigned __int32,class CXRect const &
		CCustomMenu(CXWnd *pParent, unsigned __int32 MenuID, const CXRect& rect):CContextMenu(pParent,MenuID,rect)
		{
			Sleep(0);
			//ReplacevfTable();
		};

		~CCustomMenu()
		{
			Sleep(0);
			//RemovevfTable();
		};
		void ReplacevfTable()
        {
            PCCONTEXTMENUVFTABLE NewvfTable=new CCONTEXTMENUVFTABLE;
            OldvfTable=((CContextMenu*)this)->pvfTable;
            memcpy(NewvfTable,OldvfTable,sizeof(CCONTEXTMENUVFTABLE));
            ((CContextMenu*)this)->pvfTable=NewvfTable;
        }

        void RemovevfTable()
        {
            PCCONTEXTMENUVFTABLE NewvfTable=((CContextMenu*)this)->pvfTable;
            ((CContextMenu*)this)->pvfTable=OldvfTable;
            delete NewvfTable;
        }

        void SetvfTable(DWORD index, DWORD value)
        {
            DWORD* vtable=(DWORD*)((CContextMenu*)this)->pvfTable;
            vtable[index]=value;
        }
		PCCONTEXTMENUVFTABLE OldvfTable;
	};
#if !defined(ISXEQ) && !defined(ISXEQ_LEGACY)
    /* CIndex class stolen from teqim - Lax */
    template <class Any>
    class CIndex
    {
    public:
        CIndex()
        {
			__try
			{
				InitializeCriticalSection(&CS);
			}
			__except(EXCEPTION_EXECUTE_HANDLER)
			{
				//DWORD Status = GetExceptionCode();
				MessageBox(NULL,"could not initialize the CIndex.", "an exception occured in CIndex",MB_OK);
				return;
			}

            Size=0;
            List=0;
        }

        CIndex(unsigned long InitialSize)
        {
            InitializeCriticalSection(&CS);
            Size=0;
            List=0;
            Resize(InitialSize);
        }

        ~CIndex()
        {// user is responsible for managing elements
            CAutoLock L(&CS);
            if (List)
                free(List);
            List=0;
            Size=0;
            DeleteCriticalSection(&CS);
        }

        void Cleanup()
        {
            for (unsigned long i = 0 ; i < Size ; i++)
            {
                if (List[i])
                {
                    delete List[i];
                    List[i]=0;
                }
            }
        }

        void Resize(unsigned long NewSize)
        {
            CAutoLock L(&CS);
            if (List)
            {
                if (NewSize>Size)
                {
                    // because we want to zero out the unused portions, we wont use realloc
                    if(Any *NewList=(Any*)malloc(NewSize*sizeof(Any))) {
						memset(NewList,0,NewSize*sizeof(Any));
						memcpy(NewList,List,Size*sizeof(Any));
						free(List);
						List=NewList;
						Size=NewSize;
					}
                }
            }
            else
            {
				if(List=(Any*)malloc(NewSize*sizeof(Any))) {
					memset(List,0,NewSize*sizeof(Any));
					Size=NewSize;
				}
            }
        }

        // gets the next unused index, resizing if necessary
        inline unsigned long GetUnused()
        {
            unsigned long i;
            CAutoLock L(&CS);
            for (i = 0 ; i < Size ; i++)
            {
                if (!List[i])
                    return i;
            }
            Resize(Size+10);
            return i;
        }

        unsigned long Count()
        {
            CAutoLock L(&CS);
            unsigned long ret=0;
            for (unsigned long i = 0 ; i < Size ; i++)
            {
                if (List[i])
                    ret++;
            }
            return ret;
        }

        unsigned long Size;
        Any *List;

        inline Any& operator+=(Any& Value){return List[GetUnused()]=Value;}
        inline Any& operator[](unsigned long Index){return List[Index];}
        CRITICAL_SECTION CS;
    };
#endif

    typedef struct _MQ2VarPtr
    {
        union {
            struct {
				PVOID Ptr;
				LONG HighPart;
			};
			struct {
				FLOAT Float;
				LONG HighPart;
			};
			struct {
				DWORD DWord;
				LONG HighPart;
			};
			struct {
				ARGBCOLOR Argb;
				LONG HighPart;
			};
			struct {
				int   Int;
				LONG HighPart;
			};
            struct {
				UCHAR Array[4];
				LONG HighPart;
			};
			struct {
				UCHAR FullArray[8];
			};
			DOUBLE Double;
			__int64   Int64;
			unsigned __int64   UInt64;
        };
	} MQ2VARPTR, *PMQ2VARPTR;

#ifndef ISXEQ

    typedef struct _MQ2TypeVar
    {
        class MQ2Type *Type;
        union {
			MQ2VARPTR VarPtr;
            struct {
				PVOID Ptr;
				LONG HighPart;
			};
			struct {
				FLOAT Float;
				LONG HighPart;
			};
			struct {
				DWORD DWord;
				LONG HighPart;
			};
			struct {
				ARGBCOLOR Argb;
				LONG HighPart;
			};
			struct {
				int   Int;
				LONG HighPart;
			};
            struct {
				UCHAR Array[4];
				LONG HighPart;
			};
			struct {
				UCHAR FullArray[8];
			};
			DOUBLE Double;
			__int64   Int64;
			unsigned __int64   UInt64;
        };
    } MQ2TYPEVAR, *PMQ2TYPEVAR;

    typedef struct _MQ2TypeMember
    {
        DWORD ID;
        PCHAR Name;
		DWORD Type;
    } MQ2TYPEMEMBER, *PMQ2TYPEMEMBER;

    typedef BOOL  (__cdecl *fMQData)(PCHAR szIndex, MQ2TYPEVAR &Ret);

    typedef struct _MQ2DataItem
    {
        CHAR Name[64];
        fMQData Function;
    } MQ2DATAITEM, *PMQ2DATAITEM;

    LEGACY_API BOOL AddMQ2Type(class MQ2Type &Type);
    LEGACY_API BOOL RemoveMQ2Type(class MQ2Type &Type);

    typedef struct _DATAVAR {
        CHAR szName[MAX_STRING];
        MQ2TYPEVAR Var;
        struct _DATAVAR *pNext;
        struct _DATAVAR *pPrev;
        struct _DATAVAR **ppHead;
    } DATAVAR, *PDATAVAR;

    class MQ2Type
    {
    public:
		size_t GetMemberMapSize()
		{
			lockit lk(ghMemberMapLock, __FUNCTION__);
			return MemberMap.size();
		}
		bool GetMemberMapName(int index, PCHAR pBuffer, size_t Size)
		{
			lockit lk(ghMemberMapLock, __FUNCTION__);
			if (index < (int)MemberMap.size())
			{
				std::map<std::string, DWORD>::iterator it = MemberMap.begin();
				std::advance(it, index);
				if (it != MemberMap.end())
				{
					strcpy_s(pBuffer, Size, it->first.c_str());
					return true;
				}
			}
			return false;
		}
		DWORD GetMemberMapID(int index)
		{
			lockit lk(ghMemberMapLock, __FUNCTION__);
			if (index < (int)MemberMap.size())
			{
				std::map<std::string, DWORD>::iterator it = MemberMap.begin();
				std::advance(it, index);
				if (it != MemberMap.end())
				{
					return it->second;
				}
			}
			return NULL;
		}
        inline MQ2Type(PCHAR NewName)
        {
            strcpy_s(TypeName,NewName);
            Official=AddMQ2Type(*this);
            pInherits=0;
        }

        inline void InitializeMembers(PMQ2TYPEMEMBER MemberArray)
        {
            for (unsigned long i = 0 ; MemberArray[i].ID ; i++)
            {
                AddMember(MemberArray[i].ID,MemberArray[i].Name);
            }
        }

        virtual inline ~MQ2Type() 
        {
			if (Official) {
				RemoveMQ2Type(*this);
			}
            Members.Cleanup();
            Methods.Cleanup();
        }

        virtual bool FromData(MQ2VARPTR &VarPtr, MQ2TYPEVAR &Source)=0;
        virtual bool FromString(MQ2VARPTR &VarPtr, PCHAR Source)=0;
        virtual void InitVariable(MQ2VARPTR &VarPtr) {
			VarPtr.Ptr=0;
			VarPtr.HighPart = 0;
		}
        virtual void FreeVariable(MQ2VARPTR &VarPtr) {}

		virtual bool GetMember(MQ2VARPTR VarPtr, PCHAR Member, PCHAR Index, MQ2TYPEVAR &Dest) = 0;
        //    virtual bool SetMember(PVOID Ptr, PCHAR Member, DWORD Index, MQ2TYPEVAR &Data)=0;
        virtual bool ToString(MQ2VARPTR VarPtr, PCHAR Destination)
        {
            strcpy_s(Destination,MAX_STRING,TypeName);
            return true;
        }

        inline PCHAR GetName() {
			if(TypeName)
				return &TypeName[0];
			return NULL;
		}

        PCHAR GetMemberName(DWORD ID)
        {
            for (unsigned long N=0 ; N < Members.Size ; N++)
            {
                if (PMQ2TYPEMEMBER pMember = Members[N])
                {
                    if (pMember->ID==ID)
                        return &pMember->Name[0];
                }
            }
            return 0;
        }

        BOOL GetMemberID(PCHAR Name, DWORD &Result)
        {
			lockit lk(ghMemberMapLock, "GetMemberID");
			if (MemberMap.find(Name) == MemberMap.end())
				return false;
			unsigned long N = MemberMap[Name];
			if (N == 0)
				return false;
			N--;
			PMQ2TYPEMEMBER pMember = Members[N];
			Result = pMember->ID;
			return true;
        }
        PMQ2TYPEMEMBER FindMember(PCHAR Name)
        {
			lockit lk(ghMemberMapLock, __FUNCTION__);
			if (MemberMap.find(Name) == MemberMap.end())
				return 0;
			unsigned long N=MemberMap[Name];
			if (!N)
				return 0;
			N--;
			return Members[N];
        }
		PMQ2TYPEMEMBER FindMethod(PCHAR Name)
        {
			lockit lk(ghMemberMapLock, __FUNCTION__);
			if (MethodMap.find(Name) == MethodMap.end())
				return 0;
			unsigned long N = MethodMap[Name];
			if (!N)
				return 0;
			N--;
			return Methods[N];
        }
        BOOL InheritedMember(PCHAR Name)
        {
            if (!pInherits || !pInherits->FindMember(Name))
                return FALSE;
            return TRUE;
        }
        void SetInheritance(MQ2Type *pNewInherit)
        {
            pInherits=pNewInherit;
        }

    protected:

        BOOL AddMember(DWORD ID, PCHAR Name)
        {
			lockit lk(ghMemberMapLock, __FUNCTION__);
			if (MemberMap.find(Name) != MemberMap.end())
				return false;
            unsigned long N=MemberMap[Name];
            if (N>0)
                return false;
            N=Members.GetUnused();
            MemberMap[Name]=N+1;
            PMQ2TYPEMEMBER pMember = new MQ2TYPEMEMBER;
            pMember->Name=Name;
            pMember->ID=ID;
			pMember->Type = 0;
            Members[N]=pMember;
            return true;
        }
		inline BOOL AddMethod(DWORD ID, PCHAR Name)
        {
			lockit lk(ghMemberMapLock, __FUNCTION__);
			if (MethodMap.find(Name) != MethodMap.end())
				 return false;
            unsigned long N=MethodMap[Name];
            if (N>0)
                return false;
            N=Methods.GetUnused();
            MethodMap[Name]=N+1;
            PMQ2TYPEMEMBER pMethod = new MQ2TYPEMEMBER;
            pMethod->Name=Name;
            pMethod->ID=ID;
			pMethod->Type = 1;
            Methods[N]=pMethod;
            return true;
        }
        BOOL RemoveMember(PCHAR Name)
        {
			lockit lk(ghMemberMapLock, __FUNCTION__);
			if (MemberMap.find(Name) == MemberMap.end())
				 return false;
            unsigned long N=MemberMap[Name];
            if (N==0)
                return false;
            N--;
            PMQ2TYPEMEMBER pMember = Members[N];
            delete pMember;
            Members[N]=0;
        }
		BOOL RemoveMethod(PCHAR Name)
        {
			lockit lk(ghMemberMapLock, __FUNCTION__);
			if (MethodMap.find(Name) == MethodMap.end())
				 return false;
            unsigned long N=MethodMap[Name];
            if (N==0)
                return false;
            N--;
            PMQ2TYPEMEMBER pMethod = Methods[N];
            delete pMethod;
            Methods[N]=0;
        }
		CHAR TypeName[32] = { 0 };
        BOOL Official = 0;
        CIndex<PMQ2TYPEMEMBER> Members;
        CIndex<PMQ2TYPEMEMBER> Methods;
        std::map<std::string,DWORD> MemberMap;
        std::map<std::string,DWORD> MethodMap;
        MQ2Type *pInherits;
    };

    class CDataArray
    {
    public:
        CDataArray()
        {
            pType=0;
            nExtents=0;
            pExtents=0;
            pData=0;
            TotalElements=0;
        }

        CDataArray(MQ2Type *Type, PCHAR Index, PCHAR Default, BOOL ByData=FALSE)
        {
            nExtents=1;
			TotalElements=1;

            // count number of , 's
            if (PCHAR pComma=strchr(Index,','))
            {
                nExtents++;
                while(pComma=strchr(&pComma[1],','))
                {
                    nExtents++;
                }
            }

            // allocate extents
            if(pExtents=(DWORD*)malloc(sizeof(DWORD)*nExtents)) {
				// read extents
				PCHAR pStart=Index;
				for (DWORD N = 0 ; N < nExtents ; N++)
				{
					PCHAR pComma=strchr(pStart,',');
					if (pComma)
						*pComma=0;

					pExtents[N]=atoi(pStart);
					TotalElements*=pExtents[N];
					if (pComma)
					{
						*pComma=',';
						pStart=&pComma[1];
					}
				}
			}

            if(pData = (MQ2VARPTR*) malloc(sizeof(MQ2VARPTR)*TotalElements)) {
				if (pType=Type) {
					for (DWORD N = 0 ; N < TotalElements ; N++)
					{
						pType->InitVariable(pData[N]);
						if (ByData)
							pType->FromData(pData[N],*(MQ2TYPEVAR *)Default);
						else
							pType->FromString(pData[N],Default);
					}
				}
			}
        }

        void Delete()
        {
            if (pExtents)
                free(pExtents);
            if (pType && pData)
                for (DWORD N = 0 ; N < TotalElements ; N++)
                {
                    pType->FreeVariable(pData[N]);
                }
                free(pData);
                pType=0;
                nExtents=0;
                pExtents=0;
                pData=0;
                TotalElements=0;
        }

        int GetElement(PCHAR Index)
        {
            DWORD Element=0;
            if (nExtents==1)
            {
                if (strchr(Index,','))
                    return -1;
                Element=atoi(Index)-1;
                if (Element>=TotalElements)
                    return -1;
                return Element;
            }
            else
            {
                DWORD nGetExtents = 1;

                if (PCHAR pComma=strchr(Index,','))
                {
                    nGetExtents++;
                    while(pComma=strchr(&pComma[1],','))
                    {
                        nGetExtents++;
                    }
                }
                if (nGetExtents!=nExtents)
                    return -1;

                // read extents
                PCHAR pStart=Index;
                for (DWORD N = 0 ; N < nExtents ; N++)
                {
                    PCHAR pComma=strchr(pStart,',');
                    if (pComma)
                        *pComma=0;

                    DWORD Temp=atoi(pStart)-1;
                    if (Temp>=pExtents[N])
                        return -1;
                    for (unsigned long i = N+1 ; i < nExtents; i++)
                        Temp*=pExtents[i];
                    Element+=Temp;

                    if (pComma)
                    {
                        *pComma=',';
                        pStart=&pComma[1];
                    }
                }
                if (Element>=TotalElements)
                {
                    // bug in array logic
                    OutputDebugString("Bug in array logic\n");
                    return -1;
                }
                return Element;
            }
        }

        BOOL GetElement(PCHAR Index, MQ2TYPEVAR &Dest)
        {
            DWORD Element=0;
            if (nExtents==1)
            {
                if (strchr(Index,','))
                    return FALSE;
                Element=atoi(Index)-1;
                if (Element>=TotalElements)
                    return FALSE;
                Dest.Type=pType;
                Dest.VarPtr=pData[Element];
                return TRUE;
            }
            else
            {
                DWORD nGetExtents = 1;

                if (PCHAR pComma=strchr(Index,','))
                {
                    nGetExtents++;
                    while(pComma=strchr(&pComma[1],','))
                    {
                        nGetExtents++;
                    }
                }
                if (nGetExtents!=nExtents)
                    return FALSE;

                // read extents
                PCHAR pStart=Index;
                unsigned long N;
                for (N = 0 ; N < nExtents ; N++)
                {
                    PCHAR pComma=strchr(pStart,',');
                    if (pComma)
                        *pComma=0;

                    DWORD Temp=atoi(pStart)-1;
                    if (Temp>=pExtents[N])
                        return FALSE;
                    for (unsigned long i = N+1 ; i < nExtents; i++)
                        Temp*=pExtents[i];
                    Element+=Temp;

                    if (pComma)
                    {
                        *pComma=',';
                        pStart=&pComma[1];
                    }
                }
                if (Element>=TotalElements)
                {
                    // bug in array logic
                    OutputDebugString("Bug in array logic\n");
                    return FALSE;
                }
                Dest.Type=pType;
                Dest.VarPtr=pData[Element];
                return TRUE;
            }

        }

        ~CDataArray()
        {
            if (pExtents)
                free(pExtents);
            if (pType && pData)
                for (unsigned long N = 0 ; N < TotalElements ; N++)
                {
                    pType->FreeVariable(pData[N]);
                }
                free(pData);
        }

        MQ2Type *pType;
        DWORD nExtents;
        DWORD *pExtents;
        MQ2VARPTR *pData;
        DWORD TotalElements;
    };
#endif

    typedef struct _MQRANK
    {
        MQ2VARPTR VarPtr;
        MQ2VARPTR Value;
    } MQRANK, *PMQRANK;

    static bool pMQRankFloatCompare(const PMQRANK A, const PMQRANK B)
    {
        return A->Value.Float < B->Value.Float;
    }
	static bool MQRankFloatCompare(const MQRANK &A, const MQRANK &B)
	{
		return A.Value.Float < B.Value.Float;
	}

    static int MQRankFloatCompareReverse(const void *A, const void *B)
    {
        if (((PMQRANK)A)->Value.Float==((PMQRANK)B)->Value.Float)
            return 0;
        if (((PMQRANK)A)->Value.Float>((PMQRANK)B)->Value.Float)
            return -1;
        return 1;
    }
    static int MQRankCompare(const void *A, const void *B)
    {
        if (((PMQRANK)A)->Value.DWord==((PMQRANK)B)->Value.DWord)
            return 0;
        if (((PMQRANK)A)->Value.DWord<((PMQRANK)B)->Value.DWord)
            return -1;
        return 1;
    }

    static int MQRankCompareReverse(const void *A, const void *B)
    {
        if (((PMQRANK)A)->Value.DWord==((PMQRANK)B)->Value.DWord)
            return 0;
        if (((PMQRANK)A)->Value.DWord>((PMQRANK)B)->Value.DWord)
            return -1;
        return 1;
    }
	static bool nonalpha ( int value ) {
		int ret = isalnum(value);
		if(ret==0)
			return true;
	   return false;
	}
	static bool noblank ( char value ) {
		if(value == ' ' || value == '\t')
			return true;
	   return false;
	}
	static errno_t _httoi_s(const CHAR *thevalue,size_t _Size)
	{
		struct CHexMap {
			CHAR chr;
			int avalue;
		};
		const int HexMapL = 16;
		CHexMap HexMap[HexMapL] =
		{
			{'0', 0}, {'1', 1},
			{'2', 2}, {'3', 3},
			{'4', 4}, {'5', 5},
			{'6', 6}, {'7', 7},
			{'8', 8}, {'9', 9},
			{'A', 10}, {'B', 11},
			{'C', 12}, {'D', 13},
			{'E', 14}, {'F', 15}
		};
		CHAR *mstr = _strdup(thevalue);
		mstr[_Size] = '\0';
		_strupr_s(mstr,_Size+1);
		CHAR *s = mstr;
		int result = 0;
		std::string s1 = mstr;
	
		s1.erase(remove_if(s1.begin(),s1.end(), nonalpha), s1.end());
	
		s = (char *)s1.c_str();
		if (*s == '0' && *(s + 1) == 'X')
			s += 2;
		bool firsttime = true;
		while (*s != '\0') {
			bool found = false;
			for (int i = 0; i < HexMapL; i++) {
				if (*s == HexMap[i].chr) {
					if (!firsttime) {
						result <<= 4;
					}
					result |= HexMap[i].avalue;
					found = true;
					break;
				}
			}
			if (!found) {
				break;
			}
			s++;
			firsttime = false;
		}
		free(mstr);
		return result;
	}
struct Loop
{
	enum Type {None,For,While};
	Type type{None};
	int	first_line{0};
	int last_line{0};
	std::string for_variable;
};

#ifndef ISXEQ
    typedef struct MACROSTACK {
		bool bIsBind;
         int LocationIndex;
        struct MACROSTACK *pNext;
        CHAR Return[MAX_STRING];
        PDATAVAR Parameters;
        PDATAVAR LocalVariables;
		std::vector<Loop> loop_stack;
	} *PMACROSTACK;

    typedef struct _EVENTQUEUE {
        struct _EVENTQUEUE *pPrev;
        struct _EVENTQUEUE *pNext;
        DWORD Type;
		std::string Name;
        PEVENTLIST pEventList;
        PDATAVAR Parameters;
    } EVENTQUEUE, *PEVENTQUEUE;
#endif
	typedef struct _MercDesc
	{
		std::string Race;
		std::string Type;
		std::string Confidence;
		std::string Proficiency;
	} MercDesc,*PMercDesc;
};
using namespace MQ2Internal;

