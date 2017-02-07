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

#pragma pack(push)
#pragma pack(8)

#include "ArrayClass.h"

namespace EQData
{

// ***************************************************************************
// Defines
// ***************************************************************************

#define AllClassesMASK		0xFFFF
#define WarriorMASK			0x0001
#define ClericMASK			0x0002
#define RogueMASK			0x0100
#define WizardMASK			0x0400

enum PlayerClass
{
    Unknown=                            0,
    Warrior=                            1,
    Cleric=                             2,
    Paladin=                            3,
    Ranger=                             4,
    Shadowknight=                       5,
    Druid=                              6,
    Monk=                               7,
    Bard=                               8,
    Rogue=                              9,
    Shaman=                            10,
    Necromancer=                       11,
    Wizard=                            12,
    Mage=                              13,
    Enchanter=                         14,
    Beastlord=                         15,
    Berserker=                         16,
	Mercenary=                         17,
    TotalClasses=                      17,
};
// class 20 through 35 are the NPC GMs (same class order as above)
// class 41   Merchant
// class 60   LDoN Recruiter
// class 61   LDoN Merchant
// class 63   Tribute Master
// class 67   DoN Merchant (Norrath's Keepers)
// class 68   DoN Merchant (Dark Reign)

typedef struct _ClassInfo
{
    bool CanCast;
    bool PureCaster;
    bool PetClass;
    bool DruidType;
    bool NecroType;
    bool ClericType;
    bool ShamanType;
	bool MercType;
    char RaidColorOrder;
    PCHAR Name;
    PCHAR ShortName;
	PCHAR UCShortName;
} CLASSINFO, *PCLASSINFO;

static _ClassInfo ClassInfo[]=
{
    {0,0,0,0,0,0,0,0,0,"","",""},                         //unk
    {0,0,0,0,0,0,0,0,13,"Warrior","war","WAR"},           //war
    {1,1,0,0,0,1,0,0,2,"Cleric","clr","CLR"},             //clr
    {1,0,0,0,0,1,0,0,8,"Paladin","pal","PAL"},            //pal
    {1,0,0,1,0,0,0,0,9,"Ranger","rng","RNG"},             //rng
    {1,0,0,0,1,0,0,0,11,"Shadowknight","shd","SHD"},      //shd
    {1,1,0,1,0,0,0,0,3,"Druid","dru","DRU"},              //dru
    {0,0,0,0,0,0,0,0,6,"Monk","mnk","MNK"},               //mnk
    {1,0,0,0,0,0,0,0,0,"Bard","brd","BRD"},               //brd
    {0,0,0,0,0,0,0,0,10,"Rogue","rog","ROG"},             //rog
    {1,1,1,0,0,0,1,0,12,"Shaman","shm","SHM"},            //shm
    {1,1,1,0,1,0,0,0,7,"Necromancer","nec","NEC"},        //nec
    {1,1,0,0,0,0,0,0,14,"Wizard","wiz","WIZ"},            //wiz
    {1,1,1,0,0,0,0,0,5,"Mage","mag","MAG"},               //mag
    {1,1,0,0,0,0,0,0,4,"Enchanter","enc","ENC"},          //enc
    {1,0,1,0,0,0,1,0,1,"Beastlord","bst","BST"},          //bst
    {0,0,0,0,0,0,0,0,15,"Berserker","ber","BER"},         //ber
	{1,1,0,0,0,0,0,1,16,"Mercenary","mer","MER"},         //mer
};

#define BI_TARGETABLE                   1
#define BI_TRIGGER                      2 
#define BI_TRAP                         4
#define BI_TIMER                        8

typedef struct _BodyInfo
{
    PCHAR Name;
    DWORD Flags;
} BODYINFO, *PBODYINFO;

#define SPAWN_PLAYER                    0
#define SPAWN_NPC                       1
#define SPAWN_CORPSE                    2
//#define SPAWN_ANY                       3
//#define SPAWN_PET                       4

#define SKILL_PICKLOCK					35

#define ITEM_NORMAL1                    0x0031
#define ITEM_NORMAL2                    0x0036
#define ITEM_NORMAL3                    0x315f
#define ITEM_NORMAL4                    0x3336
#define ITEM_NORMAL5                    0x0032
#define ITEM_NORMAL6                    0x0033
#define ITEM_NORMAL7                    0x0034
#define ITEM_NORMAL8                    0x0039
#define ITEM_CONTAINER                  0x7900
#define ITEM_CONTAINER_PLAIN            0x7953
#define ITEM_BOOK                       0x7379

#define ITEMITEMTYPE_FOOD               0x0e 
#define ITEMITEMTYPE_WATER              0x0f 
#define ITEMITEMTYPE_SCROLL				0x14
#define ITEMITEMTYPE_ALCOHOL            0x26 
#define ITEMITEMTYPE_POISON             0x2a 
#define ITEMITEMTYPE_AUGUMENT           0x36 

#define ITEMEFFECTTYPE_COMBAT           0x00 
#define ITEMEFFECTTYPE_INVENTORY1       0x01 // Bards need to stop sing to cast 
#define ITEMEFFECTTYPE_WORN             0x02 
#define ITEMEFFECTTYPE_INVENTORY2       0x03 
#define ITEMEFFECTTYPE_MUSTEQUIP        0x04 // Bards need to stop sing to cast 
#define ITEMEFFECTTYPE_INVENTORY3       0x05 

#define SKILLMINDAMAGEMOD_BASH          0x00 
#define SKILLMINDAMAGEMOD_BACKSTAB      0x01 
#define SKILLMINDAMAGEMOD_DRAGONPUNCH   0x02 
#define SKILLMINDAMAGEMOD_EAGLESTRIKE   0x03 
#define SKILLMINDAMAGEMOD_FLYINGKICK    0x04 
#define SKILLMINDAMAGEMOD_KICK          0x05 
#define SKILLMINDAMAGEMOD_ROUNDKICK     0x06 
#define SKILLMINDAMAGEMOD_TIGERCLAW     0x07 
#define SKILLMINDAMAGEMOD_FRENZY        0x08 

//Heroic Mods
#define HEROIC_MOD_SPELL_SHIELDING      0x4
#define HEROIC_MOD_COMBAT_EFFECTS       0x5
#define HEROIC_MOD_MELEE_SHIELDING      0x6
#define HEROIC_MOD_DAMAGE_SHIELDING     0x7
#define HEROIC_MOD_DOT_SHIELDING        0x8
#define HEROIC_MOD_DAMAGE_SHIELD_MITIG  0x9
#define HEROIC_MOD_AVOIDANCE            0xa
#define HEROIC_MOD_ACCURACY             0xb
#define HEROIC_MOD_STUN_RESIST          0xc
#define HEROIC_MOD_STRIKETHROUGH        0xd

#define COLOR_DEFAULT                   0x00
#define COLOR_DARKGREY                  0x01
#define COLOR_DARKGREEN                 0x02
#define COLOR_DARKBLUE                  0x03
#define COLOR_PURPLE                    0x05
#define COLOR_LIGHTGREY                 0x06

#define CONCOLOR_GREY                   0x06
#define CONCOLOR_GREEN                  0x02
#define CONCOLOR_LIGHTBLUE              0x12
#define CONCOLOR_BLUE                   0x04
#define CONCOLOR_BLACK                  0x14
#define CONCOLOR_WHITE                  0x0a
#define CONCOLOR_YELLOW                 0x0f
#define CONCOLOR_RED                    0x0d

#define USERCOLOR_SAY                   0xFF +   1 //  1  - Say
#define USERCOLOR_TELL                  0xFF +   2 //  2  - Tell
#define USERCOLOR_GROUP                 0xFF +   3 //  3  - Group
#define USERCOLOR_GUILD                 0xFF +   4 //  4  - Guild
#define USERCOLOR_OOC                   0xFF +   5 //  5  - OOC
#define USERCOLOR_AUCTION               0xFF +   6 //  6  - Auction
#define USERCOLOR_SHOUT                 0xFF +   7 //  7  - Shout
#define USERCOLOR_EMOTE                 0xFF +   8 //  8  - Emote
#define USERCOLOR_SPELLS                0xFF +   9 //  9  - Spells (meming, scribing, casting, etc.)
#define USERCOLOR_YOU_HIT_OTHER         0xFF +  10 //  10 - You hit other
#define USERCOLOR_OTHER_HIT_YOU         0xFF +  11 //  11 - Other hits you
#define USERCOLOR_YOU_MISS_OTHER        0xFF +  12 //  12 - You miss other
#define USERCOLOR_OTHER_MISS_YOU        0xFF +  13 //  13 - Other misses you
#define USERCOLOR_DUELS                 0xFF +  14 //  14 - Some broadcasts (duels)
#define USERCOLOR_SKILLS                0xFF +  15 //  15 - Skills (ups, non-combat use, etc.)
#define USERCOLOR_DISCIPLINES           0xFF +  16 //  16 - Disciplines or special abilities
#define USERCOLOR_UNUSED001             0xFF +  17 //  17 - Unused at this time
#define USERCOLOR_DEFAULT               0xFF +  18 //  18 - Default text and stuff you type
#define USERCOLOR_UNUSED002             0xFF +  19 //  19 - Unused at this time
#define USERCOLOR_MERCHANT_OFFER        0xFF +  20 //  20 - Merchant Offer Price
#define USERCOLOR_MERCHANT_EXCHANGE     0xFF +  21 //  21 - Merchant Buy/Sell
#define USERCOLOR_YOUR_DEATH            0xFF +  22 //  22 - Your death message
#define USERCOLOR_OTHER_DEATH           0xFF +  23 //  23 - Others death message
#define USERCOLOR_OTHER_HIT_OTHER       0xFF +  24 //  24 - Other damage other
#define USERCOLOR_OTHER_MISS_OTHER      0xFF +  25 //  25 - Other miss other
#define USERCOLOR_WHO                   0xFF +  26 //  26 - /who command
#define USERCOLOR_YELL                  0xFF +  27 //  27 - yell for help
#define USERCOLOR_NON_MELEE             0xFF +  28 //  28 - Hit for non-melee
#define USERCOLOR_SPELL_WORN_OFF        0xFF +  29 //  29 - Spell worn off
#define USERCOLOR_MONEY_SPLIT           0xFF +  30 //  30 - Money splits
#define USERCOLOR_LOOT                  0xFF +  31 //  31 - Loot message
#define USERCOLOR_RANDOM                0xFF +  32 //  32 - Dice Roll (/random)
#define USERCOLOR_OTHERS_SPELLS         0xFF +  33 //  33 - Others spells
#define USERCOLOR_SPELL_FAILURE         0xFF +  34 //  34 - Spell Failures (resists, fizzles, missing component, bad target, etc.)
#define USERCOLOR_CHAT_CHANNEL          0xFF +  35 //  35 - Chat Channel Messages
#define USERCOLOR_CHAT_1                0xFF +  36 //  36 - Chat Channel 1
#define USERCOLOR_CHAT_2                0xFF +  37 //  37 - Chat Channel 2
#define USERCOLOR_CHAT_3                0xFF +  38 //  38 - Chat Channel 3
#define USERCOLOR_CHAT_4                0xFF +  39 //  39 - Chat Channel 4
#define USERCOLOR_CHAT_5                0xFF +  40 //  40 - Chat Channel 5
#define USERCOLOR_CHAT_6                0xFF +  41 //  41 - Chat Channel 6
#define USERCOLOR_CHAT_7                0xFF +  42 //  42 - Chat Channel 7
#define USERCOLOR_CHAT_8                0xFF +  43 //  43 - Chat Channel 8
#define USERCOLOR_CHAT_9                0xFF +  44 //  44 - Chat Channel 9
#define USERCOLOR_CHAT_10               0xFF +  45 //  45 - Chat Channel 10
#define USERCOLOR_MELEE_CRIT            0xFF +  46 //  46 - Melee Crits
#define USERCOLOR_SPELL_CRIT            0xFF +  47 //  47 - Spell Crits
#define USERCOLOR_TOO_FAR_AWAY          0xFF +  48 //  48 - Too far away (melee)
#define USERCOLOR_NPC_RAMPAGE           0xFF +  49 //  49 - NPC Rampage
#define USERCOLOR_NPC_FLURRY            0xFF +  50 //  50 - NPC Furry
#define USERCOLOR_NPC_ENRAGE            0xFF +  51 //  51 - NPC Enrage
#define USERCOLOR_ECHO_SAY              0xFF +  52 //  52 - say echo
#define USERCOLOR_ECHO_TELL             0xFF +  53 //  53 - tell echo
#define USERCOLOR_ECHO_GROUP            0xFF +  54 //  54 - group echo
#define USERCOLOR_ECHO_GUILD            0xFF +  55 //  55 - guild echo
#define USERCOLOR_ECHO_OOC              0xFF +  56 //  56 - group echo
#define USERCOLOR_ECHO_AUCTION          0xFF +  57 //  57 - auction echo
#define USERCOLOR_ECHO_SHOUT            0xFF +  58 //  58 - shout echo
#define USERCOLOR_ECHO_EMOTE            0xFF +  59 //  59 - emote echo
#define USERCOLOR_ECHO_CHAT_1           0xFF +  60 //  60 - chat 1 echo
#define USERCOLOR_ECHO_CHAT_2           0xFF +  61 //  61 - chat 2 echo
#define USERCOLOR_ECHO_CHAT_3           0xFF +  62 //  62 - chat 3 echo
#define USERCOLOR_ECHO_CHAT_4           0xFF +  63 //  63 - chat 4 echo
#define USERCOLOR_ECHO_CHAT_5           0xFF +  64 //  64 - chat 5 echo
#define USERCOLOR_ECHO_CHAT_6           0xFF +  65 //  65 - chat 6 echo
#define USERCOLOR_ECHO_CHAT_7           0xFF +  66 //  66 - chat 7 echo
#define USERCOLOR_ECHO_CHAT_8           0xFF +  67 //  67 - chat 8 echo
#define USERCOLOR_ECHO_CHAT_9           0xFF +  68 //  68 - chat 9 echo
#define USERCOLOR_ECHO_CHAT_10          0xFF +  69 //  69 - chat 10 echo
#define USERCOLOR_RESERVED              0xFF +  70 //  70 - "unused at this time" 
#define USERCOLOR_LINK                  0xFF +  71 //  71 - item links 
#define USERCOLOR_RAID                  0xFF +  72 //  72 - raid 
#define USERCOLOR_PET                   0xFF +  73 //  73 - my pet 
#define USERCOLOR_DAMAGESHIELD          0xFF +  74 //  74 - damage shields 
#define USERCOLOR_LEADER                0xFF +  75 //  75 - LAA-related messages 
#define USERCOLOR_PETRAMPFLURRY         0xFF +  76 //  76 - pet rampage/flurry 
#define USERCOLOR_PETCRITS              0xFF +  77 //  77 - pet's critical hits 
#define USERCOLOR_FOCUS                 0xFF +  78 //  78 - focus item activation 
#define USERCOLOR_XP                    0xFF +  79 //  79 - xp gain/loss 
#define USERCOLOR_SYSTEM                0xFF +  80 //  80 - system broadcasts etc 
#define USERCOLOR_PET_SPELLS            0xFF +  81 //  81 - pet spells
#define USERCOLOR_PET_RESPONSES         0xFF +  82 //  82 - pet responses
#define USERCOLOR_ITEM_SPEECH           0xFF +  83 //  83 - item speech
#define USERCOLOR_STRIKETHROUGH         0xFF +  84 //  84 - strikethrough messages
#define USERCOLOR_STUN                  0XFF +  85 //  85 - stun messages
#define USERCOLOR_RESERVED2             0xFF +  86 //  86 - "unused at this time" (or unknown!?)
#define USERCOLOR_FELLOWSHIP            0xFF +  87 //  87 - fellowship messages
#define USERCOLOR_NPC_SPEECH            0xFF +  88 //  88 - npc dialogue
#define USERCOLOR_NPC_SPEECH_TO_YOU     0xFF +  89 //  89 - npc dialogue to you
#define USERCOLOR_GUILD_MSG             0xFF +  90 //  90 - guild messages

#define DEITY_Bertoxxulous              201
#define DEITY_BrellSerilis              202
#define DEITY_CazicThule                203
#define DEITY_ErollisiMarr              204
#define DEITY_Bristlebane               205
#define DEITY_Innoruuk                  206
#define DEITY_Karana                    207
#define DEITY_MithanielMarr             208
#define DEITY_Prexus                    209
#define DEITY_Quellious                 210
#define DEITY_RallosZek                 211
#define DEITY_RodcetNife                212
#define DEITY_SolusekRo                 213
#define DEITY_TheTribunal               214
#define DEITY_Tunare                    215
#define DEITY_Veeshan                   216

#define ITEMTYPE_NORMAL                 0
#define ITEMTYPE_PACK                   1
#define ITEMTYPE_BOOK                   2

#define COMP_NONE                       0
#define COMP_EQ                         1
#define COMP_NE                         2
#define COMP_GT                         3
#define COMP_LT                         4
#define COMP_GE                         5
#define COMP_LE                         6
#define COMP_CONT                       7
#define COMP_NOTCONT                    8
#define COMP_BITAND                     9
#define COMP_BITOR                      10

#define COMP_TYPE_STRING                0
#define COMP_TYPE_NUMERIC               1
#define COMP_TYPE_BIT                   2

#define CMD_MQ                          1
#define CMD_EQ                          2        

#define LASTFIND_NOTFOUND               96
#define LASTFIND_PRIMARY                97

#define EVENT_CHAT                      0
#define EVENT_TIMER                     1
#define EVENT_CUSTOM                    2
#define EVENT_EVAL                      3
#define EVENT_EXEC                      4
#define EVENT_PULSE                     5
#define EVENT_SHUTDOWN                  6
#define EVENT_BREAK                     7
#define NUM_EVENTS                      8

#define CHAT_SAY                        1
#define CHAT_TELL                       2
#define CHAT_OOC                        4
#define CHAT_SHOUT                      8
#define CHAT_AUC                        16
#define CHAT_GUILD                      32
#define CHAT_GROUP                      64
#define CHAT_CHAT                       128
#define CHATEVENT(x)                    (gEventChat & x)

#define FILTERSKILL_ALL                 0
#define FILTERSKILL_INCREASE            1
#define FILTERSKILL_NONE                2

#define FILTERMACRO_ALL                 0
#define FILTERMACRO_ENHANCED            1
#define FILTERMACRO_NONE                2
#define FILTERMACRO_MACROENDED			3


#define MAX_STRING                      2048
#define MAX_VARNAME                     64

// Defines for CXWnd WindowStyle
#define CWS_VSCROLL                     0x1
#define CWS_HSCROLL                     0x2
#define CWS_TITLE                       0x4
#define CWS_CLOSE                       0x8
#define CWS_TILEBOX                     0x10
#define CWS_MINIMIZE                    0x20
#define CWS_BORDER                      0x40
//#define CWS_UNKNOWN                     0x80
//#define CWS_UNKNOWN                     0x100
#define CWS_RESIZEALL                   0x200
#define CWS_TRANSPARENT                 0x400
//#define CWS_UNKNOWN                     0x800
#define CWS_NOMOVE                      0x8000
#define CWS_QMARK                       0x10000
#define CWS_MAXIMIZE                    0x40000
#define ToggleBit(field,bit)            field^=bit;
#define BitOn(field,bit)                field|=bit;
#define BitOff(field,bit)               field&=~bit;
#define BitSet(field,bit)					field|=(1<<bit);
#define BitClear(field,bit)				field&=~(1<<bit);
// End CXWnd WindowStyle Defines

#define ALTCURRENCY_DOUBLOONS           0xa
#define ALTCURRENCY_ORUX                0xb
#define ALTCURRENCY_PHOSPHENES          0xc
#define ALTCURRENCY_PHOSPHITES          0xd
#define ALTCURRENCY_FAYCITES            0xe
#define ALTCURRENCY_CHRONOBINES         0xf
#define ALTCURRENCY_SILVERTOKENS        0x10
#define ALTCURRENCY_GOLDTOKENS          0x11
#define ALTCURRENCY_MCKENZIE            0x12
#define ALTCURRENCY_BAYLE               0x13
#define ALTCURRENCY_RECLAMATION         0x14
#define ALTCURRENCY_BRELLIUM            0x15
#define ALTCURRENCY_MOTES               0x16
#define ALTCURRENCY_REBELLIONCHITS      0x17
#define ALTCURRENCY_DIAMONDCOINS        0x18
#define ALTCURRENCY_BRONZEFIATS         0x19
#define ALTCURRENCY_VOUCHER             0x1a
#define ALTCURRENCY_VELIUMSHARDS        0x1b
#define ALTCURRENCY_CRYSTALLIZEDFEAR    0x1c
#define ALTCURRENCY_SHADOWSTONES        0x1d
#define ALTCURRENCY_DREADSTONES         0x1e
#define ALTCURRENCY_MARKSOFVALOR        0x1f
#define ALTCURRENCY_MEDALSOFHEROISM     0x20
#define ALTCURRENCY_COMMEMORATIVE_COINS 0x21
#define ALTCURRENCY_FISTSOFBAYLE	    0x22
#define ALTCURRENCY_NOBLES			    0x23
#define ALTCURRENCY_ENERGYCRYSTALS	    0x24
#define ALTCURRENCY_PIECESOFEIGHT	    0x25

enum MOUSE_DATA_TYPES {
   MD_Unknown = -1,
   MD_Button0Click=0,
   MD_Button1Click,
   MD_Button0,
   MD_Button1
};

//eqmule Mar 23 2015
//KeypressHandler__HandleKeyUp_x has this one
#define nEQMappableCommands             0x207

#define MAX_PC_LEVEL                    105
#define MAX_NPC_LEVEL                   115
#define MAX_SPELL_LEVEL					255
#define NUM_SPELL_GEMS                  0xc
#define NUM_SPELL_SETS                  30
#define NUM_BUFF_SLOTS					0x61
#define NUM_LONG_BUFFS                  0x2a
#define NUM_SHORT_BUFFS                 0x37

#define EQ_EXPANSION(x)                 (1 << (x - 1))
#define EXPANSION_RoK                   EQ_EXPANSION(1)
#define EXPANSION_SoV                   EQ_EXPANSION(2)
#define EXPANSION_SoL                   EQ_EXPANSION(3)
#define EXPANSION_PoP                   EQ_EXPANSION(4)
#define EXPANSION_LoY                   EQ_EXPANSION(5)
#define EXPANSION_LDoN                  EQ_EXPANSION(6)
#define EXPANSION_GoD                   EQ_EXPANSION(7)
#define EXPANSION_OoW                   EQ_EXPANSION(8)
#define EXPANSION_DoN                   EQ_EXPANSION(9)
#define EXPANSION_DoD                   EQ_EXPANSION(10)
#define EXPANSION_PoR                   EQ_EXPANSION(11)
#define EXPANSION_TSS                   EQ_EXPANSION(12)
#define EXPANSION_TBS                   EQ_EXPANSION(13)
#define EXPANSION_SoF                   EQ_EXPANSION(14)
#define EXPANSION_SoD                   EQ_EXPANSION(15)
#define EXPANSION_UFT                   EQ_EXPANSION(16)
#define EXPANSION_HoT                   EQ_EXPANSION(17)
#define EXPANSION_VoA                   EQ_EXPANSION(18)
#define EXPANSION_RoF                   EQ_EXPANSION(19)
#define EXPANSION_CotF                  EQ_EXPANSION(20)
#define EXPANSION_TDS                   EQ_EXPANSION(21)
#define EXPANSION_TBM                   EQ_EXPANSION(22)
#define EXPANSION_EoK                   EQ_EXPANSION(23)
#define NUM_EXPANSIONS                  23

#if _MSC_VER < 1600
#define nullptr                         NULL
#endif

#define CALC_1TICK						107
#define CALC_2TICK						108
#define CALC_5TICK						120
#define CALC_12TICK						122
#define CALC_RANDOM						123

#define SPA_AC                          1
#define SPA_MOVEMENTRATE                3
#define SPA_LURE                        10
#define SPA_HASTE                       11
#define SPA_ILLUSION                    58
#define SPA_MAGNIFICATION               87
#define SPA_PLAYERSIZE                  89
#define SPA_SUMMONCORPSE                91
#define SPA_BARDOVERHASTE               98
#define SPA_SPELLDAMAGE                 124
#define SPA_HEALING                     125
#define SPA_REAGENTCHANCE               131
#define SPA_SPELLMANACOST               132
#define SPA_DOUBLEATTACK                177
#define SPA_STUNRESIST                  195
#define SPA_PROCMOD                     200
#define SPA_DIVINEREZ                   232
#define SPA_METABOLISM                  233
#define SPA_PLACEHOLDER                 254
#define SPA_TRIPLEBACKSTAB              258
#define SPA_DOTCRIT                     273
#define SPA_HEALCRIT                    274
#define SPA_MENDCRIT                    275
#define SPA_FLURRY                      279
#define SPA_PETFLURRY                   280
#define SPA_SPELLCRITCHANCE             294
#define SPA_INCSPELLDMG                 296
#define SPA_DAMAGECRITMOD               302
#define SPA_SHIELDBLOCKCHANCE           320
#define SPA_AC2                         416
#define SPA_SPELLDAMAGETAKEN			483

#define TT_PBAE                         0x04
#define TT_TARGETED_AE                  0x08
#define TT_AE_PC_V2                     0x28
#define TT_DIRECTIONAL                  0x2a

#define EQHeading(heading) (int)(((heading + 16) % 256) / 32) * 2


// ***************************************************************************
// Structures
// ***************************************************************************

typedef struct _MOUSESPOOF {
   MOUSE_DATA_TYPES     mdType;
   DWORD                dwData;
   struct _MOUSESPOOF   *pNext;
} MOUSESPOOF, *PMOUSESPOOF;

typedef struct _MOUSECLICK {
   BYTE Confirm[8];         // DO NOT WRITE TO THIS BYTE
   BYTE Click[8];         // Left = 0, Right = 1, etc
} MOUSECLICK, *PMOUSECLICK;

typedef struct _UILOCATION {
   DWORD x;
   DWORD y;
   DWORD w;
   DWORD h;
   CHAR error[MAX_STRING];
} UILOCATION, *PUILOCATION;

//5-15-2003   eqmule
typedef struct _CXSTR {
/*0x00*/   DWORD   Font;            // maybe, dont know.  04 = Window 01 = button
/*0x04*/   DWORD   MaxLength;
/*0x08*/   DWORD   Length;
/*0x0c*/   BOOL    Encoding;        // 0: ASCII, 1:Unicode
/*0x10*/   PCRITICAL_SECTION pLock;
/*0x14*/   CHAR    Text[1];         // Stub, can be anywhere from Length to MaxLength (which is how much is malloc'd to this CXStr)
} CXSTR, *PCXSTR;

#define ITEM_NAME_LEN                   0x40
#define LORE_NAME_LEN                   0x50

// size is 0x64 02-16-2007
typedef struct _ITEMSPELLS { 
/*0x00*/ DWORD SpellID; 
/*0x04*/ BYTE  RequiredLevel; 
/*0x05*/ BYTE  EffectType; 
/*0x06*/ BYTE  Unknown[0x2]; 
/*0x08*/ DWORD Unknown0x08;
/*0x0c*/ DWORD MaxCharges;
/*0x10*/ DWORD CastTime;
/*0x14*/ DWORD TimerID;
/*0x18*/ DWORD RecastType;
/*0x1c*/ DWORD ProcRate;
/*0x20*/ CHAR  OtherName[0x40];//some kind of override
/*0x60*/ DWORD OtherID;
/*0x64*/ 
} ITEMSPELLS, *PITEMSPELLS;

class ArmorProperties
{
public:
/*0x00*/ UINT Type;
/*0x04*/ UINT Variation;
/*0x08*/ UINT Material;
/*0x0c*/ UINT NewArmorID;
/*0x10*/ UINT NewArmorType;
/*0x14*/
};
struct AugSocket
{
	int Type;
	bool bVisible;
	bool bInfusible;
};
class ItemSocketData
{
public:
	AugSocket Sockets[6];
};
//ItemDefinition class
//CItemInfo__CItemInfo
// actual size: 0x734 May 06 2016 Test (see 6CB18B) - eqmule
typedef struct _ITEMINFO {
	/*0x0000*/ CHAR         Name[ITEM_NAME_LEN];
	/*0x0040*/ CHAR         LoreName[LORE_NAME_LEN];
	/*0x0090*/ CHAR         AdvancedLoreName[0x20];
	/*0x00b0*/ CHAR         IDFile[0x1e];
	/*0x00ce*/ CHAR         IDFile2[0x1e];
	/*0x00ec*/ DWORD        ItemNumber;//recordnum
	/*0x00f0*/ DWORD        EquipSlots;//its position, where it can be equipped
	/*0x00f4*/ DWORD        Cost;
	/*0x00f8*/ DWORD        IconNumber;
	/*0x00fc*/ BYTE         eGMRequirement;//todo figure out this enum
	/*0x00fd*/ bool         bPoofOnDeath;
	/*0x0100*/ DWORD        Weight;
	/*0x0104*/ bool         NoRent; // 0=temp, 1=default
	/*0x0105*/ bool         NoDrop; // 0=no drop, 1=can drop
	/*0x0106*/ bool         Attuneable;
	/*0x0107*/ bool         Heirloom;
	/*0x0108*/ bool         Collectible;
	/*0x0109*/ bool         NoDestroy;
	/*0x010a*/ bool         bNoNPC;
	/*0x010b*/ bool         NoZone;
	/*0x010c*/ DWORD        MakerID;//0-?? I did up to 12, I think it asks server for the name - eqmule
	/*0x0110*/ bool         NoGround;
	/*0x0111*/ bool         bNoLoot;
	/*0x0112*/ bool         MarketPlace;
	/*0x0113*/ bool         bFreeSlot;
	/*0x0114*/ bool         bAutoUse;
	/*0x0115*/ BYTE         Size;
	/*0x0116*/ BYTE         Type;
	/*0x0117*/ bool         TradeSkills;
	/*0x0118*/ int	        Lore;//-1=Lore 0=Not Lore >=1=Lore Group
	/*0x011c*/ bool         Artifact;
	/*0x011d*/ bool         Summoned;
	/*0x011e*/ CHAR         SvCold;
	/*0x011f*/ CHAR         SvFire;
	/*0x0120*/ CHAR         SvMagic;
	/*0x0121*/ CHAR         SvDisease;
	/*0x0122*/ CHAR         SvPoison;
	/*0x0123*/ CHAR         SvCorruption;
	/*0x0124*/ CHAR         STR;
	/*0x0125*/ CHAR         STA;
	/*0x0126*/ CHAR         AGI;
	/*0x0127*/ CHAR         DEX;
	/*0x0128*/ CHAR         CHA;
	/*0x0129*/ CHAR         INT;
	/*0x012a*/ CHAR         WIS;
	/*0x012b*/ //BYTE         HitPoints;
	/*0x012c*/ int	        HP;
	/*0x0130*/ int	        Mana;
	/*0x0134*/ int	        AC;
	/*0x0138*/ int	        RequiredLevel;
	/*0x013c*/ int	        RecommendedLevel;
	/*0x0140*/ int	        RecommendedSkill;
	/*0x0144*/ int	        SkillModType;
	/*0x0148*/ int	        SkillModValue;
	/*0x014c*/ int	        SkillModMax;
	/*0x0150*/ int	        SkillModBonus;
	/*0x0154*/ int		    BaneDMGRace;
	/*0x0158*/ int          BaneDMGBodyType;
	/*0x015c*/ int          BaneDMGBodyTypeValue;
	/*0x0160*/ int          BaneDMGRaceValue;
	/*0x0164*/ int	        InstrumentType;
	/*0x0168*/ int	        InstrumentMod;
	/*0x016c*/ int	        Classes;
	/*0x0170*/ int	        Races;
	/*0x0174*/ int	        Diety;
	/*0x0178*/ UINT         MaterialTintIndex;
	/*0x017c*/ bool         Magic;
	/*0x017d*/ BYTE         Light;
	/*0x017e*/ BYTE         Delay;
	/*0x017f*/ BYTE         ElementalFlag;//used to be called DmgBonusType;
	/*0x0180*/ BYTE         ElementalDamage;//used to be called DmgBonusVal
	/*0x0181*/ BYTE         Range;
	/*0x0184*/ DWORD        Damage;//BaseDamage
	/*0x0188*/ DWORD        BackstabDamage;
	/*0x018c*/ DWORD        HeroicSTR;
	/*0x0190*/ DWORD        HeroicINT;
	/*0x0194*/ DWORD        HeroicWIS;
	/*0x0198*/ DWORD        HeroicAGI;
	/*0x019c*/ DWORD        HeroicDEX;
	/*0x01a0*/ DWORD        HeroicSTA;
	/*0x01a4*/ DWORD        HeroicCHA;
	/*0x01a8*/ DWORD        HeroicSvMagic;
	/*0x01ac*/ DWORD        HeroicSvFire;
	/*0x01b0*/ DWORD        HeroicSvCold;
	/*0x01b4*/ DWORD        HeroicSvDisease;
	/*0x01b8*/ DWORD        HeroicSvPoison;
	/*0x01bc*/ DWORD        HeroicSvCorruption;
	/*0x01c0*/ DWORD        HealAmount;
	/*0x01c4*/ DWORD        SpellDamage;
	/*0x01c8*/ int	        Prestige;
	/*0x01cc*/ BYTE         ItemType;
	/*0x01d0*/ ArmorProperties ArmorProps;//size is 0x14
	/*0x01e4*/ ItemSocketData AugData;
	/*0x0214*/ DWORD        AugType;
	/*0x0218*/ DWORD        AugSkinTypeMask;
	/*0x021c*/ DWORD        AugRestrictions;
	/*0x0220*/ DWORD        SolventItemID; //ID# of Solvent (Augs only)
	/*0x0224*/ DWORD        LDTheme;
	/*0x0228*/ DWORD        LDCost;
	/*0x022c*/ DWORD        LDType;
	/*0x0230*/ BYTE         Unknown0x0230[0x8];
	/*0x0238*/ DWORD        FactionModType[0x4];
	/*0x0248*/ DWORD        FactionModValue[0x4];
	/*0x0258*/ CHAR         CharmFile[0x20];
	/*0x0278*/ BYTE         Unknown0x0278[0x4];
	/*0x027c*/ struct _ITEMSPELLS   Clicky;
	/*0x02e0*/ struct _ITEMSPELLS   Proc;
	/*0x0344*/ struct _ITEMSPELLS   Worn;
	/*0x03a8*/ struct _ITEMSPELLS   Focus;
	/*0x040c*/ struct _ITEMSPELLS   Scroll;
	/*0x0470*/ struct _ITEMSPELLS   Focus2;
	/*0x04d4*/ struct _ITEMSPELLS   Mount;
	/*0x0538*/ struct _ITEMSPELLS   Illusion;
	/*0x059c*/ struct _ITEMSPELLS   Familiar;
	/*0x0600*/ DWORD  SkillMask1;//this is just an array but I dont have time to figure it out for now. -eqmule
	/*0x0604*/ DWORD  SkillMask2;
	/*0x0608*/ DWORD  SkillMask3;
	/*0x060c*/ DWORD  SkillMask4;
	/*0x0610*/ DWORD  SkillMask5;
	/*0x0614*/ DWORD        DmgBonusSkill; // SkillMinDamageMod;
	/*0x0618*/ DWORD        DmgBonusValue; // MinDamageMod;
	/*0x061c*/ DWORD        CharmFileID;
	/*0x0620*/ DWORD        FoodDuration;//0-5 snack 6-20 meal 21-30 hearty 31-40 banquet 41-50 feast 51-60 enduring 60- miraculous
	/*0x0624*/ BYTE         Combine;
	/*0x0625*/ BYTE         Slots;
	/*0x0626*/ BYTE         SizeCapacity;
	/*0x0627*/ BYTE         WeightReduction;
	/*0x0628*/ BYTE         BookType;      // 0=note, !0=book
	/*0x0629*/ BYTE         BookLang;
	/*0x062a*/ CHAR         BookFile[0x1e];
	/*0x0648*/ DWORD        Favor;         // Tribute Value
	/*0x064c*/ DWORD        GuildFavor;
	/*0x0650*/ bool         bIsFVNoDrop;
	/*0x0654*/ DWORD        Endurance;
	/*0x0658*/ DWORD        Attack;
	/*0x065c*/ DWORD        HPRegen;
	/*0x0660*/ DWORD        ManaRegen;
	/*0x0664*/ DWORD        EnduranceRegen;
	/*0x0668*/ DWORD        Haste;
	/*0x066c*/ int          AnimationOverride;
	/*0x0670*/ int          PaletteTintIndex;
	/*0x0674*/ bool         bNoPetGive;
	/*0x0675*/ bool			bSomeProfile;
	/*0x0676*/ bool			bPotionBeltAllowed;
	/*0x0678*/ int			NumPotionSlots;
	/*0x067c*/ int			SomeIDFlag;
	/*0x0680*/ DWORD        StackSize;
	/*0x0684*/ bool         bNoStorage;
	/*0x0688*/ DWORD        MaxPower;
	/*0x068c*/ DWORD        Purity;
	/*0x0690*/ bool         bIsEpic;
	/*0x0694*/ int          RightClickScriptID;
	/*0x0698*/ int          ItemLaunchScriptID;
	/*0x069c*/ BYTE         QuestItem;
	/*0x069d*/ BYTE         Expendable;
	/*0x06a0*/ DWORD        Clairvoyance;
	/*0x06a4*/ int          SubClass;
	/*0x06a8*/ bool         bLoginRegReqItem;
	/*0x06ac*/ DWORD        Placeable;
	/*0x06b0*/ bool         bPlaceableIgnoreCollisions;
	/*0x06b4*/ int          PlacementType;//todo: this is an enum need to figure out.
	/*0x06b8*/ int          RealEstateDefID;
	/*0x06bc*/ FLOAT        PlaceableScaleRangeMin;
	/*0x06c0*/ FLOAT        PlaceableScaleRangeMax;
	/*0x06c4*/ int          RealEstateUpkeepID;
	/*0x06c8*/ int          MaxPerRealEstate;
	/*0x06cc*/ CHAR			HousepetFileName[0x20];
	/*0x06ec*/ int			TrophyBenefitID;
	/*0x06f0*/ bool			bDisablePlacementRotation;
	/*0x06f1*/ bool			bDisableFreePlacement;
	/*0x06f4*/ int			NpcRespawnInterval;
	/*0x06f8*/ FLOAT		PlaceableDefScale;
	/*0x06fc*/ FLOAT		PlaceableDefHeading;
	/*0x0700*/ FLOAT		PlaceableDefPitch;
	/*0x0704*/ FLOAT		PlaceableDefRoll;
	/*0x0708*/ bool			bInteractiveObject;
	/*0x0709*/ BYTE			SocketSubClassCount;
	/*0x070c*/ int			SocketSubClass[0xa];
	/*0x0734*/
} ITEMINFO, *PITEMINFO;

//ok this is rediculous, so I had to change this, there are 40 slot bags now and they could add more in the future
//this is now dynamic... -eqmule
typedef struct _ITEMBASEARRAY {
    struct  _CONTENTS *Item[1];
} ITEMBASEARRAY, *PITEMBASEARRAY;

class EqItemGuid
{
public:
	enum { GUID = 18 };
	EqItemGuid()
	{
		ZeroMemory(guid, sizeof(guid));
	}

	char guid[GUID];
};
enum ItemContainerInstance
{
	eItemContainerInvalid = -1,
	eItemContainerPossessions,
	eItemContainerBank,
	eItemContainerSharedBank,
	eItemContainerTrade,
	eItemContainerWorld,
	eItemContainerLimbo,
	eItemContainerTribute,
	eItemContainerTrophyTribute,
	eItemContainerGuildTribute,
	eItemContainerMerchant,
	eItemContainerDeleted,
	eItemContainerCorpse,
	eItemContainerBazaar,
	eItemContainerInspect,
	eItemContainerRealEstate,
	eItemContainerViewModPC,
	eItemContainerViewModBank,
	eItemContainerViewModSharedBank,
	eItemContainerViewModLimbo,
	eItemContainerAltStorage,
	eItemContainerArchived,
	eItemContainerMail,
	eItemContainerGuildTrophyTribute,
	eItemContainerKrono,
	eItemContainerOther,
	eItemContainerMercenaryItems,
    eItemContainerViewModMercenaryItems,
    eItemContainerMountKeyRingItems,
	eItemContainerViewModMountKeyRingItems,
	eItemContainerIllusionKeyRingItems,
	eItemContainerViewModIllusionKeyRingItems,
	eItemContainerFamiliarKeyRingItems,
	eItemContainerViewModFamiliarKeyRingItems,
	eItemContainerCursor,
};
class ItemIndex
{
public:
/*0x00*/ short Slot1;
/*0x02*/ short Slot2;
/*0x04*/ short Slot3;
/*0x06*/
};

class ItemGlobalIndex2
{
public:
/*0x00*/ ItemGlobalIndex2::ItemContainerInstance Location;
/*0x04*/ ItemGlobalIndex2::ItemIndex Index;
/*0x0a*/
};

class ItemArray
{
public:
/*0xa4*/	struct _ITEMBASEARRAY	*pItems;
/*0xa8*/	UINT Size;
/*0xac*/	UINT Capacity;
};

class ItemBaseContainer2
{
public:
/*0x9c*/	UINT ContentSize;
/*0xa0*/	int ItemLocation;
/*0xa4*/	ItemArray ContainedItems;
/*0xb0*/	BYTE Depth;
/*0xB2*/	short ItemSlot;
/*0xB4*/	short ItemSlot2;
/*0xB6*/	bool bDynamic;
/*0xb8*/
};

//Actual Size: 148 (see 58CDD7 in eqgame.exe Live dated Dec 1 2016) - eqmule
typedef struct _CONTENTS {
/*0x0000*/ void*	vtable;
/*0x0004*/ DWORD	ItemType;           // ? 1 = normal, 2 = pack ?
/*0x0008*/ void*	punknown;
//start of ItemBase
/*0x000C*/ int	EvolvingMaxLevel; \
/*0x0010*/ struct _CXSTR *SaveString; \
/*0x0014*/ int	NoteStatus; \
/*0x0018*/ bool	bRankDisabled; \
/*0x001C*/ int	EvolvingCurrentLevel; \
/*0x0020*/ bool	bItemNeedsUpdate; \
/*0x0024*/ struct _ITEMINFO *Item1; \
/*0x0028*/ int	Charges; \
/*0x002C*/ int	ID; \
/*0x0030*/ int	Price; \
/*0x0034*/ int	StackCount; \
/*0x0038*/ bool	bCollected; \
/*0x0039*/ bool	bRealEstateItemPlaceable; \
/*0x003A*/ bool	IsEvolvingItem; \
/*0x003C*/ int	RealEstateID; \
/*0x0040*/ int	ConvertItemID; \
/*0x0044*/ int	NoDropFlag; \
/*0x0048*/ ItemBaseContainer2 Contents; /* Size is 0x1c */ \
/*0x0064*/ int	ItemColor; \
/*0x0068*/ LONG	LastEquipped; \
/*0x006C*/ int	AugFlag; \
/*0x0070*/ int	Open; \
/*0x0074*/ UINT	ItemHash; \
/*0x0078*/ DOUBLE	EvolvingExpPct; \
/*0x0080*/ CHAR	ActorTag1[0x1e]; \
/*0x009E*/ EqItemGuid ItemGUID; \
/*0x00B0*/ bool	EvolvingExpOn; \
/*0x00B8*/ __int64 MerchantSlot; \
/*0x00C0*/ int	OrnamentationIcon; \
/*0x00C4*/ bool	bCopied; \
/*0x00C8*/ ArrayClass_RO<UINT> RealEstateArray; \
/*0x00D8*/ bool	bConvertable; \
/*0x00DC*/ int	ArmorType; \
/*0x00E0*/ bool	bDisableAugTexture; \
/*0x00E4*/ int	Power; \
/*0x00E8*/ int	ScriptIndex; \
/*0x00EC*/ UINT	Tint; \
/*0x00F0*/ ItemGlobalIndex2 GlobalIndex; /* Size is 0xa (0xc)*/ \
/*0x00FC*/ UINT	LastCastTime; \
/*0x0100*/ int	MerchantQuantity; \
/*0x0104*/ struct _CXSTR *ConvertItemName; \
/*0x0108*/ UINT	RespawnTime; \
/*0x010C*/ int	GroupID; \
/*0x0110*/ UINT	NewArmorID; \
/*0x0114*/ CHAR	ActorTag2[0x1e]; \
//end of ItemBase
//start of ItemClient
/*0x0134*/ int		Filler1;
/*0x0138*/ int		Filler2;
/*0x013c*/ struct _ITEMINFO*	Item2;
/*0x0140*/ struct _CXSTR *ClientString;
/*0x0144*/ UINT		DontKnow2;
/*0x0148*/
__declspec(dllexport)  struct _CONTENTS *GetContent(UINT index);
} CONTENTS, *PCONTENTS;

// Size 0x58 20110810 - dkaa
// Size 0x58 20150326 - demonstar55
typedef struct _SPELLBUFF {
	/*0x00*/    BYTE      Unknown0x0;
	/*0x01*/    BYTE      Level;
	/*0x02*/    BYTE      Unknown0x2;    // pretty sure is padding
	/*0x03*/    CHAR      DamageShield;  // also probably padding now
	/*0x04*/    FLOAT     Modifier;      // Bard song modifier, 1.0 is default
	/*0x08*/    LONG      SpellID;       // -1 or 0 for no spell..
	/*0x0c*/    DWORD     Duration;
	/*0x10*/    DWORD     Unknown0x10;   // This might be source ID?
	/*0x14*/    DWORD     HitCount;
	/*0x18*/    FLOAT     Y;             // Referenced by SPA 441 (distance removal)
	/*0x1c*/    FLOAT     X;
	/*0x20*/    FLOAT     Z;
	/*0x24*/    DWORD     Unknown0x24;
	/*0x28*/    DWORD     SlotData[0xC]; // used for book keeping of various effects (debuff counter, rune/vie damage remaining)
	/*0x58*/
} SPELLBUFF, *PSPELLBUFF;

// 20101012 - ieatacid
typedef struct _INVENTORY { 
/*0x00*/  struct    _CONTENTS* Charm;
/*0x04*/  struct    _CONTENTS* LeftEar;
/*0x08*/  struct    _CONTENTS* Head;
/*0x0c*/  struct    _CONTENTS* Face;
/*0x10*/  struct    _CONTENTS* RightEar;
/*0x14*/  struct    _CONTENTS* Neck;
/*0x18*/  struct    _CONTENTS* Shoulders;
/*0x1c*/  struct    _CONTENTS* Arms;
/*0x20*/  struct    _CONTENTS* Back;
/*0x24*/  struct    _CONTENTS* LeftWrist;
/*0x28*/  struct    _CONTENTS* RightWrist;
/*0x2c*/  struct    _CONTENTS* Range;
/*0x30*/  struct    _CONTENTS* Hands;
/*0x34*/  struct    _CONTENTS* Primary;
/*0x38*/  struct    _CONTENTS* Secondary;
/*0x3c*/  struct    _CONTENTS* LeftFinger;
/*0x40*/  struct    _CONTENTS* RightFinger;
/*0x44*/  struct    _CONTENTS* Chest;
/*0x48*/  struct    _CONTENTS* Legs;
/*0x4c*/  struct    _CONTENTS* Feet;
/*0x50*/  struct    _CONTENTS* Waist;
/*0x54*/  struct    _CONTENTS* PowerSource;
/*0x58*/  struct    _CONTENTS* Ammo;
/*0x5c*/  struct    _CONTENTS* Pack[0xa];
/*0x84*/  struct    _CONTENTS* Cursor;
} INVENTORY, *PINVENTORY;

//need to find this one
#define NUM_ALT_ABILITIES_ARRAY         0x1F7      
// see 4FBD46 in eqgame.exe dated oct 29 2013 test - eqmule
#define NUM_ALT_ABILITIES               0xC34F

//these two will merge when i get a chance - ieatacid wrote this?
#define AA_CHAR_MAX                     0xF5
//EQ_PC__GetAlternateAbilityId_x
//size is at 7EE7F8 in eqgame dated jun 13 2014 - eqmule
#define AA_CHAR_MAX_REAL                0x12C

typedef struct _AALIST { 
/*0x0*/   DWORD        AAIndex;
/*0x4*/   DWORD        PointsSpent;
/*0x8*/   DWORD        ChargeSpent;        // charges spent in the last 10 min?
} AALIST, *PAALIST;

#define NUM_INV_SLOTS                   0x21
#define NUM_BANK_SLOTS                  0x18
#define NUM_SHAREDBANK_SLOTS            0x04
#define MAX_KEYRINGITEMS			    0x1B //not really sure need to confirm this
//found in CSpellBookWnd__GetBookSlot_x (see 7756CA in Oct 29 2014 Live) -eqmule 
#define NUM_BOOK_SLOTS                  0x320
#define NUM_COMBAT_ABILITIES            0x12c
#define BAG_SLOT_START                  23
#define ExactLocation                   0

typedef struct _LEADERABILITIES {
/*0x00*/ DWORD MarkNPC;
/*0x04*/ DWORD NPCHealth;
/*0x08*/ DWORD Unknown0x8;
/*0x0c*/ DWORD DelegateMA;
/*0x10*/ DWORD DelegateMarkNPC;
/*0x14*/ DWORD Unknown0x14;
/*0x18*/ DWORD InspectBuffs;
/*0x1c*/ DWORD Unknown0x1c;
/*0x20*/ DWORD SpellAwareness;
/*0x24*/ DWORD OffenseEnhancement;
/*0x28*/ DWORD ManaEnhancement;
/*0x2c*/ DWORD HealthEnhancement;
/*0x30*/ DWORD HealthRegen;
/*0x34*/ DWORD FindPathPC;
/*0x38*/ DWORD HoTT;
/*0x3c*/
} LEADERABILITIES, *PLEADERABILITIES;

typedef struct _EQC_INFO {
/* 0x0000 */    DWORD   minus4;
/* 0x0004 */    DWORD   stuff_offset;
} EQC_INFO, *PEQC_INFO;

typedef struct _CI_INFO {
/* 0x0000 */    DWORD   minus8;
/* 0x0004 */    DWORD   stuff_offset;
/* 0x0008 */    DWORD   Unknown0x8;    // 2000
/* 0x000c */    DWORD   Unknown0xc;    // 2500
/* 0x0010 */    DWORD   Unknown0x10;   // 3000
/* 0x0014 */    DWORD   Unknown0x14;   // 4000
/* 0x0018 */    DWORD   Unknown0x18;   // 10000
} CI_INFO, *PCI_INFO;

typedef struct _CI2_INFO {
/* 0x0000 */    DWORD   Unknown0x0;
/* 0x0004 */    struct  _CHARINFO2* pCharInfo2;
/* 0x0008 */    struct  _CHARINFO2* pCharInfo3;
/* 0x000c */    BYTE    Unknown0xc[0x14];
/* 0x0010 */    void    *Unknown0x10[0x10];
/* 0x0060 */
} CI2_INFO, *PCI2_INFO;

//size 34 i think in eqgame dated mar 23 2015 but i have no address for it atm -eqmule
typedef struct _GROUPMEMBER {
/*0x00*/ void   *vftable;
/*0x04*/ struct _CXSTR *pName;
/*0x08*/ BYTE   Mercenary;
/*0x09*/ BYTE   Unknown0x8[0x3];
/*0x0c*/ struct _CXSTR *pOwner; // name of mercenary's owner
/*0x10*/ DWORD  Level;
/*0x14*/ BYTE   Offline;//1 if groupmember is offline
/*0x15*/ BYTE   Unknown0x15[8];
/*0x1d*/ BYTE   MainTank;
/*0x1e*/ BYTE   MainAssist;
/*0x1f*/ BYTE   Puller;
/*0x20*/ BYTE   MarkNpc;
/*0x21*/ BYTE   MasterLooter;
/*0x22*/ BYTE   Unknown0x22[0x2];
/*0x24*/ DWORD  Roles;          // (Roles & 0x1) = MainTank, 0x2 = MainAssist, 0x4 = Puller 0x8 = Mark NPC 0x10 = Master Looter
/*0x28*/ BYTE   Unknown0x28[0x8];
/*0x30*/ struct _SPAWNINFO *pSpawn;
/*0x34*/
} GROUPMEMBER, *PGROUPMEMBER;

typedef struct _GROUPINFO {
/*0x00*/ void   *vftable;
/*0x04*/ struct _GROUPMEMBER *pMember[0x6];
/*0x1c*/ struct _GROUPMEMBER *pLeader;
/*0x20*/
} GROUPINFO, *PGROUPINFO;

typedef struct _BANKARRAY {
/*0x00*/ struct _CONTENTS* Bank[NUM_BANK_SLOTS];
/*0x60*/
} BANKARRAY, *PBANKARRAY;

typedef struct _SHAREDBANKARRAY {
/*0x00*/ struct _CONTENTS* SharedBank[NUM_SHAREDBANK_SLOTS];
/*0x10*/
} SHAREDBANKARRAY, *PSHAREDBANKARRAY;

typedef struct _MERCEQUIPMENT {
	/*0x00*/ struct _CONTENTS* MercEquipment[4];
	/*0x68*/
} MERCEQUIPMENT, *PMERCEQUIPMENT;

//added dec 08 2014 -eqmule
typedef struct _KEYRINGARRAY {
	union {
		/*0x00*/ struct _CONTENTS* Mounts[MAX_KEYRINGITEMS];
		/*0x00*/ struct _CONTENTS* Illusions[MAX_KEYRINGITEMS];
		/*0x00*/ struct _CONTENTS* Familiars[MAX_KEYRINGITEMS];
	};
	/*0x28*/
} KEYRINGARRAY, *PKEYRINGARRAY;

#pragma pack(push)
#pragma pack(8)
union EqGuid
{
	unsigned __int64 GUID;
	struct Split
	{
		UINT UniqueEntityID;
		WORD WorldUniqueID;
		WORD Unknown;
	};
};
#pragma pack(pop)
struct Point 
{
	UINT PointType;
	UINT PointSubtype;
	UINT CurrentCount;
	UINT TotalEver;
};
class CPlayerPointManager
{
public:
/*0x00*/	PVOID vfTable;
/*0x04*/	ArrayClass_RO<Point *>Points;
/*0x14*/
};
struct PointNamesEntry
{
	UINT PointTypeId;
	UINT PointSubtypeId;
	int DBStringId;
	int PointItemId;
	int ImageId;
	int MaxStackSize;
	bool bStationCashRelated;
};
class PointSystemBase
{
public:
/*0x00*/	PVOID vfTable;
/*0x04*/	ArrayClass_RO<PointNamesEntry *>PointNameEntries;
/*0x14*/
};

class PendingReward
{
public:
/*0x00*/	PVOID vfTable;
/*0x04*/	int		ID;
/*0x08*/	int		SetID;
/*0x0c*/	FLOAT	RewardAdjustment;
/*0x10*/	CHAR	RewardTitle[0x80];
/*0x90*/
};
class PendingRewardList : public DoublyLinkedList<PendingReward*>
{
public:
/*0x20*/	int	NextUID;
/*0x24*/	int MaxPending;
/*0x28*/	int ZoneMaxPending;
/*0x2c*/
};
enum ELockoutCharacterReason
{
	LCR_AllowNormalPlay,
	LCR_InvalidWornItem,
	LCR_Something,
};
struct ProgressionExperience
{
/*0x00*/	int ProgressionID;
/*0x08*/	double ProgressionExp;
/*0x10*/
};

//start of reorganisation for charinfo etc...
//todo: finish it...

template <typename TItem> class ItemContainer
{
public:
/*0x00*/	UINT Size;
/*0x04*/	int Spec;
/*0x08*/	VeArray<VePointer<TItem>> Items;
/*0x0c*/	BYTE AtDepth;
/*0x10*/	short Slots[2];
/*0x14*/	bool bDynamic;
/*0x18*/
};

class ItemBaseContainer : public ItemContainer<PCONTENTS>
{
public:

};

class CharacterPropertyHash : public HashTable<int>
{
public:

};

enum eProfileType {
	ePTMain,
	ePTAlt,
	ePTMonsterMission,
	ePTUnknown
};

enum eProfileListType
{
	ePLT_Regular,
	cPLT_MonsterMission
};
//BaseProfile Todo: fill it in...
class BaseProfile
{
	//has a vftable
public:
/*0x0000*/	PVOID vfTable;
/*0x0004*/	BaseProfile*		pNextProfile;
/*0x0008*/	BaseProfile*		pPrevProfile;
/*0x000c*/  eProfileListType	profileListType;
/*0x0010*/	ItemBaseContainer	pInventoryArray;
/*0x0000*/	ItemBaseContainer	TributeBenefitItems;
/*0x0000*/	ItemBaseContainer	TrophyTributeBenefitItems;
/*0x0000*/	TSafeArrayStatic<struct _SPELLBUFF, NUM_LONG_BUFFS>		Buff; 
/*0x0000*/	TSafeArrayStatic<struct _SPELLBUFF, NUM_SHORT_BUFFS>	ShortBuff;
/*0x0000*/	TSafeArrayStatic<unsigned int, NUM_BUFF_SLOTS>	CasterSpellIDs;
/*0x0000*/	TSafeArrayStatic<unsigned int, NUM_BUFF_SLOTS>	DiseaseSpreadTimers;
/*0x0000*/	TSafeArrayStatic<int, NUM_BOOK_SLOTS>	SpellBook;
/*0x0000*/	TSafeArrayStatic<int, 0x10>	MemorizedSpells;
/*0x0000*/	TSafeArrayStatic<int, 0x64>	Skill;
/*0x0000*/	TSafeArrayStatic<int, 0x19>	InnateSkill;
	//todo: add tthe rest sync it up with charinfo2
};

class ProfileList
{
	//has no vftable
public:
/*0x00*/	eProfileListType ListType;
/*0x04*/	BaseProfile* pFirst;
/*0x08*/	BaseProfile* pLast;
/*0x0c*/	ProfileList* pNext;
/*0x10*/	ProfileList* pPrev;
/*0x14*/
};

class CProfileManager
{
	//has no vftable
public:
/*0x00*/	ProfileList* pFirst;
/*0x04*/	eProfileListType CurProfileList;
/*0x08*/
};
struct PCTaskStatus
{
/*0x00*/	int TaskID;
/*0x04*/	int MovingStartTime;
/*0x08*/	int InitialStartTime;
/*0x0c*/	bool ElementActive[0x14];
/*0x20*/	int CurrentCounts[0x14];
/*0x70*/
};

struct BenefitSelection
{
/*0x00*/	int BenefitID;
/*0x04*/	int BenefitTier;
/*0x08*/
};
struct MailItemData
{
/*0x00*/	UINT	SendTime;
/*0x04*/	PCXSTR	SenderName;
/*0x08*/	PCXSTR	Note;
/*0x0c*/
};

enum eDynamicZoneType
{
	eDZT_Unknown,
	eDZT_Expedition,
	eDZT_Tutorial,
	eDZT_Task,
	eDZT_Mission,
	eDZT_Quest
};

struct DynamicZoneData
{
/*0x00*/	int		DynamicZoneID;
/*0x04*/	int		SetID;
/*0x08*/	eDynamicZoneType	Type;
/*0x0c*/
};
struct TradeskillRecipeCount
{
/*0x00*/	int		SkillID;
/*0x04*/	int		RecipeCount;
/*0x08*/
};

struct DynamicZoneTimerData
{
/*0x00*/	int		DataSetID;
/*0x04*/	UINT	TimerExpiration;
/*0x08*/	int		EventID;
/*0x0c*/	int		DynamicZoneID;
/*0x10*/	DynamicZoneTimerData	*pNext;
/*0x14*/
};

struct PvPKill
{
/*0x00*/	CHAR VictimName[0x40];
/*0x04*/	int VictimLevel;
/*0x08*/	DWORD VictimRace;
/*0x0c*/	DWORD VictimClass;
/*0x10*/	int ZoneID;
/*0x14*/	long Lastkilltime;
/*0x18*/	int PointsEarned;
/*0x1c*/
};

struct PvPDeath
{
/*0x00*/	CHAR KillerName[0x40];
/*0x04*/	int KillerLevel;
/*0x08*/	DWORD KillerRace;
/*0x0c*/	DWORD KillerClass;
/*0x10*/	int ZoneID;
/*0x14*/	long LastDeathTime;
/*0x18*/	int PointsLost;
/*0x1c*/
};

struct PvPKill24HourData : public PvPKill
{
	//nothing here?
};

enum eAreaCorner
{
	eAC_None = -1,
	eAC_TopLeftCorner,
	eAC_TopRightCorner,
	eAC_BottomLeftCorner,
	eAC_BottomRightCorner,
};

struct PCAdventureThemeStats
{
/*0x00*/	int SucceededNormal;
/*0x04*/	int FailedNormal;
/*0x08*/	int SucceededHard;
/*0x0c*/	int FailedHard;
/*0x10*/	int AdventureTotalPointsEarned;
/*0x14*/
};

struct PCAdventureData
{
/*0x000*/	int AdventureLastAdventureDefinitionSeen[5];
/*0x014*/	UINT AdventureLastAdventureDefinitionSeenTime[5];
/*0x028*/	int AdventureActiveAdventureId;
/*0x02c*/	int AdventureActiveAdventureTheme;
/*0x030*/	int AdventureActiveAdventureRisk;
/*0x034*/	int AdventureSafeReturnZoneId;
/*0x038*/	FLOAT AdventureSafeReturnX;
/*0x03c*/	FLOAT AdventureSafeReturnY;
/*0x040*/	FLOAT AdventureSafeReturnZ;
/*0x044*/	int AdventureStatAccepted;
/*0x048*/	int AdventureStatRejected;
/*0x04c*/	int AdventureStatEntered;
/*0x050*/	int AdventureStatFailedEnter;
/*0x054*/	int AdventurePointsAvailable;
/*0x058*/	int AdventurePointsAvailableMax;
/*0x05c*/	UINT AdventureLastSuccessTime;
/*0x060*/	PCAdventureThemeStats ThemeStats[6];
/*0x078*/
};

struct MonsterMissionTemplate
{
/*0x00*/	int		TemplateID;
/*0x04*/	int		Min;
/*0x08*/	int		Max;
/*0x0c*/	int		NumSelected;
/*0x10*/	bool	CanSelect;
/*0x14*/	CHAR	TemplateName[0x40];
/*0x54*/
};

struct PCSharedTaskData
{
/*0x00*/	int	ActiveSharedTaskID;
/*0x04*/	bool bIsMonsterMission;
/*0x08*/	PCTaskStatus Status;//size 0x70
/*0x78*/	ArrayClass_RO<MonsterMissionTemplate> Templates;//size is 0x10
/*0x88*/	FLOAT	RewardAdjustment;
/*0x8c*/
};

struct TaskTimerData
{
/*0x00*/	int GroupID;
/*0x04*/	int TimerSeconds;
/*0x08*/	UINT TimerExpiration;
/*0x0c*/	int TimerType;
/*0x10*/	int OrigTaskID;
/*0x14*/	TaskTimerData *pNext;
/*0x18*/
};

struct PCCompletedQuest
{
/*0x00*/	int QuestID;
/*0x04*/	int ElementBitmask;
/*0x08*/	UINT TimeCompleted;
/*0x0c*/
};

struct PCQuestHistoryData
{
/*0x000*/	PCCompletedQuest Quests[0x32];//size 0xc * 0x32 = 0x258
/*0x258*/
};

class StatCounter
{
public:
/*0x00*/	UINT Value;
/*0x04*/
};

class StatElapsedTime
{
public:
/*0x00*/	UINT StartTick;
/*0x04*/	UINT ElapsedTotal;
/*0x08*/	bool bCurrentState;
/*0x0c*/
};

class PCStatistics
{
public:
	enum eStatisticType {
		S_TotalExpEarned,
		S_GroupExpEarned,
		S_ExpRaidEarned,
		S_ExpSoloEarned,
		S_NonExpKills,
		S_ExpKills,
		S_ZonesVisited,
		S_ChatShouts,
		S_ChatOOCs,
		S_ChatSays,
		S_ChatGroup,
		S_ChatTells,
		S_Deaths, 
		S_Resurrections, 
		S_PlatEarned,
		S_TradeskillCombines,
		S_Forages,
		S_Quests,
		S_LastStat,
	};
/*0x000*/	StatElapsedTime StatTimeSession; //size 0xc
/*0x00c*/	StatElapsedTime StatTimeLFG;
/*0x018*/	StatElapsedTime StatTimeGrouped;
/*0x024*/	StatElapsedTime StatTimeSolo;
/*0x030*/	StatElapsedTime StatTimeRaid;
/*0x03c*/	StatElapsedTime StatTimeInBazaar;
/*0x048*/	StatCounter Statistics[S_LastStat];//size is 0x48
/*0x090*/	UINT LastUpdateTime;
/*0x094*/	CHAR PlayerName[0x40];
/*0x0d4*/	CHAR PlayerStationID[0x20];
/*0x0f4*/	int PlayerLevel;
/*0x0f8*/	DWORD PlayerRace;
/*0x0fc*/	DWORD PlayerClass;
/*0x100*/	UINT UniquePlayerID;
/*0x104*/
};

class GroupMemberStats
{
public:
	enum eStatisticType {
		S_Mez,
		S_Root,
		S_Charmed,
		S_Stunned,
		S_Slowed,
		S_FirstAgro,
		S_DmgMelee,
		S_DmgRanged,
		S_DmgSpell,
		S_DmgDot,
		S_DmgPet,
		S_DmgTaken,
		S_DmgHealed,
		S_ExpTotalEarned,
		S_Deaths,
		S_ExpKills,
		S_NonExpKills,
		S_ManaUsed,
		S_EnduranceUsed,
		S_LastStat,
	};
/*0x000*/	CHAR PlayerName[0x40];
/*0x040*/	int PlayerLevel;
/*0x044*/	int PlayerRace;
/*0x048*/	int PlayerClass;
/*0x04c*/	UINT UniquePlayerId;
/*0x050*/	UINT LastMemberUpdateTime;
/*0x054*/	PCXSTR StationID;
/*0x058*/	int PlayerGuild;
/*0x05c*/	TSafeArrayStatic<int, NUM_LONG_BUFFS> BuffIDs;
/*0xxxx*/	TSafeArrayStatic<StatCounter, S_LastStat> Statistics;
/*0xxxx*/
};

struct ClaimData
{
/*0x00*/	int FeatureID;
/*0x04*/	int Count;
/*0x08*/
};

class ClaimDataCollection
{
public:
/*0x00*/	ArrayClass<ClaimData> ClaimData;
/*0x10*/
};

class MercenaryAbilityInfo
{
public:
/*0x00*/	int Index;
/*0x04*/	int Cost;
/*0x08*/
};

struct CompletedAchievementData
{
/*0x00*/	int AchievementID;
/*0x04*/	UINT CompletedTimestamp;
/*0x08*/	int CompletedVersion;
/*0x0c*/
};

enum eAchievementSubReqType
{ 
	eASCRT_Invalid, 
	eASCRT_Requirement, 
	eASCRT_KillNpcRaceMat, 
	eASCRT_RightClickItem,
	eASCRT_KillNpc,
	eASCRT_Count,
};

struct AchievementSubComponentCountData
{
/*0x00*/	int AchievementID;
/*0x04*/	int ComponentID;
/*0x08*/	int RequirementID;
/*0x0c*/	eAchievementSubReqType SubReqType;
/*0x10*/	int Count;
/*0x14*/
};

struct WorldLocation
{
/*0x00*/ DWORD        ZoneBoundID;
/*0x04*/ FLOAT        ZoneBoundY;
/*0x08*/ FLOAT        ZoneBoundX;
/*0x0c*/ FLOAT        ZoneBoundZ;
/*0x10*/ FLOAT        ZoneBoundHeading;
/*0x14*/
};

struct RaidData
{
/*0x00*/	int MainAssists[3];
/*0x0c*/	CHAR MainAssistNames[3][0x40];
/*0xcc*/	int MainMarkers[3];
/*0xd8*/	int MasterLooter;
/*0xdc*/
};

class CCharacterBase
{
public:
	PVOID vfTable;
	CProfileManager ProfileManager;
	//todo: fil in the rest and sync it
};

//need to check CHARINFO
class PcBase : public CCharacterBase
{
public:
	TSafeArrayStatic<int, 0xa>	RecentTasks;
	TSafeArrayStatic<PCTaskStatus, 1>	Tasks;
	TSafeArrayStatic<PCTaskStatus, 0x1d>	Quests;
	TSafeArrayStatic<BYTE, 6400 / 8>	BitFlags;
	TSafeArrayStatic<BenefitSelection, 5> ActiveTributeBenefits;
	TSafeArrayStatic<BenefitSelection, 10> ActiveTrophyTributeBenefits;
	ItemBaseContainer	BankItems;
	ItemBaseContainer	SharedBankItems;
	ItemBaseContainer	LimboBufferItems;
    ItemBaseContainer	MercenaryItems;
	ItemBaseContainer	MountKeyRingItems;
	ItemBaseContainer	IllusionKeyRingItems;
	ItemBaseContainer	FamiliarKeyRingItems;
	ItemBaseContainer	AltStorageItems;
	ItemBaseContainer	ArchivedDeletedItems;
	ItemBaseContainer	MailItems;
	HashTable<MailItemData, EqItemGuid, ResizePolicyNoShrink>	MailItemsData;
	TSafeArrayStatic<UINT, 1>	RecentMoves;
	HashTable<DynamicZoneData>	CurrentDynamicZones;
	HashTable<int>	LearnedRecipes;	
	EQList<TradeskillRecipeCount*>	QualifyingRecipeCounts;
	HashTable<int>	NonrepeatableQuests;
	HashTable<int>	CompletedTasks;
	UINT	AlchemyTimestamp;
	bool	bSomethingHome;
	DWORD	LoginTime;
	// more todo here:
	// ...
	//
	__int64 Vitality;
	int AAVitality;
	int FPStuff[0x1d];
};

//aStartingLoad_
// actual size: 0x27c8 in Oct 11 2016 beta (see 57B8C7) - eqmule
/*0x1c4c*/ //ItemIndex	StatKeyRingItemIndex[3];//0xe46 confirmed
//this thing here is an abomination, todo: fix it once and for all.
// its like a frankenstruct mixing in PcBase etc.
//class PcBase: public CharacterBase
typedef struct _CHARINFO {
/*0x0000*/ void*        vtable1;
/*0x0004*/ void*		punknown;
/*0x0008*/ struct _CI_INFO*     charinfo_info;
/*0x000c*/ BYTE         Unknown0x000c[0x10ec];
/*0x10f8*/ struct _BANKARRAY*   pBankArray;
/*0x10fc*/ DWORD        NumBankSlots;//how many bank slots we have
/*0x1100*/ BYTE         Unknown0x1100[0x14];
/*0x1114*/ struct _SHAREDBANKARRAY*     pSharedBankArray;
/*0x1118*/ DWORD        NumSharedSlots;//how many sharedbank slots we have
/*0x111c*/ BYTE         Unknown0x111c[0x30];
/*0x114c*/ struct _MERCEQUIPMENT*     pMercEquipment;
/*0x1150*/ DWORD        NumMercEquipSlots;//how many pMercEquipment slots we have
/*0x1154*/ BYTE         Unknown0x1154[0xc];
/*0x1160*/ DWORD        KeyRing1;//always 0x7d
/*0x1164*/ DWORD        eMount ;//always eItemContainerMountKeyRingItems (27)
/*0x1168*/ struct _KEYRINGARRAY*        pMountsArray;
/*0x116c*/ BYTE         Unknown0x116c[0x10];
/*0x117c*/ DWORD        KeyRing2;//always 0x7d
/*0x1180*/ DWORD        eIllusion ;//always eItemContainerIllusionKeyRingItems (29)
/*0x1184*/ struct _KEYRINGARRAY*        pIllusionsArray;
/*0x1188*/ BYTE         Unknown0x1188[0x10];
/*0x1198*/ DWORD        KeyRing3;//always 0x7d
/*0x119c*/ DWORD        eFamiliar ;//always eItemContainerViewModFamiliarKeyRingItems (31)
/*0x11a0*/ struct _KEYRINGARRAY*        pFamiliarArray;
/*0x11a4*/ BYTE         Unknown0x11a4[0xd4];//PCBase begins in here somwhere, todo: figure it out
/*0x1278*/ __int64		GuildID;//GuildID_0
/*0x1280*/ __int64		FellowshipID;
/*0x1288*/ int			Unknown0x1288;
/*0x128c*/ int			GuildStatus;
/*0x1290*/ int			GuildFlags;
/*0x1294*/ bool			GuildShowSprite;
/*0x1298*/ UINT			CreationTime;
/*0x129c*/ UINT			AccountCreationTime;
/*0x12a0*/ UINT			LastPlayedTime;
/*0x12a4*/ DWORD		MinutesPlayed;
/*0x12a8*/ BYTE			Anonymous;
/*0x12a9*/ bool			bGM;
/*0x12aa*/ bool			bGMStealth;
/*0x12ac*/ DWORD        AAExp;
/*0x12b0*/ BYTE         NobilityRank;
/*0x12b1*/ BYTE         PercentEXPtoAA;
/*0x12b2*/ BYTE         Unknown0x12b2[0x36];
/*0x12e8*/ DWORD        TributeTimer;
/*0x12ec*/ DWORD        BenefitTimer;
/*0x12f0*/ DWORD        CareerFavor;
/*0x12f4*/ BYTE         Unknown0x12f4[0x4];
/*0x12f8*/ DWORD        CurrFavor;
/*0x12fc*/ BYTE         Unknown0x12fc[0x108];
/*0x1404*/ DWORD        RadiantCrystals;
/*0x1408*/ BYTE         Unknown0x1408[0x4];
/*0x140c*/ DWORD        EbonCrystals;
/*0x1410*/ BYTE         Unknown0x1410[0x678];
/*0x1a88*/ __int64      Exp;
/*0x1a90*/ int	        DaysEntitled;
/*0x1a94*/ int	        SpentVeteranRewards;
/*0x1a98*/ bool	        bVeteranRewardEntitled;
/*0x1a99*/ bool	        bAutoConsentGroup;
/*0x1a9a*/ bool	        bAutoConsentRaid;
/*0x1a9b*/ bool	        bAutoConsentGuild;
/*0x1a9c*/ bool	        bPrivateForEqPlayers;
/*0x1aa0*/ long	        AchievementFilesModificationTime;
/*0x1aa4*/ CHAR	        StationID[0x20];
/*0x1ac8*/ EqGuid       Guid;//size 8
/*0x1ad0*/ bool	        bBetaBuffed;
/*0x1ad4*/ int	        Unknown0x1ad4;
/*0x1ad8*/ int	        StartingCity;
/*0x1adc*/ int	        MainLevel;
/*0x1ae0*/ bool	        bShowHelm;
/*0x1ae8*/ __int64      LastTestCopyTime;
/*0x1af0*/ CPlayerPointManager PointManager;
/*0x1b04*/ PointSystemBase PointSystem;
/*0x1B18*/ UINT			LoyaltyVelocity;
/*0x1B1c*/ UINT			LoyaltyTokens;
/*0x1B20*/ bool			bHasLoyaltyInfo;
/*0x1B24*/ ArrayClass_RO<int> OwnedRealEstates;
/*0x1B34*/ ArrayClass_RO<int> OwnedItemRealEstates;
/*0x1B44*/ ArrayClass_RO<int> ArchivedRealEstates;
/*0x1B54*/ CHAR			OverridePetName[0x40];
/*0x1B94*/ bool			bCanRequestPetNameChange;
/*0x1B95*/ CHAR			OverrideFamiliarName[0x40];//guessing 
/*0x1Bd5*/ bool         bCanRequestFamiliarNameChange;//still a guess todo: confirm
/*0x1Bd8*/ _CXSTR		*OverrideMercName[0xb];//0x1Bd8 for sure
/*0x1c04*/ bool			bCanRequestMercNameChange;
/*0x1c08*/ PendingRewardList PendingRewards;//size 0x2c
/*0x1c34*/ UINT         DowntimeReductionTime;
/*0x1c38*/ UINT         DowntimeTimerStart;
/*0x1c3c*/ FLOAT        ActivityValue;
/*0x1c40*/ UINT         NextItemId;
/*0x1c44*/ _CXSTR        *SharedBank;
/*0x1c48*/ _CXSTR        *BankBuffer;
/*0x1c4c*/ _CXSTR        *LimboBuffer;
/*0x1c50*/ _CXSTR        *MercenaryBuffer;
/*0x1c54*/ _CXSTR        *KeyRingBuffer[3];
/*0x1c60*/ _CXSTR        *AltStorageBuffer;
/*0x1c64*/ UINT         AltStorageTimestamp;
/*0x1c68*/ ELockoutCharacterReason LCR;
/*0x1c6c*/ HashTable<ProgressionExperience> ProgressionExp;
/*0x1c7c*/ _CXSTR        *ArchivedStorageBuffer;
/*0x1c80*/ PCXSTR       MailItemsBuffer;
/*0x1c84*/ PCXSTR       MailItemsDataBuffer;
/*0x1c88*/ int          MailItemsOverCapWarningCount;//1C88
/*0x1c8c*/ int			Unknown0x1c8c;
/*0x1c90*/ int			Unknown0x1c90;
/*0x1c94*/ int			Unknown0x1c94;
/*0x1c98*/ int			Unknown0x1c98;
/*0x1c9c*/ BYTE			Unknown0x1c9c;
/*0x1c9d*/ BYTE			Unknown0x1c9d;
/*0x1c9e*/ BYTE         UseAdvancedLooting;     //1c9e confirmed see 49A90C               //0=off 1=on
/*0x1c9f*/ BYTE         MasterLootCandidate;                     //0=off 1=on
/*0x1ca0*/ BYTE         Unknown0x1ca0[0x2bc];
/*0x1f5c*/ DWORD        Krono;
/*0x1f60*/ DWORD        CursorKrono;
/*0x1f68*/ __int64      MercAAExp;// divide this with 3.30f and you get the percent - eqmule
/*0x1f70*/ DWORD        MercAAPoints;//number of unspent merc AA points
/*0x1f74*/ DWORD        MercAAPointsSpent;//number of spent merc AA points
/*0x1f78*/ BYTE		    Unknown0x1f78[0x48];
/*0x1fc0*/ __int64      Vitality;
/*0x1fc8*/ int		    AAVitality;
/*0x1fcc*/ int          FPStuff[0x1d];
/******************* End PCBASE ************/
/************ Todo: Straighten this mess out ***********************/
/*0x2040*/ void*        vtable2;//vtable2_0 below aTimeIsDAndCanU
/*0x2044*/ struct _EQC_INFO*    eqc_info;
/*0x2048*/ struct _SPAWNINFO*   pSpawn;//pSpawn_0
/*0x204c*/ BYTE         UpdateStuff;
/*0x204d*/ BYTE         Unknown0x204d[0x3];
/*0x2050*/ DWORD        ArmorClassBonus;//vtable2+10
/*0x2054*/ DWORD        CurrWeight;//vtable2+14
/*0x2058*/ BYTE         Unknown0x2058[0xc];
/*0x2064*/ DWORD        HPBonus;//vtable2+24
/*0x2068*/ DWORD        ManaBonus;//vtable2+28
/*0x206c*/ DWORD        EnduranceBonus;//vtable2+2c
/*0x2070*/ BYTE         Unknown0x2070[0x4];
/*0x2074*/ DWORD        CombatEffectsBonus;//vtable2+34 Combat Effects in UI
/*0x2078*/ DWORD        ShieldingBonus;//vtable2+38 Melee Shielding in UI
/*0x207c*/ DWORD        SpellShieldBonus;//vtable2+3c Spell Shielding in UI
/*0x2080*/ DWORD        AvoidanceBonus;//vtable2+40 Avoidance in UI
/*0x2084*/ DWORD        AccuracyBonus;//vtable2+44 Accuracy in UI
/*0x2088*/ DWORD        StunResistBonus;//vtable2+48 Stun Resist in UI
/*0x208c*/ DWORD        StrikeThroughBonus;//vtable2+4c Strike Through in UI
/*0x2090*/ DWORD        DoTShieldBonus;//vtable2+50 Dot Shielding in UI
/*0x2094*/ DWORD        DamageShieldMitigationBonus;//vtable2+54 Damage Shield Mitig in UI
/*0x2098*/ DWORD        DamageShieldBonus;//vtable2+58 Damage Shielding in UI
/*0x209c*/ BYTE         Unknown0x209c[0x24];
/*0x20c0*/ DWORD        SkillMinDamageModBonus[0x9];//vtable2+80
/*0x20e4*/ DWORD        HeroicSTRBonus;//vtable2+a4
/*0x20e8*/ DWORD        HeroicINTBonus;//vtable2+a8
/*0x20ec*/ DWORD        HeroicWISBonus;//vtable2+ac
/*0x20f0*/ DWORD        HeroicAGIBonus;//vtable2+b0
/*0x20f4*/ DWORD        HeroicDEXBonus;//vtable2+b4
/*0x20f8*/ DWORD        HeroicSTABonus;//vtable2+b8
/*0x20fc*/ DWORD        HeroicCHABonus;//vtable2+bc
/*0x2100*/ DWORD        HeroicSvMagicBonus;//vtable2+c0
/*0x2104*/ DWORD        HeroicSvFireBonus;//vtable2+c4
/*0x2108*/ DWORD        HeroicSvColdBonus;//vtable2+c8
/*0x210c*/ DWORD        HeroicSvDiseaseBonus;//vtable2+cc
/*0x2110*/ DWORD        HeroicSvPoisonBonus;//vtable2+d0
/*0x2114*/ DWORD        HeroicSvCorruptionBonus;//vtable2+d4
/*0x2118*/ DWORD        HealAmountBonus;//vtable2+d8
/*0x211c*/ DWORD        SpellDamageBonus;//vtable2+dc
/*0x2120*/ BYTE         Unknown0x2120[0x8];
/*0x2128*/ DWORD        ClairvoyanceBonus;//vtable2+e8
/*0x212c*/ DWORD        AttackBonus;//vtable2+ec
/*0x2130*/ DWORD        HPRegenBonus;//vtable2+f0
/*0x2134*/ DWORD        ManaRegenBonus;//vtable2+f4
/*0x2138*/ DWORD        EnduranceRegenBonus;//vtable2+f8
/*0x213c*/ DWORD        AttackSpeed;//vtable2+fc
/*0x2140*/ BYTE         Unknown0x2140[0x320];
/*0x2460*/ struct _XTARGETMGR*  pXTargetMgr;
/*0x2464*/ DWORD        InCombat;
/*0x2468*/ DWORD        Downtime;
/*0x246c*/ DWORD        DowntimeStamp;
/*0x2470*/ BYTE         Unknown0x2470[0x4];
/*0x2474*/ struct _GROUPINFO*   pGroupInfo;
/*0x2478*/ BYTE         Unknown0x2478[0x1c];
/*0x2494*/ DWORD        CharBaseBegin;//we use this for finding the next members of this struct
/*0x2498*/ BYTE         Unknown0x2498[0x4];
/*0x249c*/ void*        pCharacterBase;
/*0x24a0*/ struct _CI2_INFO*    pCI2;//cant find a pointer to this so lets just say its always at pCharacterBase+4
/*0x24a4*/ BYTE         Unknown0x24a4[0x4];
/*0x24a8*/ BYTE         languages[0x20];//CharBaseBegin+14
/*0x24c8*/ BYTE         Unknown0x24c8[0x10];
/*0x24d8*/ CHAR         Name[0x40];//CharBaseBegin+44
/*0x2518*/ CHAR         Lastname[0x20];//CharBaseBegin+84
/*0x2538*/ BYTE         Unknown0x2538[0xc0];
/*0x25f8*/ BYTE         Stunned;//CharBaseBegin+104
/*0x25f9*/ BYTE         Unknown0x25f9[0x3];
/*0x25fc*/ WORD         zoneId;//CharBaseBegin+108 Zone_0
/*0x25fe*/ WORD         instance;
/*0x2600*/ DWORD        standstate;//CharBaseBegin+10c
/*0x2604*/ BYTE         Unknown0x2604[0xdc];
/*0x26e0*/ DWORD        ExpansionFlags;//CharBaseBegin+464
/*0x26e4*/ BYTE         Unknown0x26e4[0x20];
/*0x2704*/ DWORD        BankSharedPlat;//31e4 CharBaseBegin+488
/*0x2708*/ DWORD        BankSharedGold;//CharBaseBegin+48c
/*0x270c*/ DWORD        BankSharedSilver;//CharBaseBegin+490
/*0x2710*/ DWORD        BankSharedCopper;//CharBaseBegin+494
/*0x2714*/ DWORD        BankPlat;//CharBaseBegin+498
/*0x2718*/ DWORD        BankGold;//CharBaseBegin+49c
/*0x271c*/ DWORD        BankSilver;//CharBaseBegin+4a0
/*0x2720*/ DWORD        BankCopper;//CharBaseBegin+4a4
/*0x2724*/ DWORD        STR;//CharBaseBegin+4a8
/*0x2728*/ DWORD        STA;//CharBaseBegin+4ac
/*0x272c*/ DWORD        CHA;//CharBaseBegin+4b0
/*0x2730*/ DWORD        DEX;//CharBaseBegin+4b4
/*0x2734*/ DWORD        INT;//CharBaseBegin+4b8
/*0x2738*/ DWORD        AGI;//CharBaseBegin+4bc
/*0x273c*/ DWORD        WIS;//CharBaseBegin+4c0
/*0x2740*/ DWORD        SavePoison;//CharBaseBegin+4c4
/*0x2744*/ DWORD        SaveMagic;//CharBaseBegin+4c8
/*0x2748*/ DWORD        SaveDisease;//CharBaseBegin+4cc
/*0x274c*/ DWORD        SaveCorruption;//CharBaseBegin+4d0
/*0x2750*/ DWORD        SaveFire;//CharBaseBegin+4d4
/*0x2754*/ DWORD        SaveCold;//CharBaseBegin+4d8
/*0x2758*/ BYTE			Unknown0x2758[0x70];
/*0x27c8*/
} CHARINFO, *PCHARINFO;

typedef struct _INVENTORYARRAY {
union {
/*0x00*/ struct _INVENTORY Inventory;
/*0x00*/ struct _CONTENTS* InventoryArray[NUM_INV_SLOTS];
};
} INVENTORYARRAY, *PINVENTORYARRAY;

//aSdeityD CharInfo2__CharInfo2
// actual size: 0x9a28 2016 04 13 test (see 85B22A) - eqmule
typedef struct _CHARINFO2 {
/*0x0000*/ BYTE         Unknown0x0000[0x10];
/*0x0010*/ DWORD         BaseProfile;
/*0x0014*/ DWORD         Unknown0x0014;
/*0x0018*/ struct _INVENTORYARRAY*      pInventoryArray;
/*0x001c*/ BYTE         Unknown0x001c[0x48];
/*0x0064*/ struct _SPELLBUFF    Buff[NUM_LONG_BUFFS];
/*0x0ed4*/ struct _SPELLBUFF    ShortBuff[NUM_SHORT_BUFFS];
/*0x21bc*/ DWORD        ZoneBuffs[NUM_BUFF_SLOTS]; // caster IDs for the Effects Window of whoever cast the buff on you in the same zone...
/*0x2340*/ DWORD        ZoneSongs[NUM_BUFF_SLOTS]; // just a guess
/*0x24c4*/ DWORD        SpellBook[NUM_BOOK_SLOTS];
/*0x3144*/ DWORD        MemorizedSpells[0x10];
/*0x3184*/ DWORD        Skill[0x64];
/*0x3314*/ DWORD        InnateSkill[0x19];
/*0x3378*/ BYTE         Unknown0x3378[0xb4];
/*0x342c*/ DWORD		Unknown0x342c[0x9];
/*0x3450*/ DWORD        Gender;
/*0x3454*/ DWORD        Race;
/*0x3458*/ DWORD        Class;
/*0x345c*/ BYTE         Unknown0x345c[0x10];
/*0x346c*/ DWORD        Level;
/*0x3470*/ DWORD        Mana;
/*0x3474*/ DWORD        Endurance;
/*0x3478*/ DWORD        BaseHP;
/*0x347c*/ DWORD        BaseSTR;
/*0x3480*/ DWORD        BaseSTA;
/*0x3484*/ DWORD        BaseCHA;
/*0x3488*/ DWORD        BaseDEX;
/*0x348c*/ DWORD        BaseINT;
/*0x3490*/ DWORD        BaseAGI;
/*0x3494*/ DWORD        BaseWIS;
/*0x3498*/ BYTE         Unknown0x3498[0x4];
/*0x349c*/ DWORD        Plat;
/*0x34a0*/ DWORD        Gold;
/*0x34a4*/ DWORD        Silver;
/*0x34a8*/ DWORD        Copper;
/*0x34ac*/ DWORD        CursorPlat;
/*0x34b0*/ DWORD        CursorGold;
/*0x34b4*/ DWORD        CursorSilver;
/*0x34b8*/ DWORD        CursorCopper;
/*0x34bc*/ BYTE         Unknown0x34bc[0x28];
/*0x34e4*/ DWORD        thirstlevel;
/*0x34e8*/ DWORD        hungerlevel;
/*0x34ec*/ BYTE         Unknown0x34ec[0x4];
/*0x34f0*/ DWORD        Shrouded;
/*0x34f4*/ BYTE         Unknown0x34f4[0x74];
/*0x3568*/ TSafeArrayStatic<WorldLocation, 5> BoundLocations;//size 0x64
/*0x35cc*/ DWORD        ArmorType[0x16];
/*0x3624*/ BYTE         Unknown0x3624[0x160];
/*0x3784*/ AALIST       AAList[AA_CHAR_MAX_REAL];
/*0x4594*/ DWORD        BodyColor[0x9];
/*0x45b8*/ BYTE         Unknown0x45b8[0x2000];
/*0x65b8*/ DWORD        CombatAbilities[NUM_COMBAT_ABILITIES];
/*0x6a68*/ DWORD        SpellRecastTimer[0xC];
/*0x6a98*/ BYTE         Unknown0x6a98[0x70];
/*0x6b08*/ DWORD        CombatAbilityTimes[0x14];
/*0x6b58*/ BYTE         Unknown0x6b58[0x1dc4];
/*0x891c*/ DWORD        Deity;
/*0x8920*/ BYTE         Unknown0x8920[0xa0];
/*0x89c0*/ DWORD        Drunkenness;
/*0x89c4*/ BYTE         Unknown0x89c4[0x10];
/*0x89d4*/ DWORD        AAPoints;
/*0x89d8*/ BYTE         Unknown0x89d8[0x100c];
/*0x99e4*/ DWORD        AAPointsSpent;
/*0x99e8*/ DWORD        AAPointsAssigned;
/*0x99ec*/ BYTE         Unknown0x99c4[0x3c];
/*0x9a28*/
} CHARINFO2, *PCHARINFO2;

typedef struct _MODELINFONAME {
/*0x00*/    DWORD Unknown0000;
/*0x04*/    DWORD Unknown0004;
/*0x08*/    PCHAR Name;
/*0x0c*/
} MODELINFONAME, *PMODELINFONAME;

typedef struct _MODELINFO_GENERIC {
/*0x00*/    DWORD Type;
/*0x04*/    DWORD Unknown0x04;
/*0x08*/    DWORD Unknown0x08;
/*0x0c*/    DWORD Unknown0x0c;
/*0x10*/    DWORD Unknown0x10;
/*0x14*/
} MODELINFO_GENERIC, *PMODELINFO_GENERIC;

typedef struct _MODELINFO_48 {
/*0x00*/    struct _MODELINFO_GENERIC Header;
/*0x14*/    FLOAT Float1;
/*0x18*/    FLOAT Float2;
/*0x1c*/    FLOAT Float3;
/*0x20*/    struct _MODELINFONAME *pModelName;
/*0x24*/
} MODELINFO_48, *PMODELINFO_48;

typedef struct _MODELINFO_51 {
/*0x00*/    struct _MODELINFO_GENERIC Header;
/*0x14*/    struct _MODELINFONAME *pFontName;
/*0x18*/    PCHAR LabelText;
/*0x1c*/
} MODELINFO_51, *PMODELINFO_51;

// 10/09/2003 build      plazmic
// 12/24/2003 verified   Amadeus
typedef struct _MODELINFO {
/*0x00*/    DWORD   Unknown;
/*0x04*/    PCHAR NameDAG;
/*0x08*/    struct _MODELINFO_GENERIC *pModelInfo;
/*0x0c*/    struct _MODELINFO *pNextInChain;
/*0x10*/    PVOID pUnknown;
/*0x14*/    struct _MODELINFONAME *pTrack1;
/*0x18*/    struct _MODELINFONAME *pTrack2;
   //moredata
} MODELINFO, *PMODELINFO;

// 4/30/2003 build      eqmule
typedef struct _CAMERAINFO {
/*0x00*/   DWORD Unknown0x00;
/*0x04*/   DWORD Unknown0x04;
/*0x08*/   BYTE Unknown0x08[0x8];
/*0x10*/   FLOAT Y;
/*0x14*/   FLOAT X;
/*0x18*/   FLOAT Z;
/*0x1c*/   FLOAT LightRadius;
/*0x20*/
} CAMERAINFO, *PCAMERAINFO;


#define MODEL_LABEL                     0 
#define MODEL_LABELINFO                 1
#define MODEL_NULL2                     2
#define MODEL_HELD_R                    3
#define MODEL_HELD_L                    4
#define MODEL_SHIELD                    5
#define MODEL_NULL6                     6

/*
//Work in progress...
#define MODEL_HEAD                      0x00
#define MODEL_HEAD_POINT                0x01
#define MODEL_NULL_1                    0x02
#define MODEL_HELD_R                    0x03
#define MODEL_HELD_L                    0x04
#define MODEL_SHIELD                    0x05
#define MODEL_NULL_2                    0x06
#define MODEL_TUNIC                     0x07
#define MODEL_HAIR                      0x08
#define MODEL_BEARD                     0x09
#define MODEL_CHEST                     0x0a
#define MODEL_GLOVES                    0x0b
#define MODEL_GLOVES2                   0x0c
*/

typedef struct _ARGBCOLOR {
    union {
        struct {
            BYTE B;
            BYTE G;
            BYTE R;
            BYTE A;
        };
        DWORD ARGB;
    };
} ARGBCOLOR, *PARGBCOLOR;

// actual size: 0x14 05-14-2013 - eqmule
typedef struct _ARMOR {
/*0x00*/ UINT  ID; //idfile on Lucy
/*0x04*/ UINT  Var;
/*0x08*/ UINT  Var2;
/*0x0c*/ UINT  NewArmorID;
/*0x10*/ UINT  NewArmorID2;
/*0x14*/
} ARMOR, *PARMOR;

// 10-22-2003 Lax
typedef struct _EQUIPMENT {
   union {
      struct// EQUIPARRAY
      {
         struct _ARMOR Item[9];
      };// Array;
      struct //EQUIPUNIQUE
      {
         struct _ARMOR Head;//0x14
         struct _ARMOR Chest;
         struct _ARMOR Arms;
         struct _ARMOR Wrists;
         struct _ARMOR Hands;
         struct _ARMOR Legs;
         struct _ARMOR Feet;
         struct _ARMOR Primary;
         struct _ARMOR Offhand;
      };// Unique;
   };
} EQUIPMENT, *PEQUIPMENT;

// 10-14-07 - ieatacid
typedef struct _FELLOWSHIPMEMBER {
/*0x00*/  DWORD   WorldID;
/*0x04*/  CHAR    Name[0x40];
/*0x44*/  DWORD   ZoneID;
/*0x48*/  DWORD   Level;
/*0x4c*/  DWORD   Class;
/*0x50*/  DWORD   LastOn;    // FastTime() timestamp
/*0x54*/
} FELLOWSHIPMEMBER, *PFELLOWSHIPMEMBER;
struct FSDATA
{
	CHAR Strings[0x20];//need to check what these are...
};
// 20121128 - ieatacid  0x9e4
// Dec 13 2016 - eqmule  0x9e8 see 5C3F9F
typedef struct _FELLOWSHIPINFO {
/*0x000*/  DWORD  Version;
/*0x004*/  DWORD  Version2;//just place holders for now, ill fix these later
/*0x008*/  DWORD  Version3;
/*0x00c*/  DWORD  Version4;
/*0x010*/  DWORD  FellowshipID;
/*0x014*/  DWORD  FellowshipID2;//guild does this to, need to figure out why
/*0x018*/  CHAR   Leader[0x40];
/*0x058*/  CHAR   MotD[0x400];
/*0x458*/  DWORD  Members;
/*0x45c*/  struct _FELLOWSHIPMEMBER  FellowshipMember[0xc];//size 0xc * 0x54 = 0x3f0
/*0x84c*/  DWORD  Sync;
/*0x850*/  FSDATA Somedata[0xc];//size 0x180
/*0x9d0*/  bool bExpSharingEnabled[0xc];
/*0x9dc*/  bool bSharedExpCapped[0xc];
/*0x9e8*/
} FELLOWSHIPINFO, *PFELLOWSHIPINFO;
//found these at B0DD28 in eqgame.exe dated Aug 15 2016 -eqmule

// offsets are relative to their position in _LAUNCHSPELLDATA
typedef struct _ITEMLOCATION {
/*0x0c*/	ItemContainerInstance Location;
/*0x10*/	short InvSlot;
/*0x12*/	short BagSlot;
/*0x14*/	short AugSlot;
/*0x16*/
} ITEMLOCATION, *PITEMLOCATION;

enum ItemSpellTypes
{
	eActivatableSpell,
	eProcSpell,
	eWornSpell,
	eFocusSpell,
	eScrollSpell,
	eFocus2Spell,
	eMountSpell,
	eIllusionSpell,
	eFamiliarSpell
};

typedef struct _LAUNCHSPELLDATA {
/*0x00*/ UINT    SpellETA;           //Calculated TimeStamp when current spell being cast will land. 0 while not casting.
/*0x04*/ int     SpellID;            // -1 = not casting a spell
/*0x08*/ BYTE    SpellSlot;          // 0xFF if not casting, otherwise it's the spell gem number (0 - 8)
/*0x09*/ BYTE    SpellLevel;
/*0x0c*/ struct   _ITEMLOCATION ItemLocation;
/*0x18*/ ItemSpellTypes ItemCastType;
/*0x1c*/ int    ItemID;
/*0x20*/ FLOAT    CastingY;
/*0x24*/ FLOAT    CastingX;
/*0x28*/ int     DamageID;
/*0x2c*/ UINT    TargetID;
/*0x30*/ bool    bDetrimental;
/*0x31*/ bool    bResetMeleeTimers;
/*0x32*/ bool    bResetAAOnNotTakeHold;
/*0x33*/ bool    bFreeTarget;
/*0x34*/ FLOAT   TargetPosY;
/*0x38*/ FLOAT   TargetPosX;
/*0x3c*/ FLOAT   TargetPosZ;
/*0x40*/ bool    bTwinCast;
/*0x41*/ bool    bLanded;
/*0x42*/ bool    bNPCTarget;
/*0x43*/ bool    bHasHitRecourse;
/*0x44*/ FLOAT   AnchorPosY;
/*0x48*/ FLOAT   AnchorPosX;
/*0x4c*/ FLOAT   AnchorPosZ;
/*0x50*/ bool    bIgnoreRange;
/*0x51*/ bool    bResetAAOnNotTakeHoldSuccess;
/*0x52*/
bool IsCasting() const
{
	return (SpellID != -1);
}
} LAUNCHSPELLDATA, *PLAUNCHSPELLDATA;

template <class Type> class TListNode
{
	/*0x0004*/ Type *pPrev;
	/*0x0008*/ Type *pNext;
	/*0x000c*/ BYTE		Unknown0x000c[0xc];
};
class PlayerBaseVfTable
{
	/*0x0000*/ void*	vtable;
};
class PlayerBase : public PlayerBaseVfTable,public TListNode<PlayerBase>
{
public:

};

enum EActorType
{
	Undefined,
	Player,
	Corpse,
	Switch,
	Missile,
	Object,
	Ladder,
	Tree,
	Wall,
	PlacedObject
};

class CPhysicsInfo
{
public:
	/*0x00*/ FLOAT	Y;
	/*0x04*/ FLOAT	X;
	/*0x08*/ FLOAT	Z;
	/*0x0c*/ FLOAT	SpeedY;
	/*0x10*/ FLOAT	SpeedX;
	/*0x14*/ FLOAT	SpeedZ;
	/*0x18*/ FLOAT	SpeedRun;
	/*0x1c*/ FLOAT	Heading;
	/*0x20*/ FLOAT	Angle;
	/*0x24*/ FLOAT	AccelAngle;
	/*0x28*/ FLOAT	SpeedHeading;
	/*0x2c*/ FLOAT	CameraAngle;
	/*0x30*/
};
#define SPAWNINFOHEADER \
/*0x0000*/ void*	vtable; \
/*0x0004*/ struct _SPAWNINFO *pPrev; \
/*0x0008*/ struct _SPAWNINFO *pNext; \
/*0x000c*/ void	*List; \
/*0x0010*/

#define InnateETA 0xc
//we dont need a fully implemented version
//this does the job just fine
template <typename TheType,UINT _Len> class TCircularBuffer
{
public:
	TheType Type[_Len];
	UINT	Len;
	UINT	Index;
};
struct SDoCollisionMovementStats
{
/*0x00*/	CPhysicsInfo Source; /*size 0x30 */
/*0x30*/	FLOAT DestY;
/*0x34*/	FLOAT DestX;
/*0x38*/	FLOAT DestZ;
/*0x3c*/	FLOAT SourceFloor;
/*0x40*/	FLOAT DestFloor;
/*0x44*/	CPhysicsInfo Dest;
/*0x74*/
};

#define PLAYERZONECLIENT \
/*0x018C*/ bool		bAlwaysShowAura; \
/*0x0190*/ int		HPCurrent; \
/*0x0194*/ UINT		LastTimeStoodStill; \
/*0x0198*/ FLOAT		CameraOffset; \
/*0x019C*/ FLOAT		ViewHeight; \
/*0x01A0*/ bool		PvPFlag; \
/*0x01A4*/ int		Stuff; \
/*0x01A8*/ CHAR		DragNames[0x2][0x40]; \
/*0x0228*/ UINT		MasterID; \
/*0x022C*/ int		EnduranceCurrent; \
/*0x0230*/ int		ManaCurrent; \
/*0x0234*/ UINT		LastRefresh; \
/*0x0238*/ bool		bAnimationOnPop; \
/*0x023C*/ UINT		NextSwim; \
/*0x0240*/ UINT		LastTrapDamageTime; \
/*0x0244*/ BYTE		FishingEvent; \
/*0x0248*/ UINT		SpellGemETA[0xd]; /*InnateETA is now the last member in this array */ \
/*0x027C*/ CHAR		LoginRelated[0x20]; \
/*0x029C*/ int		PrimaryTintIndex; \
/*0x02A0*/ CHAR		DraggingPlayer[0x40]; \
/*0x02E0*/ int		LastCastNum; \
/*0x02E4*/ bool		bAttackRelated; \
/*0x02E8*/ UINT		StunTimer; \
/*0x02EC*/ void		*pTouchingSwitch; /* need to get that in here : struct _EQSWITCH */ \
/*0x02F0*/ CHAR		Handle[0x20]; \
/*0x0310*/ int		GuildStatus; \
/*0x0314*/ DWORD		PotionTimer; \
/*0x0318*/ UINT		LastMealTime; /* last time we eat or drank */ \
/*0x031C*/ int		HideMode; \
/*0x0320*/ bool		bSummoned; /* by a PC or by anyone? need to investigate */ \
/*0x0324*/ FLOAT		AnimationSpeedRelated; \
/*0x0328*/ int		ManaMax; \
/*0x032C*/ struct _LAUNCHSPELLDATA	CastingData; /* size: 0x54 */ \
/*0x0380*/ UINT		LastSecondaryUseTime; \
/*0x0384*/ struct _SPAWNINFO*	pViewPlayer; \
/*0x0388*/ int		Trader;	/* found in CEverQuest__RightClickedOnPlayer_x */ \
/*0x038C*/ BYTE		StandState; \
/*0x038D*/ BYTE		InPvPArea; /* are we in a PvP area? */ \
/*0x0390*/ int		RealEstateID; \
/*0x0394*/ BYTE		Level; \
/*0x0398*/ int		RealEstateItemId; \
/*0x039C*/ int		HPMax; \
/*0x03A0*/ UINT		LastTick; \
/*0x03A4*/ BYTE		HoldingAnimation; /* todo: create enum for this byte. Holding: Nothing=0 A RightHand Weapon=1 A Shield=2 Dual Wielding Two Weapons=3 A Spear=4 A LeftHand Weapon=5 A Two Handed Weapon=6 A bow=7 */ \
/*0x03A8*/ struct _EQC_INFO*	spawneqc_info; \
/*0x03AC*/ UINT		RespawnTimer; /* its actually TimeOfDeath...TimeStamp of when RespawnWnd will close - 0 when you're alive */ \
/*0x03B0*/ bool		bOfflineMode; \
/*0x03B4*/ int		berserker; \
/*0x03B8*/ FLOAT		RunSpeed; /*0.70 on runspeed 5... */ \
/*0x03BC*/ UINT		CorpseDragCount; \
/*0x03C0*/ void		*pRaceGenderInfo; /* todo this is not a void* so... map the CRaceGenderInfo class */ \
/*0x03C4*/ FLOAT		FallingStartZ; \
/*0x03C8*/ BYTE		FindBits; \
/*0x03CC*/ UINT		MinuteTimer; \
/*0x03D0*/ UINT		CombatSkillUsed[0x2]; \
/*0x03D8*/ int		AltAttack; \
/*0x03DC*/ DWORD		**ppUDP; /* UdpLibrary::UdpConnection? */ \
/*0x03E0*/ BYTE		FD; \
/*0x03E4*/ UINT		SpellCooldownETA; \
/*0x03E8*/ UINT		NextIntimidateTime; \
/*0x03EC*/ int		Anon; /* found in EQPlayer__SetNameSpriteTint_x */ \
/*0x03F0*/ UINT		LastRangedUsedTime; \
/*0x03F4*/ FLOAT		MyWalkSpeed; \
/*0x03F8*/ bool		LFG; \
/*0x03FC*/ UINT		LastResendAddPlayerPacket; \
/*0x0400*/ int		CurrIOState; \
/*0x0404*/ int		WarCry; \
/*0x0408*/ UINT		LastPrimaryUseTime; \
/*0x040C*/ int		SomeData[0x2]; \
/*0x0414*/ int		SomethingElse; \
/*0x0418*/ bool		bSwitchMoved; /* true when a door moves near the spawn */ \
/*0x0419*/ BYTE		Blind; \
/*0x041C*/ FLOAT		GetMeleeRangeVar1; /* used by GetMeleeRange */ \
/*0x0420*/ int		IsAttacking; /* need to investigate */ \
/*0x0424*/ int		DontKnowYet; \
/*0x0428*/ BYTE		HmmWhat; /* todo: figure out */ \
/*0x0429*/ CHAR		Suffix[0x80]; \
/*0x04A9*/ CHAR		GM; \
/*0x04AC*/ FLOAT		MissileRangeToTarget; \
/*0x04B0*/ BYTE		Type2; /* check */ \
/*0x04B4*/ int		DoSpecialMelee; \
/*0x04B8*/ bool		Linkdead; \
/*0x04B9*/ BYTE		Light; \
/*0x04BA*/ bool		Mercenary; \
/*0x04BB*/ BYTE		IsPassenger; /* if u are on a boat or airship or whatever */ \
/*0x04BC*/ BYTE		TitleVisible; \
/*0x04C0*/ DWORD		LoginSerial; \
/*0x04C4*/ CPhysicsInfo	LastCollision; \
/*0x04F4*/ bool		Sneak; \
/*0x04F5*/ BYTE		CharClass; /* Im pretty sure this isnt working */ \
/*0x04F8*/ UINT		ACounter; /* not sure what this one is for*/ \
/*0x04FC*/ CHAR		Title[0x80]; \
/*0x057C*/ BYTE		LastAttack; \
/*0x0580*/ FLOAT		BearingToTarget; \
/*0x0584*/ int		Deity; \
/*0x0588*/ int		AARank;/* this really is the title id */ \
/*0x058C*/ UINT		CombatSkillTicks[0x2]; \
/*0x0594*/ bool		bStationary; \
/*0x0598*/ DWORD		Meditating; \
/*0x059C*/ UINT		EnduranceMax; \
/*0x05A0*/ DWORD		Zone; \
/*0x05A4*/ int		NpcTintIndex; \
/*0x05A8*/ int		PetID; \
/*0x05AC*/ UINT		SitStartTime; \
/*0x05B0*/ BYTE		IntimidateCount; \
/*0x05B1*/ EqItemGuid 	realEstateItemGuid; \
/*0x05C3*/ BYTE		GMRank; /* i think */ \
/*0x05C4*/ bool		bShowHelm; \
/*0x05C8*/ __int64	GuildID; \
/*0x05D0*/ bool		bBetaBuffed; \
/*0x05D1*/ bool		bTempPet; \
/*0x05D4*/ int		SecondaryTintIndex; \
/*0x05D8*/ int		Buyer; \
/*0x05DC*/ bool		bBuffTimersOnHold; /* no you can't control this client side so unless you want to get banned leave it alone */ \
/*0x05E0*/ UINT		FishingETA; \
/*0x05E4*/ DWORD	LastCastTime; \
/*0x05E8*/ FLOAT	MerchantGreed; \
/*0x05EC*/ UINT		TimeStamp; /* updates all the time including when on a mount */ \
/*0x05F0*/ int		AFK;
/*0x05F4*/


class CParticlePointInterface
{
	//we dont actually need this for now.
};
class CLightInterface
{
	//we dont actually need this for now.
};
class ActorAnimation
{
	//we dont actually need this for now
	//but it has members so todo: fill in.
};
template <typename TheType> class TList
{
public:
	TheType* pFirst;
	TheType* pLast;
};
class CObjectGroupStageInstance : public TListNode<CObjectGroupStageInstance>
{
public:
	void* pActor1;//CActorInterface
	void* pActor2;//CActorInterface
	void* pStage;//CObjectGroupStage
};
class CActorApplicationData
{

};
class ActorBase
{
public:
/*0x0f7C*/ void		*vfTableActorClient;
/*0x0f68*/ CHAR		TextureType;
/*0x0f69*/ CHAR		Material;
/*0x0f6a*/ CHAR		Variation;
/*0x0f6b*/ CHAR		HeadType;
/*0x0f6c*/ BYTE		FaceStyle;
/*0x0f6d*/ BYTE		HairColor;
/*0x0f6e*/ BYTE		FacialHairColor;
/*0x0f6f*/ BYTE		EyeColor1;
/*0x0f70*/ BYTE		EyeColor2;
/*0x0f71*/ BYTE		HairStyle;
/*0x0f72*/ BYTE		FacialHair;
/*0x0f74*/ signed int	Race;
/*0x0f78*/ signed int	Race2;
/*0x0f94*/ signed int	Class;
/*0x0f98*/ BYTE		Gender;
/*0x0f81*/ CHAR		ActorDef[0x40];
/*0x0fc4*/ UINT		ArmorColor[0x9];
/*0x0fe8*/ bool		bShowHelm;
/*0x0fec*/ int		Heritage;               //drakkin only face setting
/*0x0ff0*/ int		Tattoo;                 //drakkin only face setting
/*0x0ff4*/ int		Details;                //drakkin only face setting
/*0x0ff8*/ struct _EQUIPMENT	ActorEquipment;  //0x0ff8 is confirmed // size 0xb4
/*0x10ac*/
};
class ActorClient : public ActorBase
{
public:
//EQLIB_OBJECT class CVector3 const & ActorClient::GetPosition(void)const;
//EQLIB_OBJECT void ActorClient::GetPosition(class CVector3 *)const;
public:
/*0x0f7C*/ int		LeftEyeMaterialIndex;
/*0x0f80*/ int		RightEyeMaterialIndex;
/*0x0f84*/ CParticlePointInterface* m_pParticlePoints[0xa];
/*0x0fac*/ void* pLowerBones;
/*0x10e0*/ void* pUpperBones;
/*0x10fc*/ void*	pcactorex; // todo: move to ActorInterface*
/*0x10e8*/ CLightInterface	*pLight;
/*0x10ec*/ ActorAnimation	*pActorAnimation;
/*0x10f0*/ TList<CObjectGroupStageInstance> StageInstances;//size 0x8
/*0x10f8*/ bool		bActiveTransition;
/*0x10Fc*/ UINT		CurrentStage;
/*0x1100*/ FLOAT	ZOffset;
/*0x1104*/ FLOAT	TempY;//related to ZOffset adjustments I *think*
/*0x1108*/ FLOAT	TempX;
/*0x110c*/ FLOAT	TempZ;
/*0x1110*/ bool		bReplacedStaticObject;
/*0x1114*/ int		PartialFaceNumber;
/*0x1118*/ bool		bNewArmorDisabled;
/*0x111c*/ CActorApplicationData* pAppData;
/*0x1120*/
};
class PlayerAnimationBase
{
	//todo: add members and maybe a vftable
};
class CLineBase
{
public:
/*0x00*/	FLOAT OriginY;
/*0x04*/	FLOAT OriginX;
/*0x08*/	FLOAT OriginZ;
/*0x0c*/	FLOAT DirectionY;
/*0x10*/	FLOAT DirectionX;
/*0x14*/	FLOAT DirectionZ;
/*0x18*/
};
class CLineSegment : public CLineBase
{
	//no members here

};
class CCapsule : public CLineSegment
{
public:
/*0x18*/	FLOAT	Radius;
/*0x1c*/
};
struct PhysicsEffect
{
/*0x00*/ int SpellID;
/*0x04*/ int CasterID;
/*0x08*/ int EffectID;
/*0x0c*/ int BaseEffect;
/*0x10*/
};

enum InvisibleTypes
{
	eAll,
	eUndead,
	eAnimal
};

enum GravityBehavior
{
	Ground,
	Flying,
	Levitating,
	Water,
	Floating,//boat
	LevitateWhileRunning
};
class PhysicsBase
{
public:	
/*0x1fA4*/ void*	vtable2;
/*0x1FA8*/	bool bApplyGravity;
};
class PlayerPhysics : public PhysicsBase
{
public:
/*0x1FAC*/	struct _SPAWNINFO*	pSpawn;//PlayerBase*
/*0x1FB0*/	GravityBehavior Levitate;
//bobbing control
/*0x1Fb4*/	int UpDownIndex;
/*0x1Fb8*/	int LeftRightIndex;
/*0x1Fbc*/	int UpDownSpeed;
/*0x1Fc0*/	int LeftRightSpeed;
/*0x1Fc4*/	FLOAT LeftRightDist;
/*0x1Fc8*/	FLOAT UpDownDist;
/*0x1Fcc*/
};
class PlayerPhysicsClient : public PlayerPhysics
{
public:
/*0x1Fb8*/
};

//this is the size of EQPlayer__EQPlayer_x
//aka "PlayerClient"
// actual size 0x1FE8 in Oct 17 2016 Live (see 0x5D668A) - eqmule
typedef struct _SPAWNINFO {
	SPAWNINFOHEADER
/* ******************** PlayerBase Starts Here ***************** */
/*0x0010*/ FLOAT	JumpStrength;
/*0x0014*/ FLOAT	SwimStrength;
/*0x0018*/ FLOAT	SpeedMultiplier;
/*0x001c*/ FLOAT	AreaFriction;
/*0x0020*/ FLOAT	AccelerationFriction;
/*0x0024*/ EActorType CollidingType; /* ok finally had time to get this one right, when we collide with something this gets set. */
/*0x0028*/ FLOAT	FloorHeight;
/*0x002c*/ bool		bSinksInWater;
/*0x0030*/ UINT		PlayerTimeStamp; /* doesn't update when on a Vehicle (mounts/boats etc) */
/*0x0034*/ UINT		LastTimeIdle;
/*0x0038*/ CHAR		Lastname[0x20];
/*0x0058*/ FLOAT	AreaHPRegenMod; /*from guild hall pools etc. */
/*0x005c*/ FLOAT	AreaEndRegenMod;
/*0x0060*/ FLOAT	AreaManaRegenMod;
/*0x0064*/ FLOAT	Y;
/*0x0068*/ FLOAT	X;
/*0x006c*/ FLOAT	Z;
/*0x0070*/ FLOAT	SpeedY;
/*0x0074*/ FLOAT	SpeedX;
/*0x0078*/ FLOAT	SpeedZ;
/*0x007c*/ FLOAT	SpeedRun;
/*0x0080*/ FLOAT	Heading;
/*0x0084*/ FLOAT	Angle;
/*0x0088*/ FLOAT	AccelAngle;
/*0x008c*/ FLOAT	SpeedHeading;
/*0x0090*/ FLOAT	CameraAngle;
/*0x0094*/ UINT		UnderWater; /*LastHeadEnvironmentType */
/*0x0098*/ UINT		LastBodyEnvironmentType;
/*0x009c*/ UINT		LastFeetEnvironmentType;
/*0x00a0*/ BYTE		HeadWet; /*these really are environment related, like lava as well for example */
/*0x00a1*/ BYTE		FeetWet;
/*0x00a2*/ BYTE		BodyWet;
/*0x00a3*/ BYTE		LastBodyWet;
/*0x00a4*/ CHAR		Name[0x40];             /* ie priest_of_discord00 */
/*0x00e4*/ CHAR		DisplayedName[0x40];    /* ie Priest of Discord*/
/*0x0124*/ BYTE		PossiblyStuck;          /* never seen this be 1 so maybe it was used a a point but not now... */
/*0x0125*/ BYTE		Type;
/*0x0128*/ DWORD**	BodyType;	/* this really should be renamed to charprops or something its broken anyway*/
/*0x012c*/ BYTE		CharPropFiller[0xc]; /* well since the above is a CharacterPropertyHash we have to pad here...*/
/*0x0138*/ FLOAT	AvatarHeight;           /* height of avatar from groundwhen standing*/
/*0x013c*/ FLOAT	Height;
/*0x0140*/ FLOAT	Width;
/*0x0144*/ FLOAT	Length;
/*0x0148*/ DWORD	SpawnID;
/*0x014c*/ DWORD	PlayerState;         /* 0=Idle 1=Open 2=WeaponSheathed 4=Aggressive 8=ForcedAggressive 0x10=InstrumentEquipped 0x20=Stunned 0x40=PrimaryWeaponEquipped 0x80=SecondaryWeaponEquipped */
/*0x0150*/ struct _SPAWNINFO*	Vehicle;    /* NULL until you collide with a vehicle (boat,airship etc) */
/*0x0154*/ struct _SPAWNINFO*	Mount;      /* NULL if no mount present */
/*0x0158*/ struct _SPAWNINFO*	Rider;      /* _SPAWNINFO of mount's rider */
/*0x015c*/ DWORD	Unknown0x015c;
/*0x0160*/ bool		Targetable;	/* true if mob is targetable */
/*0x0161*/ bool		bTargetCyclable;
/*0x0162*/ bool		bClickThrough;
/*0x0163*/ bool		bBeingFlung;
/*0x0164*/ UINT		FlingActiveTimer;
/*0x0168*/ UINT		FlingTimerStart;
/*0x016c*/ bool		bFlingSomething;
/*0x0170*/ FLOAT	FlingY;
/*0x0174*/ FLOAT	FlingX;
/*0x0178*/ FLOAT	FlingZ;
/*0x017c*/ bool		bFlingSnapToDest;
/*0x0180*/ int		SplineID;
/*0x0184*/ int		SplineRiderID;
/* *********************** PlayerBase Ends Here ********************** */
/* ******************** PlayerZoneClient Starts Here ***************** */
/*0x0188*/ UINT		LastIntimidateUse;
/*0x018c*/ PLAYERZONECLIENT
/*0x0604*/
/*0x0604*/ TCircularBuffer<SDoCollisionMovementStats, 0x14>MovementStats; /* size (0x74 * 0x14) +8 = 0x918 */ \
/*0x0f1c*/ struct _SPAWNINFO*	WhoFollowing; // NULL if autofollow off I think this isnt a full spawninfo struct, it looks like its a PlayerClient* so todo: fix that...
/*0x0f20*/ UINT		GroupAssistNPC[0x1];
/*0x0f24*/ UINT		RaidAssistNPC[0x3];
/*0x0f30*/ UINT		GroupMarkNPC[0x3];
/*0x0f3c*/ UINT		RaidMarkNPC[0x3];
/*0x0f48*/ UINT		TargetOfTarget;
/*0x0f4c*/ BYTE		PhysStuff[0x20];
/*0x0f6c*/ UINT		ParticleCastStartTime;
/*0x0f70*/ UINT		ParticleCastDuration;
/*0x0f74*/ int		ParticleVisualSpellNum;
/*0x0f78*/ UINT		Uknown0x0f78;
/*0x0f7C*/ ActorClient	mActorClient;          // start of ActorClient struct
/*0x1138*/ PlayerAnimationBase *pAnimation;
/*0x113c*/ FLOAT	MeleeRadius;  // used by GetMeleeRange
/*0x1140*/ UINT		CollisionCounter;
/*0x1144*/ FLOAT	CachedFloorLocationY;
/*0x1148*/ FLOAT	CachedFloorLocationX;
/*0x114c*/ FLOAT	CachedFloorLocationZ;
/*0x1150*/ FLOAT	CachedFloorHeight;
/*0x1154*/ FLOAT	CachedCeilingLocationY;
/*0x1158*/ FLOAT	CachedCeilingLocationX;
/*0x115c*/ FLOAT	CachedCeilingLocationZ;
/*0x1160*/ FLOAT	CachedCeilingHeight;
/*0x1164*/ CCapsule StaticCollision;//size 0x1c
/*0x1180*/ ArrayClass_RO<PhysicsEffect> mPhysicsEffects;//size is 0x10
/*0x1190*/ ArrayClass_RO<bool> PhysicsEffectsUpdated;//size is 0x10
/* ********************* PlayerZoneClient Ends Here ******************* */
/* ********************** PlayerClient Starts Here ******************** */
/*0x11A0*/ int		Animation; //IT MUST BE at 0x1188 /* Current Animation Playing. */
/*0x118c*/ int		NextAnim;
/*0x1190*/ int		CurrLowerBodyAnim;
/*0x1194*/ int		NextLowerBodyAnim;
/*0x1198*/ int		CurrLowerAnimVariation;
/*0x119c*/ int		CurrAnimVariation;
/*0x11a0*/ int		CurrAnimRndVariation;
/* ********************sound ID's BEGIN ******************* */
/*0x11a4*/ int		Loop3d_SoundID;

/*0x11a8*/ int		Step_SoundID;;
/*0x11ac*/ int		CurLoop_SoundID;
/*0x11b0*/ int		Idle3d1_SoundID;
/*0x11b4*/ int		Idle3d2_SoundID;
/*0x11b8*/ int		Jump_SoundID;
/*0x11bc*/ int		Hit1_SoundID;
/*0x11c0*/ int		Hit2_SoundID;
/*0x11c4*/ int		Hit3_SoundID;

/*0x11c8*/ int		Hit4_SoundID;
/*0x11cc*/ int		Gasp1_SoundID;
/*0x11d0*/ int		Gasp2_SoundID;
/*0x11d4*/ int		Drown_SoundID;
/*0x11d8*/ int		Death_SoundID;
/*0x11dc*/ int		Attk1_SoundID;
/*0x11e0*/ int		Attk2_SoundID;
/*0x11e4*/ int		Attk3_SoundID;

/*0x11e8*/ int		Walk_SoundID;
/*0x11ec*/ int		Run_SoundID;
/*0x11f0*/ int		Crouch_SoundID;
/*0x11f4*/ int		Swim_SoundID;
/*0x11f8*/ int		TreadWater_SoundID;
/*0x11fc*/ int		Climb_SoundID;
/*0x1200*/ int		Sit_SoundID;
/*0x1204*/ int		Kick_SoundID;

/*0x1208*/ int		Bash_SoundID;
/*0x120c*/ int		FireBow_SoundID;
/*0x1210*/ int		MonkAttack1_SoundID;
/*0x1214*/ int		MonkAttack2_SoundID;
/*0x1218*/ int		MonkSpecial_SoundID;
/*0x121c*/ int		PrimaryBlunt_SoundID;
/*0x1220*/ int		PrimarySlash_SoundID;
/*0x1224*/ int		PrimaryStab_SoundID;

/*0x1228*/ int		Punch_SoundID;
/*0x122c*/ int		Roundhouse_SoundID;
/*0x1230*/ int		SecondaryBlunt_SoundID;
/*0x1234*/ int		SecondarySlash_SoundID;
/*0x1238*/ int		SecondaryStab_SoundID;
/*0x123c*/ int		SwimAttack_SoundID;
/*0x1240*/ int		TwoHandedBlunt_SoundID;
/*0x1244*/ int		TwoHandedSlash_SoundID;

/*0x1248*/ int		TwoHandedStab_SoundID;
/*0x124c*/ int		SecondaryPunch_SoundID;
/*0x1250*/ int		JumpAcross_SoundID;
/*0x1254*/ int		WalkBackwards_SoundID;
/*0x1258*/ int		CrouchWalk_SoundID;
/* ******************** sound ID's END ****************** */
/*0x125c*/ UINT		LastHurtSound;
/*0x1260*/ UINT		LastWalkTime;//used for animations
/*0x1264*/ int		ShipRelated;//ID? look into.
/*0x1268*/ int		RightHolding;//Nothing=0 Other/Weapon=1 shield=2
/*0x126c*/ int		LeftHolding;//old Holding
/*0x1270*/ UINT		DeathAnimationFinishTime;
/*0x1274*/ bool		bRemoveCorpseAfterDeathAnim;//0x1274 for sure used by /hidecorpse
/*0x1278*/ UINT		LastBubblesTime;
/*0x127c*/ UINT		LastBubblesTime1;
/*0x1280*/ UINT		LastColdBreathTime;
/*0x1284*/ UINT		LastParticleUpdateTime;
/*0x1288*/ UINT		MercID;    // IT IS 0x1288      //if the spawn is player and has a merc up this is it's spawn ID -eqmule 16 jul 2014
/*0x128c*/ UINT		ContractorID;    //if the spawn is a merc this is its contractor's spawn ID -eqmule 16 jul 2014
/*0x1290*/ FLOAT	CeilingHeightAtCurrLocation;
/*0x1294*/ void		*MobileEmitter;//todo: change and map to EqMobileEmitter*
/*0x1298*/ bool		bInstantHPGaugeChange;
/*0x129c*/ UINT		LastUpdateReceivedTime;
/*0x12a0*/ FLOAT	MaxSpeakDistance;
/*0x12a4*/ FLOAT	WalkSpeed;//how much we will slow down while sneaking
/*0x12a8*/ bool		bHideCorpse;// IT IS 0x12a8
/*0x12a9*/ CHAR		AssistName[0x40];
/*0x12E9*/ bool		InvitedToGroup;//IT IS 12E9!
/*0x12ec*/ int		GroupMemberTargeted;//12ec for sure!    // 0xFFFFFFFF if no target, else 1 through 5
/*0x12f0*/ bool		bRemovalPending;
/*0x12f4*/ void		*pCorpse;//look into 0x12f4 for sure!
/*0x12f8*/ FLOAT	EmitterScalingRadius;//0x12f8 FOR SURE
/*0x12fc*/ int		DefaultEmitterID;
/*0x1300*/ bool		bDisplayNameSprite;
/*0x1301*/ bool		bIdleAnimationOff;
/*0x1302*/ bool		bIsInteractiveObject;
/*0x1303*/ BYTE		InteractiveObjectModelName[0x80];
/*0x1383*/ BYTE		InteractiveObjectOtherName[0x80];
/*0x1403*/ BYTE		InteractiveObjectName[0x40];
/*0x1443*/
/*0x1444*/ CPhysicsInfo PhysicsBeforeLastPort;//size IS /*0x30*/
/*0x1474*/ DWORD notsure;
/*0x1478*/ struct _FELLOWSHIPINFO	Fellowship; // IT IS AT 0x1478 // size 0x9e8 //it IS at 1478
/*0x1E60*/ FLOAT	CampfireY;
/*0x1e64*/ FLOAT	CampfireX;
/*0x1e68*/ FLOAT	CampfireZ;
/*0x1e6c*/ int		CampfireZoneID;         // zone ID where campfire is
/*0x1e70*/ int		CampfireTimestamp;      // CampfireTimestamp-FastTime()=time left on campfire
/*0x1e74*/ int		CampfireTimestamp2;
/*0x1e78*/ int		FellowShipID;
/*0x1e7c*/ int		FellowShipID2;
/*0x1e80*/ int		CampType;
/*0x1e84*/ bool		Campfire;
/*0x1e88*/ TSafeArrayStatic<int,3> SeeInvis;
/*0x1E94*/ struct _EQUIPMENT	Equipment;// size 0xb4
/*0x1F48*/ bool		bIsPlacingItem;
/*0x1f49*/ bool		bGMCreatedNPC;
/*0x1f4c*/ int		ObjectAnimationID;
/*0x1f50*/ bool		bInteractiveObjectCollidable;
/*0x1f54*/ int		InteractiveObjectType;
/*0x1f58*/ int		SoundIDs[0xa];//0x28 bytes
/*0x1f80*/ UINT		LastHistorySentTime;
/*0x1f84*/ ArrayClass2_RO<UINT>	BardTwistSpells;//size 0x1c
/*0x1fA0*/ UINT		CurrentBardTwistIndex;
/*0x1fA4*/ PlayerPhysicsClient mPlayerPhysicsClient;//size 0x28
/*0x1FCC*/ int		SpawnStatus[6];//todo: look closer at these i think they can show like status of mobs slowed, mezzed etc, but not sure
/*0x1fe4*/ int		BannerIndex0;//guild banners
/*0x1fe8*/ int		BannerIndex1;
/*0x1fec*/ ARGBCOLOR BannerTint0;
/*0x1ff0*/ ARGBCOLOR BannerTint1;
/*0x1ff4*/ int		MountAnimationRelated;
/*0x1ff8*/ bool		bGuildShowAnim;//or sprite? need to check
/*0x1ff9*/ bool		bWaitingForPort;//check this
/* ********************** PlayerClient Ends Here ******************** */
/*0x2000*/ //see SpawnInfoSize
} SPAWNINFO, *PSPAWNINFO;

#define STANDSTATE_STAND                0x64
#define STANDSTATE_CASTING              0x66
#define STANDSTATE_BIND                 0x69
#define STANDSTATE_SIT                  0x6E
#define STANDSTATE_DUCK                 0x6F
#define STANDSTATE_FEIGN                0x73
#define STANDSTATE_DEAD                 0x78

#define MONITOR_SPAWN_X                 1
#define MONITOR_SPAWN_Y                 2
#define MONITOR_SPAWN_Z                 4
#define MONITOR_SPAWN_HEADING           8
#define MONITOR_SPAWN_SPEEDRUN          16
#define MONITOR_SPAWN_HPCURRENT         32

typedef struct _SPAWNMONITORINFO {
    WORD SpawnID;
    FLOAT Y;
    FLOAT X;
    FLOAT Z;
    FLOAT Heading;
    FLOAT SpeedRun;
    DWORD HPCurrent;
    DWORD MonitorMask;
} SPAWNMONITORINFO, *PSPAWNMONITORINFO;

typedef struct _HASHENTRY {
    SPAWNINFO   *spawn;
    DWORD       key;            // same as SpawnID for spawns
    struct      _HASHENTRY *next;
} HASHENTRY, *PHASHENTRY;

typedef struct _HASHTABLE {
    struct _HASHENTRY **table;
    int size;
} HASHTABLE, *PHASHTABLE;

typedef struct _SPAWNMANAGER {
/*0x000*/ void          *vftable;
/*0x004*/ DWORD         random; // rand()%20000
/*0x008*/ struct  _SPAWNINFO        *FirstSpawn;
/*0x00c*/ struct  _SPAWNINFO        *LastSpawn;
/*0x010*/ DWORD         unknown10;
/*0x014*/ struct        _HASHTABLE  *SPHash;
} SPAWNMANAGER, *PSPAWNMANAGER;


#if 0

void *gethashedentry(struct _HASHTABLE  *table, DWORD key)
{
    PHASHENTRY p = NULL;
    p = table->array[key%table->size];

    while(p) {
        if (p->key == key) return p;
        p = p->next;
    }
    return NULL;
}

#endif

// copy of D3DMATRIX by brainiac dec 16 2015
struct Matrix4x4
{
	union {
		struct {
			float        _11, _12, _13, _14;
			float        _21, _22, _23, _24;
			float        _31, _32, _33, _34;
			float        _41, _42, _43, _44;
		};
		float m[4][4];
	};
};

//eqmule oct 31 2013
typedef struct _SWITCHCLICK
{
	FLOAT Y;
	FLOAT X;
	FLOAT Z;
	FLOAT Y1;
	FLOAT X1;
	FLOAT Z1;
} SWITCHCLICK,*PSWITCHCLICK;

enum eMemPoolType
{
	eGlobal,
	eOnDemand,
	eClearOnZone,
};

// this is actually a CActor Class
// actual size: 0x120 3-3-2009
//Size is 0x190 dec 13 2016 live - eqmule
//see Cactor::CActor in EQGraphicsDX9.dll
typedef struct _EQSWITCH {
/*0x00*/    void*		vfTable;
/*0x04*/    eMemPoolType  MemType;
/*0x08*/    bool        bIsS3DCreated;
/*0x09*/    bool        bHasParentBone;
/*0x0a*/    bool        bUpdateScaledAmbient;
/*0x0c*/    float		ScaledAmbient;
/*0x10*/    float		ScaledAmbientTarget;
/*0x14*/    float		ParticleScaleFactor;
/*0x18*/    float		CollisionSphereScaleFactor;
/*0x1c*/    UINT        UpdateAmbientTick;
/*0x20*/    UINT        InterpolateAmbientTick;
/*0x24*/    void*		pParentActor;//its a  CActor*
/*0x28*/    void*       pDPVSObject;
/*0x2C*/    FLOAT		Y;
/*0x30*/    FLOAT		X;
/*0x34*/    FLOAT		Z;
/*0x38*/    FLOAT		SurfaceNormalY;
/*0x3c*/    FLOAT		SurfaceNormalX;
/*0x40*/    FLOAT		SurfaceNormalZ;
/*0x44*/    UINT        VisibleIndex;
/*0x48*/    FLOAT       Alpha;
/*0x4c*/    bool	    bCastShadow;
/*0x4d*/    bool	    bNeverClip;
/*0x4e*/    bool	    bClientCreated;
/*0x50*/    FLOAT       ZOffset;
/*0x54*/    FLOAT       EmitterScalingRadius;
/*0x58*/    void*		pDuplicateActor;//its a  CActor*
/*0x5c*/    bool	    bShowParticlesWhenInvisible;
/*0x60*/    void*       pAreaPortalVolumeList;//CAreaPortalVolumeList*
/*0x64*/    void*       CleanupList;//a TListNode<CActor*>? not sure
/*0x68*/    BYTE        CleanupListFiller[0xc];
/*0x74*/    void*       pActorApplicationData;//CActorApplicationData* 74 for sure see 1003AE70
/*0x78*/    EActorType  ActorType;
/*0x7c*/    void*       pTerrainObject;//CTerrainObject*
/*0x80*/    void*       HighlightData;//HighlightData*
/*0x84*/    float        yAdjustment1;//from this point on im not sure -eqmule 2013 dec 16
/*0x88*/    float        xAdjustment1;
/*0x8c*/    float        zAdjustment1;
/*0x90*/    float        headingAdjustment1;
/*0x94*/    float        yAdjustment2;
/*0x98*/    float        xAdjustment2;
/*0x9c*/    float        zAdjustment2;
/*0xa0*/    float        headingAdjustment2;
/*0xa4*/    float        yAdjustment3;
/*0xa8*/    float        xAdjustment3;
/*0xac*/    float        zAdjustment3;
/*0xb0*/    float        headingAdjustment3;
/*0xb4*/    float        adjustments4[3];
/*0xc0*/    float        adjustments5[4];
/*0xd0*/    bool        bbHasAttachSRT;
/*0xd1*/    bool        bDisableDesignOverride;
/*0xd4*/    int         Unknown0x1d4[4];
/*0xe4*/    Matrix4x4   transformMatrix;//used for new armor
/*0x128*/   FLOAT        Heading;
/*0x12c*/   BYTE         Unknown0x12c[0x14];
/*0x140*/   float        HeightAdjustment;//this is most likely wrong dec 16 2013 eqmule
/*0x144*/   BYTE         Unknown0x144[0x4c];
/*0x190*/
} EQSWITCH, *PEQSWITCH;



//Size is 0xe0 see 54933E in dec 13 2016 live - eqmule
typedef struct _DOOR {
/*0x00*/ void  *vtable;
/*0x04*/ BYTE  ObjType;          // always 5
/*0x05*/ BYTE  ID;
/*0x06*/ CHAR  Name[0x20];
/*0x26*/ BYTE  Type;
/*0x27*/ BYTE  State;               // 0 = closed, 1 = open, 2 = opening, 3 = closing
/*0x28*/ FLOAT DefaultY;
/*0x2c*/ FLOAT DefaultX;
/*0x30*/ FLOAT DefaultZ;
/*0x34*/ FLOAT DefaultHeading;
/*0x38*/ FLOAT DefaultDoorAngle;
/*0x3c*/ FLOAT TopSpeed1;
/*0x40*/ FLOAT TopSpeed2;
/*0x44*/ FLOAT Y;
/*0x48*/ FLOAT X;
/*0x4c*/ FLOAT Z;
/*0x50*/ FLOAT Heading;
/*0x54*/ FLOAT DoorAngle;
/*0x58*/ BYTE  DefaultState;
/*0x59*/ BYTE  SelfActivated;
/*0x5a*/ BYTE  Dependent;
/*0x5b*/ bool  bTemplate;
/*0x5c*/ BYTE  Difficulty;//pick/disarm...
/*0x5d*/ BYTE  AffectSlots[5];
/*0x62*/ BYTE  CurrentCombination[5];
/*0x67*/ BYTE  ReqCombination[5];
/*0x6c*/ BYTE  RandomCombo;
/*0x70*/ int   Key;
/*0x74*/ SHORT ScaleFactor;         // divide by 100 to get scale multiplier
/*0x78*/ int SpellID;
/*0x7c*/ BYTE  TargetID[0x5];
/*0x81*/ CHAR  Script[0x20];
/*0xa4*/ PEQSWITCH pSwitch;         // (CActorInterface*)
/*0xa8*/ void  *particle;       // (CParticleCloudInterface*)
/*0xac*/ DWORD TimeStamp;//last time UseSwitch
/*0xb0*/ FLOAT Accel;
/*0xb4*/ BYTE  AlwaysActive;
/*0xb8*/ int   AdventureDoorID;
/*0xbc*/ FLOAT ReturnY;
/*0xc0*/ FLOAT ReturnX;
/*0xc4*/ FLOAT ReturnZ;
/*0xc8*/ int   DynDoorID;
/*0xcc*/ bool  bHasScript;
/*0xd0*/ int   SomeID;
/*0xd4*/ bool  bUsable;
/*0xd5*/ bool  bRemainOpen;
/*0xd6*/ bool  bVisible;
/*0xd7*/ bool  bHeadingChanged;
/*0xd8*/ bool  bAllowCorpseDrag;
/*0xdc*/ int   RealEstateDoorID;
/*0xe0*/
} DOOR, *PDOOR; 

// 7-21-2003    Stargazer
typedef struct _DOORTABLE {
/*0x000*/   DWORD NumEntries;
/*0x004*/   PDOOR pDoor[0x0FF];
/*0x400*/
} DOORTABLE, *PDOORTABLE;

// actual size 0x80 20101012 - ieatacid
typedef struct _GROUNDITEM {
/*0x00*/ struct _GROUNDITEM *pPrev;
/*0x04*/ struct _GROUNDITEM *pNext;
/*0x08*/ DWORD  ID;
/*0x0c*/ DWORD  DropID;
/*0x10*/ DWORD  ZoneID;
/*0x14*/ DWORD  DropSubID;
/*0x18*/ PEQSWITCH pSwitch; // (class EQSwitch *)
/*0x1c*/ CHAR   Name[0x20];
/*0x3c*/ BYTE   Unknown0x3c[0x24];
/*0x60*/ FLOAT  Heading;
/*0x64*/ BYTE   Unknown0x64[0xc];
/*0x70*/ FLOAT  Y;
/*0x74*/ FLOAT  X;
/*0x78*/ FLOAT  Z;
/*0x7c*/ BYTE   Unknown0x7c[0x4];
/*0x80*/
} GROUNDITEM, *PGROUNDITEM;

#define   MAX_ZONES                     0x3e8
extern    PCHAR szZoneExpansionName[];     //defined in LibEQ_Utilities.cpp

//Size 0x1D8 see 867D39 in eqgame.exe live 21 apr 2016 - eqmule
typedef struct _ZONELIST { 
/*0x000*/   DWORD   Header; 
/*0x004*/   DWORD   Unknown0x4;         //pointer to something? 
/*0x008*/   DWORD   EQExpansion;          // szZoneExpansionName[] 
/*0x00c*/   DWORD   Id;  //EQZoneIndex
/*0x010*/   CHAR    ShortName[0x80];
/*0x090*/   BYTE    Unknown0x090;
/*0x091*/   CHAR    LongName[0x100]; 
/*0x191*/   DWORD   Unknown0x191; 
/*0x192*/   DWORD   Unknown0x192[0x6];  
/*0x198*/   DWORD   ZoneFlags;              // 0x800000 = gmzone? 0x8000 water/mountainzone? 0x4 = ? 0x1 = MultiInstanceZone 0x10000000 bazaarzone 0x2000000 = barterzone 0x100000 = HasMinLevel, 0x1000000 = tutorialzone 0x4000 = no air, 0x2 newbie zone, 0x20 no bind, 0x400000 lostestingdisabled, 0x80000000 guildhallzone
/*0x19c*/   DWORD   Unknown0x19c; 
/*0x1a0*/   DWORD   eqstrID;                // can call pStringTable->getString to get this string
/*0x1a4*/   DWORD   PoPValue;           // This has something to do with PoP zones. 
/*0x1a8*/   DWORD   MinLevel;           // Minimum level to access is this used?
/*0x1ac*/   BYTE    Unknown0x1ac[0x8];             
/*0x1b4*/   BYTE    Unknown0x1b4;//something 
/*0x1b5*/   BYTE    Unknown0x1b5[0x3]; 
/*0x1b8*/   BYTE    Unknown0x1b8[0x20];
/*0x1D8      next zone in list*/ 
} ZONELIST, *PZONELIST;

//EQWorldData__EQWorldData_x
//Size 0xFC0 see 5721F1 in eqgame.exe live 21 apr 2016 - eqmule
typedef struct _WORLDDATA {
/*0x000*/ PVOID lpvTable;
/*0x004*/ BYTE Hour;
/*0x005*/ BYTE Minute;
/*0x006*/ BYTE Day;
/*0x007*/ BYTE Month;
/*0x008*/ DWORD Year;
/*0x00C*/ BYTE Unknown0x00C[0x14];
/*0x020*/ PZONELIST ZoneArray[MAX_ZONES];// see 867D1B in eqgame.exe live 21 apr 2016
/*0xFC0*/
} WORLDDATA, *PWORLDDATA;

enum EOutDoor : BYTE
{
	IndoorDungeon,		// Zones without sky SolB for example.
	Outdoor,			// Zones with sky like Commonlands for example.
	OutdoorCity,		// A Player City with sky Plane of Knowledge for example.
	DungeonCity,		// A Player City without sky Ak'anon for example.
	IndoorCity,			// A Player City without sky Erudin for example.
	OutdoorDungeon,		// Dungeons with sky like Blackburrow for example.
};
enum EPlace
{
	CannotPlace,
	CanOnlyPlace,
	CanPlaceAndGoto,
};
//Size 0x3a8 see F17224-F16E7C in eqgame.exe live 17 Jan 2017 - eqmule
typedef struct _ZONEINFO {
/*0x000*/   CHAR    CharacterName[0x40];
/*0x040*/   CHAR    ShortName[0x80];
/*0x0c0*/   CHAR    LongName[0x80];
/*0x140*/   CHAR    ZoneDesc[0x5][0x1e];  //zone description strings
/*0x1d6*/   BYTE    FogOnOff; // (usually FF)
/*0x1d7*/   ARGBCOLOR FogRed;
/*0x1db*/   ARGBCOLOR FogGreen;
/*0x1df*/   ARGBCOLOR FogBlue;
/*0x1e4*/   FLOAT   FogStart[0x4]; //fog distance
/*0x1f4*/   FLOAT   FogEnd[0x4];
/*0x204*/   FLOAT   ZoneGravity;
/*0x208*/   EOutDoor    OutDoor;//this is what we want instead of ZoneType, see the enum
/*0x209*/   BYTE    RainChance[0x4];//no u cant change these to dwords cause then u screw up 4 byte padding
/*0x20d*/   BYTE    RainDuration[0x4];
/*0x211*/   BYTE    SnowChance[0x4];
/*0x215*/   BYTE    SnowDuration[0x4];
/*0x219*/   char    ZoneTimeZone;   //in hours from worldserver, can be negative
/*0x21a*/   BYTE    SkyType;   //1 means active
/*0x21c*/   int		WaterMidi;   //which midi to play while underwater
/*0x220*/   int		DayMidi;   
/*0x224*/   int		NightMidi;
/*0x228*/   FLOAT   ZoneExpModifier;    //This has been nerfed ..now reads 1.0 for all zones
/*0x22c*/   FLOAT   SafeXLoc;
/*0x230*/   FLOAT   SafeYLoc;
/*0x234*/   FLOAT   SafeZLoc;
/*0x238*/   FLOAT   SafeHeading;
/*0x23c*/   FLOAT   Ceiling;
/*0x240*/   FLOAT   Floor;
/*0x244*/   FLOAT   MinClip;
/*0x248*/   FLOAT   MaxClip;
/*0x24c*/	int		ForageLow; //Forage skill level needed to get stuff
/*0x250*/	int		ForageMedium;
/*0x254*/	int		ForageHigh;
/*0x258*/	int		FishingLow; //Fishing skill level needed to get stuff
/*0x25c*/	int		FishingMedium;
/*0x260*/	int		FishingHigh;
/*0x264*/	int		SkyRelated; //0-24 i think
/*0x268*/	UINT	GraveyardTimer; //minutes until corpse(s) pops to graveyard
/*0x26c*/	int		ScriptIDHour;
/*0x270*/	int		ScriptIDMinute;
/*0x274*/	int		ScriptIDTick;
/*0x278*/	int		ScriptIDOnPlayerDeath;
/*0x27c*/	int		ScriptIDOnNPCDeath;
/*0x280*/	int		ScriptIDPlayerEnteringZone;
/*0x284*/	int		ScriptIDOnZonePop;
/*0x288*/	int		ScriptIDNPCLoot;
/*0x28c*/	int		ScriptIDAdventureFailed;
/*0x290*/	int		CanExploreTasks;
/*0x294*/	int		UnknownFlag;
/*0x298*/	int		ScriptIDOnFishing;
/*0x29c*/	int		ScriptIDOnForage;
/*0x2a0*/	CHAR	SkyString[0x20]; //if empty no sky, ive only seen this as the zone name
/*0x2c0*/	CHAR	WeatherString[0x20]; //if empty no weather
/*0x2e0*/	CHAR	SkyString2[0x20]; //if SkyString is empty this is checked
/*0x300*/	int		SkyRelated2; //0-24
/*0x304*/	CHAR	WeatherString2[0x20]; //if empty no weather
/*0x324*/	FLOAT	WeatherChangeTime;
/*0x328*/	int		Climate;
/*0x32c*/	int		NPCAgroMaxDist; //the distance needed for an npc to lose agro after an attack
/*0x330*/	int		FilterID; //found in the teleport table
/*0x334*/	int		ZoneID;
/*0x338*/	int		ScriptNPCReceivedanItem;
/*0x33c*/	bool	bCheck;
/*0x340*/	int		ScriptIDSomething;
/*0x244*/	int		ScriptIDSomething2;
/*0x348*/	int		ScriptIDSomething3;
/*0x34c*/	bool	bNoBuffExpiration;//this is checked serverside so no, u cant and shouldn't set this if u value your account
/*0x350*/   int		LavaDamage; //before resists
/*0x354*/   int		MinLavaDamage; //after resists
/*0x358*/   bool	bDisallowManaStone; //can a manastone be used here?
/*0x359*/   bool	bNoBind;
/*0x35a*/   bool	bNoAttack;
/*0x35b*/   bool	bNoCallOfHero;
/*0x35c*/   bool	bNoFlux;
/*0x35d*/   bool	bNoFear;
/*0x35e*/   bool	bNoEncumber;
/*0x360*/   int		FastRegenHP;//not exactly sure how these work but ome zones have these set
/*0x364*/   int		FastRegenMana;
/*0x368*/   int		FastRegenEndurance;
/*0x36c*/   EPlace	CanPlaceCampsite;
/*0x370*/   EPlace	CanPlaceGuildBanner;
/*0x374*/   FLOAT	FogDensity;
/*0x378*/   bool	bAdjustGamma;
/*0x37c*/   int		TimeStringID;
/*0x380*/   bool	bNoMercenaries;
/*0x384*/   int		FishingRelated;
/*0x388*/   int		ForageRelated;
/*0x38c*/   bool	bNoLevitate;
/*0x390*/   FLOAT	Blooming;
/*0x394*/   bool	bNoPlayerLight;
/*0x398*/   __int64		GroupLvlExpRelated;//could be an int and then next one is an int as well but unknown
/*0x3a0*/   BYTE	PrecipitationType;
/*0x3a1*/   BYTE	PrecipitationType1;
/*0x3a2*/   BYTE	PrecipitationType2;
/*0x3a3*/   BYTE	PrecipitationType3;
/*0x3a4*/   bool	bAllowPVP;
/*0x3a8*/
} ZONEINFO, *PZONEINFO;

typedef struct _SPELLCALCINFO
{
/*0x00*/	LONG Slot;
/*0x04*/	LONG Base;
/*0x08*/	LONG Base2;
/*0x0c*/	LONG Max;
/*0x10*/	LONG Calc;
/*0x14*/	LONG Attrib;
/*0x18*/	CHAR Stuff[4];
/*0x1c*/	DWORD Delimiter;//always ^ ? (0x88)
/*0x20*/
}SPELLCALCINFO,*PSPELLCALCINFO;

#define   TOTAL_SPELL_COUNT             0xD6D8      // # of spells allocated in memory (08/10/2016) -eqmule
#define   CalcInfoSize                  0x2ab98     // 5FE591 in eqgame 2016 10 aug test
//this is actually the size of the struct thats populated from aSpells_S_txt
//SpellManager__SpellManager_x
// size: 0x182E28 2016-08-10 test (see 55E411) - eqmule
typedef struct _SPELLMGR {
/*0x000000*/ PVOID vfTable;//need this for some calls later
/*0x000004*/ BYTE Unknown0x00004[0x36D88];
/*0x036D8C*/ struct _SPELL* Spells[TOTAL_SPELL_COUNT];//55000
/*0x06C8EC*/ struct _SPELL* PtrToUnknownSpell;//default bailout pointer...
/*0x06C8F0*/ struct _SPELLCALCINFO* CalcInfo[CalcInfoSize];//175000
/*0x117750*/ DWORD What1[0x6];
/*0x117768*/ DWORD What2[0x1ADB0];//110000
/*0x182E28*/ //(1584680) 1.5 mill? hmm large struct in memory for sure...
} SPELLMGR, *PSPELLMGR;

// actual size: 0x4ed 20120316 - ieatacid
// confirmed in Sep 16 2015 test eqgame see 4DB236 - eqmule
// actual size: 0x409 2016 02 10 test se 4E0341 - eqmule
// Filled in missing values see Mar 11 2016 test eqgame / 4DF9C0 - demonstar55
// EQ_Spell__EQ_Spell_x    numeffects  attrib1  base1  base2_1  calc1  max1
typedef struct _SPELL { //      1     |    0   | -30  |   0    | 103  | 125
/*0x000*/   FLOAT   Range;
/*0x004*/   FLOAT   AERange;
/*0x008*/   FLOAT   PushBack;
/*0x00c*/   FLOAT   PushUp;
/*0x010*/   DWORD   CastTime;
/*0x014*/   DWORD   FizzleTime;
/*0x018*/   DWORD   RecastTime;
/*0x01c*/   DWORD   DurationType;       //DurationFormula on Lucy
/*0x020*/   DWORD   DurationValue1;
/*0x024*/   DWORD   AEDuration;
/*0x028*/   DWORD   Mana;
/*0x02c*/   DWORD   ReagentId[0x4];     //ReagentId1-ReagentId4d
/*0x03c*/   DWORD   ReagentCount[0x4];  //ReagentCount1-ReagentCount4
/*0x04c*/   DWORD   NoExpendReagent[0x4];
/*0x05c*/   LONG    CalcIndex;
/*0x060*/   LONG    NumEffects;
/*0x064*/   DWORD   BookIcon;
/*0x068*/   DWORD   GemIcon;
/*0x06C*/   DWORD   DescriptionNumber;
/*0x070*/   DWORD   ResistAdj;
/*0x074*/   DWORD   Diety;
/*0x078*/   DWORD   spaindex;
/*0x07C*/   DWORD   SpellAnim;
/*0x080*/   DWORD   SpellIcon;
/*0x084*/   DWORD   DurationParticleEffect;
/*0x088*/   DWORD   NPCUsefulness;
/*0x08c*/   DWORD   ID;
/*0x090*/   DWORD   Autocast;         //SpellID of spell to instacast on caster when current spell lands on target
/*0x094*/   DWORD   Category;         //Unknown144 from lucy
/*0x098*/   DWORD   Subcategory;      //Subcat to Category. Unknown145 from lucy
/*0x09c*/   DWORD   Subcategory2;
/*0x0a0*/   DWORD   HateMod;          //Additional hate
/*0x0a4*/   DWORD   ResistPerLevel;
/*0x0a8*/   DWORD   ResistCap;
/*0x0ac*/   DWORD   EnduranceCost;      //CA Endurance Cost
/*0x0b0*/   DWORD   CARecastTimerID;    //ID of combat timer, i think.
/*0x0b4*/   DWORD   EndurUpkeep;
/*0x0b8*/   DWORD   HateGenerated;      //Hate override
/*0x0bc*/   DWORD   HitCountType;
/*0x0c0*/   DWORD   HitCount;
/*0x0c4*/   DWORD   ConeStartAngle;
/*0x0c8*/   DWORD   ConeEndAngle;
/*0x0cc*/   DWORD   PvPResistBase;
/*0x0d0*/   DWORD   PvPCalc;
/*0x0d4*/   DWORD   PvPResistCap;
/*0x0d8*/   DWORD   PvPDuration;        //DurationType for PVP
/*0x0dc*/   DWORD   PvPDurationValue1;  //DurationValue1 for PVP
/*0x0e0*/   DWORD   GlobalGroup;
/*0x0e4*/   DWORD   PCNPCOnlyFlag;      // no idea
/*0x0e8*/   DWORD   NPCMemCategory;
/*0x0ec*/   DWORD   SpellGroup;
/*0x0f0*/   DWORD   SubSpellGroup;		//unknown237 on Lucy it is checked at 0x76FE18 in jun 11 2014 and if 0 will ask if we want to replace our spell with a rk. x version
/*0x0f4*/   DWORD   SpellRank;			//Unknown209 on Lucy jun 11 2014 0x76FEE0 Original = 1 , Rk. II = 5 , Rk. III = 10 , I suppose if they add Rk. IV it will be 15 and so on -eqmule
/*0x0f8*/   DWORD   SpellClass;         //Unknown222 from Lucy
/*0x0fc*/   DWORD   SpellSubClass;         //Unknown223 from Lucy
/*0x100*/   DWORD   SpellReqAssociationID;
/*0x104*/   DWORD   CasterRequirementID;
/*0x108*/   DWORD   MaxResist;
/*0x10c*/   DWORD   MinResist;
/*0x110*/   DWORD   MinSpreadTime;
/*0x114*/   DWORD   MaxSpreadTime;
/*0x118*/   DWORD   SpreadRadius;
/*0x11c*/   DWORD   BaseEffectsFocusCap; //song cap, maybe other things?
/*0x120*/   DWORD   CritChanceOverride;
/*0x124*/   DWORD   MaxTargets;     //how many targets a spell will affect
/*0x128*/   DWORD   AIValidTargets;
/*0x12c*/   DWORD   BaseEffectsFocusOffset;
/*0x130*/   FLOAT   BaseEffectsFocusSlope;
/*0x134*/   FLOAT   DistanceModCloseDist;
/*0x138*/   FLOAT   DistanceModCloseMult;
/*0x13c*/   FLOAT   DistanceModFarDist;
/*0x140*/   FLOAT   DistanceModFarMult;
/*0x144*/   FLOAT   MinRange;
/*0x148*/   BYTE    NoNPCLOS; // NPC skips LOS checks
/*0x149*/   BYTE    Feedbackable; // nothing uses this
/*0x14a*/   BYTE    Reflectable;
/*0x14b*/   BYTE    NoPartialSave;
/*0x14c*/   BYTE    NoResist;
/*0x14d*/   BYTE    UsesPersistentParticles;
/*0x14e*/   BYTE    SmallTargetsOnly;
/*0x14f*/   BYTE    DurationWindow;     //0=Long, 1=Short
/*0x150*/   BYTE    Uninterruptable;
/*0x151*/   BYTE    NotStackableDot;
/*0x152*/   BYTE    Deletable;
/*0x153*/   BYTE    BypassRegenCheck;
/*0x154*/   BYTE    CanCastInCombat;
/*0x155*/   BYTE    CanCastOutOfCombat;
/*0x156*/   BYTE    NoHealDamageItemMod; //disable worn focus bonuses
/*0x157*/   BYTE    OnlyDuringFastRegen;
/*0x158*/   BYTE    CastNotStanding;
/*0x159*/   BYTE    CanMGB;
/*0x15a*/   BYTE    NoDisspell;
/*0x15b*/   BYTE    AffectInanimate; //ldon trap spells etc
/*0x15c*/   BYTE    IsSkill;
/*0x15d*/   BYTE    ShowDoTMessage;
/*0x15e*/   BYTE    ClassLevel[0x24];        //per class., yes there are allocations for 0x24 see 4B5776 in eqgame dated 12 mar 2014 -eqmule
/*0x182*/   BYTE    LightType;
/*0x183*/   BYTE    SpellType;          //0=detrimental, 1=Beneficial, 2=Beneficial, Group Only
/*0x184*/   BYTE    Activated;
/*0x185*/   BYTE    Resist;             //0=un 1=mr 2=fr 3=cr 4=pr 5=dr 6=chromatic 7=prismatic 8=physical(skills,etc) 9=corruption
/*0x186*/   BYTE    TargetType;         //03=Group v1, 04=PB AE, 05=Single, 06=Self, 08=Targeted AE, 0e=Pet, 28=AE PC v2, 29=Group v2, 2a=Directional
/*0x187*/   BYTE    FizzleAdj;
/*0x188*/   BYTE    Skill;
/*0x189*/   BYTE    Location;           //01=Outdoors, 02=dungeons, ff=Any
/*0x18a*/   BYTE    Environment;
/*0x18b*/   BYTE    TimeOfDay;          // 0=any, 1=day only, 2=night only
/*0x18c*/   BYTE    CastingAnim;
/*0x18d*/   BYTE    AnimVariation;
/*0x18e*/   BYTE    TargetAnim;
/*0x18f*/   BYTE    TravelType;
/*0x190*/   BYTE    CancelOnSit;
/*0x191*/   BYTE    IsCountdownHeld;
/*0x192*/   CHAR    Name[0x40];
/*0x1d2*/   CHAR    Target[0x20];
/*0x1f2*/   CHAR    Extra[0x20];    //This is 'Extra' from Lucy (portal shortnames etc) official = NPC_FILENAME
/*0x212*/   CHAR    CastByMe[0x60];
/*0x272*/   CHAR    CastByOther[0x60];  //cast by other
/*0x2d2*/   CHAR    CastOnYou[0x60];
/*0x332*/   CHAR    CastOnAnother[0x60];
/*0x392*/   CHAR    WearOff[0x60];
/*0x3f2*/   BYTE    ShowWearOffMessage;
/*0x3f3*/   BYTE    NPCNoCast;
/*0x3f4*/   BYTE    SneakAttack;
/*0x3f5*/   BYTE    NotFocusable; //ignores all(?) focus effects
/*0x3f6*/   BYTE    NoDetrimentalSpellAggro;
/*0x3f7*/   BYTE    StacksWithSelf;
/*0x3f8*/   BYTE    NoBuffBlock;
/*0x3f9*/   BYTE    Scribable;
/*0x3fa*/   BYTE    NoStripOnDeath;
/*0x3fb*/   BYTE    NoRemove; // spell can't be clicked off?
/*0x3fc*/   DWORD   Unknown177; // new spell field valid range (0, 3], will set to 1 if not in that range (0, 1, 2)
/*0x400*/   DWORD   SpellRecourseType;
/*0x404*/   BYTE    Padding; //nothing here? I don't see it setting this at least
/*0x405*/   FLOAT   DistanceMod; // set to (DistanceModFarMult - DistanceModCloseMult) / (DistanceModFarDist - DistanceModCloseDist). Divisor has some bounds checking too
/*0x409*/
} SPELL, *PSPELL;

// actual size: 0x148 10-25-2006  ieatacid
typedef struct _SKILL {
/*0x000*/  PVOID  pUnknown0x0;       //_SKILL *pNext?
/*0x004*/  PVOID  pUnknown0x4;
/*0x008*/  DWORD  nName;
/*0x00c*/  DWORD  ReuseTimer;
/*0x010*/  DWORD  BaseDamage;
/*0x014*/  DWORD  SkillCombatType;   //0 means not a Combat Skill
/*0x018*/  DWORD  Unknown0x18;
/*0x01c*/  FLOAT  Force;
/*0x020*/  bool   Activated;
/*0x021*/  BYTE   LevelCappedSkill;
/*0x022*/  BYTE   Unknown0x22[0x2];
/*0x024*/  DWORD  MinLevel[0x24];
/*0x0b4*/  DWORD  Available[0x24];   //FF=not available for that class
/*0x144*/  DWORD  Unknown0x144;
/*0x148*/  
} SKILL, *PSKILL;

#define NUM_SKILLS 99
typedef struct _SKILLMGR {
/*0x000*/ struct _SKILL *pSkill[NUM_SKILLS];
/*0x004*/ //more data
} SKILLMGR, *PSKILLMGR;

//actual size 0x3a8 11-15-11  ieatacid
//actual size ? last checked by rlane187 may 19 2015
typedef struct _GUILDMEMBER {
/*0x000*/ struct  _GUILDMEMBER *pNext;
/*0x004*/ BYTE    Online;
/*0x005*/ BYTE    Unknown0x5[0x3];
/*0x008*/ WORD    ZoneID;
/*0x00a*/ WORD    Instance;
/*0x00C*/ BYTE	  Unknown0xC[0x6];
/*0x012*/ CHAR	  Name[0x40];
/*0x052*/ BYTE	  Unknown0x52[0x2];
/*0x054*/ DWORD	  Level;
/*0x058*/ DWORD   Flags; //1=banker, 2=alt
/*0x05c*/ DWORD   Class;
/*0x060*/ DWORD   Rank; //0=member 1=officer 2=leader

// not updated
#if 0
/*0x060*/ DWORD   LastSeen; //last seen timestamp
/*0x064*/ CHAR    PublicNote[0x100];//0x1a0
/*0x164*/ CHAR    PersonalNote[0x100];
/*0x264*/ DWORD   TributeStatus;
/*0x268*/ DWORD   TributeDonations;
/*0x26c*/ DWORD   LastDonation;//timestamp
/*0x270*/ DWORD   Unknown0x270;
/*0x274*/
#endif
} GUILDMEMBER, *PGUILDMEMBER;

typedef struct _GUILDDATA
{
/*0x00*/ char   Name[0x40];
/*0x04*/ DWORD  ID;
/*0x08*/
} GUILDDATA, *PGUILDDATA;

typedef struct _GUILD
{
/*0x00*/ struct _GUILDDATA *pGuildData;
/*0x04*/ DWORD  ID;
/*0x08*/ _GUILD *pNext;
/*0x0c*/ BYTE   Unknown0xc[0xc];
/*0x18*/
} GUILD, *PGUILD;

// 11-15-11 - ieatacid
// 2016 Mar 08 Test - eqmule (see 86DFB0) not sure on size needs more investigation
typedef struct _GUILDS {
/*0x0000*/ PVOID    pOneEntryVTable;
/*0x0004*/ BYTE     Unknown0x4[0x4];
/*0x0008*/ DWORD    GuildMemberCount;
/*0x000c*/ struct   _GUILDMEMBER *pMember;
/*0x0010*/ BYTE     Unknown0x10[0x65];
/*0x0075*/ CHAR     GuildMotD[0x200];
/*0x0275*/ CHAR     GuildLeader[0x40];
/*0x02b5*/ BYTE     Unknown0x2b5[0x3];
/*0x02b8*/ DWORD    GuildTribute;
/*0x02bc*/ BYTE     Unknown0x2bc[0x8dc5];
/*0x9081*/ CHAR     GuildUrl[0x200];
/*0x9281*/ CHAR     GuildChannelName[0x80];
/*0x9301*/ BYTE     Unknown0x9301[0x1b];
/*0x931C*/ struct _GUILD **GuildList;
/*0x9320*/ DWORD    HashValue;
/* more data */
} GUILDS, *PGUILDS;

typedef struct _INTERACTGROUNDITEM {
    DWORD DropID;
    DWORD SpawnID;
} INTERACTGROUNDITEM, *PINTERACTGROUNDITEM;

typedef struct _SPELLFAVORITE {
/*0x000*/   DWORD   SpellId[NUM_SPELL_GEMS];
/*0x030*/   CHAR    Name[0x19];
/*0x049*/   BYTE    inuse;
/*0x04a*/   BYTE    Byte_0x4a;
/*0x04b*/   BYTE    Byte_0x4b;
/*0x04c*/
} SPELLFAVORITE, *PSPELLFAVORITE;

typedef struct _CMDLIST {
    DWORD LocalizedStringID;
    PCHAR szName;
    PCHAR szLocalized;
    VOID  (__cdecl *fAddress)(PSPAWNINFO, PCHAR);
    DWORD Restriction;
    DWORD Category;
    DWORD Flags;
} CMDLIST, *PCMDLIST;

typedef struct _EQSOCIAL {
/*0x0000*/   CHAR   Name[0x10];
/*0x0010*/   CHAR   Line[0x5][0x100];
/*0x0510*/   BYTE   Color; 
} EQSOCIAL, *PEQSOCIAL;

typedef struct _EQFRIENDSLIST {
/*0x0000*/ CHAR Name[0x64][0x40];
/*0x1900*/
} EQFRIENDSLIST, *PEQFRIENDSLIST;

typedef struct _AAEFFECTDATA
{
/*0x00*/	int EffectType;
/*0x00*/	int BaseEffect1;
/*0x00*/	int BaseEffect2;
/*0x00*/	int Slot;
} AAEFFECTDATA,*PAAEFFECTDATA;

// Size 0xa4    11/15/2011 ieatacid in msg_send_alt_data
// Size 0xa8    06/11/2014 eqmule in msg_send_alt_data
// Size 0xa8    See 4EF12F (msg_send_alt_data) in 2015-09-24 -eqmule
typedef struct _ALTABILITY {
	/*0x00*/ DWORD Index;
	/*0x04*/ bool bShowInAbilityWindow;					//[0] = enabled flag? everything 1
	/*0x05*/ BYTE bShowInAbilityWindowdPadding[0x3];
	/*0x08*/ DWORD nShortName;
	/*0x0c*/ DWORD nShorterName;
	/*0x10*/ DWORD nName;					// now a database number
	/*0x14*/ DWORD nDesc;					// now a database number
	/*0x18*/ DWORD MinLevel;				//LevelNeeded
	/*0x1c*/ DWORD Cost;					//Initial Cost or cost the last time you bought a level of it
	/*0x20*/ DWORD ID;					//ID of the AA group (/alt activate id)
	/*0x24*/ DWORD CurrentRank;				// GroupLevel the current rank of this AA first rank is 1 etc
	/*0x28*/ DWORD *RequiredGroups;		    // array of required groups
	/*0x2c*/ DWORD *RequiredGroupLevels;	// array of required group ID;
	/*0x30*/ DWORD Unknown0x30[2];			// ArrayClass stuff
	/*0x38*/ DWORD prereq_count2;			// count of next array, which contains rank required
	/*0x3c*/ DWORD *RequiresAbilityPoints;	//this is part of their ArrayClass
	/*0x40*/ DWORD Unknown0x40;				// ArrayClass stuff
	/*0x44*/ DWORD pointer;					// ArrayClass stuff
	/*0x48*/ DWORD Type;					// 1 General 2 Archetype 3 Class 4 special 5 focus
	/*0x4c*/ int  SpellID;					// -1 for no Spell
	/*0x50*/ DWORD Unknown0x50;
	/*0x54*/ DWORD Unknown0x54;				// this uses the same class as prereqs, so count?
	/*0x58*/ DWORD *reuse_id;
	/*0x5c*/ bool  bRefund;
	/*0x5d*/ BYTE  bRefundPadding[0x3];
	/*0x60*/ DWORD *TimerIds;				//ArrayClass of timer ids starts here
	/*0x64*/ DWORD ReuseTimer;				// in seconds
	/*0x68*/ DWORD Classes;					// Classes/2 is the actual value we want.
	/*0x6c*/ DWORD MaxRank;					//so like x/25, this is the 25	
	/*0x70*/ DWORD TotalPoints;				
	/*0x74*/ DWORD PreviousGroupAbilityId;	// -1 if none, although sometimes it can be -1 when there is ...
	/*0x78*/ DWORD NextGroupAbilityId;		// ID of the next rank
	/*0x7C*/ bool QuestOnly;				// vet AA, quest AA
	/*0x7D*/ BYTE QuestOnlypadding[0x3];
	/*0x80*/ DWORD max_charges;				// charges on expendable AAs (limited use aa's)
	/*0x84*/ BOOL bIgnoreDeLevel;
	/*0x88*/ DWORD Expansion;
	/*0x8c*/ DWORD special_category;		// 7 is expendable, -1 none
	/*0x90*/ bool bShroud;					//shrouds are also called "templates"
	/*0x91*/ bool bBetaOnlyAbility;
	/*0x92*/ bool bResetOnDeath;			// true for lay on hands for example.
	/*0x93*/ bool bAutogrant;				// true if its an autogrant ability? or if auto grant is enabled? need to check cause this could be useful
	/*0x94*/ DWORD AutoGrantAssociationId;		// Usually the same as normal expansion if enabled
	//this is where a list of Ability Effect Data starts in the packet
	/*0x98*/ DWORD effects_count;			// Count of spell effects for AA
	/*0x9c*/ DWORD **effects;				// this is repeated a few times some times depending on list size
	/*0xA0*/ BYTE Unknown0xA0[0x8];			//part of their internal list class, I need to re that at some point
	/*0xa8*/
} ALTABILITY, *PALTABILITY;

typedef struct _ALTABILITIESLISTMGR {
/*0x00*/ struct _ALTABILITY* Ability;
/*0x04*/ DWORD Index;
} ALTABILITIESLISTMGR, *PALTABILITIESLISTMGR;

//NUM_ALT_ABILITIES is now defined before CHARINFO definition in this same header file.
typedef struct _ALTABILITIESLIST {
/*0x00*/ struct _ALTABILITIESLISTMGR* Abilities[NUM_ALT_ABILITIES_ARRAY];
} ALTABILITIESLIST, *PALTABILITIESLIST;

typedef struct _NEWALTADVMGR {
/*0x00*/ struct _ALTABILITIESLIST* AltAbilityList;
/*0x04*/ DWORD NumAltAbilities;  // NUM_ALT_ABILITIES
/*0x08*/ DWORD Unknown0x08; // data here
/*0x0c*/ DWORD Unknown0x0c; // data here
/*0x10*/ BYTE  Unknown0x10[0x8];
} NEWALTADVMGR, *PNEWALTADVMGR;

typedef struct _ALTADVMGR {
/*0x00*/ struct _NEWALTADVMGR* AltAbilities;
} ALTADVMGR, *PALTADVMGR;

typedef struct _MERCAADATA {
/*0x00*/ DWORD nName;//I would guess we can find aapoints spent on the ability in this struct as well
} MERCAADATA,*PMERCAADATA;//but I dont know yet, I dont have a mercenary with aa yet... -eqmule

typedef struct _MERCAA {
/*0x00*/ DWORD Unknown0x00;
/*0x04*/ DWORD Unknown0x04;
/*0x08*/ struct _MERCAADATA *Ptr;
/*0x0c*/ DWORD Unknown0x00c;
/*0x10*/ DWORD Max;//how many AA can be spent on this ability
} MERCAA, *PMERCAA;

//pinstMercAltAbilities_x
//MercAltAbilities__MercAltAbilities
//Actual Size: 0x478 in eqgame dated oct 04 2013 (see 4A96D4) - eqmule 
typedef struct _EQMERCALTABILITIES {
/*0x000*/ BYTE Unknown0x000[0x408];
/*0x408*/ PMERCAA MercAAInfo[0xc];//12 pointers since there are currently only 12 mercenary aa's
/*0x438*/ BYTE Unknown0x438[0x40];
/*0x478*/
} EQMERCALTABILITIES, *PEQMERCALTABILITIES;

// size 0x98 (3-12-2014) -eqmule
// size 0x9c 3-18-2015 test see (49A077) -eqmule
typedef struct _EQRAIDMEMBER { 
/*0x000*/ CHAR      Name[0x40]; 
/*0x040*/ CHAR      RaidNote[0x40]; 
/*0x080*/ DWORD     nLevel;
/*0x084*/ DWORD     nClass; 
/*0x088*/ BYTE      RaidLeader; 
/*0x089*/ BYTE      GroupLeader; 
/*0x08a*/ BYTE      RaidMainAssist;
/*0x08b*/ BYTE      RaidMarker;
/*0x08c*/ DWORD     MasterLooter;
/*0x090*/ DWORD     GroupNumber;
/*0x094*/ BYTE      Unknown0x94[0x8];//i guess new master looter is in here...
/*0x09c*/ 
} EQRAIDMEMBER, *PEQRAIDMEMBER;

// sizeof(_EQRAID) is 0x3668 (12-09-2009)
//instCRaid_x
// push    13C6h
//mar 18 2015 Test CRaid__ResetRaid eqgame.exe - eqmule
//as for the size... I have no idea...
//maybe 3544h? see 48055F                 mov     [esi+3544h], bl (jun 11 2014) -eqmule
//392C in mar 18 205 test? not sure...
typedef struct _EQRAID {
/*0x0000*/ BYTE     Unknown0x0000[0xe0];
/*0x00e0*/ CHAR     RaidMemberUsed[0x48];
/*0x0128*/ struct   _EQRAIDMEMBER RaidMember[0x48];
/*0x2d08*/ BYTE     Unknown0x2d08[0x4];
/*0x2d0c*/ DWORD    RaidMemberCount;
/*0x2d10*/ CHAR     RaidLeaderName[0x40];
/*0x2d50*/ CHAR     RaidMOTD[0x400];
/*0x3150*/ BYTE     Unknown0x3150[0x40];
/*0x3190*/ BYTE     Invited; // 1 = default?, 2 = invited, 4 = in raid
/*0x3191*/ BYTE     Unknown0x3191[0x8];
/*0x3199*/ BYTE     IsRaidLeader;
/*0x319a*/ BYTE     Unknown0x0x319a[0x2];
/*0x319c*/ DWORD    RaidTarget;
/*0x31a0*/ DWORD    LootType;
/*0x31a4*/ CHAR     RaidLooters[0x13][0x40];
/*0x3664*/ DWORD    TotalRaidMemberLevels; // TotalRaidMemberLevels/RaidMemberCount=RaidAvgLevel
/*0x3668*/ BYTE     Locked;
/*0x3669*/ BYTE     Unknown0x3669[0x7];
/*0x3670*/ // <- im sure this is not right but whatever... we got what we came for...
} EQRAID, *PEQRAID;

// size 0x19C 3-23-2005
typedef struct _EQGROUP {
/*0x000*/ BYTE MemberExists[5];
/*0x005*/ CHAR MemberName[5][0x40];
/*0x145*/ BYTE Unused[3];
/*0x148*/ struct _SPAWNINFO* pMember[5];
/*0x15C*/ CHAR LeaderName[0x40];
/*0x19C*/
} EQGROUP, *PEQGROUP;

// size 0x08
typedef struct _EQSTRING {
/*0x00*/    DWORD ID;
/*0x04*/    PCHAR String;
} EQSTRING, *PEQSTRING;

// size 0x10 4-28-2004 lax
typedef struct _EQSTRINGTABLE {
/*0x00*/ struct _EQSTRING **StringItems;
/*0x04*/ DWORD Size;
/*0x08*/ DWORD Count;
/*0x0c*/ DWORD Unknown0x0c;
/*0x10*/
} EQSTRINGTABLE, *PEQSTRINGTABLE;

//updated by eqmule
//see 7B000C in eqgame.exe dated jul 16 2014
//not sure about size...
typedef struct connection_t {
/*0x000*/ void  *vtable;
/*0x004*/ BYTE  Unknown0x4[0x110];
/*0x114*/ DWORD Master;
/*0x118*/ DWORD Average;
/*0x11c*/ DWORD Low;
/*0x120*/ DWORD High;
/*0x124*/ DWORD Last;
/*0x128*/
} CONNECTION_T, *PCONNECTION_T;

//actual size 0x2dfc 3-19-09 - ieatacid 
typedef struct _CDISPLAY {
/*0x0000*/ BYTE   Unknown0x000[0x12c];
/*0x012c*/ void   *pActorTagManager;
/*0x0130*/ BYTE   Unknown0x130[0x24];
/*0x0154*/ DWORD  TimeStamp;
/*0x0158*/ BYTE   Unknown0x158[0x2c12];
/*0x2d6a*/ BYTE   NpcNames; // show npc names
} CDISPLAY, *PCDISPLAY;

//5-16-06 - ieatacid
typedef struct _DZTIMERINFO {
/*0x000*/ CHAR   ExpeditionName[0x80];
/*0x080*/ CHAR   EventName[0x100];
/*0x180*/ DWORD  TimeStamp;  // TimeStamp - Util__FastTime = time left
/*0x184*/ DWORD  TimerID;
/*0x188*/ struct _DZTIMERINFO *pNext;
/*0x18c*/
} DZTIMERINFO, *PDZTIMERINFO;

typedef struct _DZMEMBER {
/*0x000*/ CHAR   Name[0x40];
/*0x040*/ DWORD  Status;  // 0="unknown", 1="Online", 2="Offline", 3="In Dynamic Zone", 4="Link Dead"
/*0x044*/ struct _DZMEMBER *pNext;
/*0x048*/
} DZMEMBER, *PDZMEMBER;

typedef struct _TASKMEMBER {
/*0x000*/ CHAR   Name[0x40];
/*0x040*/ DWORD  Unknown0x40;
/*0x044*/ DWORD  IsLeader;
/*0x048*/ struct _TASKMEMBER *pNext;
/*0x04c*/
} TASKMEMBER, *PTASKMEMBER;

typedef struct _DYNAMICZONE {
/*0x000*/ void   *vftable;
/*0x004*/ BYTE   Unknown0x04[0x46];
/*0x04a*/ CHAR   Name[0x40]; // Leaders name
/*0x08a*/ CHAR   ExpeditionName[0x80];
/*0x10a*/ BYTE   Unknown0x10a[0x2];
/*0x10c*/ WORD   MaxPlayers;
/*0x10e*/ BYTE   Unknown0x10e[0x2];
/*0x110*/ struct _DZMEMBER *pMemberList;
/*0x114*/ PCHAR  expeditionName;
/*0x118*/ // more?
} DYNAMICZONE, *PDYNAMICZONE;

typedef struct _CHATCHANNELS {
/*0x000*/ PCHAR  ChannelName[0xa];
/*0x004*/
} CHATCHANNELS, *PCHATCHANNELS;

typedef struct _CHATSERVICE {
/*0x000*/ BYTE   Unknown0x0[0xc];
/*0x00c*/ struct _CHATCHANNELS *ChannelList;
/*0x010*/ DWORD  ActiveChannels;   // number of channels joined
/*0x014*/ BYTE   Unknown0x14[0x8];
/*0x01c*/ CHAR   ChatID[0x30];     // "ServerName.CharName" (0x60?)
/*0x04c*/ BYTE   Unknown0x4c[0x30];
/*0x07c*/ CHAR   ServerName[0x30]; // "ServerName."
/*0x0b0*/ // more data
} CHATSERVICE, *PCHATSERVICE;

//size 0x164 Oct 12 2016 eqmule see 441FE3 in oct 17 2016 live
typedef struct _CSINFO
{
/*0x000*/	CHAR Name[0x40]; 
/*0x040*/	UINT Class;
/*0x044*/	UINT Race;
/*0x048*/	BYTE Level; 
/*0x049*/	BYTE Padding0x049[0x3]; 
/*0x04c*/	UINT Class2;
/*0x050*/	UINT Race2;
/*0x054*/	int CurZoneID;
/*0x058*/	BYTE morestuff[0x10c];
//todo: add the stuff below and pad it, but for now I just need the zone id.
///*0x058*/	BYTE Sex; 
///*0x059*/	BYTE Face; 
///*0x05a*/	BYTE Padding0x05a[0x2]; 
///*0x05c*/	struct _ARMOR Armor[9]; 
///*0x000*/	unsigned long ArmorTint[9]; 
///*0x000*/	CHAR TextureType;
///*0x000*/	CHAR Armor1;
///*0x000*/	CHAR Armor2;
///*0x000*/	CHAR headType;
///*0x000*/	int Tattoo;
///*0x000*/	int Details;
///*0x000*/	int Deity; 
///*0x000*/	void* pActorClient; 
///*0x000*/	void* pActorClient2; 
///*0x000*/	BYTE HairColor;
///*0x000*/	BYTE FacialHairColor;
///*0x000*/	BYTE EyeColor1;//left
///*0x000*/	BYTE EyeColor2;//right
///*0x000*/	BYTE HairStyle;
///*0x000*/	BYTE FacialHair;
///*0x000*/	bool bCanGoHome;
///*0x000*/	bool bCanTutorial;
///*0x000*/	int ID;
///*0x000*/	bool bTooHighLevel;
///*0x000*/	bool bUnknown;
///*0x000*/	long lUnknown;
///*0x000*/	bool bWhat;
///*0x000*/    bool bHeroicCharacter;
///*0x000*/    bool bShrouded;
/*0x164*/
} CSINFO, *PCSINFO;

typedef struct _CharSelectPlayerArray
{
	//note that CharSelectPlayerCount determines how many are actully here
	CSINFO CharacterInfo[13];//is 13 chars the max u can have?
} CharSelectPlayerArray,*PCharSelectPlayerArray;
typedef struct _EVERQUEST {
	/*0x000*/ BYTE   Unknown[0x2a4];
	/*0x2a4*/ struct _CHATSERVICE *ChatService;
	/*0x2a8*/ BYTE   Unknown0x2a8[0x8];
	/*0x2b0*/ bool   bJoinedChannel;
	/*0x2b1*/ CHAR   ChannelPlayerName[0x100];
	/*0x3b1*/ CHAR   ChannelName[0xa][0x30];
	/*0x591*/ BYTE   Unknown0x591[0x3];
	/*0x594*/ DWORD  ChannelNumber[0xa];
	/*0x5bc*/ DWORD  ChannelQty;
	/*0x5c0*/ DWORD  TargetRing;
	/*0x5c4*/ DWORD	 WorldState;//0 everything is fine, 1 we are getting disconnected 2 player not released from zone
	/*0x5c8*/ DWORD  GameState;
	/*0x5cc*/ BYTE  Unknown0x5cc[0x388B0];
	/*0x38E80*/ DWORD CharSelectPlayerMaxCount;
	/*0x38E84*/ DWORD CharSelectPlayerCount;
	/*0x38E88*/ PCharSelectPlayerArray pCharSelectPlayerArray;
	/*0x38E88*/ // more data
} EVERQUEST, *PEVERQUEST;

typedef struct _AURAINFO {
/*0x000*/ CHAR    Name[0x40];
/*0x040*/ DWORD   SpawnID;
/*0x044*/ BYTE    Unknown0x44[0x8];
/*0x04c*/
} AURAINFO, *PAURAINFO;

typedef struct _AURAS {
/*0x000*/ _AURAINFO Aura[0x2];
} AURAS, *PAURAS;

typedef struct _AURAMGR {
/*0x000*/ DWORD   NumAuras;
/*0x004*/ BYTE    Unknown0x4[0xc];
/*0x010*/ _AURAS  **pAuraInfo;
/*0x014*/ BYTE    Unknown0x14[0x8];
/*0x01c*/
} AURAMGR, *PAURAMGR;

typedef struct _INTERACTSWITCH {
/*0x000*/ DWORD   switchID;
/*0x004*/ DWORD   dwzero;
/*0x008*/ DWORD   dwneg1;
/*0x00c*/ DWORD   spawnID;
} INTERACTSWITCH, *PINTERACTSWITCH;

typedef struct _MERCSTANCEDATA {
DWORD nStance;
DWORD nDbStance;
} MERCSTANCEDATA, *PMERCSTANCEDATA;

typedef struct _MERCSINFO {
/*0x00*/ DWORD Unknown0x00;
/*0x04*/ DWORD nMercCategory;
/*0x08*/ DWORD nMercDesc;
/*0x0c*/ DWORD Purchase; //in copper...
/*0x10*/ DWORD Upkeep; //in copper...
/*0x14*/ BYTE Unknown0x14[0x2c];
/*0x40*/ CHAR Name[0xC];
/*0x4c*/ BYTE Unknown0x4c[0x88];
/*0xD4*/
} MERCSINFO, *PMERCSINFO;
//Size 0xD4 in eqgame.exe dated 01 22 2015 -eqmule
typedef struct _MERCSLIST {
/*0x00*/ MERCSINFO mercinfo[7];//is 7 max, even with slots u can buy for sc?
} MERCSLIST, *PMERCSLIST;

//Actual Size: 0x2fc (See 57117F in eqgame dated dec 10 2013) - eqmule
//CMercenaryInfo__CMercenaryInfo
typedef struct _MERCENARYINFO {
/*0x000*/ BYTE Unknown0x0[0x110];
/*0x110*/ DWORD HaveMerc;
/*0x114*/ DWORD MercState; // 1 = suspended, 5 = active
/*0x118*/ BYTE  Unknown0x118[0x30];
/*0x148*/ DWORD ActiveStance;
/*0x14c*/ BYTE  Unknown0x14c[0x10];
/*0x15c*/ CHAR	MercName[0x18];
/*0x174*/ BYTE  Unknown0x174[0x7c];
/*0x1F0*/ DWORD MercenaryCount;//how many mercenaries we have
/*0x1F4*/ PMERCSLIST pMercsList; 
/*0x1F8*/ BYTE  Unknown0x1f4[0xc];
/*0x204*/ DWORD MaxMercsCount;//max you can have
/*0x208*/ BYTE  Unknown0x208[0x10];
/*0x218*/ DWORD CurrentMercIndex;
/*0x21c*/ BYTE  Unknown0x21c[0x8];
/*0x224*/ DWORD MercSpawnId;//yes its the spawnID of the mercenary
/*0x228*/ BYTE  Unknown0x228[0x30];
/*0x258*/ DWORD NumStances;
/*0x25c*/ _MERCSTANCEDATA **pMercStanceData;
/*0x260*/ BYTE  Unknown0x25c[0x9c];
/*0x2Fc*/
} MERCENARYINFO, *PMERCENARYINFO;

typedef struct _MERCENARYSTATS {
/*0x000*/ DWORD MaxHP; 
/*0x004*/ DWORD CurrHP; 
/*0x008*/ DWORD MaxMana; 
/*0x00c*/ DWORD CurrMana; 
/*0x010*/ DWORD MaxEndurance; 
/*0x014*/ DWORD CurrEndurance; 
/*0x018*/ DWORD AC; 
/*0x01c*/ DWORD Attack; 
/*0x020*/ DWORD Haste; 
/*0x024*/ DWORD STR; 
/*0x028*/ DWORD STA; 
/*0x02c*/ DWORD INT; 
/*0x030*/ DWORD WIS; 
/*0x034*/ DWORD AGI; 
/*0x038*/ DWORD DEX; 
/*0x03c*/ DWORD CHA; 
/*0x040*/ DWORD CombatHPRegen; 
/*0x044*/ DWORD CombatManaRegen; 
/*0x048*/ DWORD CombatEnduranceRegen; 
/*0x04c*/ DWORD HealAmount; 
/*0x050*/ DWORD SpellDamage; 
/*0x054*/ 
} MERCENARYSTATS, *PMERCENARYSTATS;

#define MAX_XTARGETS 20

enum xTargetTypes
{
    XTARGET_EMPTY_TARGET,
    XTARGET_AUTO_HATER,
    XTARGET_SPECIFIC_PC,
    XTARGET_SPECIFIC_NPC,
    XTARGET_TARGETS_TARGET,
    XTARGET_GROUP_TANK,
    XTARGET_GROUP_TANKS_TARGET,
    XTARGET_GROUP_ASSIST,
    XTARGET_GROUP_ASSIST_TARGET,
    XTARGET_GROUP_PULLER,
    XTARGET_GROUP_PULLER_TARGET,
    XTARGET_GROUP_MARK1,
    XTARGET_GROUP_MARK2,
    XTARGET_GROUP_MARK3,
    XTARGET_RAID_ASSIST1,
    XTARGET_RAID_ASSIST2,
    XTARGET_RAID_ASSIST3,
    XTARGET_RAID_ASSIST1_TARGET,
    XTARGET_RAID_ASSIST2_TARGET,
    XTARGET_RAID_ASSIST3_TARGET,
    XTARGET_RAID_MARK1,
    XTARGET_RAID_MARK2,
    XTARGET_RAID_MARK3,
    XTARGET_MY_PET,
    XTARGET_MY_PET_TARGET,
    XTARGET_MY_MERCENARY,
    XTARGET_MY_MERCENTARY_TARGET
};

// size 0x4c 12-25-09 - ieatacid
typedef struct _XTARGETDATA
{
/*0x00*/ DWORD  xTargetType;
/*0x04*/ DWORD  Unknown0x4;
/*0x08*/ DWORD  SpawnID;
/*0x0c*/ char   Name[0x40];
/*0x4c*/
} XTARGETDATA, *PXTARGETDATA;

typedef struct _XTARGETARRAY
{
    XTARGETDATA pXTargetData[MAX_XTARGETS];
} XTARGETARRAY, *PXTARGETARRAY;

// size 0x20 12-25-09 - ieatacid
typedef struct _XTARGETMGR
{
/*0x00*/ void  *vftable;
/*0x04*/ DWORD TargetSlots; // MAX_XTARGETS
/*0x08*/ PXTARGETARRAY pXTargetArray;
/*0x0c*/ DWORD Unknown0xc;  // same as TargetSlots?
/*0x10*/ BYTE  Unknown0x10[0x4];
/*0x14*/ BYTE  AutoAddHaters; // 1 = auto add haters, 0 = do not auto add haters
/*0x15*/ BYTE  Unknown0x15[0x3];
/*0x18*/ BYTE  Unknown0x18[0x4];
/*0x1c*/ BYTE  Unknown0x1c[0x4];
/*0x20*/
} XTARGETMGR, *PXTARGETMGR;

typedef struct _AGGRODATA {
/*0x00*/ DWORD Unknown0x0;
/*0x04*/ BYTE  AggroPct;
/*0x05*/ BYTE  padding[3];
/*0x08*/
} AGGRODATA, *PAGGRODATA;

// size 0xe4 11-28-12 - ieatacid (in GetAggroInfo)
// size 0xfc see 422F94 in 20 Aug 2015 -eqmule
typedef struct _AGGROINFO {
/*0x00*/ struct _AGGRODATA aggroData[0x1e];
/*0xf0*/ DWORD  AggroLockID;//this can be 0, I dont know what it is... -eqmule
/*0xf4*/ DWORD  AggroTargetID;//this is id of whoever we are fighting -eqmule
/*0xf8*/ DWORD  AggroSecondaryID;//this is id of whoever the npc is fighting -eqmule
/*0xfc*/
} AGGROINFO, *PAGGROINFO;

enum AggroDataTypes
{
    AD_Player,
    AD_Secondary,
    AD_Group1,
    AD_Group2,
    AD_Group3,
    AD_Group4,
    AD_Group5,
    AD_xTarget1,
    AD_xTarget2,
    AD_xTarget3,
    AD_xTarget4,
    AD_xTarget5,
    AD_xTarget6,
    AD_xTarget7,
    AD_xTarget8,
    AD_xTarget9,
    AD_xTarget10,
    AD_xTarget11,
    AD_xTarget12,
    AD_xTarget13,
    AD_xTarget14,
    AD_xTarget15,
    AD_xTarget16,
    AD_xTarget17,
    AD_xTarget18,
    AD_xTarget19,
    AD_xTarget20,
};
typedef struct _GROUPAGGRO {
/*0x00*/ DWORD Unknown0x00;
/*0x04*/ DWORD Unknown0x04;
/*0x08*/ DWORD  GroupMemberAggro[6];//player is ALWAYS the 6th member...
} GROUPAGGRO, *PGROUPAGGRO;

#define EQ_ASSIST_COMPLETE              0x3bd4   // aMsg_time_stamp
#define EQ_BEGIN_ZONE                   0x312    // CEverQuest__SavePCForce				
#define EQ_END_ZONE                     0x7448   // CEverQuest__DoMainLoop+B2F			
#define EQ_ASSIST                       0x3771   // do_assist(PlayerClient *,char const *)+399 20160212 live (see 52C319)
#define EQ_LoadingS__ArraySize          0x5a     // EQ_LoadingS__SetProgressBar_x+76 	(4C7396 yes it says 5b there, but we dont want to overwrite the NULL term...	2016 Apr 21
};
using namespace EQData;
#pragma pack(pop)
