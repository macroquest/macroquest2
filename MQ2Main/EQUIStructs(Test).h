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
#include "ArrayClass.h"

#pragma pack(push)
#pragma pack(8)
namespace EQUIStructs
{


enum UIType
{
   UI_Unknown=-1,
   UI_Class=0,
   UI_RGB=1,
   UI_RGBText=2,//new since the patch on Jan 08 2018 Test see 0x90EC67 -eqmule
   UI_Point=3,
   UI_Size=4,
   UI_TextureInfo=5,
   UI_Frame=6,
   UI_Ui2DAnimation=7,
   UI_ButtonDrawTemplate=8,
   UI_GaugeDrawTemplate=9,
   UI_SpellGemDrawTemplate=10,
   UI_FrameTemplate=11,
   UI_ScrollbarDrawTemplate=12,
   UI_WindowDrawTemplate=13,
   UI_SliderDrawTemplate=14,
   UI_ScreenPiece=15,
   UI_StaticScreenPiece=16,
   UI_StaticAnimation=17,
   UI_StaticTintedBlendAnimation=18,
   UI_StaticText=19,
   UI_StaticFrame=20,
   UI_StaticHeader=21,
   UI_LayoutStrategy=22,
   UI_LayoutVertical=23,
   UI_LayoutHorizontal=24,
   UI_Control=25,
   UI_TemplateAssoc=26,
   UI_TemplateScreen=27,
   UI_ListboxColumn=28,
   UI_Listbox=29,
   UI_Button=30,
   UI_Gauge=31,
   UI_SpellGem=32,
   UI_InvSlot=33,
   UI_EditBox=34,
   UI_Slider=35,
   UI_Label=36,
   UI_STMLBox=37,
   UI_TreeView=38,
   UI_Combobox=39,
   UI_Page=40,
   UI_TabBox=41,
   UI_LayoutBox=42,
   UI_HorizontalLayoutBox=43,
   UI_VerticalLayoutBox=44,
   UI_FinderBox=45,
   UI_TileLayoutBox=46,
   UI_NamedTemplatePiece=47,
   UI_TemplateContainer=48,
   UI_Screen=49,
   UI_SuiteDefaults=50,
   UI_Screens=51,
   UI_TopLevelWindowList=52,
   UI_HotButton=53,
};
#define MAX_INV_SLOTS 0x900
// ***************************************************************************
// Structures
// ***************************************************************************

// 10-24-2003 Lax - Massive overhaul.
// See http://macroquest.sourceforge.net/phpBB2/viewtopic.php?t=3569 for
// standards on structures to make things easier on everyone!
// -- ONLY applies to EQ structs, not MQ structs like alerts, etc.

typedef struct _EQCURRENTSELECTION {
/*0x00*/   DWORD   Unknown;
/*0x04*/   DWORD   SelectedWnd;     //address to selection in tree
/*0x08*/   DWORD   Unknownlodncrap;
/*0x0c*/   DWORD   NumberOfSlots;   //merchantslots == 79
/*0x10*/   DWORD   TextureAnim;
/*0x14*/
} EQCURRENTSELECTION, *PEQCURRENTSELECTION;

//CXWnd see B1058C in Nov  7 2016 eqgame.exe (Test) -eqmule
#define VFTABLE \
/*0x000*/ LPVOID  IsValid; \
/*0x004*/ LPVOID  vector_deleting_destructor; \
/*0x008*/ LPVOID  DrawNC; \
/*0x00c*/ LPVOID  PostDraw; \
/*0x010*/ LPVOID  PostDraw2; \
/*0x014*/ LPVOID  DrawCursor; \
/*0x018*/ LPVOID  CXWnd__OnResize; \
/*0x01c*/ LPVOID  PostDraw3; \
/*0x020*/ LPVOID  DrawBackground; \
/*0x024*/ LPVOID  DrawTooltip; \
/*0x028*/ LPVOID  DrawTooltipAtPoint; \
/*0x02c*/ LPVOID  GetMinimizedRect; \
/*0x030*/ LPVOID  DrawTitleBar; \
/*0x034*/ LPVOID  GetCursorToDisplay; \
/*0x038*/ LPVOID  HandleLButtonDown; \
/*0x03c*/ LPVOID  HandleLButtonUp; \
/*0x040*/ LPVOID  HandleLButtonHeld; \
/*0x044*/ LPVOID  HandleLButtonUpAfterHeld; \
/*0x048*/ LPVOID  HandleRButtonDown; \
/*0x04c*/ LPVOID  HandleRButtonUp; \
/*0x050*/ LPVOID  HandleRButtonHeld; \
/*0x054*/ LPVOID  HandleRButtonUpAfterHeld; \
/*0x058*/ LPVOID  HandleWheelButtonDown; \
/*0x05c*/ LPVOID  HandleWheelButtonUp; \
/*0x060*/ LPVOID  HandleMouseMove; \
/*0x064*/ LPVOID  HandleWheelMove; \
/*0x068*/ LPVOID  HandleKeyboardMsg; \
/*0x06c*/ LPVOID  HandleMouseLeave; \
/*0x070*/ LPVOID  OnDragDrop; \
/*0x074*/ LPVOID  GetDragDropCursor; \
/*0x078*/ LPVOID  QueryDropOK; \
/*0x07c*/ LPVOID  OnClickStick; \
/*0x080*/ LPVOID  GetClickStickCursor; \
/*0x084*/ LPVOID  QueryClickStickDropOK; \
/*0x088*/ LPVOID  WndNotification; \
/*0x08c*/ LPVOID  OnWndNotification; \
/*0x090*/ LPVOID  ShowWindow; /* Activate */ \
/*0x094*/ LPVOID  Deactivate; \
/*0x098*/ LPVOID  OnShow; \
/*0x09c*/ LPVOID  OnMove; /*OnResize;*/ \
/*0x0a0*/ LPVOID  OnResize; \
/*0x0a4*/ LPVOID  OnBeginMoveOrResize; \
/*0x0a8*/ LPVOID  OnCompleteMoveOrResize; \
/*0x0ac*/ LPVOID  OnMinimizeBox; \
/*0x0b0*/ LPVOID  OnMaximizeBox; \
/*0x0b4*/ LPVOID  OnTileBox; \
/*0x0b8*/ LPVOID  OnTile; \
/*0x0bc*/ LPVOID  OnSetFocus; \
/*0x0c0*/ LPVOID  OnKillFocus; \
/*0x0c4*/ LPVOID  OnProcessFrame; /*Dofade*/ \
/*0x0c8*/ LPVOID  OnVScroll; \
/*0x0cc*/ LPVOID  OnHScroll; \
/*0x0d0*/ LPVOID  OnBroughtToTop; \
/*0x0d4*/ LPVOID  OnActivate; \
/*0x0d8*/ LPVOID  Show; \
/*0x0dc*/ LPVOID  AboutToShow; \
/*0x0e0*/ LPVOID  AboutToHide; \
/*0x0e4*/ LPVOID  RequestDockInfo; \
/*0x0e8*/ LPVOID  GetTooltip; \
/*0x0ec*/ LPVOID  Unknown0x0ec; /*this is new and added on oct 11 2016 its just empty*/ \
/*0x0f0*/ LPVOID  HitTest; \
/*0x0f4*/ LPVOID  GetHitTestRect; \
/*0x0f8*/ LPVOID  GetInnerRect; \
/*0x0fc*/ LPVOID  GetClientRect; \
/*0x100*/ LPVOID  GetClientClipRect; \
/*0x104*/ LPVOID  GetMinSize; \
/*0x108*/ LPVOID  GetMaxSize; \
/*0x10c*/ LPVOID  GetUntileSize; \
/*0x110*/ LPVOID  IsPointTransparent; \
/*0x114*/ LPVOID  ShouldProcessChildrenFrames; \
/*0x118*/ LPVOID  ShouldProcessControllerFrame; \
/*0x11c*/ LPVOID  SetDrawTemplate; \
/*0x120*/ LPVOID  Move_Rect; /*CXWnd__Move1_x*/ \
/*0x124*/ LPVOID  Move_Point; /*CXWnd__Move_x*/ \
/*0x128*/ LPVOID  SetWindowTextA; \
/*0x12c*/ LPVOID  GetChildWndAt; /*CXWnd__GetChildWndAt_x*/ \
/*0x130*/ LPVOID  GetSidlPiece; /*CSidlScreenWnd__GetSidlPiece_x*/ \
/*0x134*/ LPVOID  GetWindowName; \
/*0x138*/ LPVOID  SetVScrollPos; \
/*0x13c*/ LPVOID  SetHScrollPos; \
/*0x140*/ LPVOID  AutoSetVScrollPos; \
/*0x144*/ LPVOID  AutoSetHScrollPos; \
/*0x148*/ LPVOID  SetAttributesFromSidl; \
/*0x14c*/ LPVOID  OnReloadSidl; \
/*0x150*/ LPVOID  HasActivatedFirstTimeAlert; \
/*0x154*/ LPVOID  SetHasActivatedFirstTimeAlert; \
/*0x158*/ LPVOID  GetMinClientSize; \
/*0x15c*/ LPVOID  GetMaxClientSize; \
/*0x160*/ LPVOID  GetActiveEditWnd; \
/*0x164*/ LPVOID  UpdateLayout;
/*0x168*/

//CSidlScreenWnd see B1116C in Nov  7 2016 eqgame.exe (Test) -eqmule
typedef struct _CSIDLWNDVFTABLE {
	VFTABLE
	/*0x168*/ LPVOID  CSidlScreenWnd__OnZone;
	/*0x16c*/ LPVOID  CSidlScreenWnd__OnPreZone;
	/*0x170*/ LPVOID  LoadIniInfo;
	/*0x174*/ LPVOID  StoreIniInfo;
	/*0x178*/ LPVOID  AsSidlScreenWnd;
	/*0x17c*/ LPVOID  GetScreenWndType;
	/*0x180*/
} CSIDLWNDVFTABLE, *PCSIDLWNDVFTABLE;

typedef struct _CXWNDVFTABLE {
VFTABLE
} CXWNDVFTABLE, *PCXWNDVFTABLE;

// in CChatWindow__SetChatFont see 692847 in eqgame.exe Test dated Jun 28 2016
#define EQ_CHAT_FONT_OFFSET    0x11c
static inline VOID SetCCXStr(PCXSTR *cxstr, PCHAR text)
{
	//cxstr=text;
	CCXStr *Str = (CCXStr*)cxstr;
	(*Str) = text;
	cxstr = (PCXSTR*)Str;
}
//__declspec(dllexport) __int64 GetClassMember(void*This, int ID);
//__declspec(dllexport) void SetClassMember(void*This, int ID, __int64 Value);

#define CXW_NO_VTABLE_BEGIN \
/*0x0004*/ struct _CSIDLWND**	WindowPtrs; \
/*0x0008*/ struct _CSIDLWND*	pPrevSiblingWnd; \
/*0x000c*/ struct _CSIDLWND*	pNextSiblingWnd; \
/*0x0010*/ void*	pUnknown0x10; \
/*0x0014*/ struct _CSIDLWND*	pFirstChildWnd; \
/*0x0018*/ BYTE		Unknown0x0018[0x4];

//CXWSize
// actual size 0x1E4 in Sep 16 2015 Test (see 0x693122) - eqmule
// actual size 0x1CC in Jan 13 2016 Test (see 0x6984E8) - eqmule
// actual size 0x1C8 in Feb 10 2016 Test (see 0x699238) - eqmule
// actual size 0x1D4 in May 23 2016 Test (see 0x691812) - eqmule
// actual size 0x1DC in Jun 21 2016 Test (see 0x691E82) - eqmule
// actual size 0x1D0 in Jan  6 2020 Test (see 0x952D1D) - eqmule
// actual size 0x1E0 in Dec 14 2020 Test (see 0x94125D) - eqmule
// actual size 0x200 in Feb 23 2021 Test (see 0x9924AB) - eqmule
// actual size 0x1D8 in May 11 2021 Test (see 0x99EB2B) - eqmule
// actual size 0x1F8 in Aug 10 2021 Test (see 0x99EDDB) - eqmule
// actual size 0x1F0 in Sep 21 2021 Test (see 0x99CB6B) - eqmule
// actual size 0x1E8 in Oct 12 2021 Test (see 0x99EFBB) - eqmule
// actual size 0x1F0 in Nov 30 2021 Test (see 0x99E10B) - eqmule
// actual size 0x1E0 in Dec 14 2021 Test (see 0x99DAEB) - eqmule
#define CXW_NO_VTABLE \
private: \
CXW_NO_VTABLE_BEGIN \
/*0x001C*/ void*	pTextObject; \
/*0x0020*/ bool		bBringToTopWhenClicked; \
/*0x0024*/ DWORD	XMLIndex; \
/*0x0028*/ RECT		ClipRectScreen; \
/*0x0038*/ int		ParentAndContextMenuArrayIndex; \
/*0x003C*/ bool		bMaximized; \
/*0x0040*/ COLORREF DisabledBackground; \
/*0x0044*/ DWORD	WindowStyle;    /* bit 1 - vertical scroll, bit 2 - horizontal scroll, bit 4 - title bar?, bit 8 - border */ \
/*0x0048*/ DWORD  BackgroundDrawType; \
/*0x004C*/ bool		bIsParentOrContextMenuWindow; \
/*0x0050*/ int		DeleteCount; \
/*0x0054*/ RECT		OldLocation; \
/*0x0064*/ int		RightOffset; \
/*0x0068*/ UINT		TransitionStartTick; \
/*0x006C*/ int		HScrollMax; \
/*0x0070*/ BYTE		FadeAlpha; \
/*0x0074*/ DWORD	FadeDelay; \
/*0x0078*/ bool		bCaptureTitle; \
/*0x0079*/ BYTE     bResizableMask; \
/*0x007C*/ tagSIZE	MinClientSize; \
/*0x0084*/ bool bClickThrough; /* if true you can click through the window, well it doesnt work for our chatwindow (yet) so more work is needed to figure out why */ \
/*0x0085*/ bool		ValidCXWnd; /* IsValid has this one */ \
/*0x0086*/ bool		bMarkedForDelete; \
/*0x0088*/ int	Transition; \
/*0x008C*/ RECT		ClipRectClient; \
/*0x009C*/ int		VScrollMax; \
/*0x00A0*/ bool		bRightAnchoredToLeft; \
/*0x00A4*/ int		TopOffset; \
/*0x00A8*/ RECT		Location; \
/*0x00B8*/ bool		bMaximizable; \
/*0x00BC*/ int		VScrollPos; \
/*0x00C0*/ struct _CXSTR*	DataStr; \
/*0x00C4*/ void   *TitlePiece2; \
/*0x00C8*/ bool		bClientClipRectChanged; \
/*0x00C9*/ bool		bBottomAnchoredToTop; \
/*0x00CA*/ bool		Clickable;      /* found in CChatWindow__CChatWindow_x and the button handlers */ \
/*0x00CC*/ void	    *pFont; \
/*0x00D0*/ int		HScrollPos; \
/*0x00D4*/ bool		Unlockable;     /* found in CSidlScreenWnd__LoadIniInfo_x related to Locked */ \
/*0x00D5*/ BYTE		FadeToAlpha; /* found in CSidlScreenWnd__StoreIniInfo_x */ \
/*0x00D6*/ bool bClickThroughMenuItemStatus; /* on/off */ \
/*0x00D7*/ bool		bTiled; \
/*0x00D8*/ struct _CXSTR*	Tooltip; /* found in CSidlManager__CreateLabel_x */ \
/*0x00DC*/ int		BlinkState; \
/*0x00E0*/ bool		bActive; \
/*0x00E4*/ UINT		FadeDuration; \
/*0x00E8*/ void		*pLayoutStrategy; \
/*0x00EC*/ BYTE		Alpha; \
/*0x00ED*/ bool		bClipToParent; \
/*0x00EE*/ bool		Faded; \
/*0x00F0*/ COLORREF	CRNormal; /* found in OnProcessFrame */ \
/*0x00F4*/ bool		dShow; \
/*0x00F5*/ bool		CloseOnESC;     /* found in CSidlScreenWnd__StoreIniInfo_x, close when ESC is pressed */ \
/*0x00F8*/ int		BlinkDuration; \
/*0x00FC*/ UINT		TransitionDuration; \
/*0x0100*/ UINT		BlinkFadeFreq; \
/*0x0104*/ bool		bAction; \
/*0x0108*/ RECT		IconRect; \
/*0x0118*/ bool		bBorder; \
/*0x011C*/ UINT		BlinkFadeDuration; \
/*0x0120*/ bool		bEscapableLocked; \
/*0x0121*/ bool		Fades; \
/*0x0122*/ bool bShowClickThroughMenuItem;	/*shows/hides the click through option on the window menu*/ \
/*0x0124*/ void	*IconTextureAnim; \
/*0x0128*/ RECT		ClientRect; \
/*0x0138*/ int		BottomOffset; \
/*0x013C*/ void* pTipTextObject; \
/*0x0140*/ int		ZLayer; /* found in CXWndManager__DrawWindows_x */ \
/*0x0144*/ bool		Enabled; \
/*0x0145*/ bool		bUseInLayoutHorizontal; \
/*0x0146*/ bool		bFullyScreenClipped; \
/*0x0148*/ void   *TitlePiece; \
/*0x014C*/ bool		bHCenterTooltip; \
/*0x014D*/ bool		bClientRectChanged; \
/*0x0150*/ struct _CXSTR*	XMLToolTip; /* found in CSidlManager__CreateLabel_x */ \
/*0x0154*/ LONG		BlinkStartTimer; \
/*0x0158*/ DWORD	BGType;         /* found in CSidlScreenWnd__StoreIniInfo_x */ \
/*0x015C*/ RECT		TransitionRect; \
/*0x016C*/ void	*DrawTemplate; \
/*0x0170*/ BYTE		StartAlpha; \
/*0x0171*/ bool		bScreenClipRectChanged; \
/*0x0174*/ UINT		LastBlinkFadeRefreshTime; \
/*0x0178*/ COLORREF	BGColor; /* DO NOT CHNAGE THIS TO AN ARGBCOLOR, it will break the padding since its a union that has bytes in it. */ \
/*0x017C*/ bool		bKeepOnScreen; \
/*0x017D*/ bool		bUseInLayoutVertical; \
/*0x0180*/ struct _CSIDLWND* pWndFocusOther; \
/*0x0184*/ bool		MouseOver; /* found in CXWnd__SetMouseOver_x */ \
/*0x0185*/ bool		Locked; /* found in CSidlScreenWnd__LoadIniInfo_x */ \
/*0x0188*/ void *pController; \
/*0x018C*/ int		LeftOffset; \
/*0x0190*/ int		managerArrayIndex; \
/*0x0194*/ tagSIZE	MaxClientSize; \
/*0x019C*/ UINT		BlinkFadeStartTime; \
/*0x01A0*/ bool		Minimized; \
/*0x01A4*/ ArrayClass2_RO<UINT> RuntimeTypes; /* Size 0x18 */ \
/*0x01BC*/ BYTE		TargetAlpha; \
/*0x01C0*/ DWORD	LastTimeMouseOver; \
/*0x01C4*/ bool		bIsTransitioning; \
/*0x01C8*/ struct _CXSTR*	WindowText; /* CXWnd__GetWindowTextA_x has this one */ \
/*0x01CC*/ bool		bTopAnchoredToTop; \
/*0x01D0*/ struct _CSIDLWND*		pParentWindow; /* CXWnd__IsDescendantOf_x has this one, If this is NULL, coordinates are absolute... */ \
/*0x01D4*/ bool		bBorder2; \
/*0x01D5*/ bool		bNeedsSaving; /* will be true if you move or resize the window */ \
/*0x01D6*/ bool		bLeftAnchoredToLeft; \
/*0x01D8*/ __int64		Data; \
/*0x01E0*/ \
public: \
			bool IsVisible() \
			{ \
				return dShow; \
				/*return GetClassMember(this,1) ? true:false; /*dShow*/ \
			} \
			void SetVisible(bool bValue) \
			{ \
				dShow = bValue; \
				/*SetClassMember(this,1,bValue); /*dShow*/ \
			} \
			void SetClickThrough(bool bValue) \
			{ \
				bClickThrough = bValue; /*bClickThrough*/ \
				/*SetClassMember(this,2,bValue); /*bClickThrough*/ \
			} \
			void SetMinClientSize(tagSIZE pt) \
			{ \
				MinClientSize.cx = pt.cx; \
				MinClientSize.cy = pt.cy; \
				/*SetClassMember(this,3,(__int64)&pt); /*MinClientSize*/ \
			} \
			void SetMaximizable(bool bValue) \
			{ \
				bMaximizable = bValue; \
				/*SetClassMember(this,4,bValue); /*bMaximizable*/ \
			} \
			void *GetFont() \
			{ \
				return pFont; \
				/*return (void *)GetClassMember(this,5); /*pFont*/ \
			} \
			void SetEscapable(bool bValue) \
			{ \
				CloseOnESC = bValue; /*CloseOnESC*/ \
				/*SetClassMember(this,6,bValue); /*CloseOnESC*/ \
			} \
			void SetEscapableLocked(bool bValue) \
			{ \
				bEscapableLocked = bValue; /*bEscapableLocked*/ \
				/*SetClassMember(this,7,bValue); /*bEscapableLocked*/ \
			} \
			struct _CSIDLWND *GetParentWindow() \
			{ \
				return pParentWindow; /*pParentWindow*/ \
				/*return (struct _CSIDLWND *)GetClassMember(this,8); /*pParentWindow*/ \
			} \
			void SetParentWindow(struct _CSIDLWND *pWnd) \
			{ \
				pParentWindow = pWnd; /*pParentWindow*/ \
				/*SetClassMember(this,8,(__int64)pWnd); /*pParentWindow*/ \
			} \
			struct _CSIDLWND *GetFirstChildWnd() \
			{ \
				return pFirstChildWnd; /*pFirstChildWnd*/ \
				/*return (struct _CSIDLWND *)GetClassMember(this,9); /*pFirstChildWnd*/ \
			} \
			struct _CSIDLWND *GetNextSiblingWnd() \
			{ \
				return pNextSiblingWnd; /*pNextSiblingWnd*/ \
				/*return (struct _CSIDLWND *)GetClassMember(this,10); /*pNextSiblingWnd*/ \
			} \
			int GetVScrollMax() \
			{ \
				return VScrollMax; /*VScrollMax*/ \
				/*return (int)GetClassMember(this,11); /*VScrollMax*/ \
			} \
			int GetVScrollPos() \
			{ \
				return VScrollPos; /*VScrollPos*/ \
				/*return (int)GetClassMember(this,12); /*VScrollPos*/ \
			} \
			int GetHScrollMax() \
			{ \
				return HScrollMax; /*HScrollMax*/ \
				/*return (int)GetClassMember(this,13); /*HScrollMax*/ \
			} \
			int GetHScrollPos() \
			{ \
				return HScrollPos; /*HScrollPos*/ \
				/*return (int)GetClassMember(this,14); /*HScrollPos*/ \
			} \
			bool IsMinimized() \
			{ \
				return Minimized; /*Minimized*/ \
				/*return GetClassMember(this,15) ? true:false; /*Minimized*/ \
			} \
			void SetMinimized(bool bValue) \
			{ \
				Minimized = bValue; /*Minimized*/ \
			} \
			bool IsMouseOver() \
			{ \
				return MouseOver; /*MouseOver*/ \
				/*return GetClassMember(this,16) ? true:false; /*MouseOver*/ \
			} \
			RECT GetLocation() \
			{ \
				return Location; /*Location*/ \
				/*RECT ret = *(RECT*)GetClassMember(this,17); /*Location*/ \
				/*return ret;*/ \
			} \
			void SetLocation(RECT rc) /*left top right bottom*/ \
			{ \
				Location = rc; /*Location*/ \
				/*SetClassMember(this,17,(__int64)&rc); /*Location*/ \
			} \
			RECT GetOldLocation() \
			{ \
				return OldLocation; \
				/*RECT ret = *(RECT*)GetClassMember(this,18); /*OldLocation*/ \
				/*return ret;*/ \
			} \
			void SetNeedsSaving(bool bValue) \
			{ \
				bNeedsSaving = bValue; /*bNeedsSaving*/ \
				/*SetClassMember(this,19,bValue); /*bNeedsSaving*/ \
			} \
			bool GetNeedsSaving() \
			{ \
				return bNeedsSaving; /*bNeedsSaving*/ \
				/*GetClassMember(this,19,bValue); /*bNeedsSaving*/ \
			} \
			void SetClientRectChanged(bool bValue) \
			{ \
				bClientRectChanged = bValue; \
				/*SetClassMember(this,20,bValue); /*bClientRectChanged*/ \
			} \
			void CSetWindowText(char*Value) \
			{ \
				SetCCXStr(&WindowText,Value); /*WindowText*/ \
				/*SetClassMember(this,21,(__int64)Value); /*WindowText*/ \
			} \
			struct _CXSTR* CGetWindowText() \
			{ \
				return WindowText; /*WindowText*/ \
				/*return (struct _CXSTR*)GetClassMember(this,21); /*WindowText*/ \
			} \
			void SetTooltip(char*Value) \
			{ \
				SetCCXStr(&Tooltip,Value); /*Tooltip*/ \
				/*SetClassMember(this,22,(__int64)Value); /*Tooltip*/ \
			} \
			struct _CXSTR* GetTooltip() \
			{ \
				return Tooltip; /*Tooltip*/ \
				/*return (struct _CXSTR*)GetClassMember(this,22); /*Tooltip*/ \
			} \
			DWORD GetBGColor() \
			{ \
				return BGColor; /*BGColor*/ \
				/*return (DWORD)GetClassMember(this,23); /*BGColor*/ \
			} \
			void SetBGColor(COLORREF Value) \
			{ \
				BGColor = Value; /*BGColor*/ \
				/*SetClassMember(this,23,Value); /*BGColor*/ \
			} \
			void SetDisabledBackground(COLORREF Value) \
			{ \
				DisabledBackground = Value; /*DisabledBackground*/ \
				/*SetClassMember(this,24,Value); /*DisabledBackground*/ \
			} \
			bool IsEnabled() \
			{ \
				return Enabled; /*Enabled*/ \
				/*return GetClassMember(this,25) ? true:false; /*Enabled*/ \
			} \
			void SetEnabled(bool bValue) \
			{ \
				Enabled = bValue; /*Enabled*/ \
				/*SetClassMember(this,25,bValue); /*Enabled*/ \
			} \
			DWORD GetWindowStyle() \
			{ \
				return WindowStyle; /*WindowStyle*/ \
				/*return (DWORD)GetClassMember(this,26); /*WindowStyle*/ \
			} \
			void SetWindowStyle(DWORD Value) \
			{ \
				WindowStyle = Value; /*WindowStyle*/ \
				/*SetClassMember(this,26,Value); /*WindowStyle*/ \
			} \
			void SetClipToParent(bool bValue) \
			{ \
				bClipToParent = bValue; /*bClipToParent*/ \
				/*SetClassMember(this,27,bValue); /*bClipToParent*/ \
			} \
			void SetUseInLayoutHorizontal(bool bValue) \
			{ \
				bUseInLayoutHorizontal = bValue; /*bUseInLayoutHorizontal*/ \
				/*SetClassMember(this,28,bValue); /*bUseInLayoutHorizontal*/ \
			} \
			void SetUseInLayoutVertical(bool bValue) \
			{ \
				bUseInLayoutVertical = bValue; /*bUseInLayoutVertical*/ \
				/*SetClassMember(this,29,bValue); /*bUseInLayoutVertical*/ \
			} \
			void AddStyle(DWORD Value) \
			{ \
				WindowStyle|=Value; /*WindowStyle*/ \
				/*SetClassMember(this,30,Value); /*WindowStyle*/ \
			} \
			void RemoveStyle(DWORD Value) \
			{ \
				WindowStyle &= ~Value; /*WindowStyle*/ \
				/*SetClassMember(this,31,Value); /*WindowStyle*/ \
			} \
			void SetZLayer(int Value) \
			{ \
				ZLayer = Value; /*ZLayer*/ \
				/*SetClassMember(this,32,Value); /*ZLayer*/ \
			} \
			int GetZLayer() \
			{ \
				return ZLayer; /*ZLayer*/ \
				/*return (int)GetClassMember(this,32); /*ZLayer*/ \
			} \
			void *GetDrawTemplate() \
			{ \
				return DrawTemplate; /*DrawTemplate*/ \
				/*return (void*)GetClassMember(this,33); /*DrawTemplate*/ \
			} \
			void SetActive(bool bValue) \
			{ \
				bActive = bValue; /*bActive*/ \
				/*SetClassMember(this,34,bValue); /*bActive*/ \
			} \
			void SetLocked(bool bValue) \
			{ \
				Locked = bValue; /*Locked*/ \
				/*SetClassMember(this,35,bValue); /*Locked*/ \
			} \
			bool IsLocked() \
			{ \
				return Locked; /*Locked*/ \
				/*return GetClassMember(this,35) ? true:false; /*Locked*/ \
			} \
			void SetFades(bool bValue) \
			{ \
				Fades = bValue; /*Fades*/ \
				/*SetClassMember(this,36,bValue); /*Fades*/ \
			} \
			bool GetFades() \
			{ \
				return Fades; /*Fades*/ \
				/*return GetClassMember(this,36) ? true:false; /*Fades*/ \
			} \
			void SetFaded(bool bValue) \
			{ \
				Faded = bValue; /*Faded*/ \
				/*SetClassMember(this,37,bValue); /*Faded*/ \
			} \
			bool GetFaded() \
			{ \
				return Faded; /*Faded*/ \
				/*return GetClassMember(this,37) ? true:false; /*Faded*/ \
			} \
			void SetFadeDelay(int Value) \
			{ \
				FadeDelay = Value; /*FadeDelay*/ \
				/*SetClassMember(this,38,Value); /*FadeDelay*/ \
			} \
			int GetFadeDelay() \
			{ \
				return FadeDelay; /*FadeDelay*/ \
				/*return (int)GetClassMember(this,38); /*FadeDelay*/ \
			} \
			void SetBGType(DWORD Value) \
			{ \
				BGType = Value; /*BGType*/ \
				/*SetClassMember(this,39,Value); /*BGType*/ \
			} \
			DWORD GetBGType() \
			{ \
				return BGType; /*BGType*/ \
				/*return (DWORD)GetClassMember(this,39); /*BGType*/ \
			} \
			void SetFadeDuration(UINT Value) \
			{ \
				FadeDuration = Value; /*FadeDuration*/ \
				/*SetClassMember(this,40,Value); /*FadeDuration*/ \
			} \
			UINT GetFadeDuration() \
			{ \
				return FadeDuration; /*FadeDuration*/ \
				/*return (UINT)GetClassMember(this,40); /*FadeDuration*/ \
			} \
			void SetAlpha(BYTE Value) \
			{ \
				Alpha = Value; /*Alpha*/ \
				/*SetClassMember(this,41,Value); /*Alpha*/ \
			} \
			BYTE GetAlpha() \
			{ \
				return Alpha; /*Alpha*/ \
				/*return (BYTE)GetClassMember(this,41); /*Alpha*/ \
			} \
			void SetFadeToAlpha(BYTE Value) \
			{ \
				FadeToAlpha = Value; /*FadeToAlpha*/ \
				/*SetClassMember(this,42,Value); /*FadeToAlpha*/ \
			} \
			BYTE GetFadeToAlpha() \
			{ \
				return FadeToAlpha; /*FadeToAlpha*/ \
				/*return (BYTE)GetClassMember(this,42); /*FadeToAlpha*/ \
			} \
			bool GetClickable() \
			{ \
				return Clickable; /*Clickable*/ \
				/*return GetClassMember(this,43) ? true:false; /*Clickable*/ \
			} \
			void SetClickable(bool bValue) \
			{ \
				Clickable = bValue; /*Clickable*/ \
				/*SetClassMember(this,43,bValue); /*Clickable*/ \
			} \
			void SetData(__int64 Value) \
			{ \
				Data = Value; /*Data*/ \
				/*SetClassMember(this,44,Value); /*Data*/ \
			} \
			__int64 GetData() \
			{ \
				return Data; /*Data*/ \
				/*return GetClassMember(this,44); /*Data*/ \
			} \
			void SetClickThroughMenuItemStatus(bool bValue) \
			{ \
				bClickThroughMenuItemStatus = bValue; /*bClickThroughMenuItemStatus*/ \
				/*SetClassMember(this,45,bValue); /*bClickThroughMenuItemStatus*/ \
			} \
			void SetController(void* Value) \
			{ \
				pController = Value; /*pController*/ \
				/*SetClassMember(this,46,(__int64)Value); /*pController*/ \
			} \
			void SetShowClickThroughMenuItem(bool bValue) \
			{ \
				bShowClickThroughMenuItem = bValue; /*bShowClickThroughMenuItem*/ \
				/*SetClassMember(this,47,bValue); /*bShowClickThroughMenuItem*/ \
			} \
			void SetBottomAnchoredToTop(bool bValue) \
			{ \
				bBottomAnchoredToTop = bValue; /*bBottomAnchoredToTop*/ \
				/*SetClassMember(this,48,bValue); /*bBottomAnchoredToTop*/ \
			} \
			void SetLeftAnchoredToLeft(bool bValue) \
			{ \
				bLeftAnchoredToLeft = bValue; /*bLeftAnchoredToLeft*/ \
				/*SetClassMember(this,49,bValue); /*bLeftAnchoredToLeft*/ \
			} \
			void SetRightAnchoredToLeft(bool bValue) \
			{ \
				bRightAnchoredToLeft = bValue; /*bRightAnchoredToLeft*/ \
				/*SetClassMember(this,50,bValue); /*bRightAnchoredToLeft*/ \
			} \
			void SetTopAnchoredToTop(bool bValue) \
			{ \
				bTopAnchoredToTop = bValue; /*bTopAnchoredToTop*/ \
				/*SetClassMember(this,51,bValue); /*bTopAnchoredToTop*/ \
			} \
			void SetTopOffset(int Value) \
			{ \
				TopOffset = Value; /*TopOffset*/ \
				/*SetClassMember(this,52,Value); /*TopOffset*/ \
			} \
			int GetTopOffset() \
			{ \
				return TopOffset; /*TopOffset*/ \
				/*return (int)GetClassMember(this,52); /*TopOffset*/ \
			} \
			void SetBottomOffset(int Value) \
			{ \
				BottomOffset = Value; /*BottomOffset*/ \
				/*SetClassMember(this,53,Value); /*BottomOffset*/ \
			} \
			int GetBottomOffset() \
			{ \
				return BottomOffset; /*BottomOffset*/ \
				/*return (int)GetClassMember(this,53); /*BottomOffset*/ \
			} \
			void SetLeftOffset(int Value) \
			{ \
				LeftOffset = Value; /*LeftOffset*/ \
				/*SetClassMember(this,54,Value); /*LeftOffset*/ \
			} \
			int GetLeftOffset() \
			{ \
				return LeftOffset; /*LeftOffset*/ \
				/*return (int)GetClassMember(this,54); /*LeftOffset*/ \
			} \
			void SetRightOffset(int Value) \
			{ \
				RightOffset = Value; /*RightOffset*/ \
				/*SetClassMember(this,55,Value); /*RightOffset*/ \
			} \
			int GetRightOffset() \
			{ \
				return RightOffset; /*RightOffset*/ \
				/*return (int)GetClassMember(this,55); /*RightOffset*/ \
			} \
			int GetXMLIndex() \
			{ \
				return XMLIndex; /*XMLIndex*/ \
				/*return (int)GetClassMember(this,56); /*XMLIndex*/ \
			} \
			struct _CXSTR* GetXMLToolTip() \
			{ \
				return XMLToolTip; /*XMLToolTip*/ \
				/*return (struct _CXSTR*)GetClassMember(this,57); /*XMLToolTip*/ \
			} \
			void SetCRNormal(COLORREF Value) \
			{ \
				CRNormal = Value; /*CRNormal*/ \
				/*SetClassMember(this,58,Value); /*CRNormal*/ \
			} \
			void SetBringToTopWhenClicked(bool bValue) \
			{ \
				bBringToTopWhenClicked = bValue; /*bBringToTopWhenClicked*/ \
				/*SetClassMember(this,59,bValue); /*bBringToTopWhenClicked*/ \
			} \
			int GetParentAndContextMenuArrayIndex() \
			{ \
				return (int)ParentAndContextMenuArrayIndex; /*ParentAndContextMenuArrayIndex*/ \
				/*return GetClassMember(this,58); /*ParentAndContextMenuArrayIndex*/ \
			} \
			bool GetKeepOnScreen() \
			{ \
				return bKeepOnScreen; /*bKeepOnScreen*/ \
				/*return GetClassMember(this,59); /*bKeepOnScreen*/ \
			} \
			void SetKeepOnScreen(bool bValue) \
			{ \
				bKeepOnScreen = bValue; /*bKeepOnScreen*/ \
				/*SetClassMember(this,60,bValue); /*bKeepOnScreen*/ \
			} \

#define CXW \
/*0x000*/   struct  _CXWNDVFTABLE   *pvfTable; \
CXW_NO_VTABLE \
/*0x1E0*/


typedef struct _CXWND {
	CXW
} CXWND, *PCXWND;
#define GateBind          0
//CSidlScreenWnd__CSidlScreenWnd1_x
//to check do : CSidlScreenWnd*csidlwnd = (CSidlScreenWnd*)FindMQ2Window("MMTW_MerchantWnd");
//Size 0x228 in Oct 17 2017 Live exe see 60586D - eqmule
#define SIDL \
/*0x1e0*/ bool bControlsCreated; /*yes this REALLY is here, see 8D255E in aug 10 2017 live - eqmule*/ \
/*0x1e4*/ PCXSTR SidlText; /*found in CChatWindow__WndNotification_x*/\
/*0x1e8*/ LPVOID SidlPiece; /* CScreenPieceTemplate (important) */ \
/*0x1ec*/ ArrayClass_RO<void*>RadioGroup; /*CRadioGroup*/ \
/*0x1fc*/ bool bInitVisibility; \
/*0x1fd*/ bool bVisibleBeforeResize; \
/*0x200*/ int IniFlags; \
/*0x204*/ PCXSTR INIStorageName; /*found in CSidlScreenWnd__LoadSidlScreen_x*/\
/*0x208*/ int	IniVersion; \
/*0x20c*/ int	LastResX; \
/*0x210*/ int	LastResY; \
/*0x214*/ bool bLastResFullscreen; \
/*0x218*/ int  ContextMenuID; \
/*0x21c*/ PCXWND pFirstVScrollChild; \
/*0x220*/ int ContextMenuTipID; \
/*0x224*/ bool bHasActivatedFirstTimeAlert; \
/*0x228*/

#define CSW \
/*0x000*/ struct _CSIDLWNDVFTABLE* pvfTable; \
CXW_NO_VTABLE \
SIDL \

typedef struct _CSIDLWND {
	CSW
} CSIDLWND, *PCSIDLWND;

typedef struct _CCONTEXTMENUVFTABLE {
	VFTABLE
		/*0x168*/ LPVOID CListWnd__OnHeaderClick;
	/*0x16c*/ LPVOID CListWnd__DrawColumnSeparators;
	/*0x170*/ LPVOID CListWnd__DrawSeparator;
	/*0x174*/ LPVOID CListWnd__DrawLine;
	/*0x178*/ LPVOID CListWnd__DrawHeader;
	/*0x17c*/ LPVOID CListWnd__DrawItem;
	/*0x180*/ LPVOID CListWnd__DeleteAll;
	/*0x184*/ LPVOID CListWnd__Compare;
	/*0x188*/ LPVOID CListWnd__Sort;
	/*0x18c*/ LPVOID CContextMenu__ShowAt;
	/*0x190*/
} CCONTEXTMENUVFTABLE, *PCCONTEXTMENUVFTABLE;

//class CSidlManager : public CSidlManagerBase
// size 0x1D4 2019-02-12 test see 53E3D3 - eqmule
typedef struct _CSIDLMGR {
	/*0x000*/    BYTE    Unknown0x000[0x130];
	/*0x130*/    PVOID   pXMLDataMgr;
	/*0x134*/    BYTE    Unknown0x134[0xA0];
	/*0x1D4*/
} CSIDLMGR, *PCSIDLMGR;

struct DragDropInfo {
	/*0xb8*/	bool bRightButton;
	/*0xbc*/	PCXWND FromWnd;
	/*0xc0*/	PCXWND ToWnd;
	/*0xc4*/	POINT FromPoint;
	/*0xcc*/	POINT ToPoint;
	/*0xd4*/	int   Code;
	/*0xd8*/	void *Data;
	/*0xdc*/
};
struct ClickStickInfo
{
	/*0x00*/	DWORD vfTable;
	/*0x04*/	PCXWND FromWnd;
	/*0x08*/	PCXWND ToWnd;
	/*0x0c*/	POINT FromPoint;
	/*0x14*/	POINT ToPoint;
	/*0x1c*/	int   Code;
	/*0x20*/	void  *Data;
	/*0x24*/
};
class ControllerStuff
{
	/*0x00*/	void *vfTable;
	/*0x04*/	HashTable<void*, int, ResizePolicyNoShrink> Stuff;//this really isnt a HashTable I think its a variation that just stores pointers to stuff
	/*0x14*/	//but for our purposes it won't matter, i don't want to spend any more time on these kind of array classes. -eqmule
};

class ControllerManager
{
public:
	/*0x00*/	void* pvfTable;
	/*0x04*/	ControllerStuff *pControllerStuff;
	/*0x08*/	HashTable<ControllerStuff*> CStuff;
	/*0x18*/
};

//Actual size 0x1b0 in Oct 19 2017 Beta (see 4C2E25) - eqmule
//this should really be renamed to EQCXWNDMGR
//becuase its a class that looks like this:
//class EQCXWndManager : CXWndManager
typedef struct _CXWNDMGR {
	/******************* Begin of CXWNDMGR ***************/
	/*0x000*/ LPVOID CXWNDMGR__vtable;
	/*0x004*/ LPVOID CXWNDMGR__vtable2;
	/*0x008*/ ArrayClass_RO<PCXWND> pWindows;
	/*0x018*/ ArrayClass_RO<PCXWND> ParentAndContextMenuWindows;
	/*0x028*/ ArrayClass_RO<PCXWND> TransitionWindows;
	/*0x038*/ ArrayClass_RO<PCXWND> PendingDeletionWindows;
	/*0x048*/ UINT TypematicKey;
	/*0x04c*/ UINT LastKeyDownTime;
	/*0x050*/ UINT LastMouseClickTime;//when mouse was last clicked
	/*0x054*/ DWORD MouseMoveTimeStamp;//when mouse was last moved
	/*0x058*/ int StrokesSent;
	/*0x05c*/ int ToolTipHitTest;//this is really an enum //0 outside 1 transparent 2 client 3 minimizebox 4 tilebox 5 qmark 6 maxbox 7 closebox 8 titlebar 9 vscrollup 10 vscrolldown 11 vscroll thumb 12 vscroll pgup 13 vscroll pgdn 14 hscroll left 15 hscroll right 16 hscroll thumb 17 hscroll pgup 18 hscroll pgdn 19 border left 20 border top 21 border right 22 border bottom 23 border topleft 24 border topright 25 border bott left 26 bott right 27 left top 28 left bott 29 right top 30 right bott 31 no hit
	/*0x060*/ PCSIDLWND LastClickedWindow;
	/*0x064*/ PCSIDLWND MainWindow;
	/*0x068*/ PCSIDLWND FocusWindow;//when you select a window its pointer shows up here
	/*0x06c*/ PCSIDLWND CurrDraggedWindow;//when you drag a window its pointer shows up here
	/*0x070*/ PCSIDLWND ActiveWindow;
	/*0x074*/ PCSIDLWND LastMouseOver;//Current window pointer is over if this is 0 we are above MAIN Window
	/*0x078*/ PCSIDLWND Tooltip;//Last Tooltip to show?
	/*0x07c*/ ArrayClass_RO<PCXWND> GlobalFocusWindows;
	/*0x08c*/ bool bReadingLog;
	/*0x08d*/ bool bSidlManagerOwner;
	/*0x090*/ int CaptureCount;
	/*0x094*/ bool bMouseMoveRelative;
	/*0x098*/ POINT MousePoint;//for sure 8BE7CA
	/*0x0a0*/ bool bCapsLock;
	/*0x0a1*/ bool KeyboardFlags[4];    // 7d-80
	/*0x0a5*/ bool bChatMessage;
	/*0x0a6*/ bool bDrawWindows;
	/*0x0a7*/ BYTE MouseMoveFlags;
	/*0x0a8*/ UINT ManagerMode;//enum but i dont have time to do it now. its like moving, sizing etc.
	/*0x0ac*/ int  DecorButtonHitTest;
	/*0x0b0*/ POINT MoveResize; //for sure 8BE7D6 
	/*0x0b8*/ DragDropInfo DDI;//size 0x24
	/*0x0dc*/ ClickStickInfo CSI;//size 0x24
	/*0x100*/ int Really;
	/*0x104*/ bool bModal;//for sure
	/*0x108*/ UINT TTCheckTimer;//for sure
	/*0x10c*/ UINT Flags;//for sure
	/*0x110*/ PCXSTR ClipText;
	/*0x114*/ DWORD ScreenExtentX;
	/*0x118*/ DWORD ScreenExtentY;
	/*0x11c*/ ArrayClass_RO<void *>  FontsArray;
	/*0x12c*/ void *pfontSystem;
	/*0x130*/ bool bSomething;
	/*0x134*/ HWND* pGlobalHwnd;
	/*0x138*/ POINT StoredMousePos;//last position Mouse was at before we moved it
	/*0x140*/ bool bManagerDeletionPending;
	/*0x144*/ CursorClass CC;//size 0x3c
	/******************* End of CXWNDMGR ***************/
	/******************* Begin of EQCXWNDMGR ***************/
	/*0x180*/ ControllerStuff Stuff;//size 0x14
	/*0x194*/ ControllerManager ControllerMgr;//size 0x18
	/*0x1AC*/ bool Unknown0x1AC;
	/******************* End of EQCXWNDMGR ***************/
	/*0x1b0*/
} CXWNDMGR, *PCXWNDMGR;

struct _CONTENTDATA
{
	PCONTENTS pCont;
	int Unknown;
};
typedef struct _CONTENTSARRAY {
	struct _CONTENTDATA Array[1];
} CONTENTSARRAY, *PCONTENTSARRAY;

//Size is 86 see 7329FE in Apr 19 2021 -eqmule
enum ChatFilterEnum {
	CHAT_FILTER_SAY,
	CHAT_FILTER_TELL,
	CHAT_FILTER_GROUP,
	CHAT_FILTER_RAID,
	CHAT_FILTER_GUILD,
	CHAT_FILTER_OOC,
	CHAT_FILTER_AUCTION,
	CHAT_FILTER_SHOUT,
	CHAT_FILTER_EMOTE,
	CHAT_FILTER_MELEE_YOUR_HITS,
	CHAT_FILTER_SPELLS_MINE,
	CHAT_FILTER_SKILLS,
	CHAT_FILTER_CHAT1,
	CHAT_FILTER_CHAT2,
	CHAT_FILTER_CHAT3,
	CHAT_FILTER_CHAT4,
	CHAT_FILTER_CHAT5,
	CHAT_FILTER_CHAT6,
	CHAT_FILTER_CHAT7,
	CHAT_FILTER_CHAT8,
	CHAT_FILTER_CHAT9,
	CHAT_FILTER_CHAT10,
	CHAT_FILTER_OTHER,
	CHAT_FILTER_MELEE_YOUR_MISSES,
	CHAT_FILTER_MELEE_YOU_BEING_HIT,
	CHAT_FILTER_MELEE_YOU_BEING_MISSED,
	CHAT_FILTER_MELEE_OTHERS_HITS,
	CHAT_FILTER_MELEE_OTHERS_MISSES,
	CHAT_FILTER_MELEE_MY_DEATH,
	CHAT_FILTER_MELEE_OTHER_PC_DEATH,
	CHAT_FILTER_MELEE_CRITICAL_HITS,
	CHAT_FILTER_MELEE_DISCIPLINES,
	CHAT_FILTER_MELEE_WARNINGS,
	CHAT_FILTER_MELEE_NPC_RAMPAGE,
	CHAT_FILTER_MELEE_NPC_FLURRY,
	CHAT_FILTER_MELEE_NPC_ENRAGE,
	CHAT_FILTER_SPELLS_OTHERS,
	CHAT_FILTER_SPELLS_FAILURES,
	CHAT_FILTER_SPELLS_CRITICALS,
	CHAT_FILTER_SPELLS_WORN_OFF,
	CHAT_FILTER_SPELLS_DD_YOURS,
	CHAT_FILTER_FOCUS_EFFECTS,
	CHAT_FILTER_RANDOM_YOUR_ROLLS,
	CHAT_FILTER_PET_MESSAGES,
	CHAT_FILTER_PET_RAMPAGE_FLURRY,
	CHAT_FILTER_PET_CRITICALS,
	CHAT_FILTER_DAMAGE_SHIELDS_YOU_ATTACKING,
	CHAT_FILTER_EXPERIENCE_MESSAGES,
	CHAT_FILTER_NPC_EMOTES,
	CHAT_FILTER_SYSTEM_MESSAGES,
	CHAT_FILTER_WHO,
	CHAT_FILTER_PET_SPELLS,
	CHAT_FILTER_PET_RESPONSES,
	CHAT_FILTER_ITEM_SPEECH,
	CHAT_FILTER_FELLOWSHIP_MESSAGES,
	CHAT_FILTER_MERCENARY_MESSAGES,
	CHAT_FILTER_PVP_MESSAGES,
	CHAT_FILTER_MELEE_YOUR_FLURRY,
	CHAT_FILTER_DEBUG,//todo: check this not 100% sure its it...
	CHAT_FILTER_MELEE_NPC_DEATH,
	CHAT_FILTER_RANDOM_OTHERS_ROLLS,
	CHAT_FILTER_RANDOM_GROUP_RAID_ROLLS,
	CHAT_FILTER_ENVIRONMENTAL_DAMAGE_YOURS,
	CHAT_FILTER_ENVIRONMENTAL_DAMAGE_OTHERS,
	CHAT_FILTER_DAMAGE_SHIELDS_YOU_DEFENDING,
	CHAT_FILTER_DAMAGE_SHIELDS_OTHERS,
	CHAT_FILTER_EVENT_MESSAGES,
	CHAT_FILTER_OVERWRITTEN_DETRIMENTAL_SPELL_MESSAGES,
	CHAT_FILTER_OVERWRITTEN_BENEFICIAL_SPELL_MESSAGES,
	CHAT_FILTER_YOU_CANT_USE_THAT_COMMAND, //- Added chat color and filtering options for 'You can't use that command' messages.
	CHAT_FILTER_COMBAT_ABILITY_REUSE,  //- Added chat color and filtering options for combat ability and AA ability reuse time messages.
	CHAT_FILTER_SPELLS_AA_ABILITY_REUSE,
	CHAT_FILTER_ITEM_DESTROYED,
	CHAT_FILTER_SPELLS_AURAS_YOU,
	CHAT_FILTER_SPELLS_AURAS_OTHERS,
	CHAT_FILTER_SPELLS_HEALS_YOURS,
	CHAT_FILTER_SPELLS_HEALS_OTHERS,
	CHAT_FILTER_SPELLS_DOTS_YOURS,
	CHAT_FILTER_SPELLS_DOTS_OTHERS,
	CHAT_FILTER_SPELLS_SONGS,
	CHAT_FILTER_SPELLS_DD_OTHERS,
	CHAT_FILTER_ZERO_HEALS,
	CHAT_FILTER_SOMETHING,
	CHAT_FILTER_SOMETHING1,
	CHAT_FILTER_SOMETHING2,
	CHAT_FILTER_OTHERS_DISCIPLINES,
	CHAT_FILTER_SOMETHING3,
};
#define MAX_CHAT_FILTERS CHAT_FILTER_SOMETHING3
enum eContextMenuFilterIDs
{
	CONTEXT_FILTER_SAY = 100,
	CONTEXT_FILTER_TELL,
	CONTEXT_FILTER_GROUP,
	CONTEXT_FILTER_RAID,
	CONTEXT_FILTER_GUILD,
	CONTEXT_FILTER_OOC,
	CONTEXT_FILTER_AUCTION,
	CONTEXT_FILTER_SHOUT,
	CONTEXT_FILTER_EMOTE,
	CONTEXT_FILTER_MELEE_YOUR_HITS,
	CONTEXT_FILTER_SPELLS_MINE,
	CONTEXT_FILTER_SKILLS,
	CONTEXT_FILTER_CHAT1,
	CONTEXT_FILTER_CHAT2,
	CONTEXT_FILTER_CHAT3,
	CONTEXT_FILTER_CHAT4,
	CONTEXT_FILTER_CHAT5,
	CONTEXT_FILTER_CHAT6,
	CONTEXT_FILTER_CHAT7,
	CONTEXT_FILTER_CHAT8,
	CONTEXT_FILTER_CHAT9,
	CONTEXT_FILTER_CHAT10,
	CONTEXT_FILTER_OTHER,
	CONTEXT_FILTER_MELEE_YOUR_MISSES,
	CONTEXT_FILTER_MELEE_YOU_BEING_HIT,
	CONTEXT_FILTER_MELEE_YOU_BEING_MISSED,
	CONTEXT_FILTER_MELEE_OTHERS_HITS,
	CONTEXT_FILTER_MELEE_OTHERS_MISSES,
	CONTEXT_FILTER_MELEE_MY_DEATH,
	CONTEXT_FILTER_MELEE_OTHER_PC_DEATH,
	CONTEXT_FILTER_MELEE_CRITICAL_HITS,
	CONTEXT_FILTER_MELEE_DISCIPLINES,
	CONTEXT_FILTER_MELEE_WARNINGS,
	CONTEXT_FILTER_MELEE_NPC_RAMPAGE,
	CONTEXT_FILTER_MELEE_NPC_FLURRY,
	CONTEXT_FILTER_MELEE_NPC_ENRAGE,
	CONTEXT_FILTER_SPELLS_OTHERS,
	CONTEXT_FILTER_SPELLS_FAILURES,
	CONTEXT_FILTER_SPELLS_CRITICALS,
	CONTEXT_FILTER_SPELLS_WORN_OFF,
	CONTEXT_FILTER_SPELLS_DD_YOURS,
	CONTEXT_FILTER_FOCUS_EFFECTS,
	CONTEXT_FILTER_RANDOM_YOUR_ROLLS,
	CONTEXT_FILTER_PET_MESSAGES,
	CONTEXT_FILTER_PET_RAMPAGE_FLURRY,
	CONTEXT_FILTER_PET_CRITICALS,
	CONTEXT_FILTER_DAMAGE_SHIELDS_YOU_ATTACKING,
	CONTEXT_FILTER_EXPERIENCE_MESSAGES,
	CONTEXT_FILTER_NPC_EMOTES,
	CONTEXT_FILTER_SYSTEM_MESSAGES,
	CONTEXT_FILTER_WHO,
	CONTEXT_FILTER_PET_SPELLS,
	CONTEXT_FILTER_PET_RESPONSES,
	CONTEXT_FILTER_ITEM_SPEECH,
	CONTEXT_FILTER_FELLOWSHIP_MESSAGES,
	CONTEXT_FILTER_MERCENARY_MESSAGES,
	CONTEXT_FILTER_PVP_MESSAGES,
	CONTEXT_FILTER_MELEE_YOUR_FLURRY,
	CONTEXT_FILTER_DEBUG,//todo: check this not 100% sure its it...
	CONTEXT_FILTER_MELEE_NPC_DEATH,
	CONTEXT_FILTER_RANDOM_OTHERS_ROLLS,
	CONTEXT_FILTER_RANDOM_GROUP_RAID_ROLLS,
	CONTEXT_FILTER_ENVIRONMENTAL_DAMAGE_YOURS,
	CONTEXT_FILTER_ENVIRONMENTAL_DAMAGE_OTHERS,
	CONTEXT_FILTER_DAMAGE_SHIELDS_YOU_DEFENDING,
	CONTEXT_FILTER_DAMAGE_SHIELDS_OTHERS,
	CONTEXT_FILTER_EVENT_MESSAGES,
	CONTEXT_FILTER_OVERWRITTEN_DETRIMENTAL_SPELL_MESSAGES,
	CONTEXT_FILTER_OVERWRITTEN_BENEFICIAL_SPELL_MESSAGES,
	CONTEXT_FILTER_YOU_CANT_USE_THAT_COMMAND, //- Added chat color and filtering options for 'You can't use that command' messages.
	CONTEXT_FILTER_COMBAT_ABILITY_REUSE,  //- Added chat color and filtering options for combat ability and AA ability reuse time messages.
	CONTEXT_FILTER_SPELLS_AA_ABILITY_REUSE,
	CONTEXT_FILTER_ITEM_DESTROYED,
	CONTEXT_FILTER_SPELLS_AURAS_YOU,
	CONTEXT_FILTER_SPELLS_AURAS_OTHERS,
	CONTEXT_FILTER_SPELLS_HEALS_YOURS,
	CONTEXT_FILTER_SPELLS_HEALS_OTHERS,
	CONTEXT_FILTER_SPELLS_DOTS_YOURS,
	CONTEXT_FILTER_SPELLS_DOTS_OTHERS,
	CONTEXT_FILTER_SPELLS_SONGS,
	CONTEXT_FILTER_SPELLS_DD_OTHERS,

	CONTEXT_FILTER_ALL_NORMAL,
	CONTEXT_FILTER_ALL_MELEE,
	CONTEXT_FILTER_ALL_SPELL,
	CONTEXT_FILTER_ALL_CHANNEL,
	CONTEXT_FILTER_ALL_RANDOM,
	CONTEXT_FILTER_ALL_DAMAGE_SHIELDS,
	CONTEXT_FILTER_ALL_ENVIRONMENTAL_DMG,
	//new timestamp menu ids goes here
	//todo check the ids.

};

//Size 0x384 in eqgame dated 05 Mar 2019 Test (see 0x5418AB) -eqmule
//todo examine this struct closer...
typedef struct _EQCHATMGR {
	/*0x000*/ PCXWND	ChatWnd[0x20];
	/*0x080*/ PVOID		ChatContainerWindow_vfTable;
	/*0x084*/ DWORD		Unknown0x084;
	/*0x088*/ DWORD		Unknown0x088;
	/*0x08c*/ DWORD		Unknown0x08c;
	/*0x090*/ PCXWND	ChatContainerWindow[0x20];
	/*0x110*/ DWORD		Unknown0x110;
	/*0x114*/ DWORD		NumWindows;
	/*0x118*/ DWORD		LockedWindow;
	/*0x11c*/ DWORD		ActiveWindow;
	/*0x120*/ DWORD		CurrentActive; // CurrentActive... CChat::GetActiveChatWindow
	/*0x124*/ DWORD		LockedActive; // LockedActive... CChatManager__GetLockedActiveChatWindow_x
	/*0x08c*/ struct _EQCHATWINDOW *ChannelMap[MAX_CHAT_FILTERS];   // channel map
	/*0x1a0*/ LPVOID	pCM_MainMenu;//these are all CContextMenu* but we LPVOID them here since its easy...
	/*0x1a4*/ int		ScrollbarIndex;
	/*0x1a8*/ LPVOID	pCM_LanguageMenu;
	/*0x1ac*/ int		LanguageMenuIndex;
	/*0x1b0*/ LPVOID	pCM_FilterMenu;
	/*0x1b4*/ int		FilterMenuIndex;
	/*0x1b8*/ int		ChatChannelFilterMenuIndex;
	/*0x1bc*/ int		MeleeFilterSubMenuIndex;
	/*0x1c0*/ int		SpellsFilterSubMenuIndex;
	/*0x1c4*/ LPVOID	pCM_MeleeMenu;
	/*0x1c8*/ int		MeleeFilterMenuIndex;
	/*0x1cc*/ LPVOID	pCM_SpellMenu;
	/*0x1d0*/ int		SpellsMenuIndex;
	/*0x1d4*/ LPVOID	pCM_ChannelMenu;
	/*0x1d8*/ int		ChannelMenuIndex;
	/*0x1dc*/ LPVOID	pCM_DefaultChannelMenu;
	/*0x1e0*/ int		DefaultChannelMenu;
	/*0x1e4*/ int		DefaultChannelMenu2;
	/*0x1e8*/ LPVOID	pCM_ChatChannelDefChan;
	/*0x1ec*/ int		ChatChannelDefChanIndex;
	/*0x1f0*/ LPVOID	pCM_YourHitsMenu;
	/*0x1f4*/ int		YourHitsMenuIndex;
	/*0x1f8*/ LPVOID	pCM_YourMissesMenu;
	/*0x1fc*/ int		YourMissesMenuindex;
	/*0x200*/ LPVOID	pCM_YouBeingHitMenu;
	/*0x204*/ int		YouBeingHitMenuindex;
	/*0x208*/ LPVOID	pCM_OthersHitsMenu;
	/*0x20c*/ int		OthersHitsMenuindex;
	/*0x210*/ LPVOID	pCM_OthersMissesMenu;
	/*0x214*/ int		OthersMissesMenuindex;
	/*0x218*/ LPVOID	pCM_AllContextMenu;
	/*0x21c*/ int		AllContextMenuindex;
	/*0x220*/ LPVOID	pCM_HitModesMenu;
	/*0x224*/ int		HitModesMenuindex;
	/*0x228*/ LPVOID	pCM_ReplyToMenu;
	/*0x22c*/ int		ReplyToMenuindex;
	/*0x230*/ LPVOID	pCM_TellFriendMenu;
	/*0x234*/ int		TellFriendMenuindex;
	/*0x238*/ LPVOID	pCM_TellRaidmemberMenu;
	/*0x23c*/ int		TellRaidmemberMenuindex;
	/*0x240*/ int		ReplyToSubIndex;
	/*0x244*/ int		TellFriendSubIndex;
	/*0x248*/ int		TellRaidmemberSubIndex;
	/*0x24c*/ int		HitModes[0x8];
	/*0x26c*/ int		DefaultChannel;
	/*0x270*/ LPVOID	pCM_RandomFilterMenu;
	/*0x274*/ int		RandomFilterIndex;
	/*0x278*/ int		RandomFilterSubIndex;
	/*0x27c*/ LPVOID	pCM_EnvironmentalDamageMenu;
	/*0x280*/ int		EnvironmentalDamageIndex;
	/*0x284*/ int		EnvironmentalDamageSubIndex;
	/*0x288*/ LPVOID	pCM_DamageShieldsFilterMenu;
	/*0x28c*/ int		DamageShieldsFilterIndex;
	/*0x290*/ int		DamageShieldsFilterSubIndex;
	/*0x294*/ LPVOID	pCM_BeneficialSpellsFilterMenu;
	/*0x298*/ int		BeneficialSpellsFilteIndex;
	/*0x29c*/
} EQCHATMGR, *PEQCHATMGR;

//CChatWindow__CChatWindow_x
//Size 0x370 see 69A7DD in Oct 17 2017 Live exe -eqmule
typedef struct _EQCHATWINDOW {
	/*0x000*/ struct _CSIDLWND Wnd;
	/*0x228*/ struct _EQCHATMGR *ChatManager;
	/*0x22c*/ struct _CSIDLWND* InputWnd;
	/*0x230*/ struct _CSIDLWND* OutputWnd;
	/*0x234*/ int ChatChannel;
	/*0x238*/ int ChatChannelIndex;
	/*0x23c*/ CHAR TellTarget[0x40];//for sure
	/*0x27c*/ int Language;
	/*0x280*/ bool bIsMainChat;
	/*0x281*/ bool bIsTellWnd;
	/*0x284*/ int TimestampFormat;
	/*0x288*/ COLORREF TimestampColor;
	/*0x28c*/ bool bTimestampMatchChatColor;
	/*0x290*/ struct _CXSTR *CommandHistory[0x28]; // see 690DAA in apr 11 2017 test
	/*0x330*/ int HistoryIndex;
	/*0x334*/ int HistoryLastShown;
	/*0x338*/ int FontSize;//style but yeah...
	/*0x33c*/ int AlwaysChathereIndex;//menu
	/*0x340*/ int NamesContextMenu;//guess
	/*0x344*/ int ContextMenuID;//also a guess
	/*0x348*/ int ContextMenuSubID[0xa];//this is not correct but ill fix it later.
	/*0x370*/
} EQCHATWINDOW, *PEQCHATWINDOW;

// actual size 0x14 10-12-2010
//I think this is correct:
//see (69FF1E) in eqgame.exe dated 2013 11 13 -eqmule
//Invslot MUST be an int
typedef struct _EQINVSLOT {
	/*0x00*/    LPVOID pvfTable;        // not based on cxwnd
	/*0x04*/    struct _EQINVSLOTWND *pInvSlotWnd;
	/*0x08*/    DWORD Unknown0x08;
	/*0x0C*/    int InvSlot;
	/*0x10*/    BYTE Valid;
	/*0x11*/    BYTE Unknown0x11[3];
	/*0x14*/
} EQINVSLOT, *PEQINVSLOT;

// Size 0x2418 see 534532 in Nov 06 2018 Test - eqmule
typedef struct _EQINVSLOTMGR {
	/*0x0000*/    PVOID vfTable;
	/*0x0004*/    struct _EQINVSLOT *SlotArray[MAX_INV_SLOTS];//size 0x2400 //see 72E00F in Nov 06 2018 Test - eqmule
	/*0x2404*/    DWORD TotalSlots;
	/*0x2408*/    UINT LastUpdate;
	/*0x240c*/    struct _EQINVSLOT *pSelectedItem;//LastSelectedSlot
	/*0x2410*/    struct _EQINVSLOT *pFindSelectedItem;
	/*0x2414*/    bool bToggleBagsOpen;
	/*0x2415*/    bool bToggleBankBagsOpen;
	/*0x2418*/
} EQINVSLOTMGR, *PEQINVSLOTMGR;

// onetimehero 09-17-03
// ContainerWindow
// Actual Size 0x17C old
typedef struct _EQCONTAINERWINDOW {
	/*0x000*/ struct _CSIDLWND Wnd;
	/*0x148*/ struct _CONTENTS*   pContents;         // Pointer to the contents of the container;
													 // Matches the pointer in CHARINFO.Inventory/Bank/World
	/*0x14c*/ struct _CSIDLWND*   pSlots[0x0a];
	/*0x000*/ struct _CSIDLWND*   pCombine;
	/*0x168*/ struct _CSIDLWND*   pDone;
	/*0x16c*/ struct _CSIDLWND*   pIcon;
	/*0x170*/ struct _CSIDLWND*   pUnknown;
	/*0x174*/ struct _CSIDLWND*   pLabel;
	/*0x178*/ BYTE Unknown0x178[4];
	/*0x17c*/
} EQCONTAINERWINDOW, *PEQCONTAINERWINDOW;

typedef struct _POINT3 {
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
} POINT3, *PPOINT3;

// plazmic 08-17-03
// Map Window
typedef struct _MAPLABEL { // sizeof() = 0x38
	/*0x00*/    DWORD Unknown0x0;
	/*0x04*/    struct _MAPLABEL *pNext;
	/*0x08*/    struct _MAPLABEL *pPrev;
	/*0x0c*/    POINT3 Location;
	/*0x18*/    ARGBCOLOR Color;
	/*0x1c*/    DWORD Size;     //1-3;
	/*0x20*/    PCHAR Label;
	/*0x24*/    DWORD Layer;    //0-3;
	/*0x28*/    DWORD Width;
	/*0x2c*/    DWORD Height;
	/*0x30*/    DWORD unk_0x2c;
	/*0x34*/    DWORD unk_0x30;
} MAPLABEL, *PMAPLABEL;

typedef struct _MAPLINE { // sizeof() = 0x28 (think this might be 0x34 now)
	struct _MAPLINE *pNext;
	struct _MAPLINE *pPrev;
	POINT3 Start;
	POINT3 End;
	ARGBCOLOR Color;
	DWORD Layer;          //0-3;
} MAPLINE, *PMAPLINE;

typedef struct _EQTRADESKILLRECIPE {
	/*0x00*/ DWORD Unknown0x00;
	/*0x04*/ DWORD Trivial;
	/*0x08*/ DWORD Unknown0x08;
	/*0x0c*/ DWORD Unknown0x0c;
	/*0x10*/ DWORD Unknown0x10;
	/*0x14*/ CHAR  Name[0x40];
	/*0x54*/ DWORD Unknown0x54;
	/*0x58*/ DWORD Ingredient[0xa];     // ID# of ingredient(s)
	/*0x80*/ DWORD IngredientIcon[0xa]; //Icon# of ingredient(s) (Note: 499 is blank)
} EQTRADESKILLRECIPE, *PEQTRADESKILLRECIPE;

//Size 0x3d8 (02/10/2004)
typedef struct _EQTRADESKILLWINDOW {
	/*0x000*/   struct _CSIDLWND Wnd;
	/*0x148*/ DWORD Unknown0x148[0x1b];
	/*0x1b4*/ PEQTRADESKILLRECIPE SearchResults[0x64];
	/*0x344*/ DWORD    Unknown0x344;
	/*0x348*/ DWORD Unknown0x348;
	/*0x34c*/ DWORD Unknown0x34c;
	/*0x350*/ PCONTENTS Container;
	/*0x354*/ DWORD Unknown0x354;
	/*0x358*/ PEQTRADESKILLRECIPE SelectedRecipe;
	/*0x35c*/ DWORD Unknown0x35c;
	/*0x360*/ DWORD SkillLevel;
	/*0x364*/ DWORD Unknown0x364;
	/*0x368*/ DWORD Unknown0x368;
	/*0x36c*/ BYTE  Unknown0x36c[0x58];
	/*0x3c4*/ DWORD Unknown0x3c4;
	/*0x3c8*/ DWORD Unknown0x3c8;
	/*0x3cc*/ BYTE  Unknonw0x3cc[0x8];
	/*0x3d4*/ DWORD Unknown0x3d4;
	/*0x3d8*/ DWORD Unknown0x3d8;
} EQTRADESKILLWINDOW, *PTRADESKILLWINDOW;

typedef struct _GUILDMEMBERINFO {
	/*0x000*/ DWORD Unknown0x000; //pointer?
	/*0x004*/ BYTE OnlineStatus;  // 00=offline, 01=online
	/*0x005*/ BYTE UnknownData0x005;
	/*0x006*/ BYTE UnknownData0x006;
	/*0x007*/ BYTE Unknown0x007;
	/*0x008*/ BYTE Unknown0x008[0x8];
	/*0x010*/ CHAR Name[0x40];
	/*0x050*/ DWORD Level;
	/*0x054*/ DWORD Class;
	/*0x058*/ DWORD Rank;         //0=member, 1=officer, 2=leader
	/*0x05c*/ FLOAT UnknownData0x05c;
	/*0x060*/ CHAR PublicNote[0x80];
	/*0x0e0*/ BYTE Unknown0x0e0[0x180];
	/*0x260*/ WORD UnknownData0x260;
	/*0x262*/ WORD UnknownData0x262;
	/*0x264*/ WORD UnknownData0x264;
	/*0x266*/ WORD UnknownData0x266;
} GUILDMEMBERINFO, *PGUILDMEMBERINFO;

//Size: 0x3d0 (02/18/2004)
typedef struct _EQGUILDWINDOW {
	/*0x000*/ struct _CSIDLWND Wnd;
	/*0x148*/ BYTE  Unknown0x148[0x4c];
	/*0x194*/ BYTE Unknown0x194;
	/*0x195*/ BYTE ShowOffline;                  // 01 = show offline box is checked
	/*0x196*/ BYTE Unknown0x196[0x2];
	/*0x198*/ struct _GUILDMEMBERINFO **pMember; // This is a pointer to the beginning of a list of pointers, 
												 // each representing one player in the guild.  The number of 
												 // pointers depends upon TotalMemberCount.
	/*0x19c*/ DWORD TotalMemberCount;
	/*0x1a0*/ DWORD Unknown0x1a0;                // 150?
	/*0x1a4*/ DWORD Unknown0x1a4;                // 1?
	/*0x1a8*/ DWORD TotalMemberCountAgain;
	/*0x1ac*/ BYTE Unknown0x1ac[0x1c];
	/*0x1c8*/ CHAR PersonalNotesFilePath[0x40];  // path to personal notes file
	/*0x208*/ BYTE Unknown0x208[0x1c0];          // empty
	/*0x3c8*/ DWORD Unknown0x3c8;                // 1?
	/*0x3cc*/ DWORD Unknown0x3cc;                // some sort of bizaare pointer...
	/*0x3d0*/
} EQGUILDWINDOW, *PEQGUILDWINDOW;

typedef struct _EQNOTESWINDOW {
	/*0x000*/ struct _CSIDLWND Wnd;
	/*0x148*/ BYTE  Unknown0x148[0x04];
	/*0x14c*/ struct _CSIDLWND *pEditWnd;
} EQNOTESWINDOW, *PEQNOTESWINDOW;

//aSpelldisplaywi
// Actual size 0x278 Nov 02 2017 Beta see 7AE2DF -eqmule
typedef struct _EQSPELLINFOWINDOW
{
	/*0x000*/ struct _CSIDLWND Wnd;
	/*0x228*/ PVOID WindowID;
	/*0x22c*/ PVOID pDuration;
	/*0x230*/ struct _CSIDLWND *DisplayWnd;//pDescription
	/*0x234*/ PVOID pName;
	/*0x238*/ PVOID pIcon;
	/*0x23c*/ IString2 ItemInfo;
	/*0x24c*/ IString2 MoreText;
	/*0x25c*/ DWORD Unknown0x25c;
	/*0x260*/ DWORD pTABuffIcons;
	/*0x264*/ DWORD pTADragIcons;
	/*0x268*/ bool bFailed;
	/*0x26c*/ PVOID TextureAnim;
	/*0x270*/ DWORD SpellID;
	/*0x274*/ DWORD TimeStamp;
	/*0x278*/
} EQSPELLINFOWINDOW, *PEQSPELLINFOWINDOW;

// Size: 0x1a4 (4/14/2005)
typedef struct _EQMAILWINDOW {
	/*0x000*/ struct _CSIDLWND Wnd;
	/*0x158  Finish... */
} EQMAILWINDOW, *PEQMAILWINDOW;

#define Fly                     0

// Actual size 0x1c4 10-9-2003
typedef struct _EQHOTBUTTONWINDOW {
	/*0x000*/ struct _CSIDLWND Wnd;
	/*0x148*/ BYTE Unknown0x138[0xc];
	/*0x000*/ DWORD   HotButtonWndView;     //0 to 9 for the different views
	/*0x14c*/ struct _CSIDLWND   *HotButtons[0x0a];//these will change when you switch page...
	/*0x174*/
} EQHOTBUTTONWINDOW, *PEQHOTBUTTONWINDOW;

typedef struct _LOOTCORPSE {
	/*0x000*/   BYTE    Unknown0x000;   // 03 seems very common (for NPC anyway)
	/*0x001*/   CHAR    Name[0x4b];
	/*0x04c*/   FLOAT   Timer;          //Uncertain the equation used here, but fairly certain it's the timer
	/*0x050*/   FLOAT   X;
	/*0x054*/   BYTE    Unknown0x054[0x4];
	/*0x058*/   FLOAT   Y;
	/*0x05c*/   FLOAT   Z;
	/*0x060*/   BYTE    Unknown0x060[0x24];
	/*0x084*/   DWORD   Flags;
	/*0x088*/   BYTE    Unknown0x088[0x4];
	/*0x08c*/   DWORD   Unknown0x08c;   //256 seems very common
	/*0x090*/
	// I think there might be pointers at 0x0e0..but no clue what to
} LOOTCORPSE, *PLOOTCORPSE;

// size 0x180 3-10-2004
typedef struct _EQCOMPASSWINDOW {
	/*0x000*/    struct _CSIDLWND Wnd;
	/*0x148*/    struct _CSIDLWND *pStrip1;
	/*0x14C*/    struct _CSIDLWND *pStrip2;
	// in progress.
	/*0x16C*/   BOOL DrawLine;
	/*0x170*/   DWORD Unknown0x170;
	/*0x174*/    DWORD LineRed;
	/*0x178*/    DWORD LineGreen;
	/*0x17C*/    DWORD LineBlue;
	/*0x180*/
} EQCOMPASSWINDOW, *PEQCOMPASSWINDOW;

// used by options window
typedef struct _EQKBASSIGN
{
	/*0x00*/    struct _CXSTR *pDescription;
	/*0x04*/    DWORD nAssignmentNumber;
	/*0x08*/
} EQKBASSIGN, *PEQKBASSIGN;

// size 0x904 3-10-2004
typedef struct _EQOPTIONSWINDOW {
	/*0x000*/    struct _CSIDLWND Wnd;
	/*0x148*/
	/*0x264*/ struct _EQKBASSIGN Binds[0xA1];
	/*0x508*/
	/*0x904*/
} EQOPTIONSWINDOW, *PEQOPTIONSWINDOW;

// size 0x28 4-24-2004 Lax
typedef struct _EQGRAPHICSENGINE {
	/*0x00*/ // Graphics file handler
	/*0x04*/
} EQGRAPHICSENGINE, *PEQGRAPHICSENGINE;
#define SafeXLoc 0

//CLabel__CLabel_x
//CSidlManager__CreateLabel_x has this
//size 0x208 see 7A5739 in Oct 17 2017 Live -eqmule
typedef struct _CLABEL {
	//Begin CLABELWND
	/*0x000*/ struct    _CXWND Wnd;
	/*0x1e0*/ bool bNoWrap;
	/*0x1e1*/ bool bAlignRight;
	/*0x1e2*/ bool bAlignCenter;
	/*0x1e4*/ int  xOffset;
	/*0x1e8*/ bool bResizeHeightToText;
	/*0x1ec*/ int Unknown0x1ec;
	/*0x1f0*/ PCXSTR Text;
	/*0x1f4*/ int Unknown0x1f4;
	/*0x1f8*/ bool Unknown0x1f8;
	/*0x1fc*/ int Unknown0x1fc;
	/*0x200*/ //begin CLABEL
	/*0x200*/ int EQType;//renamed from SidlPiece
	/*0x204*/ int Unknown0x204;
	/*0x208*/
} CLABEL, *PCLABEL;

//CButtonWnd__CButtonWnd_x
//size is 0x278 see 91829A in eqgame.exe dated 18 Sep 2018 Live - eqmule
typedef struct _CBUTTONWND {
	/*0x000*/ struct _CXWND Wnd;
	/*0x01e0*/ int		MouseButtonState;
	/*0x01e4*/ bool		bPicture;
	/*0x01e8*/ void*	pGroup;//CRadioGroup*
	/*0x01ec*/ bool		bChecked;
	/*0x01ed*/ bool		bMouseOverLastFrame;
	/*0x01f0*/ tagPOINT	DecalOffset;
	/*0x01f8*/ tagSIZE	DecalSize;
	/*0x0200*/ COLORREF	DecalTint;//Color
	/*0x0204*/ RECT		TextOffsets;
	/*0x0214*/ int		TextModeBits;
	/*0x0218*/ COLORREF	Mouseover;
	/*0x021c*/ COLORREF	Pressed;
	/*0x0220*/ COLORREF	Disabled;
	/*0x0224*/ UINT		CoolDownBeginTime;
	/*0x0228*/ UINT		CoolDownDuration;
	/*0x022c*/ PCXSTR	Indicator;
	/*0x0230*/ UINT		IndicatorVal;
	/*0x0234*/ void*	pIndicatorTextObject;
	/*0x0238*/ void*	Unknown0x238;//most likely a CTextureAnimation*
	/* CButtonDrawTemplate Start */
	/*0x023c*/ PCXSTR	Name;
	/*0x0240*/ void*	Normal;//CTextureAnimation
	/*0x0244*/ void*	taPressed;
	/*0x0248*/ void*	Flyby;
	/*0x024c*/ void*	taDisabled;
	/*0x0250*/ void*	PressedFlyby;
	/*0x0254*/ void*	PressedDisabled;
	/*0x0258*/ void*	NormalDecal;
	/*0x025c*/ void*	PressedDecal;
	/*0x0260*/ void*	FlybyDecal;
	/*0x0264*/ void*	DisabledDecal;
	/*0x0268*/ void*	PressedFlybyDecal;
	/*0x026c*/ void*	PressedDisabledDecal;
	/*0x0270*/ bool		bAllowButtonClickThrough;
	/*0x0271*/ bool		bCoolDownDoDelayedStart;
	/*0x0272*/ bool		bIsCheckbox;
	/*0x0273*/ bool		bIsDrawLasso;
	/*0x0274*/ UINT		ButtonStyle;
	/*0x0278*/
} CBUTTONWND, *PCBUTTONWND;

typedef struct _CTEXTENTRYWND {
	/*0x000*/ struct    _CXWND Wnd;
	/*0x1c4*/ DWORD     CursorPos1;
	/*0x13c*/ DWORD     CursorPos2; //same as above but only this needs to be set to update cursor position
	/*0x140*/
} CTEXTENTRYWND, *PCTEXTENTRYWND;

typedef struct _LOOTDETAILS
{
	/*0x00*/ DWORD	CorpseID;//spawnId of the corpse that has this lootitem
	/*0x04*/ WORD	StackCount;
	/*0x06*/ WORD	UnknownWord;
	/*0x08*/ DWORD	Expiration;
	/*0x0c*/ BYTE	Locked;
	/*0x0d*/ CHAR	Name[0x40];
	/*0x4d*/ //more data here? -eqmule
}LOOTDETAILS, *PLOOTDETAILS;
//.text:0041ECBD                 imul    eax, 84h in Apr 15 2015 test
enum eAdvLootState
{
	eAdvLootWaiting,
	eAdvLootAsk,
	eAdvLootAskAutoRoll,
	eAdvLootStop,
	eAdvLootAskCompleted,
	eAdvLootFreeGrab,
	eAdvLootFixedAskAutoRoll,
	eAdvLootFixedAskCompleted,
	eAdvLootRemoved
};
//size is 0x90 see 0x49BA29 in Jun 09 2020 test -eqmule
typedef struct _LOOTITEM
{
	/*0x00*/ __int64	ItemID;
	/*0x08*/ CHAR	Name[0x40];
	/*0x48*/ int	IconID;
	/*0x4C*/ bool   bStackable;
	/*0x50*/ DWORD  MaxStack;
	/*0x54*/ BYTE   NoDrop;
	/*0x58*/ DWORD  ComboID;
	/*0x5c*/ DWORD  LootID;
	/*0x60*/ eAdvLootState State;
	/*0x64*/ int	Unknown0x64;//how many are interested in a roll? -eqmule
	/*0x68*/ BYTE	bAutoRoll;
	/*0x69*/ BYTE	ActivelyManaged; // User has the manage Window up
	/*0x6a*/ BYTE	ContextMenu;     // item has a context menu
	/*0x6b*/ BYTE	AskRandomMode; //item is in AskRandom mode
	/*0x6c*/ BYTE   CLootInProgress;
	/*0x6d*/ BYTE   PLootInProgress;
	/*0x70*/ EQArray<LOOTDETAILS>LootDetails;
	/*0x80*/ DWORD	AskTimer;
	/*0x84*/ BYTE	AutoRoll;
	/*0x85*/ BYTE	FG;
	/*0x86*/ BYTE	Need;
	/*0x87*/ BYTE	Greed;
	/*0x88*/ BYTE	No;
	/*0x89*/ BYTE	AlwaysNeed;
	/*0x8a*/ BYTE	AlwaysGreed;
	/*0x8b*/ BYTE	Never;
	/*0x8c*/ int	Unknown0x8c;//probably just a filler.
	/*0x90*/
} LOOTITEM, *PLOOTITEM;

typedef struct _LOOTLIST {
	/*0x000*/ BYTE	Unknown0x004[0x4];
	/*0x004*/ struct _LOOTITEM *pLootItem;
	/*0x008*/ LONG	 ListSize;
	/*0x00c*/ LONG	 Unknown0x00c;
	/*0x010*/ LONG	 Unknown0x010;
	/*0x014*/ struct _CXWND	 *SharedLootList;
	/*0x018*/ struct _CXWND	 *PersonalLootList;
	/*0x01c*/ LONG	 Unknown0x01c;
	/*0x020*/ LONG	 Unknown0x020;
	/*0x024*/
} LOOTLIST, *PLOOTLIST;

//CAdvancedLootWnd__CAdvancedLootWnd_x
//size 0x2f8 see 4CEDDD in Nov 02 2017 Beta -eqmule
typedef struct _EQADVLOOTWND {
	/*0x000*/ struct _CSIDLWND     Wnd;
	/*0x228*/ BYTE		Unknown0x0228[0x94];
	/*0x2bc*/ struct _LOOTLIST *pCLootList;//below ref to aAdlw_applyfilt
	/*0x2c0*/ struct _LOOTLIST *pPLootList;//below ref to aAdlw_cllwnd
	/*0x2c4*/ DWORD		Unknown0x2c4;
	/*0x2c8*/ DWORD		Unknown0x2c8;
	/*0x2cc*/ DWORD		Unknown0x2cc;
	/*0x2d0*/ DWORD		TotalLootCount;
	/*0x2d4*/ DWORD		Unknown0x2d4;
	/*0x2d8*/ DWORD		ContextMenuId;
	/*0x2dc*/ DWORD		CLastStackSize;
	/*0x2e0*/ BYTE		Unknown0x2e0[0x18];
	/*0x2f8*/
} EQADVLOOTWND, *PEQADVLOOTWND;

enum ETargetType {
	eTrivialCon,
	eVeryEasyCon,
	eEasyCon,
	eFairlyEasyCon,
	eFairMatchCon,
	eDifficultCon,
	eDeadlyCon,
	eFreeTarget,
	eFreeTargetInvalid,
};
//
//.text:005FC640 ; public: __thiscall CTargetIndicator::CTargetIndicator(void)
//size 0x48 see 4BA434 in Oct 26 2015 -eqmule
typedef struct _TARGETINDICATOR
{
	/*0x00*/	bool bVisible;
	/*0x01*/	bool bSettingsLoaded;
	/*0x04*/	PSPAWNINFO lasttarget;
	/*0x04*/	PSPAWNINFO MarkedTarget[4];//Assist,FirstMarked,LastMarked
	/*0x18*/	BYTE IndicatorHidden;//if this is 1 our mouse is over another window and not on the main one - shouldnt cast when this is 1
	/*0x19*/	BYTE CanActivate;//if 0 the indicator is red if 1 its green, i.e. it can be activated.
	/*0x1a*/	BYTE Unknown0x1a[0x2];
	/*0x1c*/	DWORD TargetIndicatorSettings;//CTargetIndicatorSettings class todo: figure it out
	/*0x20*/	DWORD MarkerIndicatorSettings;
	/*0x24*/	ETargetType IndicatorType;//this is reliable IF you actually have a target
	/*0x28*/	FLOAT SegmentLength;
	/*0x2c*/	FLOAT ControlSegmentLength;
	/*0x30*/	void *pTargetThickLine; //CThickLineInterface
	/*0x34*/	void *pFreeTargetThickLine; //CThickLineInterface
	/*0x38*/	void *pMarkerThickLine[4]; //CThickLineInterface
	/*0x48*/
} TARGETINDICATOR, *PTARGETINDICATOR;

typedef struct _TARGETDATA
{
	/*0x00*/ PSPAWNINFO	pPlayer;
	/*0x04*/ FLOAT	Dist;
	/*0x08*/ bool bUpdated;//not sure what this is for tbh
	/*0x0c*/
}TARGETDATA, *PTARGETDATA;

//CTargetManager::CTargetManager(void)
//size 0x1a4 see 5FE489 in Oct 26 2015 -eqmule
typedef struct _TARGETMANAGER
{
	//has no vftable
	/*0x000*/ TARGETDATA CycleNPCList[0xa];//size 0xc*0xa
	/*0x078*/ TARGETDATA CyclePCList[0xa];
	/*0x0F0*/ TARGETDATA CycleCorpseList[0xa];
	/*0x168*/ DWORD LastTargetID;
	/*0x16c*/ DWORD TabTargetID;
	/*0x170*/ DWORD AttackTargetID;
	/*0x174*/ DWORD LastHoverUpdate;
	/*0x178*/ DWORD HoverUpdateInterval;
	/*0x17c*/ DWORD LastFreeTargetUpdate;
	/*0x180*/ DWORD FreeTargetUpdateInterval;
	/*0x184*/ DWORD PreviousTargetID;
	/*0x188*/ DWORD HoverTargetID;//id of the entity our cursor is over...
	/*0x18c*/ bool bFreeTargetingEnabled;
	/*0x190*/ float target_ring_range; // squared for easier math
	/*0x194*/ float target_ring_x; // CVector3 class, this is whats passed to castspell
	/*0x198*/ float target_ring_y;
	/*0x19c*/ float target_ring_z;
	/*0x1a0*/ bool target_ring_good; //0=red 1=green 
	/*0x1a4*/
} TARGETMANAGER, *PTARGETMANAGER;

//Jul 18 2015 -eqmule
typedef struct _ScreenVector3
{
	union {
		float x; // left to right screen coordinate
		DWORD dx;
	};
	union {
		float y; // top to bottom screen coordinate
		DWORD dy;
	};
	union {
		float z;
		DWORD dz;
	};
} ScreenVector3, *PScreenVector3;

//see ref to pinstCInventoryWnd_x in __GetGaugeValueFromEQ_x
//Oct 28 Beta 2017 see 7BB9C2 - eqmule
typedef struct _INVENTORYWND {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ BYTE         Unknown0x0228[0x90];
	/*0x02b8*/ __int64		VitalityCap;
	/*0x02c0*/ int			AAVitalityCap;
	//more
} INVENTORYWND, *PINVENTORYWND;

/******************************************** CHECKED *****************************************************************/
//everything above this line is work in progress/stuff that can be improved/checked/fixed.
//everything below it is 100% checked -eqmule

//CBazaarSearchWnd__CBazaarSearchWnd aBazaarsearchwn
// CBazaarSearchWnd_size: 0x95e8 (see 56D682) in Dec 14 2021 Test - eqmule
typedef struct _BAZAARSEARCHWND {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ BYTE         Unknown0x0228[0x9318];
	/*0x9540*/ void**       ppTraderData;
	/*0x9544*/ DWORD        hashVal;//find in CBazaarSearchWnd__HandleSearchResults_x
	/*0x9548*/ BYTE         Unknown0x9548[0xa0];
	/*0x95E8*/
} BAZAARSEARCHWND, *PBAZAARSEARCHWND;

//CPlayerWindow__CPlayerWindow aPlayerwindow
//aAPwcsincombat
// CPlayerWindow_size: 0x2e0 (see 56CFC0) in Dec 14 2021 Test - eqmule
typedef struct _CPLAYERWND {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ BYTE         Unknown0x0228[0xb0];
	/*0x02d8*/ DWORD        CombatState;   // 0=combat 1=debuffed, 2=combat cooldown, 3=stand, 4=sit
	/*0x02dc*/ DWORD		Unknown0x02dc;// added aug 11 2020 Test - eqmule
	/*0x02e0*/
} CPLAYERWND, *PCPLAYERWND;

// CTargetWindow__CTargetWindow aTargetwindow
// CTargetWindow_size: 0x8c0 (see 56CE67) in Dec 14 2021 Test - eqmule
typedef struct _CTARGETWND {
	/*0x0000*/ struct _CSIDLWND    Wnd;
	/*0x0228*/ BYTE         Unknown0x0228[0x198];
	/*0x03c0*/ struct _CBUTTONWND * pTargetBuff[NUM_BUFF_SLOTS]; // buff icons
	/*0x0544*/ int          BuffSpellID[NUM_BUFF_SLOTS]; // 0xffffffff if no buff
	/*0x06c8*/ DWORD        BuffTimer[NUM_BUFF_SLOTS];
	/*0x084c*/ int			LastBuffRecievedTime;
	/*0x0850*/ UINT			Timer;
	/*0x0854*/ HashTable<PCXSTR> Casters;
	/*0x0864*/ int			ContextMenuID;
	/*0x0868*/ PCXWND		RequestingWnd;
	/*0x086c*/ bool			bRemovedBuffBlockMenuItem;
	/*0x0870*/ DWORD        Type;              // 1 = self, 4 = group member, 5 = PC, 7 = NPC
	/*0x0874*/ BYTE         Unknown0x0874[0x4c];
	/*0x08c0*/
} CTARGETWND, *PCTARGETWND;

// CBuffWindow__CBuffWindow aBuffwindow
// this is used for both long and shortbuffs...
// CBuffWindow_size: 0x710 (see 56CD1B) in Dec 14 2021 Test - eqmule
typedef struct _EQBUFFWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ BYTE         Unknown0x0228[0xbc];
	/*0x02e4*/ struct _CBUTTONWND * pBuff[0x24];    // CButton*
	/*0x0374*/ BYTE         Unknown0x0374[0x210];
	/*0x0584*/ DWORD        BuffId[NUM_LONG_BUFFS];
	/*0x062c*/ DWORD        BuffTimer[NUM_LONG_BUFFS];
	/*0x06d4*/ BYTE         Unknown0x06d4[0x28];
	/*0x06fc*/ DWORD        MaxLongBuffs;           //0x2a (NUM_LONG_BUFFS)
	/*0x0700*/ DWORD        MaxShortBuffs;          //0x37 (NUM_SHORT_BUFFS)
	/*0x0704*/ BYTE         Unknown0x0704[0xc];
	/*0x0710*/
} EQBUFFWINDOW, *PEQBUFFWINDOW;

// CSpellGemWnd__CSpellGemWnd
// Individual Gems 
// CSpellGemWnd_size: 0x318 (see 84ADAD) in Dec 14 2021 Test - eqmule
typedef struct _EQCASTSPELLGEM {
	/*0x0000*/ struct _CBUTTONWND        Wnd;
	/*0x0278*/ int			MouseButtonState;//correct
	/*0x027c*/ bool			bChecked;
	/*0x0280*/ UINT			LastRefresh;
	/*0x0284*/ DWORD		SpellGemTintArray[0xb];//I dont understand why there are only 11 of these when we have 13 gems noaways, probably a bug or unused?
	/*0x02b0*/ int			SpellGemAlphaArray[0xb];
	/*0x02dc*/ int			Unknown0x02dc;
	/*0x02e0*/ int			Unknown0x02e0;
	/*0x02e4*/ int			SpellIconOffsetX;
	/*0x02e8*/ int			SpellIconOffsetY;
	/*0x02ec*/ DWORD        spellicon;		//if this is equal to FFFFFFFF there is no spell memmed in this slot...
	/*0x02f0*/ DWORD        spellstate;		//1 = cast in progress or refreshtime not met 2 means we ducked or aborted cast, 0 means its ok to cast, should really rename this to tintstage
	/*0x02f4*/ int			TintIndex;
	/*0x02f8*/ void			*SpellIconTexture;//CTextureAnimation
	/*0x02fc*/ void			*CustomIconTexture;//CTextureAnimation
	/*0x0300*/ int			SpellSlot;
	/*0x0304*/ int			Percent;
	/*0x0308*/ PCXWND		TemplateName;
	/*0x030c*/ void			*TemplateBG;//CTextureAnimation
	/*0x0310*/ void			*TemplateHolder;//CTextureAnimation
	/*0x0314*/ void			*TemplateHighlight;//CTextureAnimation
	/*0x0318*/
} EQCASTSPELLGEM, *PEQCASTSPELLGEM;

//pinstCCastSpellWnd_x
// CCastSpellWnd__CCastSpellWnd aCastspellwnd
// CCastSpellWnd_size: 0x2c8 (see 56D0AD) in Dec 14 2021 Test - eqmule
typedef struct _EQCASTSPELLWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ BYTE         Unknown0x0228[0x14];
	/*0x023c*/ struct _EQCASTSPELLGEM *SpellSlots[NUM_SPELL_GEMS];//CSPW_Spell%d
	/*0x0274*/ BYTE         Unknown0x0274[0x54];
	/*0x02c8*/
} EQCASTSPELLWINDOW, *PEQCASTSPELLWINDOW;

//note that Invslot needs to be a short or pickupitem wont work
// CInvSlotWnd_size: 0x2c8 (see 84AE48) in Dec 14 2021 Test - eqmule
typedef struct _EQINVSLOTWND {
	/*0x0000*/ struct _CBUTTONWND	ButtonWnd;
	/*0x0278*/ void*				pTABackground;//CTextureAnimation
	/*0x027c*/ LONG					Location; // Really this is a ItemGlobalIndex
	/*0x0280*/ short				Slot1;
	/*0x0282*/ short				Slot2;
	/*0x0284*/ short				Slot3;
	/*0x0288*/ VePointer<CONTENTS>  pItem;
	/*0x028c*/ int					ItemOffsetX;
	/*0x0290*/ int					ItemOffsetY;
	/*0x0294*/ void*				pTAItem;//CTextureAnimation
	/*0x0298*/ int					Quantity;
	/*0x029c*/ bool					bSelected;
	/*0x029d*/ bool					bFindSelected;
	/*0x02a0*/ int					RecastLeft;
	/*0x02a4*/ bool					bHotButton;
	/*0x02a5*/ bool					bInventorySlotLinked;
	/*0x02a8*/ struct _EQINVSLOT*	pInvSlot;
	/*0x02ac*/ void*				pTextObject;//CTextObjectInterface
	/*0x02b0*/ int					TextFontStyle;//EFontStyles
	/*0x02b4*/ BOOL					ProcessClick;
	/*0x02b8*/ D3DCOLOR				BGTintRollover;
	/*0x02bc*/ D3DCOLOR				BGTintNormal;
	/*0x02c0*/ long					LastTime;
	/*0x02c4*/ long					Unknown0x02c4;
	/*0x02c8*/
		// Backwards Compat code so we can use new names -brainiac
	ALT_MEMBER_GETTER(_CXWND, ButtonWnd, Wnd);
	ALT_MEMBER_GETTER(LONG, Location, WindowType);
	ALT_MEMBER_GETTER(short, Slot1, InvSlot);
	ALT_MEMBER_GETTER(short, Slot2, BagSlot);
	ALT_MEMBER_GETTER(short, Slot3, GlobalSlot);
} EQINVSLOTWND, *PEQINVSLOTWND;

// CItemDisplayWnd__CItemDisplayWnd_x aItemdisplaywin
// CItemDisplayWindow_size: 0x628 (see 7A0ED0) in Dec 14 2021 Test - eqmule
typedef struct _EQITEMWINDOW {
	/*0x0000*/ struct _CSIDLWND Wnd;
	/*0x0228*/ CBUTTONWND *Description;
	/*0x022C*/ struct _CSIDLWND *IconButton;
	/*0x0230*/ struct _CSIDLWND *ItemLore;
	/*0x0234*/ struct _CSIDLWND *ItemDescriptionTabBox;
	/*0x0238*/ struct _CSIDLWND *ItemDescriptionTab;
	/*0x023C*/ struct _CSIDLWND *ItemLoreTab;
	/*0x0240*/ struct _CSIDLWND *pAppearanceSocketScreen;
	/*0x0244*/ CBUTTONWND *pAppearanceSocketItem;
	/*0x0248*/ CBUTTONWND *pAppearanceSocketBuyButton;
	/*0x024C*/ struct _CSIDLWND *pAppearanceSocketDescription;
	/*0x0250*/ struct _CSIDLWND *pItemSocketScreen[6];
	/*0x0268*/ CBUTTONWND *pItemSocketItemButton[6];
	/*0x0280*/ struct _CSIDLWND *pItemSocketDescription[6];
	/*0x0298*/ PCXSTR       ItemInfo;//this item is placable in yards, guild yards blah blah , This item can be used in tradeskills
	/*0x029C*/ PCXSTR       Unknown0x029C;//ADDED may 11 2021
	/*0x02A0*/ PCXSTR       Unknown0x02A0;//ADDED may 11 2021
	/*0x02A4*/ PCXSTR       WindowTitle;
	/*0x02A8*/ PCXSTR       ItemAdvancedLoreText;
	/*0x02AC*/ PCXSTR       ItemMadeByText;
	/*0x02B0*/ PCXSTR		SolventText;
	/*0x02B4*/ PCXSTR       ItemInformationText;//Item Information: Placing this augment into blah blah, this armor can only be used in blah blah
	/*0x02B8*/ PCONTENTS    pItem;
	/*0x02BC*/ bool			bActiveItem;
	/*0x02BD*/ bool			bItemTextSet;
	/*0x02C0*/ void			*DragIcons;//CTextureAnimation
	/*0x02C4*/ bool			bTaggable;
	/*0x02C5*/ bool			bFailed;
	/*0x02C8*/ CLABEL		*ModButtonLabel;
	/*0x02CC*/ CSIDLWND		*RewardButtonLabel;
	/*0x02D0*/ CSIDLWND		*ConvertStml;
	/*0x02D4*/ CLABEL		*FuseLabel;
	/*0x02D8*/ CLABEL		*MadeByLabel;
	/*0x02DC*/ CLABEL		*CollectedLabel;
	/*0x02E0*/ CLABEL		*ScribedLabel;
	/*0x02E4*/ int			Row;
	/*0x02E8*/ bool			bAntiTwink;
	/*0x02EC*/ CBUTTONWND	*ModButton;
	/*0x02F0*/ CBUTTONWND	*RewardButton;
	/*0x02F4*/ CBUTTONWND	*PrintRealEstateItems;
	/*0x02F8*/ CBUTTONWND	*ConvertButton;
	/*0x02FC*/ CBUTTONWND	*FuseButton;
	/*0x0300*/ bool			bCollected;
	/*0x0301*/ bool			bCollectedReceived;
	/*0x0302*/ bool			bFused;
	/*0x0303*/ bool			bReceivedFusedStatus;
	/*0x0304*/ int			Unknown0x0314;
	/*0x0308*/ PCXSTR		ItemName;
	/*0x030C*/ bool			bScribed;
	/*0x030D*/ bool			bScribedReceived;
	/*0x0310*/ int			Group[6];
	/*0x0328*/ int			HeroicLabelCount;
	/*0x032C*/ int			ItemInfoLabelCount;
	/*0x0330*/ CLABEL		*pItemInfoLabel[0xd];
	/*0x0364*/ CLABEL		*pStatLabel[0x1a][3];//size 0x138
	/*0x049C*/ CLABEL		*pValueLabel[0x1a][3];//size 0x138
	/*0x05D4*/ CLABEL		*pHeroicLabel[0xd];
	/*0x0608*/ int			RightClickMenuID;
	/*0x060C*/ int			RightClickMenuSocketSlot;
	/*0x0610*/ void			*pItemCompareList;//COMBOBOX
	/*0x0614*/ bool			bUnknown0x0614;//TODO: look into... well this was added in the apr 13 2021 test exe, the patchnotes says: -Added weapon ratio to the Item Display Window.
	/*0x0618*/ int			Unknown0x0618;//maybe that is this? -eqmule
	/*0x061C*/ int			FT_DefPageBorderHighlight;//https://forums.daybreakgames.com/eq/index.php?threads/test-update-04-13-21-patch-notes-and-discussions.274393/
	/*0x0620*/ int			FT_DefPageBorder;
	/*0x0624*/ int			ItemWndIndex;//0-5? you can have max 6 windows up I think before it starts overwriting the sixth.
	/*0x0628*/
} EQITEMWINDOW, *PEQITEMWINDOW;

//CLootWnd__CLootWnd aLootwnd
// CLootWnd_size: 0x3a0 (see 56D3FA) in Dec 14 2021 Test - eqmule
typedef struct _EQLOOTWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ void * vftable; // for CLootWnd::DialogResponse handler
	/*0x022c*/ int	Unknown0x022c;
	/*0x0230*/ bool bUnlockSent;
	/*0x0231*/ bool bActivelyLooting;
	/*0x0234*/ int LootIndex[NUM_INV_SLOTS];
	/*0x02c4*/ unsigned int NextRefreshTime;
	/*0x02c8*/ bool bInventoryWasActive;
	union
	{
		/*0x02cc*/ ItemBaseContainer lootItems;//size 0x1c
		struct
		{
			/*0x02cc*/ DWORD		NumOfSlots;
			/*0x02d0*/ BYTE			Unknown0x02d0[0x4];
			/*0x02d4*/ struct _INVENTORYARRAY*    pInventoryArray;
			/*0x02d8*/ DWORD        Size;
			/*0x02dc*/ DWORD        NumOfSlots3;
			/*0x02e0*/ BYTE			Unknown0x02e0[0x8];
			/*0x02e8*/
		};
		/*0x02e8*/
	};
	/*0x02e8*/ BYTE bUnknown0x02e8;//maybe
	/*0x02e9*/ bool bCloseOnComplete;//maybe
	/*0x02ea*/ bool bRightClickLoot;//maybe
	/*0x02eb*/ BYTE LootersLevel;//maybe
	/*0x02ec*/ struct _CSIDLWND *   LootInvWnd;
	/*0x02f0*/ struct _CSILDWND *   LootSlotWnd[NUM_INV_SLOTS];
	/*0x0380*/ struct _CSIDLWND *   LW_CorpseName;
	/*0x0384*/ struct _CSIDLWND *   DoneButton;
	/*0x0388*/ struct _CSIDLWND *   BroadcastButton;
	/*0x038c*/ struct _CSIDLWND *   LootAllButton;
	/*0x0390*/ int Unknown0x0390;
	/*0x0394*/ int Unknown0x0394;
	/*0x0398*/ int Unknown0x0398;
	/*0x039c*/ int Unknown0x039c;
	/*0x03a0*/
} EQLOOTWINDOW, *PEQLOOTWINDOW;

// pLines address = 0x258 + 0x0368 (address of pMapViewMapVfTable) = 0x05c0 
// CMapViewWnd__CMapViewWnd_x
// CMapViewWnd_size: 0x640 (see 56CB90) in Dec 14 2021 Test - eqmule
typedef struct _EQMAPWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ BYTE         Unknown0x0228[0x44];
	/*0x026c*/ CHAR         shortzonename[0x80];
	/*0x02ec*/ BYTE         Unknown0x02ec[0x3c];
	/*0x0328*/ struct _CXWND*      wnd;           // its the MVW_MapRenderArea window... found at aMvw_maprendera
	/*0x032c*/ BYTE         Unknown0x032c[0x3c];
	/*0x0368*/ struct _CSIDLWNDVFTABLE*    pMapViewMapVfTable; // found at aMapviewmap
	/*0x036c*/ BYTE         Unknown0x036c[0x254];
	/*0x05c0*/ PMAPLINE     pLines;     //0x258 + 0x0368 = 0x5c0 (address of pMapViewMapVfTable)
	/*0x05c4*/ PMAPLABEL    pLabels;    //0x25c
	/*0x05c8*/ BYTE         Unknown0x05c8[0x78];
	/*0x0640*/
} EQMAPWINDOW, *PEQMAPWINDOW;

// 20120316 - ieatacid
// 20130819 confirmed  - eqmule
// 20160317 confirmed Size unknown - eqmule
struct merchdata {
	/*0x00*/ void   *vftable;
	/*0x04*/ BYTE   Unknown0x4[0x8];
	/*0x0c*/ DWORD  MerchSlots;
	/*0x10*/ DWORD  SelectedListItem;
	/*0x14*/ DWORD Unknown0x14[4];
	/*0x24*/ struct _CONTENTSARRAY *pMerchArray;
	/*0x28*/ DWORD  MerchMaxSlots;
	/*0x2c*/
};
//confirmed 20130819 - eqmule
struct merch_other {
	merchdata *pMerchData;
	void *other;
	void *other2;
};
//CMerchantWnd__CMerchantWnd_x (aMerchantwnd)
// CMerchantWnd_size: 0x438 (see 56D546) in Dec 14 2021 Test - eqmule
typedef struct _EQMERCHWINDOW {
	/*0x0000*/ struct _CSIDLWND Wnd;
	/*0x0228*/ BYTE			Unknown0x0228[0x10];
	/*0x0238*/ merch_other* pMerchOther;//found in CMerchantWnd__CMerchantWnd
	/*0x023c*/ BYTE			Unknown0x0244[0x8];
	/*0x0244*/ FLOAT		Markup;//found in CMerchantWnd__DisplayBuyOrSellPrice_x
	/*0x0248*/ LONG			Location; // Really this is a ItemGlobalIndex
	/*0x024c*/ short		Slot1;
	/*0x024e*/ short		Slot2;
	/*0x0250*/ short		Slot3;
	/*0x0254*/ int			Unknown0x254[0x2];
	/*0x025c*/ VePointer<CONTENTS>pSelectedItem;
	/*0x0260*/ BYTE			Unknown0x0260[0x1d8];
	/*0x0438*/
} EQMERCHWINDOW, *PEQMERCHWINDOW;

//CPetInfoWindow__CPetInfoWindow aPetinfowindow
// CPetInfoWindow_size: 0x8c0 (see 56C62B) in Dec 14 2021 Test - eqmule
typedef struct _EQPETINFOWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ DWORD PetSpawnID;//The pets SpawnID
	/*0x022c*/ BYTE Unknown0x022c[0x4];
	/*0x0230*/ struct _CBUTTONWND * pButton[0xe];//there are 14 buttons on the petinfowin with text that can be set to attack,none,back and so on, these are those...
	/*0x0268*/ BYTE Unknown0x0268[0x8];
	/*0x0270*/ struct _CBUTTONWND * pAttackButton;//if 0 its not assigned.
	/*0x0274*/ struct _CBUTTONWND * pQAttackButton;//if 0 its not assigned.
	/*0x0278*/ struct _CBUTTONWND * pFollowButton;//if 0 its not assigned.
	/*0x027c*/ struct _CBUTTONWND * pGuardButton;//if 0 its not assigned.
	/*0x0280*/ struct _CBUTTONWND * pSitButton;//if 0 its not assigned.
	/*0x0284*/ struct _CBUTTONWND * pStopButton;//if 0 its not assigned.
	/*0x0288*/ BYTE Unknown0x0288[0x174];
	/*0x03fc*/ struct _CSIDLWND *   pWnd[NUM_BUFF_SLOTS]; // buff icons?
	/*0x0580*/ int Buff[NUM_BUFF_SLOTS];        // Spell ID# of each buff -- 97 total
	/*0x0704*/ BYTE Unknown0x0704[0x20];
	/*0x0724*/ DWORD PetBuffTimer[NUM_BUFF_SLOTS]; // duration until buff fades, in thousands of a second
	/*0x08a8*/ BYTE Unknown0x08a8[0xd];
	/*0x08b5*/ BYTE Sit;//0/1 is off/on
	/*0x08b6*/ BYTE Stop;//0/1 is off/on
	/*0x08b7*/ BYTE ReGroup;//0/1 is off/on
	/*0x08b8*/ BYTE Follow;//0/1 is off/on
	/*0x08b9*/ BYTE Guard;//0/1 is off/on
	/*0x08ba*/ BYTE Taunt;//0/1 is off/on
	/*0x08bb*/ BYTE Hold;//0/1 is off/on
	/*0x08bc*/ BYTE GHold;//0/1 is off/on
	/*0x08bd*/ BYTE Focus;//0/1 is off/on
	/*0x08be*/ BYTE Unknown0x08be[0x2];
	/*0x08c0*/
} EQPETINFOWINDOW, *PEQPETINFOWINDOW;

//CRaidWindow__CRaidWindow
//aClasscolorD
// CRaidWindow_size: 0x398 (see 56C8F8) in Dec 14 2021 Test - eqmule
typedef struct _EQRAIDWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ BYTE         Unknown0x0228[0xb0];
	/*0x02d8*/ DWORD        ClassColors[0x10];
	/*0x0318*/ BYTE         Unknown0x0318[0x80];
	/*0x0398*/
} EQRAIDWINDOW, *PEQRAIDWINDOW;

//CTradeWnd__CTradeWnd aTradewnd
// CTradeWnd__size: 0x2e8 (see 56D5E4) in Dec 14 2021 Test - eqmule
typedef struct _EQTRADEWINDOW {
	/*0x0000*/ struct _CSIDLWND     Wnd;
	/*0x0228*/ BYTE         Unknown0x0228[0xb8];
	/*0x02e0*/ BYTE         HisTradeReady;
	/*0x02e1*/ BYTE         MyTradeReady;
	/*0x02e2*/ BYTE         TradeWndOpen;
	/*0x02e3*/ BYTE         Unknown0x02e3[0x5];
	/*0x02e8*/
} EQTRADEWINDOW, *PEQTRADEWINDOW;

//CFactionWnd__CFactionWnd_x aFactionwnd
// CFactionWnd__size: 0x270 (see 56D720) in Dec 14 2021 Test - eqmule
typedef struct _EQFACTIONWINDOW {
	/*0x0000*/ struct _CSIDLWND Wnd;
	/*0x0228*/ int			Unknown0x0228;
	/*0x022c*/ bool			bUnknown0x022c;
	/*0x0230*/ int			Unknown0x0230;
	/*0x0234*/ int			Unknown0x0234;
	/*0x0238*/ int			Unknown0x0238;
	/*0x023c*/ IString<char> Unknown0x023c;
	/*0x024c*/ IString<char> Unknown0x024c;
	/*0x025c*/ void*		StandingGaugeTemplate;//CGaugeWnd*
	/*0x0260*/ void*		Categories;//CTreeView*
	/*0x0264*/ void*		SearchNameInput;//CEditWnd*
	/*0x0268*/ PCBUTTONWND	SearchButton;//CButtonWnd*
	/*0x026c*/ void*		FactionList;//CListWnd*
	/*0x0270*/
} EQFACTIONWINDOW, *PEQFACTIONWINDOW;

};
using namespace EQUIStructs;

#pragma pack(pop)