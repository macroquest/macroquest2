/******************************************************************************
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
#ifdef PRIVATE
#if defined(EQBETA)
#include "eqgame-private(Beta).h"
#endif
#endif

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Oct 23 2021"
#define __ExpectedVersionTime                                     "04:25:13"
#define __ActualVersionDate_x                                      0xB53324
#define __ActualVersionTime_x                                      0xB53318
#define __ActualVersionBuild_x                                     0xB43444

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x662E60
#define __MemChecker1_x                                            0x8F2500
#define __MemChecker2_x                                            0x6DDCB0
#define __MemChecker3_x                                            0x6DDC20
#define __MemChecker4_x                                            0x8A38F0
#define __EncryptPad0_x                                            0xE52BA8
#define __EncryptPad1_x                                            0xEA0570
#define __EncryptPad2_x                                            0xE61DD0
#define __EncryptPad3_x                                            0xE619D0
#define __EncryptPad4_x                                            0xE9E1D8
#define __EP1_Data_x                                               0x37A3D4

// Direct Input
#define DI8__Main_x                                                0xF9E86C
#define DI8__Keyboard_x                                            0xF9E870
#define DI8__Mouse_x                                               0xF9E7C8
#define DI8__Mouse_Copy_x                                          0xDADDEC
#define DI8__Mouse_Check_x                                         0xF9F2A8
#define __AutoSkillArray_x                                         0xDAE908
#define __Attack_x                                                 0xE4C72B
#define __Autofire_x                                               0xE4C72C
#define __BindList_x                                               0xDA3498
#define g_eqCommandStates_x                                        0xDA4200
#define __Clicks_x                                                 0xDADEA4
#define __CommandList_x                                            0xDA4D88
#define __CurrentMapLabel_x                                        0xFB1884
#define __CurrentSocial_x                                          0xC5E460
#define __DoAbilityList_x                                          0xDE424C
#define __do_loot_x                                                0x5E0160
#define __DrawHandler_x                                            0x1623160
#define __GroupCount_x                                             0xF93E1A
#define __Guilds_x                                                 0xF98280
#define __gWorld_x                                                 0xF9402C
#define __HWnd_x                                                   0xF9E7CC
#define __heqmain_x                                                0xFA173C
#define __InChatMode_x                                             0xDADDD4
#define __LastTell_x                                               0xDAF948
#define __LMouseHeldTime_x                                         0xDADF10
#define __Mouse_x                                                  0xF9E858
#define __MouseLook_x                                              0xDADE6A
#define __MouseEventTime_x                                         0xF99CAC
#define __gpbCommandEvent_x                                        0xF94138
#define __NetStatusToggle_x                                        0xDADE6D
#define __PCNames_x                                                0xDAEEF8
#define __RangeAttackReady_x                                       0xDAEBEC
#define __RMouseHeldTime_x                                         0xDADF0C
#define __RunWalkState_x                                           0xDADDD8
#define __ScreenMode_x                                             0xEE010C
#define __ScreenX_x                                                0xDADD8C
#define __ScreenY_x                                                0xDADD88
#define __ScreenXMax_x                                             0xDADD90
#define __ScreenYMax_x                                             0xDADD94
#define __ServerHost_x                                             0xF94303
#define __ServerName_x                                             0xDE420C
#define __ShiftKeyDown_x                                           0xDAE468
#define __ShowNames_x                                              0xDAEDA8
#define EverQuestInfo__bSocialChanged_x                            0xDE4294
#define __Socials_x                                                0xDE430C
#define __SubscriptionType_x                                       0xFE93A8
#define __TargetAggroHolder_x                                      0xFB4238
#define __ZoneType_x                                               0xDAE268
#define __GroupAggro_x                                             0xFB4278
#define __LoginName_x                                              0xF9EF3C
#define __Inviter_x                                                0xE4C6A8
#define __AttackOnAssist_x                                         0xDAED64
#define __UseTellWindows_x                                         0xDAF090
#define __gfMaxZoomCameraDistance_x                                0xB4B19C
#define __gfMaxCameraDistance_x                                    0xB73B80
#define __pulAutoRun_x                                             0xDADE88
#define __pulForward_x                                             0xDAF0C8
#define __pulBackward_x                                            0xDAF0CC
#define __pulTurnRight_x                                           0xDAF0D0
#define __pulTurnLeft_x                                            0xDAF0D4
#define __pulStrafeLeft_x                                          0xDAF0D8
#define __pulStrafeRight_x                                         0xDAF0DC

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF94618
#define instEQZoneInfo_x                                           0xDAE060
#define pinstActiveBanker_x                                        0xF91D18
#define pinstActiveCorpse_x                                        0xF91D10
#define pinstActiveGMaster_x                                       0xF91D14
#define pinstActiveMerchant_x                                      0xF91D0C
#define pinstAltAdvManager_x                                       0xEE0F28
#define pinstBandageTarget_x                                       0xF91D28
#define pinstCamActor_x                                            0xEE0100
#define pinstCDBStr_x                                              0xEDFC98
#define pinstCDisplay_x                                            0xF91D94
#define pinstCEverQuest_x                                          0xF9E7D4
#define pinstEverQuestInfo_x                                       0xDADD80
#define pinstCharData_x                                            0xF91D84
#define pinstCharSpawn_x                                           0xF91D60
#define pinstControlledMissile_x                                   0xF91D6C
#define pinstControlledPlayer_x                                    0xF91D60
#define pinstCResolutionHandler_x                                  0x1623388
#define pinstCSidlManager_x                                        0xFC2DC4
#define pinstCXWndManager_x                                        0xFC2DBC
#define instDynamicZone_x                                          0xF98158
#define pinstDZMember_x                                            0xF98268
#define pinstDZTimerInfo_x                                         0xF9826C
#define pinstEqLogin_x                                             0xF9E888
#define instEQMisc_x                                               0xD978D8
#define pinstEQSoundManager_x                                      0xEE1838
#define pinstEQSpellStrings_x                                      0xED0938
#define instExpeditionLeader_x                                     0xF981A2
#define instExpeditionName_x                                       0xF981E2
#define pinstGroup_x                                               0xF93E16
#define pinstImeManager_x                                          0xFC2DC0
#define pinstLocalPlayer_x                                         0xF91D08
#define pinstMercenaryData_x                                       0xF9B7A4
#define pinstMercenaryStats_x                                      0xFB4304
#define pinstModelPlayer_x                                         0xF91D20
#define pinstPCData_x                                              0xF91D84
#define pinstSkillMgr_x                                            0xF9D890
#define pinstSpawnManager_x                                        0xF9C368
#define pinstSpellManager_x                                        0xF9DAD0
#define pinstSpellSets_x                                           0xE45354
#define pinstStringTable_x                                         0xF91D90
#define pinstSwitchManager_x                                       0xF91BB8
#define pinstTarget_x                                              0xF91D5C
#define pinstTargetObject_x                                        0xF91D7C
#define pinstTargetSwitch_x                                        0xF91D80
#define pinstTaskMember_x                                          0xD97420
#define pinstTrackTarget_x                                         0xF91D64
#define pinstTradeTarget_x                                         0xF91D1C
#define instTributeActive_x                                        0xD978F9
#define pinstViewActor_x                                           0xEE00FC
#define pinstWorldData_x                                           0xF91D8C
#define pinstZoneAddr_x                                            0xDAE300
#define pinstPlayerPath_x                                          0xF9C400
#define pinstTargetIndicator_x                                     0xF9DD38
#define EQObject_Top_x                                             0xF91D78

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE0160
#define pinstCAchievementsWnd_x                                    0xEDFE20
#define pinstCActionsWnd_x                                         0xEE00F0
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE011C
#define pinstCAdvancedLootWnd_x                                    0xEE00F4
#define pinstCAdventureLeaderboardWnd_x                            0xFAB0A8
#define pinstCAdventureRequestWnd_x                                0xFAB158
#define pinstCAdventureStatsWnd_x                                  0xFAB208
#define pinstCAggroMeterWnd_x                                      0xEDFE7C
#define pinstCAlarmWnd_x                                           0xEDFD50
#define pinstCAlertHistoryWnd_x                                    0xEE0144
#define pinstCAlertStackWnd_x                                      0xEE0120
#define pinstCAlertWnd_x                                           0xEE0128
#define pinstCAltStorageWnd_x                                      0xFAB568
#define pinstCAudioTriggersWindow_x                                0xEC2C68
#define pinstCAuraWnd_x                                            0xEE0148
#define pinstCAvaZoneWnd_x                                         0xEDFE1C
#define pinstCBandolierWnd_x                                       0xEE0150
#define pinstCBankWnd_x                                            0xEE00CC
#define pinstCBarterMerchantWnd_x                                  0xFAC7A8
#define pinstCBarterSearchWnd_x                                    0xFAC858
#define pinstCBarterWnd_x                                          0xFAC908
#define pinstCBazaarConfirmationWnd_x                              0xEDFD5C
#define pinstCBazaarSearchWnd_x                                    0xEDFE04
#define pinstCBazaarWnd_x                                          0xEDFDB8
#define pinstCBlockedBuffWnd_x                                     0xEDFE44
#define pinstCBlockedPetBuffWnd_x                                  0xEDFE48
#define pinstCBodyTintWnd_x                                        0xEDFD7C
#define pinstCBookWnd_x                                            0xEE00D4
#define pinstCBreathWnd_x                                          0xEE0164
#define pinstCBuffWindowNORMAL_x                                   0xEDFE3C
#define pinstCBuffWindowSHORT_x                                    0xEDFE40
#define pinstCBugReportWnd_x                                       0xEDFDE8
#define pinstCButtonWnd_x                                          0xFC3028
#define pinstCCastingWnd_x                                         0xEDFE78
#define pinstCCastSpellWnd_x                                       0xEDFE8C
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEDFE08
#define pinstCChatWindowManager_x                                  0xFAD3B0
#define pinstCClaimWnd_x                                           0xFAD508
#define pinstCColorPickerWnd_x                                     0xEDFE30
#define pinstCCombatAbilityWnd_x                                   0xEE0134
#define pinstCCombatSkillsSelectWnd_x                              0xEE0130
#define pinstCCompassWnd_x                                         0xEDFD38
#define pinstCConfirmationDialog_x                                 0xFB23D0
#define pinstCContainerMgr_x                                       0xEE015C
#define pinstCContextMenuManager_x                                 0xFC2D78
#define pinstCCursorAttachment_x                                   0xEDFE70
#define pinstCDynamicZoneWnd_x                                     0xFADAD0
#define pinstCEditLabelWnd_x                                       0xEDFDCC
#define pinstCEQMainWnd_x                                          0xFADD18
#define pinstCEventCalendarWnd_x                                   0xEDFD40
#define pinstCExtendedTargetWnd_x                                  0xEDFE74
#define pinstCPlayerCustomizationWnd_x                             0xEDFE10
#define pinstCFactionWnd_x                                         0xEDFE88
#define pinstCFellowshipWnd_x                                      0xFADF18
#define pinstCFileSelectionWnd_x                                   0xEE016C
#define pinstCFindItemWnd_x                                        0xEDFD54
#define pinstCFindLocationWnd_x                                    0xFAE070
#define pinstCFriendsWnd_x                                         0xEE0138
#define pinstCGemsGameWnd_x                                        0xEDFD48
#define pinstCGiveWnd_x                                            0xEDFDC0
#define pinstCGroupSearchFiltersWnd_x                              0xEDFE4C
#define pinstCGroupSearchWnd_x                                     0xFAE468
#define pinstCGroupWnd_x                                           0xFAE518
#define pinstCGuildBankWnd_x                                       0xFAE5C8
#define pinstCGuildCreationWnd_x                                   0xFAE678
#define pinstCGuildMgmtWnd_x                                       0xFAE728
#define pinstCharacterCreation_x                                   0xEDFE54
#define pinstCHelpWnd_x                                            0xEE00C0
#define pinstCHeritageSelectionWnd_x                               0xEDFE14
#define pinstCHotButtonWnd_x                                       0xFB0880
#define pinstCHotButtonWnd1_x                                      0xFB0880
#define pinstCHotButtonWnd2_x                                      0xFB0884
#define pinstCHotButtonWnd3_x                                      0xFB0888
#define pinstCHotButtonWnd4_x                                      0xFB088C
#define pinstCIconSelectionWnd_x                                   0xEDFDE0
#define pinstCInspectWnd_x                                         0xEDFDD8
#define pinstCInventoryWnd_x                                       0xEE00C4
#define pinstCInvSlotMgr_x                                         0xEE0154
#define pinstCItemDisplayManager_x                                 0xFB0DD8
#define pinstCItemExpTransferWnd_x                                 0xFB0F0C
#define pinstCItemOverflowWnd_x                                    0xEDFD84
#define pinstCJournalCatWnd_x                                      0xEDFD6C
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEDFD60
#define pinstCJournalTextWnd_x                                     0xEDFD60
#define pinstCKeyRingWnd_x                                         0xEE00C8
#define pinstCLargeDialogWnd_x                                     0xFB3050
#define pinstCLayoutCopyWnd_x                                      0xFB1258
#define pinstCLFGuildWnd_x                                         0xFB1308
#define pinstCLoadskinWnd_x                                        0xEDFD4C
#define pinstCLootFiltersCopyWnd_x                                 0xEDF1A8
#define pinstCLootFiltersWnd_x                                     0xEDFD64
#define pinstCLootSettingsWnd_x                                    0xEDFD68
#define pinstCLootWnd_x                                            0xEE00D8
#define pinstCMailAddressBookWnd_x                                 0xEDFDFC
#define pinstCMailCompositionWnd_x                                 0xEDFDF4
#define pinstCMailIgnoreListWnd_x                                  0xEDFE00
#define pinstCMailWnd_x                                            0xEDFDEC
#define pinstCManageLootWnd_x                                      0xEE13A8
#define pinstCMapToolbarWnd_x                                      0xEDFDC4
#define pinstCMapViewWnd_x                                         0xEDFDBC
#define pinstCMarketplaceWnd_x                                     0xEDFDE4
#define pinstCMerchantWnd_x                                        0xEDFD80
#define pinstCMIZoneSelectWnd_x                                    0xFB1B40
#define pinstCMusicPlayerWnd_x                                     0xEE0158
#define pinstCNameChangeMercWnd_x                                  0xEE00F8
#define pinstCNameChangePetWnd_x                                   0xEE00EC
#define pinstCNameChangeWnd_x                                      0xEDFE24
#define pinstCNoteWnd_x                                            0xEDFEAC
#define pinstCObjectPreviewWnd_x                                   0xEDFE2C
#define pinstCOptionsWnd_x                                         0xEDFE38
#define pinstCOverseerWnd_x                                        0xEDFDB0
#define pinstCPetInfoWnd_x                                         0xEE00E0
#define pinstCPetitionQWnd_x                                       0xEDFE5C
#define pinstCPlayerNotesWnd_x                                     0xEDFD3C
#define pinstCPlayerWnd_x                                          0xEDFD44
#define pinstCPopupWndManager_x                                    0xFB23D0
#define pinstCProgressionSelectionWnd_x                            0xFB2480
#define pinstCPurchaseGroupWnd_x                                   0xEDFDF8
#define pinstCPurchaseWnd_x                                        0xEDFDF0
#define pinstCPvPLeaderboardWnd_x                                  0xFB2530
#define pinstCPvPStatsWnd_x                                        0xFB25E0
#define pinstCQuantityWnd_x                                        0xEE00D0
#define pinstCRaceChangeWnd_x                                      0xEDFE28
#define pinstCRaidOptionsWnd_x                                     0xEDFE80
#define pinstCRaidWnd_x                                            0xEDFE90
#define pinstCRealEstateItemsWnd_x                                 0xEDFE34
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDFE84
#define pinstCRealEstateManageWnd_x                                0xEDFE60
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDFE64
#define pinstCRealEstatePlotSearchWnd_x                            0xEDFE68
#define pinstCRealEstatePurchaseWnd_x                              0xEDFE6C
#define pinstCRespawnWnd_x                                         0xEE014C
#define pinstCRewardSelectionWnd_x                                 0xFB2D28
#define pinstCSelectorWnd_x                                        0xEDFDAC
#define pinstCSendMoneyWnd_x                                       0xEDFDC8
#define pinstCServerListWnd_x                                      0xEE0168
#define pinstCSkillsSelectWnd_x                                    0xEE012C
#define pinstCSkillsWnd_x                                          0xEE0118
#define pinstCSocialEditWnd_x                                      0xEDFDDC
#define pinstCSocialWnd_x                                          0xEDFD58
#define pinstCSpellBookWnd_x                                       0xEDFEA4
#define pinstCStoryWnd_x                                           0xEDFD74
#define pinstCTargetOfTargetWnd_x                                  0xFB4388
#define pinstCTargetWnd_x                                          0xEDFDD4
#define pinstCTaskOverlayWnd_x                                     0xEDFD70
#define pinstCTaskSelectWnd_x                                      0xFB44E0
#define pinstCTaskManager_x                                        0xC69268
#define pinstCTaskTemplateSelectWnd_x                              0xFB4590
#define pinstCTaskWnd_x                                            0xFB4640
#define pinstCTextEntryWnd_x                                       0xEE0124
#define pinstCTimeLeftWnd_x                                        0xEDFE58
#define pinstCTipWndCONTEXT_x                                      0xFB4844
#define pinstCTipWndOFDAY_x                                        0xFB4840
#define pinstCTitleWnd_x                                           0xFB48F0
#define pinstCTrackingWnd_x                                        0xEDFDD0
#define pinstCTradeskillWnd_x                                      0xFB4A58
#define pinstCTradeWnd_x                                           0xEDFDA8
#define pinstCTrainWnd_x                                           0xEE00E8
#define pinstCTributeBenefitWnd_x                                  0xFB4C58
#define pinstCTributeMasterWnd_x                                   0xFB4D08
#define pinstCTributeTrophyWnd_x                                   0xFB4DB8
#define pinstCVideoModesWnd_x                                      0xEDFDB4
#define pinstCVoiceMacroWnd_x                                      0xF9E150
#define pinstCVoteResultsWnd_x                                     0xEE00E4
#define pinstCVoteWnd_x                                            0xEE00DC
#define pinstCZoneGuideWnd_x                                       0xEE013C
#define pinstCZonePathWnd_x                                        0xEE0140

#define pinstEQSuiteTextureLoader_x                                0xEA0B30
#define pinstItemIconCache_x                                       0xFADCD0
#define pinstLootFiltersManager_x                                  0xEDF258
#define pinstRewardSelectionWnd_x                                  0xFB2D28

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB430
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB6C0
#define __ConvertItemTags_x                                        0x5F88D0
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F5490
#define __EQGetTime_x                                              0x8F2170
#define __ExecuteCmd_x                                             0x5D38E0
#define __FixHeading_x                                             0x9EDED0
#define __FlushDxKeyboard_x                                        0x6D8F80
#define __GameLoop_x                                               0x6DC8B0
#define __get_bearing_x                                            0x5DB050
#define __get_melee_range_x                                        0x5DB900
#define __GetAnimationCache_x                                      0x74BEB0
#define __GetGaugeValueFromEQ_x                                    0x85C5E0
#define __GetLabelFromEQ_x                                         0x85DFF0
#define __GetXTargetType_x                                         0x9F0240
#define __HandleMouseWheel_x                                       0x6DDD40
#define __HeadingDiff_x                                            0x9EDF30
#define __HelpPath_x                                               0xF9996C
#define __ExecuteFrontEnd_x                                        0x6D9760
#define __NewUIINI_x                                               0x85C2C0
#define __ProcessGameEvents_x                                      0x641FE0
#define __ProcessMouseEvent_x                                      0x6416E0
#define __SaveColors_x                                             0x56F690
#define __STMLToText_x                                             0x92D460
#define __ToggleKeyRingItem_x                                      0x528C80
#define CMemoryMappedFile__SetFile_x                               0xADF1A0
#define CrashDetected_x                                            0x6DB4B0
#define DrawNetStatus_x                                            0x6713F0
#define Expansion_HoT_x                                            0xDAED50
#define Teleport_Table_Size_x                                      0xF941C0
#define Teleport_Table_x                                           0xF91D98
#define Util__FastTime_x                                           0x8F1D30
#define __CopyLayout_x                                             0x65E0F0
#define __WndProc_x                                                0x6DB9B0
#define __ProcessKeyboardEvent_x                                   0x6DAEF0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491A20
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B580
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B400
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4956F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494930

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x578710
#define AltAdvManager__IsAbilityReady_x                            0x577310
#define AltAdvManager__GetAAById_x                                 0x5776B0
#define AltAdvManager__CanTrainAbility_x                           0x577720
#define AltAdvManager__CanSeeAbility_x                             0x577AD0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1800
#define CharacterZoneClient__HasSkill_x                            0x4DCFB0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE730
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8C90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1460
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFC30
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFD30
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE70
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAF80
#define CharacterZoneClient__BardCastBard_x                        0x4CDED0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5400
#define CharacterZoneClient__GetEffect_x                           0x4C13A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC4B0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC560
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC600
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC7C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC9A0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8C60
#define CharacterZoneClient__FindItemByGuid_x                      0x684720
#define CharacterZoneClient__FindItemByRecord_x                    0x4DED10

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x706D80
#define CBankWnd__WndNotification_x                                0x706B30

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711850

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C4B0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A480

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715F90

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92AA00
#define CButtonWnd__CButtonWnd_x                                   0x929360

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x739390
#define CChatManager__InitContextMenu_x                            0x731870
#define CChatManager__FreeChatWindow_x                             0x737F40
#define CChatManager__SetLockedActiveChatWindow_x                  0x739070
#define CChatManager__CreateChatWindow_x                           0x738570

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD70

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x940780
#define CContextMenu__dCContextMenu_x                              0x9409B0
#define CContextMenu__AddMenuItem_x                                0x9409C0
#define CContextMenu__AddChildMenuItem_x                           0x940B00
#define CContextMenu__RemoveMenuItem_x                             0x940D90
#define CContextMenu__RemoveAllMenuItems_x                         0x940DB0
#define CContextMenu__CheckMenuItem_x                              0x940E10
#define CContextMenu__SetMenuItem_x                                0x940CC0
#define CContextMenu__AddSeparator_x                               0x940CA0
#define CContextMenu__AddColorSeparator_x                          0x915980

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x941390
#define CContextMenuManager__RemoveMenu_x                          0x941400
#define CContextMenuManager__PopupMenu_x                           0x9414C0
#define CContextMenuManager__Flush_x                               0x941330
#define CContextMenuManager__GetMenu_x                             0x49DA70
#define CContextMenuManager__CreateDefaultMenu_x                   0x745D10

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9C7600
#define CChatService__GetFriendName_x                              0x9C7610

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x739D10
#define CChatWindow__Clear_x                                       0x73B1B0
#define CChatWindow__WndNotification_x                             0x73B940
#define CChatWindow__AddHistory_x                                  0x73A9F0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x93D860
#define CComboWnd__Draw_x                                          0x93CD10
#define CComboWnd__GetCurChoice_x                                  0x93D630
#define CComboWnd__GetListRect_x                                   0x93D1B0
#define CComboWnd__GetTextRect_x                                   0x93D8C0
#define CComboWnd__InsertChoice_x                                  0x93D340
#define CComboWnd__SetColors_x                                     0x93D310
#define CComboWnd__SetChoice_x                                     0x93D610
#define CComboWnd__GetItemCount_x                                  0x93D640
#define CComboWnd__GetCurChoiceText_x                              0x93D670
#define CComboWnd__GetChoiceText_x                                 0x93D650
#define CComboWnd__InsertChoiceAtIndex_x                           0x93D3D0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743340
#define CContainerWnd__vftable_x                                   0xB5C5C4
#define CContainerWnd__SetContainer_x                              0x744BB0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569ED0
#define CDisplay__PreZoneMainUI_x                                  0x569EE0
#define CDisplay__CleanGameUI_x                                    0x56F470
#define CDisplay__GetClickedActor_x                                0x561CC0
#define CDisplay__GetUserDefinedColor_x                            0x559A40
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5637D0
#define CDisplay__is3dON_x                                         0x55E550
#define CDisplay__ReloadUI_x                                       0x5691F0
#define CDisplay__WriteTextHD2_x                                   0x55E340
#define CDisplay__TrueDistance_x                                   0x5657B0
#define CDisplay__SetViewActor_x                                   0x5615E0
#define CDisplay__GetFloorHeight_x                                 0x55E610
#define CDisplay__SetRenderWindow_x                                0x55CFC0
#define CDisplay__ToggleScreenshotMode_x                           0x5610B0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x962F90

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x944300
#define CEditWnd__EnsureCaretVisible_x                             0x946640
#define CEditWnd__GetCaretPt_x                                     0x9454C0
#define CEditWnd__GetCharIndexPt_x                                 0x945280
#define CEditWnd__GetDisplayString_x                               0x945120
#define CEditWnd__GetHorzOffset_x                                  0x943880
#define CEditWnd__GetLineForPrintableChar_x                        0x946550
#define CEditWnd__GetSelStartPt_x                                  0x945520
#define CEditWnd__GetSTMLSafeText_x                                0x944F30
#define CEditWnd__PointFromPrintableChar_x                         0x9461B0
#define CEditWnd__SelectableCharFromPoint_x                        0x946300
#define CEditWnd__SetEditable_x                                    0x9455F0
#define CEditWnd__SetWindowTextA_x                                 0x944C80
#define CEditWnd__ReplaceSelection_x                               0x945D70
#define CEditWnd__ReplaceSelection1_x                              0x945CF0

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D5F0
#define CEverQuest__ClickedPlayer_x                                0x61EB00
#define CEverQuest__CreateTargetIndicator_x                        0x63EF50
#define CEverQuest__DeleteTargetIndicator_x                        0x63EFE0
#define CEverQuest__DoTellWindow_x                                 0x4EFE70
#define CEverQuest__OutputTextToLog_x                              0x4F0140
#define CEverQuest__DropHeldItemOnGround_x                         0x613BD0
#define CEverQuest__dsp_chat_x                                     0x4F0510
#define CEverQuest__trimName_x                                     0x63A540
#define CEverQuest__Emote_x                                        0x62DCB0
#define CEverQuest__EnterZone_x                                    0x627950
#define CEverQuest__GetBodyTypeDesc_x                              0x633200
#define CEverQuest__GetClassDesc_x                                 0x633840
#define CEverQuest__GetClassThreeLetterCode_x                      0x633E40
#define CEverQuest__GetDeityDesc_x                                 0x63D700
#define CEverQuest__GetLangDesc_x                                  0x634000
#define CEverQuest__GetRaceDesc_x                                  0x633820
#define CEverQuest__InterpretCmd_x                                 0x63DD70
#define CEverQuest__LeftClickedOnPlayer_x                          0x6180C0
#define CEverQuest__LMouseUp_x                                     0x616180
#define CEverQuest__RightClickedOnPlayer_x                         0x618CB0
#define CEverQuest__RMouseUp_x                                     0x617440
#define CEverQuest__SetGameState_x                                 0x613950
#define CEverQuest__UPCNotificationFlush_x                         0x63A460
#define CEverQuest__IssuePetCommand_x                              0x635600
#define CEverQuest__ReportSuccessfulHit_x                          0x62F580

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756E50
#define CGaugeWnd__CalcLinesFillRect_x                             0x756EB0
#define CGaugeWnd__Draw_x                                          0x756460

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4A70
#define CGuild__GetGuildName_x                                     0x4B3290
#define CGuild__GetGuildIndex_x                                    0x4B39B0

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774430

//CHotButton
#define CHotButton__SetCheck_x                                     0x652540
#define CHotButton__SetButtonSize_x                                0x652900

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781800
#define CInvSlotMgr__MoveItem_x                                    0x780470
#define CInvSlotMgr__SelectSlot_x                                  0x7818C0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77EBB0
#define CInvSlot__SliderComplete_x                                 0x77BD60
#define CInvSlot__GetItemBase_x                                    0x77B600
#define CInvSlot__UpdateItem_x                                     0x77B7F0

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7826C0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7830F0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856A50
#define CItemDisplayWnd__UpdateStrings_x                           0x79AF70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78FF20
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790470
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B680
#define CItemDisplayWnd__AboutToShow_x                             0x79AB70
#define CItemDisplayWnd__WndNotification_x                         0x79CDD0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C4A0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799A40
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79A960

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88BE90

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2530
#define CItemDisplayManager__ShowItem_x                            0x7A1990

// CLabel 
#define CLabel__UpdateText_x                                       0x7A90A0

// CListWnd
#define CListWnd__CListWnd_x                                       0x910420
#define CListWnd__dCListWnd_x                                      0x910710
#define CListWnd__AddColumn_x                                      0x9152E0
#define CListWnd__AddColumn1_x                                     0x915400
#define CListWnd__AddLine_x                                        0x915780
#define CListWnd__AddString_x                                      0x915570
#define CListWnd__CalculateFirstVisibleLine_x                      0x915090
#define CListWnd__CalculateVSBRange_x                              0x914E90
#define CListWnd__ClearSel_x                                       0x916150
#define CListWnd__ClearAllSel_x                                    0x9161A0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x916C60
#define CListWnd__Compare_x                                        0x914610
#define CListWnd__Draw_x                                           0x9108D0
#define CListWnd__DrawColumnSeparators_x                           0x913420
#define CListWnd__DrawHeader_x                                     0x913870
#define CListWnd__DrawItem_x                                       0x913EB0
#define CListWnd__DrawLine_x                                       0x913580
#define CListWnd__DrawSeparator_x                                  0x9134C0
#define CListWnd__EnableLine_x                                     0x912CF0
#define CListWnd__EnsureVisible_x                                  0x916B90
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x916090
#define CListWnd__GetColumnTooltip_x                               0x912870
#define CListWnd__GetColumnMinWidth_x                              0x9128E0
#define CListWnd__GetColumnWidth_x                                 0x9127F0
#define CListWnd__GetCurSel_x                                      0x912150
#define CListWnd__GetItemAtPoint_x                                 0x912F60
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x912FD0
#define CListWnd__GetItemColor_x                                   0x9124D0
#define CListWnd__GetItemData_x                                    0x9121D0
#define CListWnd__GetItemHeight_x                                  0x9125C0
#define CListWnd__GetItemIcon_x                                    0x912350
#define CListWnd__GetItemRect_x                                    0x912DE0
#define CListWnd__GetItemText_x                                    0x912210
#define CListWnd__GetSelList_x                                     0x9161F0
#define CListWnd__GetSeparatorRect_x                               0x913240
#define CListWnd__InsertLine_x                                     0x915CC0
#define CListWnd__RemoveLine_x                                     0x915EE0
#define CListWnd__SetColors_x                                      0x914E60
#define CListWnd__SetColumnJustification_x                         0x914B90
#define CListWnd__SetColumnLabel_x                                 0x915510
#define CListWnd__SetItemOnlyDrawTexture_x                         0x916890
#define CListWnd__SetColumnWidth_x                                 0x914AA0
#define CListWnd__SetCurSel_x                                      0x915FE0
#define CListWnd__SetItemColor_x                                   0x916820
#define CListWnd__SetItemData_x                                    0x9167E0
#define CListWnd__SetItemText_x                                    0x916410
#define CListWnd__ShiftColumnSeparator_x                           0x914C50
#define CListWnd__Sort_x                                           0x914900
#define CListWnd__ToggleSel_x                                      0x916010
#define CListWnd__SetColumnsSizable_x                              0x914CF0
#define CListWnd__SetItemWnd_x                                     0x9166B0
#define CListWnd__GetItemWnd_x                                     0x9123A0
#define CListWnd__SetItemIcon_x                                    0x916490
#define CListWnd__CalculateCustomWindowPositions_x                 0x915190
#define CListWnd__SetVScrollPos_x                                  0x914A80

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C05D0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BEC10
#define CMapViewWnd__HandleLButtonDown_x                           0x7BBA30
#define CMapViewWnd__WndNotification_x                             0x7C2F00

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3BF0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4550
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4BE0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7EB0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2670
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE0A0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3840

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x994110
#define CPacketScrambler__hton_x                                   0x994100

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x933A70
#define CSidlManager__FindScreenPieceTemplate_x                    0x933E40
#define CSidlManager__FindScreenPieceTemplate1_x                   0x933C70
#define CSidlManager__CreateXWndFromTemplate_x                     0x9372F0
#define CSidlManager__CreateXWndFromTemplate1_x                    0x937580
#define CSidlManagerbase__CreateXWnd_x                             0x9375C0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CAC0
#define CSidlManager__CreateLabel_x                                0x84C680

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C0F0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x92F7E0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x92F6E0
#define CSidlScreenWnd__ConvertToRes_x                             0x95D200
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x92F060
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92ED50
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92EE20
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x92EEF0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x930060
#define CSidlScreenWnd__EnableIniStorage_x                         0x930540
#define CSidlScreenWnd__GetSidlPiece_x                             0x930250
#define CSidlScreenWnd__Init1_x                                    0x92E820
#define CSidlScreenWnd__LoadIniInfo_x                              0x930590
#define CSidlScreenWnd__LoadIniListWnd_x                           0x931160
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92DC30
#define CSidlScreenWnd__StoreIniInfo_x                             0x930CE0
#define CSidlScreenWnd__StoreIniVis_x                              0x931050
#define CSidlScreenWnd__WndNotification_x                          0x92FF30
#define CSidlScreenWnd__GetChildItem_x                             0x9304C0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91EB40
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC2C48

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0940
#define CSkillMgr__GetSkillCap_x                                   0x6C0B10
#define CSkillMgr__GetNameToken_x                                  0x6C0130
#define CSkillMgr__IsActivatedSkill_x                              0x6C0220
#define CSkillMgr__IsCombatSkill_x                                 0x6C0190

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x942460
#define CSliderWnd__SetValue_x                                     0x942290
#define CSliderWnd__SetNumTicks_x                                  0x9422F0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x8533A0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94B8D0
#define CStmlWnd__ParseSTML_x                                      0x94CAA0
#define CStmlWnd__CalculateHSBRange_x                              0x94C870
#define CStmlWnd__CalculateVSBRange_x                              0x94C7F0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9516A0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x952340
#define CStmlWnd__ForceParseNow_x                                  0x94BE90
#define CStmlWnd__GetNextTagPiece_x                                0x951600
#define CStmlWnd__GetVisibleText_x                                 0x94BEB0
#define CStmlWnd__InitializeWindowVariables_x                      0x952190
#define CStmlWnd__MakeStmlColorTag_x                               0x94AF70
#define CStmlWnd__MakeWndNotificationTag_x                         0x94AFE0
#define CStmlWnd__SetSTMLText_x                                    0x949D50
#define CStmlWnd__StripFirstSTMLLines_x                            0x953560
#define CStmlWnd__UpdateHistoryString_x                            0x952540

// CTabWnd 
#define CTabWnd__Draw_x                                            0x948BF0
#define CTabWnd__DrawCurrentPage_x                                 0x949580
#define CTabWnd__DrawTab_x                                         0x949170
#define CTabWnd__GetCurrentPage_x                                  0x948350
#define CTabWnd__GetPageInnerRect_x                                0x948580
#define CTabWnd__GetTabInnerRect_x                                 0x9484C0
#define CTabWnd__GetTabRect_x                                      0x948380
#define CTabWnd__InsertPage_x                                      0x948770
#define CTabWnd__RemovePage_x                                      0x9488C0
#define CTabWnd__SetPage_x                                         0x948600
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x948AF0
#define CTabWnd__UpdatePage_x                                      0x948F60
#define CTabWnd__GetPageFromTabIndex_x                             0x9490B0
#define CTabWnd__GetCurrentTabIndex_x                              0x948340

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x947D10
#define CPageWnd__FlashTab_x                                       0x947D70

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACAB0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91B050
#define CTextureFont__GetTextExtent_x                              0x91B350

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x959CB0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x905ED0

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x5419A0
#define CXStr__CXStr1_x                                            0x4827A0
#define CXStr__CXStr3_x                                            0x8EE0C0
#define CXStr__dCXStr_x                                            0x478FA0
#define CXStr__operator_equal_x                                    0x8EE300
#define CXStr__operator_equal1_x                                   0x8EE340
#define CXStr__operator_plus_equal1_x                              0x8EEDA0
#define CXStr__SetString_x                                         0x8F0C40
#define CXStr__operator_char_p_x                                   0x8EE7F0
#define CXStr__GetChar_x                                           0x8F05A0
#define CXStr__Delete_x                                            0x8EFE70
#define CXStr__GetUnicode_x                                        0x8F0610
#define CXStr__Insert_x                                            0x8F0670
#define CXStr__FindNext_x                                          0x8F02C0
#define CXStr__Copy_x                                              0x8EFC80

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9403E0
#define CXWnd__BringToTop_x                                        0x922530
#define CXWnd__ClrFocus_x                                          0x921EC0
#define CXWnd__Destroy_x                                           0x921F60
#define CXWnd__DoAllDrawing_x                                      0x91E190
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x91E160
#define CXWnd__DrawColoredRect_x                                   0x91E720
#define CXWnd__DrawTooltip_x                                       0x91C770
#define CXWnd__DrawTooltipAtPoint_x                                0x91C830
#define CXWnd__GetBorderFrame_x                                    0x91E3C0
#define CXWnd__GetChildWndAt_x                                     0x9225D0
#define CXWnd__GetClientClipRect_x                                 0x9206D0
#define CXWnd__GetScreenClipRect_x                                 0x9207A0
#define CXWnd__GetScreenRect_x                                     0x920960
#define CXWnd__GetRelativeRect_x                                   0x920A20
#define CXWnd__GetTooltipRect_x                                    0x91E770
#define CXWnd__GetWindowTextA_x                                    0x4EFD10
#define CXWnd__IsActive_x                                          0x91EEC0
#define CXWnd__IsDescendantOf_x                                    0x9213F0
#define CXWnd__IsReallyVisible_x                                   0x921420
#define CXWnd__IsType_x                                            0x922D40
#define CXWnd__Move_x                                              0x921480
#define CXWnd__Move1_x                                             0x921580
#define CXWnd__ProcessTransition_x                                 0x922040
#define CXWnd__Refade_x                                            0x921860
#define CXWnd__Resize_x                                            0x921B20
#define CXWnd__Right_x                                             0x922320
#define CXWnd__SetFocus_x                                          0x921E80
#define CXWnd__SetFont_x                                           0x921EF0
#define CXWnd__SetKeyTooltip_x                                     0x922B10
#define CXWnd__SetMouseOver_x                                      0x91F820
#define CXWnd__StartFade_x                                         0x9212D0
#define CXWnd__GetChildItem_x                                      0x922750
#define CXWnd__SetParent_x                                         0x921100
#define CXWnd__Minimize_x                                          0x921B80

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95E250

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x925580
#define CXWndManager__DrawWindows_x                                0x9256D0
#define CXWndManager__GetKeyboardFlags_x                           0x927F80
#define CXWndManager__HandleKeyboardMsg_x                          0x927B60
#define CXWndManager__RemoveWnd_x                                  0x928250
#define CXWndManager__RemovePendingDeletionWnd_x                   0x928710

// CDBStr
#define CDBStr__GetString_x                                        0x558520

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5D50
#define EQ_Character__Cur_HP_x                                     0x4D9C00
#define EQ_Character__Cur_Mana_x                                   0x4E0E50
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9380
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8870
#define EQ_Character__GetFocusRangeModifier_x                      0x4B89C0
#define EQ_Character__GetHPRegen_x                                 0x4E6940
#define EQ_Character__GetEnduranceRegen_x                          0x4E6F00
#define EQ_Character__GetManaRegen_x                               0x4E7340
#define EQ_Character__Max_Endurance_x                              0x680FC0
#define EQ_Character__Max_HP_x                                     0x4D9A30
#define EQ_Character__Max_Mana_x                                   0x680DA0
#define EQ_Character__doCombatAbility_x                            0x683B50
#define EQ_Character__UseSkill_x                                   0x4E8510
#define EQ_Character__GetConLevel_x                                0x6790A0
#define EQ_Character__IsExpansionFlag_x                            0x5D2100
#define EQ_Character__TotalEffect_x                                0x4CD7C0
#define EQ_Character__GetPCSpellAffect_x                           0x4CA1E0
#define EQ_Character__SpellDuration_x                              0x4C9C20
#define EQ_Character__MySpellDuration_x                            0x4B6F40
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD70
#define EQ_Character__GetBaseSkill_x                               0x4DDD20
#define EQ_Character__CanUseItem_x                                 0x4E1180
#define EQ_Character__CanMedOnHorse_x                              0x4E8050

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B4BB0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x6993F0

//PcClient
#define PcClient__vftable_x                                        0xB50094
#define PcClient__PcClient_x                                       0x6762D0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0320
#define CCharacterListWnd__EnterWorld_x                            0x4BFCF0
#define CCharacterListWnd__Quit_x                                  0x4BFA10
#define CCharacterListWnd__UpdateList_x                            0x4BFEE0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658790
#define EQ_Item__CreateItemTagString_x                             0x98CE80
#define EQ_Item__IsStackable_x                                     0x9920C0
#define EQ_Item__GetImageNum_x                                     0x98EB90
#define EQ_Item__CreateItemClient_x                                0x6576F0
#define EQ_Item__GetItemValue_x                                    0x98FDD0
#define EQ_Item__ValueSellMerchant_x                               0x993E20
#define EQ_Item__IsKeyRingItem_x                                   0x991850
#define EQ_Item__CanGoInBag_x                                      0x6588B0
#define EQ_Item__IsEmpty_x                                         0x991230
#define EQ_Item__GetMaxItemCount_x                                 0x9901F0
#define EQ_Item__GetHeldItem_x                                     0x98EA40
#define EQ_Item__CanGemFitInSlot_x                                 0x98C660

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x5796B0
#define EQ_LoadingS__Array_x                                       0xD9BD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x681D00
#define EQ_PC__GetAlternateAbilityId_x                             0x99DFC0
#define EQ_PC__GetCombatAbility_x                                  0x99E550
#define EQ_PC__GetCombatAbilityTimer_x                             0x99E5C0
#define EQ_PC__GetItemRecastTimer_x                                0x684150
#define EQ_PC__HasLoreItem_x                                       0x679A00
#define EQ_PC__AlertInventoryChanged_x                             0x678960
#define EQ_PC__GetPcZoneClient_x                                   0x6A9B50
#define EQ_PC__RemoveMyAffect_x                                    0x6879C0
#define EQ_PC__GetKeyRingItems_x                                   0x99F110
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x99EBF0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x99F320

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D84C0
#define EQItemList__add_object_x                                   0x608AB0
#define EQItemList__add_item_x                                     0x5D8AA0
#define EQItemList__delete_item_x                                  0x5D8AF0
#define EQItemList__FreeItemList_x                                 0x5D8A00

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5548E0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69AE20
#define EQPlayer__dEQPlayer_x                                      0x68D530
#define EQPlayer__DoAttack_x                                       0x6A3820
#define EQPlayer__EQPlayer_x                                       0x68DD80
#define EQPlayer__SetNameSpriteState_x                             0x692330
#define EQPlayer__SetNameSpriteTint_x                              0x693200
#define PlayerBase__HasProperty_j_x                                0x9EC290
#define EQPlayer__IsTargetable_x                                   0x9EC7F0
#define EQPlayer__CanSee_x                                         0x9EC5E0
#define EQPlayer__CanSee1_x                                        0x9EC6B0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EC350

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7640
#define PlayerZoneClient__GetLevel_x                               0x6A9B90
#define PlayerZoneClient__IsValidTeleport_x                        0x609F60
#define PlayerZoneClient__LegalPlayerRace_x                        0x5714D0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69DFD0
#define EQPlayerManager__GetSpawnByName_x                          0x69E080
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E110

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C0B0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C180
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C1C0
#define KeypressHandler__ClearCommandStateArray_x                  0x65D680
#define KeypressHandler__HandleKeyDown_x                           0x65D6A0
#define KeypressHandler__HandleKeyUp_x                             0x65D740
#define KeypressHandler__SaveKeymapping_x                          0x65DCF0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC230
#define MapViewMap__SaveEx_x                                       0x7BF7DF
#define MapViewMap__SetZoom_x                                      0x7C54C0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B2A30

// StringTable 
#define StringTable__getString_x                                   0x9AD780

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687600
#define PcZoneClient__RemovePetEffect_x                            0x687C70
#define PcZoneClient__HasAlternateAbility_x                        0x680BF0
#define PcZoneClient__GetCurrentMod_x                              0x4EBED0
#define PcZoneClient__GetModCap_x                                  0x4EBDD0
#define PcZoneClient__CanEquipItem_x                               0x6812D0
#define PcZoneClient__GetItemByID_x                                0x684680
#define PcZoneClient__RemoveBuffEffect_x                           0x687D20
#define PcZoneClient__BandolierSwap_x                              0x6822B0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6840F0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60EB80

//IconCache
#define IconCache__GetIcon_x                                       0x74B850

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742210
#define CContainerMgr__CloseContainer_x                            0x742530
#define CContainerMgr__OpenExperimentContainer_x                   0x743090

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BB70

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650CC0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1440
#define CLootWnd__RequestLootSlot_x                                0x7B0670

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3910
#define EQ_Spell__SpellAffects_x                                   0x5A3E20
#define EQ_Spell__SpellAffectBase_x                                0x5A3B40
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D11C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1170
#define EQ_Spell__IsSPAStacking_x                                  0x5A4DA0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4030
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4DD0
#define EQ_Spell__IsLullSpell_x                                    0x5A4500
#define __IsResEffectSpell_x                                       0x4D0970

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B17F0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9BD630
#define EQ_Affect__SetAffectData_x                                 0x9BDC00

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868730
#define CTargetWnd__WndNotification_x                              0x867ED0
#define CTargetWnd__RefreshTargetBuffs_x                           0x868230
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866CB0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D180
#define CTaskWnd__ConfirmAbandonTask_x                             0x870240

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5524C0
#define CTaskManager__HandleMessage_x                              0x550390
#define CTaskManager__GetTaskStatus_x                              0x552570
#define CTaskManager__GetElementDescription_x                      0x5525F0

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E500
#define EqSoundManager__PlayScriptMp3_x                            0x59E700
#define EqSoundManager__SoundAssistPlay_x                          0x6C4DE0
#define EqSoundManager__WaveInstancePlay_x                         0x6C42D0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541650

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9471B0
#define CTextureAnimation__Draw_x                                  0x9473F0
#define CTextureAnimation__AddBlankFrame_x                         0x946FD0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x942F60

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581CC0
#define CAltAbilityData__GetMercMaxRank_x                          0x581C50
#define CAltAbilityData__GetMaxRank_x                              0x575E90

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E4D0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657540
#define CharacterBase__CreateItemGlobalIndex_x                     0x5D17F0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x780310
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C52B0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C5300
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726600
#define CCastSpellWnd__IsBardSongPlaying_x                         0x726ED0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726F80

//messages
#define msg_spell_worn_off_x                                       0x5C9850
#define msg_new_text_x                                             0x5BD240
#define __msgTokenTextParam_x                                      0x5CBCB0
#define msgTokenText_x                                             0x5CC0C0

//SpellManager
#define SpellManager__vftable_x                                    0xB3A540
#define SpellManager__SpellManager_x                               0x6C8A00
#define Spellmanager__LoadTextSpells_x                             0x6C9300
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8BD0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F0AF0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x671190
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D03E0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x671160
#define ItemGlobalIndex__IsValidIndex_x                            0x5D22C0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9BE0B0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9BE400

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9520

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746FC0
#define CCursorAttachment__AttachToCursor1_x                       0x747000
#define CCursorAttachment__Deactivate_x                            0x7486C0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x938B40
#define CSidlManagerBase__CreatePageWnd_x                          0x938320
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x9337F0
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x933780

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x958880
#define CEQSuiteTextureLoader__GetTexture_x                        0x958500

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5221F0
#define CFindItemWnd__WndNotification_x                            0x5230C0
#define CFindItemWnd__Update_x                                     0x523D10
#define CFindItemWnd__PickupSelectedItem_x                         0x5218C0

//IString
#define IString__Append_x                                          0x557FA0

//Camera
#define CDisplay__cameraType_x                                     0xEDFEA8
#define EverQuest__Cameras_x                                       0xDAF09C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D160
#define LootFiltersManager__GetItemFilterData_x                    0x52CAA0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CAD0
#define LootFiltersManager__SetItemLootFilter_x                    0x52CCE0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808530

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F67C0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF230

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73EB90

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9C8FD0
#define CDistillerInfo__Instance_x                                 0x9C8F10

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761AE0
#define CGroupWnd__UpdateDisplay_x                                 0x760D30

//ItemBase
#define ItemBase__IsLore_x                                         0x991910
#define ItemBase__IsLoreEquipped_x                                 0x991990

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608A10
#define EQPlacedItemManager__GetItemByGuid_x                       0x608B50
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608BB0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B39A0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8260

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517BF0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502860
#define FactionManagerClient__HandleFactionMessage_x               0x503080
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503870
#define FactionManagerClient__GetMaxFaction_x                      0x50388F
#define FactionManagerClient__GetMinFaction_x                      0x503840

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F4F0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x919CE0

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E490

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F760

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580E80

//CTargetManager
#define CTargetManager__Get_x                                      0x6CC980

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B39A0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC870

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D89A0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4C730

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA5A0
#define CAAWnd__UpdateSelected_x                                   0x6E6B40
#define CAAWnd__Update_x                                           0x6E98E0

//CXRect
#define CXRect__operator_and_x                                     0x756F10

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F6DA3
#define __eq_new_x                                                 0x9F7314

//patterns
//LoginController__GiveTime_x
// 56 8B F1 E8 ? FD FF FF 8B CE 5E E9 ? ? FF FF C7 01
//Feb 16 2018 Test
//IDA Style Sig: 56 8B F1 E8 ? ? ? ? 8B CE
static PBYTE lpPattern = (PBYTE)"\x56\x8B\xF1\xE8\x00\x00\x00\x00\x8B\xCE";
static char lpMask[] = "xxxx????xx";

//__eqgraphics_fopen
//Jan 09 2020 EQGraphicsDX9.dll
//IDA Style Sig: E8 ? ? ? ? 83 C4 08 89 45 A0
//#define __eqgraphics_fopen_x                                       0x101473C8
//static PBYTE efPattern = (PBYTE)"\xE8\x00\x00\x00\x00\x83\xC4\x08\x89\x45\xA0";
//static char efMask[] = "x????xxxxxx";
//Jan 25 2021 Test
//E8 ? ? ? ? 8B D8 53
static PBYTE efPattern = (PBYTE)"\xE8\x00\x00\x00\x00\x8B\xD8\x53";
static char efMask[] = "x????xxx";
