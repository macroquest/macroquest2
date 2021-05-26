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
#if defined(TEST)
#include "eqgame-private(test).h"
#endif
#endif

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "May 25 2021"
#define __ExpectedVersionTime                                     "12:07:44"
#define __ActualVersionDate_x                                      0xB53114
#define __ActualVersionTime_x                                      0xB53108
#define __ActualVersionBuild_x                                     0xB432CC

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x665270
#define __MemChecker1_x                                            0x950710
#define __MemChecker2_x                                            0x6DF440
#define __MemChecker3_x                                            0x6DF3B0
#define __MemChecker4_x                                            0x8A3770
#define __EncryptPad0_x                                            0xE55B50
#define __EncryptPad1_x                                            0xEB0360
#define __EncryptPad2_x                                            0xE64D78
#define __EncryptPad3_x                                            0xE64978
#define __EncryptPad4_x                                            0xEA1170
#define __EncryptPad5_x                                            0xFA3C28
#define __AC1_x                                                    0x85E320
#define __AC2_x                                                    0x619D0F
#define __AC3_x                                                    0x6210D1
#define __AC4_x                                                    0x625240
#define __AC5_x                                                    0x62BBBF
#define __AC6_x                                                    0x630306
#define __AC7_x                                                    0x619770
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x244D90

// Direct Input
#define DI8__Main_x                                                0xFA3CD4
#define DI8__Keyboard_x                                            0xFA3CD8
#define DI8__Mouse_x                                               0xFA3C34
#define DI8__Mouse_Copy_x                                          0xDB0D8C
#define DI8__Mouse_Check_x                                         0xFA177C
#define __AutoSkillArray_x                                         0xDB18A8
#define __Attack_x                                                 0xE4F6D7
#define __Autofire_x                                               0xE4F6D8
#define __BindList_x                                               0xDA6458
#define g_eqCommandStates_x                                        0xDA71C0
#define __Clicks_x                                                 0xDB0E44
#define __CommandList_x                                            0xDA7D48
#define __CurrentMapLabel_x                                        0xFB46D4
#define __CurrentSocial_x                                          0xC6146C
#define __DoAbilityList_x                                          0xDE71F8
#define __do_loot_x                                                0x5E2590
#define __DrawHandler_x                                            0x1623428
#define __GroupCount_x                                             0xF96D42
#define __Guilds_x                                                 0xF9B218
#define __gWorld_x                                                 0xF96F54
#define __HWnd_x                                                   0xFA3C38
#define __heqmain_x                                                0xFA3C10
#define __InChatMode_x                                             0xDB0D74
#define __LastTell_x                                               0xDB28F4
#define __LMouseHeldTime_x                                         0xDB0EB0
#define __Mouse_x                                                  0xFA3CC0
#define __MouseLook_x                                              0xDB0E0A
#define __MouseEventTime_x                                         0xF9CC44
#define __gpbCommandEvent_x                                        0xF97060
#define __NetStatusToggle_x                                        0xDB0E0D
#define __PCNames_x                                                0xDB1EA4
#define __RangeAttackReady_x                                       0xDB1B8C
#define __RMouseHeldTime_x                                         0xDB0EAC
#define __RunWalkState_x                                           0xDB0D78
#define __ScreenMode_x                                             0xEE307C
#define __ScreenX_x                                                0xDB0D2C
#define __ScreenY_x                                                0xDB0D28
#define __ScreenXMax_x                                             0xDB0D30
#define __ScreenYMax_x                                             0xDB0D34
#define __ServerHost_x                                             0xF9722B
#define __ServerName_x                                             0xDE71B8
#define __ShiftKeyDown_x                                           0xDB1408
#define __ShowNames_x                                              0xDB1D48
#define EverQuestInfo__bSocialChanged_x                            0xDE7240
#define __Socials_x                                                0xDE72B8
#define __SubscriptionType_x                                       0xFE87B0
#define __TargetAggroHolder_x                                      0xFB7088
#define __ZoneType_x                                               0xDB1208
#define __GroupAggro_x                                             0xFB70C8
#define __LoginName_x                                              0xFA43A4
#define __Inviter_x                                                0xE4F654
#define __AttackOnAssist_x                                         0xDB1D04
#define __UseTellWindows_x                                         0xDB203C
#define __gfMaxZoomCameraDistance_x                                0xB4AF9C
#define __gfMaxCameraDistance_x                                    0xB7387C
#define __pulAutoRun_x                                             0xDB0E28
#define __pulForward_x                                             0xDB2074
#define __pulBackward_x                                            0xDB2078
#define __pulTurnRight_x                                           0xDB207C
#define __pulTurnLeft_x                                            0xDB2080
#define __pulStrafeLeft_x                                          0xDB2084
#define __pulStrafeRight_x                                         0xDB2088

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF975B0
#define instEQZoneInfo_x                                           0xDB1000
#define pinstActiveBanker_x                                        0xF9754C
#define pinstActiveCorpse_x                                        0xF97544
#define pinstActiveGMaster_x                                       0xF97548
#define pinstActiveMerchant_x                                      0xF97540
#define pinstAltAdvManager_x                                       0xEE3EC0
#define pinstBandageTarget_x                                       0xF9755C
#define pinstCamActor_x                                            0xEE3070
#define pinstCDBStr_x                                              0xEE2C40
#define pinstCDisplay_x                                            0xF94CBC
#define pinstCEverQuest_x                                          0xFA3C3C
#define pinstEverQuestInfo_x                                       0xDB0D20
#define pinstCharData_x                                            0xF94CAC
#define pinstCharSpawn_x                                           0xF97594
#define pinstControlledMissile_x                                   0xF975A0
#define pinstControlledPlayer_x                                    0xF97594
#define pinstCResolutionHandler_x                                  0x1623650
#define pinstCSidlManager_x                                        0x16225EC
#define pinstCXWndManager_x                                        0x16225E4
#define instDynamicZone_x                                          0xF9B0F0
#define pinstDZMember_x                                            0xF9B200
#define pinstDZTimerInfo_x                                         0xF9B204
#define pinstEqLogin_x                                             0xFA3CF0
#define instEQMisc_x                                               0xD9A8D8
#define pinstEQSoundManager_x                                      0xEE47D0
#define pinstEQSpellStrings_x                                      0xED38E0
#define instExpeditionLeader_x                                     0xF9B13A
#define instExpeditionName_x                                       0xF9B17A
#define pinstGroup_x                                               0xF96D3E
#define pinstImeManager_x                                          0x16225E8
#define pinstLocalPlayer_x                                         0xF9753C
#define pinstMercenaryData_x                                       0xF9E73C
#define pinstMercenaryStats_x                                      0xFB7154
#define pinstModelPlayer_x                                         0xF97554
#define pinstPCData_x                                              0xF94CAC
#define pinstSkillMgr_x                                            0xFA0828
#define pinstSpawnManager_x                                        0xF9F300
#define pinstSpellManager_x                                        0xFA0A68
#define pinstSpellSets_x                                           0xE48300
#define pinstStringTable_x                                         0xF94CB4
#define pinstSwitchManager_x                                       0xF94B50
#define pinstTarget_x                                              0xF97590
#define pinstTargetObject_x                                        0xF94CA4
#define pinstTargetSwitch_x                                        0xF94CA8
#define pinstTaskMember_x                                          0xD9A420
#define pinstTrackTarget_x                                         0xF97598
#define pinstTradeTarget_x                                         0xF97550
#define instTributeActive_x                                        0xD9A8F9
#define pinstViewActor_x                                           0xEE306C
#define pinstWorldData_x                                           0xF94CB8
#define pinstZoneAddr_x                                            0xDB12A0
#define pinstPlayerPath_x                                          0xF9F398
#define pinstTargetIndicator_x                                     0xFA0CD0
#define EQObject_Top_x                                             0xF94CA0
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE30D0
#define pinstCAchievementsWnd_x                                    0xEE2D50
#define pinstCActionsWnd_x                                         0xEE3058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE3064
#define pinstCAdvancedLootWnd_x                                    0xEE305C
#define pinstCAdventureLeaderboardWnd_x                            0xFADEF8
#define pinstCAdventureRequestWnd_x                                0xFADFA8
#define pinstCAdventureStatsWnd_x                                  0xFAE058
#define pinstCAggroMeterWnd_x                                      0xEE2DE0
#define pinstCAlarmWnd_x                                           0xEE30C8
#define pinstCAlertHistoryWnd_x                                    0xEE303C
#define pinstCAlertStackWnd_x                                      0xEE2E08
#define pinstCAlertWnd_x                                           0xEE2E0C
#define pinstCAltStorageWnd_x                                      0xFAE3B8
#define pinstCAudioTriggersWindow_x                                0xEC5C10
#define pinstCAuraWnd_x                                            0xEE30A0
#define pinstCAvaZoneWnd_x                                         0xEE2D30
#define pinstCBandolierWnd_x                                       0xEE30B0
#define pinstCBankWnd_x                                            0xEE3040
#define pinstCBarterMerchantWnd_x                                  0xFAF5F8
#define pinstCBarterSearchWnd_x                                    0xFAF6A8
#define pinstCBarterWnd_x                                          0xFAF758
#define pinstCBazaarConfirmationWnd_x                              0xEE30DC
#define pinstCBazaarSearchWnd_x                                    0xEE2D7C
#define pinstCBazaarWnd_x                                          0xEE2D20
#define pinstCBlockedBuffWnd_x                                     0xEE2DA8
#define pinstCBlockedPetBuffWnd_x                                  0xEE2DB0
#define pinstCBodyTintWnd_x                                        0xEE3100
#define pinstCBookWnd_x                                            0xEE3048
#define pinstCBreathWnd_x                                          0xEE30D4
#define pinstCBuffWindowNORMAL_x                                   0xEE2DA0
#define pinstCBuffWindowSHORT_x                                    0xEE2DA4
#define pinstCBugReportWnd_x                                       0xEE2D5C
#define pinstCButtonWnd_x                                          0x1622850
#define pinstCCastingWnd_x                                         0xEE2DDC
#define pinstCCastSpellWnd_x                                       0xEE2DEC
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE2D80
#define pinstCChatWindowManager_x                                  0xFB0200
#define pinstCClaimWnd_x                                           0xFB0358
#define pinstCColorPickerWnd_x                                     0xEE2D94
#define pinstCCombatAbilityWnd_x                                   0xEE308C
#define pinstCCombatSkillsSelectWnd_x                              0xEE3094
#define pinstCCompassWnd_x                                         0xEE30A8
#define pinstCConfirmationDialog_x                                 0xFB5220
#define pinstCContainerMgr_x                                       0xEE30CC
#define pinstCContextMenuManager_x                                 0x16225A0
#define pinstCCursorAttachment_x                                   0xEE2DD4
#define pinstCDynamicZoneWnd_x                                     0xFB0920
#define pinstCEditLabelWnd_x                                       0xEE2D3C
#define pinstCEQMainWnd_x                                          0xFB0B68
#define pinstCEventCalendarWnd_x                                   0xEE30B8
#define pinstCExtendedTargetWnd_x                                  0xEE2DD8
#define pinstCPlayerCustomizationWnd_x                             0xEE2D84
#define pinstCFactionWnd_x                                         0xEE2DE8
#define pinstCFellowshipWnd_x                                      0xFB0D68
#define pinstCFileSelectionWnd_x                                   0xEE309C
#define pinstCFindItemWnd_x                                        0xEE3104
#define pinstCFindLocationWnd_x                                    0xFB0EC0
#define pinstCFriendsWnd_x                                         0xEE3098
#define pinstCGemsGameWnd_x                                        0xEE30C0
#define pinstCGiveWnd_x                                            0xEE2D2C
#define pinstCGroupSearchFiltersWnd_x                              0xEE2DC4
#define pinstCGroupSearchWnd_x                                     0xFB12B8
#define pinstCGroupWnd_x                                           0xFB1368
#define pinstCGuildBankWnd_x                                       0xFB1418
#define pinstCGuildCreationWnd_x                                   0xFB14C8
#define pinstCGuildMgmtWnd_x                                       0xFB1578
#define pinstCharacterCreation_x                                   0xEE2DD0
#define pinstCHelpWnd_x                                            0xEE2E24
#define pinstCHeritageSelectionWnd_x                               0xEE2D88
#define pinstCHotButtonWnd_x                                       0xFB36D0
#define pinstCHotButtonWnd1_x                                      0xFB36D0
#define pinstCHotButtonWnd2_x                                      0xFB36D4
#define pinstCHotButtonWnd3_x                                      0xFB36D8
#define pinstCHotButtonWnd4_x                                      0xFB36DC
#define pinstCIconSelectionWnd_x                                   0xEE2D58
#define pinstCInspectWnd_x                                         0xEE2D4C
#define pinstCInventoryWnd_x                                       0xEE2E20
#define pinstCInvSlotMgr_x                                         0xEE30B4
#define pinstCItemDisplayManager_x                                 0xFB3C28
#define pinstCItemExpTransferWnd_x                                 0xFB3D5C
#define pinstCItemOverflowWnd_x                                    0xEE2D10
#define pinstCJournalCatWnd_x                                      0xEE30EC
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE30E4
#define pinstCJournalTextWnd_x                                     0xEE30E4
#define pinstCKeyRingWnd_x                                         0xEE3034
#define pinstCLargeDialogWnd_x                                     0xFB5EA0
#define pinstCLayoutCopyWnd_x                                      0xFB40A8
#define pinstCLFGuildWnd_x                                         0xFB4158
#define pinstCLoadskinWnd_x                                        0xEE30C4
#define pinstCLootFiltersCopyWnd_x                                 0xEE2150
#define pinstCLootFiltersWnd_x                                     0xEE30E0
#define pinstCLootSettingsWnd_x                                    0xEE30E8
#define pinstCLootWnd_x                                            0xEE304C
#define pinstCMailAddressBookWnd_x                                 0xEE2D70
#define pinstCMailCompositionWnd_x                                 0xEE2D6C
#define pinstCMailIgnoreListWnd_x                                  0xEE2D74
#define pinstCMailWnd_x                                            0xEE2D64
#define pinstCManageLootWnd_x                                      0xEE4340
#define pinstCMapToolbarWnd_x                                      0xEE2D34
#define pinstCMapViewWnd_x                                         0xEE2D24
#define pinstCMarketplaceWnd_x                                     0xEE2D04
#define pinstCMerchantWnd_x                                        0xEE2D08
#define pinstCMIZoneSelectWnd_x                                    0xFB4990
#define pinstCMusicPlayerWnd_x                                     0xEE30BC
#define pinstCNameChangeMercWnd_x                                  0xEE2E00
#define pinstCNameChangePetWnd_x                                   0xEE2DFC
#define pinstCNameChangeWnd_x                                      0xEE2D60
#define pinstCNoteWnd_x                                            0xEE2E10
#define pinstCObjectPreviewWnd_x                                   0xEE2D78
#define pinstCOptionsWnd_x                                         0xEE2D98
#define pinstCOverseerWnd_x                                        0xEE2D00
#define pinstCPetInfoWnd_x                                         0xEE3050
#define pinstCPetitionQWnd_x                                       0xEE2DB8
#define pinstCPlayerNotesWnd_x                                     0xEE30AC
#define pinstCPlayerWnd_x                                          0xEE30FC
#define pinstCPopupWndManager_x                                    0xFB5220
#define pinstCProgressionSelectionWnd_x                            0xFB52D0
#define pinstCPurchaseGroupWnd_x                                   0xEE2D14
#define pinstCPurchaseWnd_x                                        0xEE2D0C
#define pinstCPvPLeaderboardWnd_x                                  0xFB5380
#define pinstCPvPStatsWnd_x                                        0xFB5430
#define pinstCQuantityWnd_x                                        0xEE3044
#define pinstCRaceChangeWnd_x                                      0xEE2D68
#define pinstCRaidOptionsWnd_x                                     0xEE2DE4
#define pinstCRaidWnd_x                                            0xEE2DF0
#define pinstCRealEstateItemsWnd_x                                 0xEE2D90
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE2DCC
#define pinstCRealEstateManageWnd_x                                0xEE2DB4
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE2DBC
#define pinstCRealEstatePlotSearchWnd_x                            0xEE2DC0
#define pinstCRealEstatePurchaseWnd_x                              0xEE2DC8
#define pinstCRespawnWnd_x                                         0xEE30A4
#define pinstCRewardSelectionWnd_x                                 0xFB5B78
#define pinstCSelectorWnd_x                                        0xEE2D1C
#define pinstCSendMoneyWnd_x                                       0xEE2D38
#define pinstCServerListWnd_x                                      0xEE3090
#define pinstCSkillsSelectWnd_x                                    0xEE3068
#define pinstCSkillsWnd_x                                          0xEE3060
#define pinstCSocialEditWnd_x                                      0xEE2D54
#define pinstCSocialWnd_x                                          0xEE30D8
#define pinstCSpellBookWnd_x                                       0xEE2E04
#define pinstCStoryWnd_x                                           0xEE30F8
#define pinstCTargetOfTargetWnd_x                                  0xFB71D8
#define pinstCTargetWnd_x                                          0xEE2D48
#define pinstCTaskOverlayWnd_x                                     0xEE30F0
#define pinstCTaskSelectWnd_x                                      0xFB7330
#define pinstCTaskManager_x                                        0xC6C268
#define pinstCTaskTemplateSelectWnd_x                              0xFB73E0
#define pinstCTaskWnd_x                                            0xFB7490
#define pinstCTextEntryWnd_x                                       0xEE3088
#define pinstCTimeLeftWnd_x                                        0xEE2DAC
#define pinstCTipWndCONTEXT_x                                      0xFB7694
#define pinstCTipWndOFDAY_x                                        0xFB7690
#define pinstCTitleWnd_x                                           0xFB7740
#define pinstCTrackingWnd_x                                        0xEE2D40
#define pinstCTradeskillWnd_x                                      0xFB78A8
#define pinstCTradeWnd_x                                           0xEE2D18
#define pinstCTrainWnd_x                                           0xEE3054
#define pinstCTributeBenefitWnd_x                                  0xFB7AA8
#define pinstCTributeMasterWnd_x                                   0xFB7B58
#define pinstCTributeTrophyWnd_x                                   0xFB7C08
#define pinstCVideoModesWnd_x                                      0xEE2D44
#define pinstCVoiceMacroWnd_x                                      0xFA10E8
#define pinstCVoteResultsWnd_x                                     0xEE2DF8
#define pinstCVoteWnd_x                                            0xEE2DF4
#define pinstCZoneGuideWnd_x                                       0xEE3030
#define pinstCZonePathWnd_x                                        0xEE3038

#define pinstEQSuiteTextureLoader_x                                0xEB0920
#define pinstItemIconCache_x                                       0xFB0B20
#define pinstLootFiltersManager_x                                  0xEE2200
#define pinstRewardSelectionWnd_x                                  0xFB5B78

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DD850
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DDAE0
#define __ConvertItemTags_x                                        0x5FAC50
#define __CleanItemTags_x                                          0x47DA80
#define __DoesFileExist_x                                          0x9536A0
#define __EQGetTime_x                                              0x950380
#define __ExecuteCmd_x                                             0x5D5C70
#define __FixHeading_x                                             0x9EE690
#define __FlushDxKeyboard_x                                        0x6DA740
#define __GameLoop_x                                               0x6DE040
#define __get_bearing_x                                            0x5DD3F0
#define __get_melee_range_x                                        0x5DDD20
#define __GetAnimationCache_x                                      0x74CF00
#define __GetGaugeValueFromEQ_x                                    0x85C760
#define __GetLabelFromEQ_x                                         0x85E2A0
#define __GetXTargetType_x                                         0x9F0A00
#define __HandleMouseWheel_x                                       0x6DF4D0
#define __HeadingDiff_x                                            0x9EE6F0
#define __HelpPath_x                                               0xF9C904
#define __ExecuteFrontEnd_x                                        0x6DAF20
#define __NewUIINI_x                                               0x85C430
#define __ProcessGameEvents_x                                      0x644330
#define __ProcessMouseEvent_x                                      0x643A30
#define __SaveColors_x                                             0x571AC0
#define __STMLToText_x                                             0x98C2B0
#define __ToggleKeyRingItem_x                                      0x52AE50
#define CMemoryMappedFile__SetFile_x                               0xADEE50
#define CrashDetected_x                                            0x6DCC50
#define DrawNetStatus_x                                            0x6737E0
#define Expansion_HoT_x                                            0xDB1CF0
#define Teleport_Table_Size_x                                      0xF970E8
#define Teleport_Table_x                                           0xF94CC0
#define Util__FastTime_x                                           0x94FF40
#define __CopyLayout_x                                             0x6604D0
#define __WndProc_x                                                0x6DD150
#define __ProcessKeyboardEvent_x                                   0x6DC690

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B510
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B390
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4956A0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948E0

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x57AAB0
#define AltAdvManager__IsAbilityReady_x                            0x5796B0
#define AltAdvManager__GetAAById_x                                 0x579A50
#define AltAdvManager__CanTrainAbility_x                           0x579AC0
#define AltAdvManager__CanSeeAbility_x                             0x579E50

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1620
#define CharacterZoneClient__HasSkill_x                            0x4DCD90
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE4D0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8A50
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1210
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E13D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E14D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E15D0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAC90
#define CharacterZoneClient__BardCastBard_x                        0x4CDCB0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5150
#define CharacterZoneClient__GetEffect_x                           0x4C1150
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC2A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC350
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC3F0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC5B0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC790
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8A10
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF670
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEFC0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x708310
#define CBankWnd__WndNotification_x                                0x7080B0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712D20

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70D990
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70B960

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x717400

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x989860
#define CButtonWnd__CButtonWnd_x                                   0x9881B0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x73A690
#define CChatManager__InitContextMenu_x                            0x7335D0
#define CChatManager__FreeChatWindow_x                             0x739260
#define CChatManager__SetLockedActiveChatWindow_x                  0x73A370
#define CChatManager__CreateChatWindow_x                           0x739880

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2450

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99F6B0
#define CContextMenu__dCContextMenu_x                              0x99F8E0
#define CContextMenu__AddMenuItem_x                                0x99F8F0
#define CContextMenu__RemoveMenuItem_x                             0x99FC00
#define CContextMenu__RemoveAllMenuItems_x                         0x99FC20
#define CContextMenu__CheckMenuItem_x                              0x99FC80
#define CContextMenu__SetMenuItem_x                                0x99FB20
#define CContextMenu__AddSeparator_x                               0x99FA80

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A0200
#define CContextMenuManager__RemoveMenu_x                          0x9A0270
#define CContextMenuManager__PopupMenu_x                           0x9A0330
#define CContextMenuManager__Flush_x                               0x9A01A0
#define CContextMenuManager__GetMenu_x                             0x49D900
#define CContextMenuManager__CreateDefaultMenu_x                   0x746ED0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92AAD0
#define CChatService__GetFriendName_x                              0x92AAE0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73AFF0
#define CChatWindow__Clear_x                                       0x73C440
#define CChatWindow__WndNotification_x                             0x73CBC0
#define CChatWindow__AddHistory_x                                  0x73BCA0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99C6C0
#define CComboWnd__Draw_x                                          0x99BB70
#define CComboWnd__GetCurChoice_x                                  0x99C490
#define CComboWnd__GetListRect_x                                   0x99C010
#define CComboWnd__GetTextRect_x                                   0x99C730
#define CComboWnd__InsertChoice_x                                  0x99C1A0
#define CComboWnd__SetColors_x                                     0x99C170
#define CComboWnd__SetChoice_x                                     0x99C470
#define CComboWnd__GetItemCount_x                                  0x99C4A0
#define CComboWnd__GetCurChoiceText_x                              0x99C4D0
#define CComboWnd__GetChoiceText_x                                 0x99C4B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99C230

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x744560
#define CContainerWnd__vftable_x                                   0xB5C364
#define CContainerWnd__SetContainer_x                              0x745DA0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56C2C0
#define CDisplay__PreZoneMainUI_x                                  0x56C2D0
#define CDisplay__CleanGameUI_x                                    0x5718A0
#define CDisplay__GetClickedActor_x                                0x5641A0
#define CDisplay__GetUserDefinedColor_x                            0x55BF10
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x565CB0
#define CDisplay__is3dON_x                                         0x560A30
#define CDisplay__ReloadUI_x                                       0x56B5E0
#define CDisplay__WriteTextHD2_x                                   0x560820
#define CDisplay__TrueDistance_x                                   0x567B80
#define CDisplay__SetViewActor_x                                   0x563AC0
#define CDisplay__GetFloorHeight_x                                 0x560AF0
#define CDisplay__SetRenderWindow_x                                0x55F470
#define CDisplay__ToggleScreenshotMode_x                           0x563590

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C1ED0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A31E0
#define CEditWnd__EnsureCaretVisible_x                             0x9A5550
#define CEditWnd__GetCaretPt_x                                     0x9A43C0
#define CEditWnd__GetCharIndexPt_x                                 0x9A4170
#define CEditWnd__GetDisplayString_x                               0x9A4010
#define CEditWnd__GetHorzOffset_x                                  0x9A2730
#define CEditWnd__GetLineForPrintableChar_x                        0x9A5460
#define CEditWnd__GetSelStartPt_x                                  0x9A4420
#define CEditWnd__GetSTMLSafeText_x                                0x9A3E20
#define CEditWnd__PointFromPrintableChar_x                         0x9A50B0
#define CEditWnd__SelectableCharFromPoint_x                        0x9A5210
#define CEditWnd__SetEditable_x                                    0x9A44F0
#define CEditWnd__SetWindowTextA_x                                 0x9A3B70
#define CEditWnd__ReplaceSelection_x                               0x9A4C70
#define CEditWnd__ReplaceSelection1_x                              0x9A4BF0

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62F980
#define CEverQuest__ClickedPlayer_x                                0x620EB0
#define CEverQuest__CreateTargetIndicator_x                        0x6412A0
#define CEverQuest__DeleteTargetIndicator_x                        0x641330
#define CEverQuest__DoTellWindow_x                                 0x4F2550
#define CEverQuest__OutputTextToLog_x                              0x4F2820
#define CEverQuest__DropHeldItemOnGround_x                         0x615EC0
#define CEverQuest__dsp_chat_x                                     0x4F2BF0
#define CEverQuest__trimName_x                                     0x63C890
#define CEverQuest__Emote_x                                        0x630040
#define CEverQuest__EnterZone_x                                    0x629CC0
#define CEverQuest__GetBodyTypeDesc_x                              0x6355D0
#define CEverQuest__GetClassDesc_x                                 0x635C10
#define CEverQuest__GetClassThreeLetterCode_x                      0x636210
#define CEverQuest__GetDeityDesc_x                                 0x63FA50
#define CEverQuest__GetLangDesc_x                                  0x6363D0
#define CEverQuest__GetRaceDesc_x                                  0x635BF0
#define CEverQuest__InterpretCmd_x                                 0x6400C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x61A440
#define CEverQuest__LMouseUp_x                                     0x618470
#define CEverQuest__RightClickedOnPlayer_x                         0x61B030
#define CEverQuest__RMouseUp_x                                     0x619730
#define CEverQuest__SetGameState_x                                 0x615C40
#define CEverQuest__UPCNotificationFlush_x                         0x63C7B0
#define CEverQuest__IssuePetCommand_x                              0x6379D0
#define CEverQuest__ReportSuccessfulHit_x                          0x631950

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757E40
#define CGaugeWnd__CalcLinesFillRect_x                             0x757EA0
#define CGaugeWnd__Draw_x                                          0x757460

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4830
#define CGuild__GetGuildName_x                                     0x4B3050
#define CGuild__GetGuildIndex_x                                    0x4B3770

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x775310

//CHotButton
#define CHotButton__SetCheck_x                                     0x654930
#define CHotButton__SetButtonSize_x                                0x654CF0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x782340
#define CInvSlotMgr__MoveItem_x                                    0x780EE0
#define CInvSlotMgr__SelectSlot_x                                  0x782400

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F730
#define CInvSlot__SliderComplete_x                                 0x77CC10
#define CInvSlot__GetItemBase_x                                    0x77C4D0
#define CInvSlot__UpdateItem_x                                     0x77C6C0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x784080
#define CInvSlotWnd__CInvSlotWnd_x                                 0x783260
#define CInvSlotWnd__HandleLButtonUp_x                             0x783C00

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856BB0
#define CItemDisplayWnd__UpdateStrings_x                           0x79B670
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x7909B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790F10
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79BD10
#define CItemDisplayWnd__AboutToShow_x                             0x79B260
#define CItemDisplayWnd__WndNotification_x                         0x79D450
#define CItemDisplayWnd__RequestConvertItem_x                      0x79CB40
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79A1C0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79B050

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88BD10

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2B70
#define CItemDisplayManager__ShowItem_x                            0x7A1FC0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A96B0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96EEC0
#define CListWnd__dCListWnd_x                                      0x96F1C0
#define CListWnd__AddColumn_x                                      0x973DA0
#define CListWnd__AddColumn1_x                                     0x973EC0
#define CListWnd__AddLine_x                                        0x974230
#define CListWnd__AddString_x                                      0x974030
#define CListWnd__CalculateFirstVisibleLine_x                      0x973B50
#define CListWnd__CalculateVSBRange_x                              0x973940
#define CListWnd__ClearSel_x                                       0x974B20
#define CListWnd__ClearAllSel_x                                    0x974B70
#define CListWnd__CloseAndUpdateEditWindow_x                       0x975600
#define CListWnd__Compare_x                                        0x9730C0
#define CListWnd__Draw_x                                           0x96F380
#define CListWnd__DrawColumnSeparators_x                           0x971EB0
#define CListWnd__DrawHeader_x                                     0x972310
#define CListWnd__DrawItem_x                                       0x972960
#define CListWnd__DrawLine_x                                       0x972020
#define CListWnd__DrawSeparator_x                                  0x971F50
#define CListWnd__EnableLine_x                                     0x971770
#define CListWnd__EnsureVisible_x                                  0x975530
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x974A60
#define CListWnd__GetColumnTooltip_x                               0x9712F0
#define CListWnd__GetColumnMinWidth_x                              0x971360
#define CListWnd__GetColumnWidth_x                                 0x971270
#define CListWnd__GetCurSel_x                                      0x970C10
#define CListWnd__GetItemAtPoint_x                                 0x9719E0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x971A50
#define CListWnd__GetItemColor_x                                   0x970F90
#define CListWnd__GetItemData_x                                    0x970C90
#define CListWnd__GetItemHeight_x                                  0x971040
#define CListWnd__GetItemIcon_x                                    0x970E10
#define CListWnd__GetItemRect_x                                    0x971860
#define CListWnd__GetItemText_x                                    0x970CD0
#define CListWnd__GetSelList_x                                     0x974BC0
#define CListWnd__GetSeparatorRect_x                               0x971CC0
#define CListWnd__InsertLine_x                                     0x974690
#define CListWnd__RemoveLine_x                                     0x9748B0
#define CListWnd__SetColors_x                                      0x973910
#define CListWnd__SetColumnJustification_x                         0x973640
#define CListWnd__SetColumnLabel_x                                 0x973FD0
#define CListWnd__SetColumnWidth_x                                 0x973550
#define CListWnd__SetCurSel_x                                      0x9749B0
#define CListWnd__SetItemColor_x                                   0x9751F0
#define CListWnd__SetItemData_x                                    0x9751B0
#define CListWnd__SetItemText_x                                    0x974DE0
#define CListWnd__ShiftColumnSeparator_x                           0x973700
#define CListWnd__Sort_x                                           0x9733B0
#define CListWnd__ToggleSel_x                                      0x9749E0
#define CListWnd__SetColumnsSizable_x                              0x9737A0
#define CListWnd__SetItemWnd_x                                     0x975080
#define CListWnd__GetItemWnd_x                                     0x970E60
#define CListWnd__SetItemIcon_x                                    0x974E60
#define CListWnd__CalculateCustomWindowPositions_x                 0x973C50
#define CListWnd__SetVScrollPos_x                                  0x973530

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0AC0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BF0E0
#define CMapViewWnd__HandleLButtonDown_x                           0x7BBF70
#define CMapViewWnd__WndNotification_x                             0x7C33A0

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3D00
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4660
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4CA0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7EB0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E27A0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE030
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3960

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F7A80
#define CPacketScrambler__hton_x                                   0x8F7A70

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x992900
#define CSidlManager__FindScreenPieceTemplate_x                    0x992CD0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x992B00
#define CSidlManager__CreateXWndFromTemplate_x                     0x996180
#define CSidlManager__CreateXWndFromTemplate1_x                    0x996410
#define CSidlManagerbase__CreateXWnd_x                             0x996450

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CD00
#define CSidlManager__CreateLabel_x                                0x84C8E0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C370

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98E640
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98E540
#define CSidlScreenWnd__ConvertToRes_x                             0x9BC110
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98DEC0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98DBB0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98DC80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98DD50
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98EEE0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98F3C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98F0D0
#define CSidlScreenWnd__Init1_x                                    0x98D680
#define CSidlScreenWnd__LoadIniInfo_x                              0x98F410
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98FFF0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98CA80
#define CSidlScreenWnd__StoreIniInfo_x                             0x98FB60
#define CSidlScreenWnd__StoreIniVis_x                              0x98FEE0
#define CSidlScreenWnd__WndNotification_x                          0x98EDB0
#define CSidlScreenWnd__GetChildItem_x                             0x98F340
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97DA30
#define CSidlScreenWnd__m_layoutCopy_x                             0x1622470

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C2180
#define CSkillMgr__GetSkillCap_x                                   0x6C2350
#define CSkillMgr__GetNameToken_x                                  0x6C19C0
#define CSkillMgr__IsActivatedSkill_x                              0x6C1AB0
#define CSkillMgr__IsCombatSkill_x                                 0x6C1A20

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A1300
#define CSliderWnd__SetValue_x                                     0x9A1130
#define CSliderWnd__SetNumTicks_x                                  0x9A1190

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853590

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AA810
#define CStmlWnd__ParseSTML_x                                      0x9AB9B0
#define CStmlWnd__CalculateHSBRange_x                              0x9AB770
#define CStmlWnd__CalculateVSBRange_x                              0x9AB6F0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B05D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B1270
#define CStmlWnd__ForceParseNow_x                                  0x9AAD80
#define CStmlWnd__GetNextTagPiece_x                                0x9B0530
#define CStmlWnd__GetVisibleText_x                                 0x9AADA0
#define CStmlWnd__InitializeWindowVariables_x                      0x9B10C0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A9EB0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A9F20
#define CStmlWnd__SetSTMLText_x                                    0x9A8C90
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B2490
#define CStmlWnd__UpdateHistoryString_x                            0x9B1470

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A7B40
#define CTabWnd__DrawCurrentPage_x                                 0x9A84D0
#define CTabWnd__DrawTab_x                                         0x9A80C0
#define CTabWnd__GetCurrentPage_x                                  0x9A72B0
#define CTabWnd__GetPageInnerRect_x                                0x9A74E0
#define CTabWnd__GetTabInnerRect_x                                 0x9A7420
#define CTabWnd__GetTabRect_x                                      0x9A72E0
#define CTabWnd__InsertPage_x                                      0x9A76D0
#define CTabWnd__RemovePage_x                                      0x9A7810
#define CTabWnd__SetPage_x                                         0x9A7560
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A7A40
#define CTabWnd__UpdatePage_x                                      0x9A7EB0
#define CTabWnd__GetPageFromTabIndex_x                             0x9A8000
#define CTabWnd__GetCurrentTabIndex_x                              0x9A72A0

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A6C40
#define CPageWnd__FlashTab_x                                       0x9A6CA0

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC8C0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x979F80
#define CTextureFont__GetTextExtent_x                              0x97A280

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B8BC0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x964970

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x544880
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x94C2D0
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x94C510
#define CXStr__operator_equal1_x                                   0x94C550
#define CXStr__operator_plus_equal1_x                              0x94CFB0
#define CXStr__SetString_x                                         0x94EE50
#define CXStr__operator_char_p_x                                   0x94CA00
#define CXStr__GetChar_x                                           0x94E7B0
#define CXStr__Delete_x                                            0x94E080
#define CXStr__GetUnicode_x                                        0x94E820
#define CXStr__Insert_x                                            0x94E880
#define CXStr__FindNext_x                                          0x94E4D0
#define CXStr__Copy_x                                              0x94DE90

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99F310
#define CXWnd__BringToTop_x                                        0x981370
#define CXWnd__ClrFocus_x                                          0x980D00
#define CXWnd__Destroy_x                                           0x980DA0
#define CXWnd__DoAllDrawing_x                                      0x97D0B0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97D080
#define CXWnd__DrawColoredRect_x                                   0x97D610
#define CXWnd__DrawTooltip_x                                       0x97B690
#define CXWnd__DrawTooltipAtPoint_x                                0x97B750
#define CXWnd__GetBorderFrame_x                                    0x97D2D0
#define CXWnd__GetChildWndAt_x                                     0x981410
#define CXWnd__GetClientClipRect_x                                 0x97F610
#define CXWnd__GetScreenClipRect_x                                 0x97F6E0
#define CXWnd__GetScreenRect_x                                     0x97F870
#define CXWnd__GetRelativeRect_x                                   0x97F920
#define CXWnd__GetTooltipRect_x                                    0x97D660
#define CXWnd__GetWindowTextA_x                                    0x4F23E0
#define CXWnd__IsActive_x                                          0x97DDA0
#define CXWnd__IsDescendantOf_x                                    0x980290
#define CXWnd__IsReallyVisible_x                                   0x9802C0
#define CXWnd__IsType_x                                            0x981B80
#define CXWnd__Move_x                                              0x980320
#define CXWnd__Move1_x                                             0x980410
#define CXWnd__ProcessTransition_x                                 0x980E80
#define CXWnd__Refade_x                                            0x9806B0
#define CXWnd__Resize_x                                            0x980950
#define CXWnd__Right_x                                             0x981160
#define CXWnd__SetFocus_x                                          0x980CC0
#define CXWnd__SetFont_x                                           0x980D30
#define CXWnd__SetKeyTooltip_x                                     0x981940
#define CXWnd__SetMouseOver_x                                      0x97E730
#define CXWnd__StartFade_x                                         0x980170
#define CXWnd__GetChildItem_x                                      0x981590
#define CXWnd__SetParent_x                                         0x97FFB0
#define CXWnd__Minimize_x                                          0x9809C0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BD160

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x984350
#define CXWndManager__DrawWindows_x                                0x9844A0
#define CXWndManager__GetKeyboardFlags_x                           0x986DF0
#define CXWndManager__HandleKeyboardMsg_x                          0x9869E0
#define CXWndManager__RemoveWnd_x                                  0x9870B0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x987560

// CDBStr
#define CDBStr__GetString_x                                        0x55AA40

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5AD0
#define EQ_Character__Cur_HP_x                                     0x4D9A00
#define EQ_Character__Cur_Mana_x                                   0x4E1B00
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9140
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8620
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8770
#define EQ_Character__GetHPRegen_x                                 0x4E8500
#define EQ_Character__GetEnduranceRegen_x                          0x4E8AC0
#define EQ_Character__GetManaRegen_x                               0x4E8F00
#define EQ_Character__Max_Endurance_x                              0x683320
#define EQ_Character__Max_HP_x                                     0x4D9830
#define EQ_Character__Max_Mana_x                                   0x683110
#define EQ_Character__doCombatAbility_x                            0x685C50
#define EQ_Character__UseSkill_x                                   0x4EAF00
#define EQ_Character__GetConLevel_x                                0x67B430
#define EQ_Character__IsExpansionFlag_x                            0x5D44C0
#define EQ_Character__TotalEffect_x                                0x4CD5C0
#define EQ_Character__GetPCSpellAffect_x                           0x4C9F70
#define EQ_Character__SpellDuration_x                              0x4C99B0
#define EQ_Character__MySpellDuration_x                            0x4B6CE0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCB50
#define EQ_Character__GetBaseSkill_x                               0x4DDAF0
#define EQ_Character__CanUseItem_x                                 0x4E1E30
#define EQ_Character__CanMedOnHorse_x                              0x4EAA40

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917F90

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69AD30

//PcClient
#define PcClient__vftable_x                                        0xB4FE94
#define PcClient__PcClient_x                                       0x6786A0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C00E0
#define CCharacterListWnd__EnterWorld_x                            0x4BFAB0
#define CCharacterListWnd__Quit_x                                  0x4BF7D0
#define CCharacterListWnd__UpdateList_x                            0x4BFCA0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65AB60
#define EQ_Item__CreateItemTagString_x                             0x8F06D0
#define EQ_Item__IsStackable_x                                     0x8F5A60
#define EQ_Item__GetImageNum_x                                     0x8F2440
#define EQ_Item__CreateItemClient_x                                0x659AE0
#define EQ_Item__GetItemValue_x                                    0x8F3700
#define EQ_Item__ValueSellMerchant_x                               0x8F77B0
#define EQ_Item__IsKeyRingItem_x                                   0x8F5200
#define EQ_Item__CanGoInBag_x                                      0x65AC80
#define EQ_Item__IsEmpty_x                                         0x8F4BB0
#define EQ_Item__GetMaxItemCount_x                                 0x8F3B10
#define EQ_Item__GetHeldItem_x                                     0x8F22F0
#define EQ_Item__CanGemFitInSlot_x                                 0x8EFE90

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57B8C0
#define EQ_LoadingS__Array_x                                       0xD9ED10

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x683E10
#define EQ_PC__GetAlternateAbilityId_x                             0x901840
#define EQ_PC__GetCombatAbility_x                                  0x901DC0
#define EQ_PC__GetCombatAbilityTimer_x                             0x901E30
#define EQ_PC__GetItemRecastTimer_x                                0x686250
#define EQ_PC__HasLoreItem_x                                       0x67BDF0
#define EQ_PC__AlertInventoryChanged_x                             0x67ACF0
#define EQ_PC__GetPcZoneClient_x                                   0x6AB410
#define EQ_PC__RemoveMyAffect_x                                    0x689770
#define EQ_PC__GetKeyRingItems_x                                   0x9028C0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x902420
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x902A10

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5DA860
#define EQItemList__add_object_x                                   0x60AD60
#define EQItemList__add_item_x                                     0x5DAE40
#define EQItemList__delete_item_x                                  0x5DAE90
#define EQItemList__FreeItemList_x                                 0x5DADA0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556B70

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69C760
#define EQPlayer__dEQPlayer_x                                      0x68F010
#define EQPlayer__DoAttack_x                                       0x6A5150
#define EQPlayer__EQPlayer_x                                       0x68F860
#define EQPlayer__SetNameSpriteState_x                             0x693E10
#define EQPlayer__SetNameSpriteTint_x                              0x694CE0
#define PlayerBase__HasProperty_j_x                                0x9ECA50
#define EQPlayer__IsTargetable_x                                   0x9ECFB0
#define EQPlayer__CanSee_x                                         0x9ECDA0
#define EQPlayer__CanSee1_x                                        0x9ECE70
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ECB10

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A8F10
#define PlayerZoneClient__GetLevel_x                               0x6AB450
#define PlayerZoneClient__IsValidTeleport_x                        0x60C200
#define PlayerZoneClient__LegalPlayerRace_x                        0x573880

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69F900
#define EQPlayerManager__GetSpawnByName_x                          0x69F9B0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69FA40

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65E490
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65E560
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65E5A0
#define KeypressHandler__ClearCommandStateArray_x                  0x65FA60
#define KeypressHandler__HandleKeyDown_x                           0x65FA80
#define KeypressHandler__HandleKeyUp_x                             0x65FB20
#define KeypressHandler__SaveKeymapping_x                          0x6600D0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC770
#define MapViewMap__SaveEx_x                                       0x7BFCAF
#define MapViewMap__SetZoom_x                                      0x7C58F0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x915E20

// StringTable 
#define StringTable__getString_x                                   0x910CF0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6893C0
#define PcZoneClient__RemovePetEffect_x                            0x689A20
#define PcZoneClient__HasAlternateAbility_x                        0x682F70
#define PcZoneClient__GetCurrentMod_x                              0x4EE690
#define PcZoneClient__GetModCap_x                                  0x4EE590
#define PcZoneClient__CanEquipItem_x                               0x683620
#define PcZoneClient__GetItemByID_x                                0x686720
#define PcZoneClient__GetItemByItemClass_x                         0x686860
#define PcZoneClient__RemoveBuffEffect_x                           0x689AD0
#define PcZoneClient__BandolierSwap_x                              0x6843C0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6861F0

//Doors
#define EQSwitch__UseSwitch_x                                      0x610D60

//IconCache
#define IconCache__GetIcon_x                                       0x74C8A0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x743470
#define CContainerMgr__CloseContainer_x                            0x743750
#define CContainerMgr__OpenExperimentContainer_x                   0x7442B0

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BCF0

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x653080

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B19D0
#define CLootWnd__RequestLootSlot_x                                0x7B0C00

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A5EA0
#define EQ_Spell__SpellAffects_x                                   0x5A63A0
#define EQ_Spell__SpellAffectBase_x                                0x5A60C0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0FC0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0F70
#define EQ_Spell__IsSPAStacking_x                                  0x5A7150
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A65A0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A7160
#define EQ_Spell__IsLullSpell_x                                    0x5A6990
#define __IsResEffectSpell_x                                       0x4D0770

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B15E0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x920890
#define EQ_Affect__SetAffectData_x                                 0x920E60

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868680
#define CTargetWnd__WndNotification_x                              0x867E10
#define CTargetWnd__RefreshTargetBuffs_x                           0x868170
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866BF0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D200
#define CTaskWnd__ConfirmAbandonTask_x                             0x8702D0

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x554710
#define CTaskManager__HandleMessage_x                              0x5525D0
#define CTaskManager__GetTaskStatus_x                              0x5547C0
#define CTaskManager__GetElementDescription_x                      0x554840

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0A80
#define EqSoundManager__PlayScriptMp3_x                            0x5A0C80
#define EqSoundManager__SoundAssistPlay_x                          0x6C6650
#define EqSoundManager__WaveInstancePlay_x                         0x6C5B40

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544530

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A60C0
#define CTextureAnimation__Draw_x                                  0x9A6300
#define CTextureAnimation__AddBlankFrame_x                         0x9A5EE0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A1E00

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x583E60
#define CAltAbilityData__GetMercMaxRank_x                          0x583DF0
#define CAltAbilityData__GetMaxRank_x                              0x578230

//CTargetRing
#define CTargetRing__Cast_x                                        0x650880

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x659930
#define CharacterBase__CreateItemGlobalIndex_x                     0x646F80
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x659910
#define CharacterBase__GetItemByGlobalIndex_x                      0x9283F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x928440
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x728340
#define CCastSpellWnd__IsBardSongPlaying_x                         0x728C00
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728CB0

//messages
#define msg_spell_worn_off_x                                       0x5CBE80
#define msg_new_text_x                                             0x5BFC70
#define __msgTokenTextParam_x                                      0x5CE2E0
#define msgTokenText_x                                             0x5CE6F0

//SpellManager
#define SpellManager__vftable_x                                    0xB3A4B4
#define SpellManager__SpellManager_x                               0x6CA280
#define Spellmanager__LoadTextSpells_x                             0x6CAB80
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CA450

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F12B0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D4510
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D29E0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x673580
#define ItemGlobalIndex__IsValidIndex_x                            0x5D46A0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x921290
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9215E0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9B20

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x748150
#define CCursorAttachment__AttachToCursor1_x                       0x748190
#define CCursorAttachment__Deactivate_x                            0x749720

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x997970
#define CSidlManagerBase__CreatePageWnd_x                          0x997180
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x992680
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x992610

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B7790
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B7410

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5246B0
#define CFindItemWnd__WndNotification_x                            0x525570
#define CFindItemWnd__Update_x                                     0x526150
#define CFindItemWnd__PickupSelectedItem_x                         0x523DB0

//IString
#define IString__Append_x                                          0x513970

//Camera
#define CDisplay__cameraType_x                                     0xEE2E2C
#define EverQuest__Cameras_x                                       0xDB2048

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F390
#define LootFiltersManager__GetItemFilterData_x                    0x52ECC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52ECF0
#define LootFiltersManager__SetItemLootFilter_x                    0x52EF00

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8087C0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F6F80
#define CResolutionHandler__GetWindowedStyle_x                     0x6C0AC0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73FDF0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92C780
#define CDistillerInfo__Instance_x                                 0x92C6C0

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762AA0
#define CGroupWnd__UpdateDisplay_x                                 0x761D00

//ItemBase
#define ItemBase__IsLore_x                                         0x8F52A0
#define ItemBase__IsLoreEquipped_x                                 0x8F5320

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60ACC0
#define EQPlacedItemManager__GetItemByGuid_x                       0x60AE00
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60AE60

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B51E0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B9AE0

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A130

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x504EE0
#define FactionManagerClient__HandleFactionMessage_x               0x505700
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x505F20
#define FactionManagerClient__GetMaxFaction_x                      0x505F3F
#define FactionManagerClient__GetMinFaction_x                      0x505EF0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511B00

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x978C10

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E310

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511D70

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x583050

//CTargetManager
#define CTargetManager__Get_x                                      0x6CE200

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B51E0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC680

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DAD40

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4F6DC

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EBBF0
#define CAAWnd__UpdateSelected_x                                   0x6E8290
#define CAAWnd__Update_x                                           0x6EAF20

//CXRect
#define CXRect__operator_and_x                                     0x757F00

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240

//
#define __eq_delete_x                                              0x9F7565
#define __eq_new_x                                                 0x9F7AD4

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

