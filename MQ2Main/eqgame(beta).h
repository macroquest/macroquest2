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
#define __ExpectedVersionDate                                     "Nov  1 2021"
#define __ExpectedVersionTime                                     "04:25:24"
#define __ActualVersionDate_x                                      0xB54324
#define __ActualVersionTime_x                                      0xB54318
#define __ActualVersionBuild_x                                     0xB44444

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x662EC0
#define __MemChecker1_x                                            0x8F2500
#define __MemChecker2_x                                            0x6DDB50
#define __MemChecker3_x                                            0x6DDAC0
#define __MemChecker4_x                                            0x8A38D0
#define __EncryptPad0_x                                            0xE53BA8
#define __EncryptPad1_x                                            0xEA1570
#define __EncryptPad2_x                                            0xE62DD0
#define __EncryptPad3_x                                            0xE629D0
#define __EncryptPad4_x                                            0xE9F1D8
#define __EP1_Data_x                                               0x37A3D4

// Direct Input
#define DI8__Main_x                                                0xF9F87C
#define DI8__Keyboard_x                                            0xF9F880
#define DI8__Mouse_x                                               0xF9F7D8
#define DI8__Mouse_Copy_x                                          0xDAEDEC
#define DI8__Mouse_Check_x                                         0xFA02B8
#define __AutoSkillArray_x                                         0xDAF908
#define __Attack_x                                                 0xE4D72B
#define __Autofire_x                                               0xE4D72C
#define __BindList_x                                               0xDA4498
#define g_eqCommandStates_x                                        0xDA5200
#define __Clicks_x                                                 0xDAEEA4
#define __CommandList_x                                            0xDA5D88
#define __CurrentMapLabel_x                                        0xFB2894
#define __CurrentSocial_x                                          0xC5F460
#define __DoAbilityList_x                                          0xDE524C
#define __do_loot_x                                                0x5E0190
#define __DrawHandler_x                                            0x1624170
#define __GroupCount_x                                             0xF94E2A
#define __Guilds_x                                                 0xF99290
#define __gWorld_x                                                 0xF9503C
#define __HWnd_x                                                   0xF9F7DC
#define __heqmain_x                                                0xFA274C
#define __InChatMode_x                                             0xDAEDD4
#define __LastTell_x                                               0xDB0948
#define __LMouseHeldTime_x                                         0xDAEF10
#define __Mouse_x                                                  0xF9F868
#define __MouseLook_x                                              0xDAEE6A
#define __MouseEventTime_x                                         0xF9ACBC
#define __gpbCommandEvent_x                                        0xF95148
#define __NetStatusToggle_x                                        0xDAEE6D
#define __PCNames_x                                                0xDAFEF8
#define __RangeAttackReady_x                                       0xDAFBEC
#define __RMouseHeldTime_x                                         0xDAEF0C
#define __RunWalkState_x                                           0xDAEDD8
#define __ScreenMode_x                                             0xEE111C
#define __ScreenX_x                                                0xDAED8C
#define __ScreenY_x                                                0xDAED88
#define __ScreenXMax_x                                             0xDAED90
#define __ScreenYMax_x                                             0xDAED94
#define __ServerHost_x                                             0xF95313
#define __ServerName_x                                             0xDE520C
#define __ShiftKeyDown_x                                           0xDAF468
#define __ShowNames_x                                              0xDAFDA8
#define EverQuestInfo__bSocialChanged_x                            0xDE5294
#define __Socials_x                                                0xDE530C
#define __SubscriptionType_x                                       0xFEA3B8
#define __TargetAggroHolder_x                                      0xFB5248
#define __ZoneType_x                                               0xDAF268
#define __GroupAggro_x                                             0xFB5288
#define __LoginName_x                                              0xF9FF4C
#define __Inviter_x                                                0xE4D6A8
#define __AttackOnAssist_x                                         0xDAFD64
#define __UseTellWindows_x                                         0xDB0090
#define __gfMaxZoomCameraDistance_x                                0xB4C19C
#define __gfMaxCameraDistance_x                                    0xB74B80
#define __pulAutoRun_x                                             0xDAEE88
#define __pulForward_x                                             0xDB00C8
#define __pulBackward_x                                            0xDB00CC
#define __pulTurnRight_x                                           0xDB00D0
#define __pulTurnLeft_x                                            0xDB00D4
#define __pulStrafeLeft_x                                          0xDB00D8
#define __pulStrafeRight_x                                         0xDB00DC

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF95628
#define instEQZoneInfo_x                                           0xDAF060
#define pinstActiveBanker_x                                        0xF92D28
#define pinstActiveCorpse_x                                        0xF92D20
#define pinstActiveGMaster_x                                       0xF92D24
#define pinstActiveMerchant_x                                      0xF92D1C
#define pinstAltAdvManager_x                                       0xEE1F38
#define pinstBandageTarget_x                                       0xF92D38
#define pinstCamActor_x                                            0xEE1110
#define pinstCDBStr_x                                              0xEE0CA8
#define pinstCDisplay_x                                            0xF92DA4
#define pinstCEverQuest_x                                          0xF9F7E4
#define pinstEverQuestInfo_x                                       0xDAED80
#define pinstCharData_x                                            0xF92D94
#define pinstCharSpawn_x                                           0xF92D70
#define pinstControlledMissile_x                                   0xF92D7C
#define pinstControlledPlayer_x                                    0xF92D70
#define pinstCResolutionHandler_x                                  0x1624398
#define pinstCSidlManager_x                                        0xFC3DD4
#define pinstCXWndManager_x                                        0xFC3DCC
#define instDynamicZone_x                                          0xF99168
#define pinstDZMember_x                                            0xF99278
#define pinstDZTimerInfo_x                                         0xF9927C
#define pinstEqLogin_x                                             0xF9F898
#define instEQMisc_x                                               0xD988D8
#define pinstEQSoundManager_x                                      0xEE2848
#define pinstEQSpellStrings_x                                      0xED1948
#define instExpeditionLeader_x                                     0xF991B2
#define instExpeditionName_x                                       0xF991F2
#define pinstGroup_x                                               0xF94E26
#define pinstImeManager_x                                          0xFC3DD0
#define pinstLocalPlayer_x                                         0xF92D18
#define pinstMercenaryData_x                                       0xF9C7B4
#define pinstMercenaryStats_x                                      0xFB5314
#define pinstModelPlayer_x                                         0xF92D30
#define pinstPCData_x                                              0xF92D94
#define pinstSkillMgr_x                                            0xF9E8A0
#define pinstSpawnManager_x                                        0xF9D378
#define pinstSpellManager_x                                        0xF9EAE0
#define pinstSpellSets_x                                           0xE46354
#define pinstStringTable_x                                         0xF92DA0
#define pinstSwitchManager_x                                       0xF92BC8
#define pinstTarget_x                                              0xF92D6C
#define pinstTargetObject_x                                        0xF92D8C
#define pinstTargetSwitch_x                                        0xF92D90
#define pinstTaskMember_x                                          0xD98420
#define pinstTrackTarget_x                                         0xF92D74
#define pinstTradeTarget_x                                         0xF92D2C
#define instTributeActive_x                                        0xD988F9
#define pinstViewActor_x                                           0xEE110C
#define pinstWorldData_x                                           0xF92D9C
#define pinstZoneAddr_x                                            0xDAF300
#define pinstPlayerPath_x                                          0xF9D410
#define pinstTargetIndicator_x                                     0xF9ED48
#define EQObject_Top_x                                             0xF92D88

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE1170
#define pinstCAchievementsWnd_x                                    0xEE0E30
#define pinstCActionsWnd_x                                         0xEE1100
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE112C
#define pinstCAdvancedLootWnd_x                                    0xEE1104
#define pinstCAdventureLeaderboardWnd_x                            0xFAC0B8
#define pinstCAdventureRequestWnd_x                                0xFAC168
#define pinstCAdventureStatsWnd_x                                  0xFAC218
#define pinstCAggroMeterWnd_x                                      0xEE0E8C
#define pinstCAlarmWnd_x                                           0xEE0D60
#define pinstCAlertHistoryWnd_x                                    0xEE1154
#define pinstCAlertStackWnd_x                                      0xEE1130
#define pinstCAlertWnd_x                                           0xEE1138
#define pinstCAltStorageWnd_x                                      0xFAC578
#define pinstCAudioTriggersWindow_x                                0xEC3C78
#define pinstCAuraWnd_x                                            0xEE1158
#define pinstCAvaZoneWnd_x                                         0xEE0E2C
#define pinstCBandolierWnd_x                                       0xEE1160
#define pinstCBankWnd_x                                            0xEE10DC
#define pinstCBarterMerchantWnd_x                                  0xFAD7B8
#define pinstCBarterSearchWnd_x                                    0xFAD868
#define pinstCBarterWnd_x                                          0xFAD918
#define pinstCBazaarConfirmationWnd_x                              0xEE0D6C
#define pinstCBazaarSearchWnd_x                                    0xEE0E14
#define pinstCBazaarWnd_x                                          0xEE0DC8
#define pinstCBlockedBuffWnd_x                                     0xEE0E54
#define pinstCBlockedPetBuffWnd_x                                  0xEE0E58
#define pinstCBodyTintWnd_x                                        0xEE0D8C
#define pinstCBookWnd_x                                            0xEE10E4
#define pinstCBreathWnd_x                                          0xEE1174
#define pinstCBuffWindowNORMAL_x                                   0xEE0E4C
#define pinstCBuffWindowSHORT_x                                    0xEE0E50
#define pinstCBugReportWnd_x                                       0xEE0DF8
#define pinstCButtonWnd_x                                          0xFC4038
#define pinstCCastingWnd_x                                         0xEE0E88
#define pinstCCastSpellWnd_x                                       0xEE0E9C
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE0E18
#define pinstCChatWindowManager_x                                  0xFAE3C0
#define pinstCClaimWnd_x                                           0xFAE518
#define pinstCColorPickerWnd_x                                     0xEE0E40
#define pinstCCombatAbilityWnd_x                                   0xEE1144
#define pinstCCombatSkillsSelectWnd_x                              0xEE1140
#define pinstCCompassWnd_x                                         0xEE0D48
#define pinstCConfirmationDialog_x                                 0xFB33E0
#define pinstCContainerMgr_x                                       0xEE116C
#define pinstCContextMenuManager_x                                 0xFC3D88
#define pinstCCursorAttachment_x                                   0xEE0E80
#define pinstCDynamicZoneWnd_x                                     0xFAEAE0
#define pinstCEditLabelWnd_x                                       0xEE0DDC
#define pinstCEQMainWnd_x                                          0xFAED28
#define pinstCEventCalendarWnd_x                                   0xEE0D50
#define pinstCExtendedTargetWnd_x                                  0xEE0E84
#define pinstCPlayerCustomizationWnd_x                             0xEE0E20
#define pinstCFactionWnd_x                                         0xEE0E98
#define pinstCFellowshipWnd_x                                      0xFAEF28
#define pinstCFileSelectionWnd_x                                   0xEE117C
#define pinstCFindItemWnd_x                                        0xEE0D64
#define pinstCFindLocationWnd_x                                    0xFAF080
#define pinstCFriendsWnd_x                                         0xEE1148
#define pinstCGemsGameWnd_x                                        0xEE0D58
#define pinstCGiveWnd_x                                            0xEE0DD0
#define pinstCGroupSearchFiltersWnd_x                              0xEE0E5C
#define pinstCGroupSearchWnd_x                                     0xFAF478
#define pinstCGroupWnd_x                                           0xFAF528
#define pinstCGuildBankWnd_x                                       0xFAF5D8
#define pinstCGuildCreationWnd_x                                   0xFAF688
#define pinstCGuildMgmtWnd_x                                       0xFAF738
#define pinstCharacterCreation_x                                   0xEE0E64
#define pinstCHelpWnd_x                                            0xEE10D0
#define pinstCHeritageSelectionWnd_x                               0xEE0E24
#define pinstCHotButtonWnd_x                                       0xFB1890
#define pinstCHotButtonWnd1_x                                      0xFB1890
#define pinstCHotButtonWnd2_x                                      0xFB1894
#define pinstCHotButtonWnd3_x                                      0xFB1898
#define pinstCHotButtonWnd4_x                                      0xFB189C
#define pinstCIconSelectionWnd_x                                   0xEE0DF0
#define pinstCInspectWnd_x                                         0xEE0DE8
#define pinstCInventoryWnd_x                                       0xEE10D4
#define pinstCInvSlotMgr_x                                         0xEE1164
#define pinstCItemDisplayManager_x                                 0xFB1DE8
#define pinstCItemExpTransferWnd_x                                 0xFB1F1C
#define pinstCItemOverflowWnd_x                                    0xEE0D94
#define pinstCJournalCatWnd_x                                      0xEE0D7C
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE0D70
#define pinstCJournalTextWnd_x                                     0xEE0D70
#define pinstCKeyRingWnd_x                                         0xEE10D8
#define pinstCLargeDialogWnd_x                                     0xFB4060
#define pinstCLayoutCopyWnd_x                                      0xFB2268
#define pinstCLFGuildWnd_x                                         0xFB2318
#define pinstCLoadskinWnd_x                                        0xEE0D5C
#define pinstCLootFiltersCopyWnd_x                                 0xEE01B8
#define pinstCLootFiltersWnd_x                                     0xEE0D74
#define pinstCLootSettingsWnd_x                                    0xEE0D78
#define pinstCLootWnd_x                                            0xEE10E8
#define pinstCMailAddressBookWnd_x                                 0xEE0E0C
#define pinstCMailCompositionWnd_x                                 0xEE0E04
#define pinstCMailIgnoreListWnd_x                                  0xEE0E10
#define pinstCMailWnd_x                                            0xEE0DFC
#define pinstCManageLootWnd_x                                      0xEE23B8
#define pinstCMapToolbarWnd_x                                      0xEE0DD4
#define pinstCMapViewWnd_x                                         0xEE0DCC
#define pinstCMarketplaceWnd_x                                     0xEE0DF4
#define pinstCMerchantWnd_x                                        0xEE0D90
#define pinstCMIZoneSelectWnd_x                                    0xFB2B50
#define pinstCMusicPlayerWnd_x                                     0xEE1168
#define pinstCNameChangeMercWnd_x                                  0xEE1108
#define pinstCNameChangePetWnd_x                                   0xEE10FC
#define pinstCNameChangeWnd_x                                      0xEE0E34
#define pinstCNoteWnd_x                                            0xEE0EBC
#define pinstCObjectPreviewWnd_x                                   0xEE0E3C
#define pinstCOptionsWnd_x                                         0xEE0E48
#define pinstCOverseerWnd_x                                        0xEE0DC0
#define pinstCPetInfoWnd_x                                         0xEE10F0
#define pinstCPetitionQWnd_x                                       0xEE0E6C
#define pinstCPlayerNotesWnd_x                                     0xEE0D4C
#define pinstCPlayerWnd_x                                          0xEE0D54
#define pinstCPopupWndManager_x                                    0xFB33E0
#define pinstCProgressionSelectionWnd_x                            0xFB3490
#define pinstCPurchaseGroupWnd_x                                   0xEE0E08
#define pinstCPurchaseWnd_x                                        0xEE0E00
#define pinstCPvPLeaderboardWnd_x                                  0xFB3540
#define pinstCPvPStatsWnd_x                                        0xFB35F0
#define pinstCQuantityWnd_x                                        0xEE10E0
#define pinstCRaceChangeWnd_x                                      0xEE0E38
#define pinstCRaidOptionsWnd_x                                     0xEE0E90
#define pinstCRaidWnd_x                                            0xEE0EA0
#define pinstCRealEstateItemsWnd_x                                 0xEE0E44
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE0E94
#define pinstCRealEstateManageWnd_x                                0xEE0E70
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE0E74
#define pinstCRealEstatePlotSearchWnd_x                            0xEE0E78
#define pinstCRealEstatePurchaseWnd_x                              0xEE0E7C
#define pinstCRespawnWnd_x                                         0xEE115C
#define pinstCRewardSelectionWnd_x                                 0xFB3D38
#define pinstCSelectorWnd_x                                        0xEE0DBC
#define pinstCSendMoneyWnd_x                                       0xEE0DD8
#define pinstCServerListWnd_x                                      0xEE1178
#define pinstCSkillsSelectWnd_x                                    0xEE113C
#define pinstCSkillsWnd_x                                          0xEE1128
#define pinstCSocialEditWnd_x                                      0xEE0DEC
#define pinstCSocialWnd_x                                          0xEE0D68
#define pinstCSpellBookWnd_x                                       0xEE0EB4
#define pinstCStoryWnd_x                                           0xEE0D84
#define pinstCTargetOfTargetWnd_x                                  0xFB5398
#define pinstCTargetWnd_x                                          0xEE0DE4
#define pinstCTaskOverlayWnd_x                                     0xEE0D80
#define pinstCTaskSelectWnd_x                                      0xFB54F0
#define pinstCTaskManager_x                                        0xC6A268
#define pinstCTaskTemplateSelectWnd_x                              0xFB55A0
#define pinstCTaskWnd_x                                            0xFB5650
#define pinstCTextEntryWnd_x                                       0xEE1134
#define pinstCTimeLeftWnd_x                                        0xEE0E68
#define pinstCTipWndCONTEXT_x                                      0xFB5854
#define pinstCTipWndOFDAY_x                                        0xFB5850
#define pinstCTitleWnd_x                                           0xFB5900
#define pinstCTrackingWnd_x                                        0xEE0DE0
#define pinstCTradeskillWnd_x                                      0xFB5A68
#define pinstCTradeWnd_x                                           0xEE0DB8
#define pinstCTrainWnd_x                                           0xEE10F8
#define pinstCTributeBenefitWnd_x                                  0xFB5C68
#define pinstCTributeMasterWnd_x                                   0xFB5D18
#define pinstCTributeTrophyWnd_x                                   0xFB5DC8
#define pinstCVideoModesWnd_x                                      0xEE0DC4
#define pinstCVoiceMacroWnd_x                                      0xF9F160
#define pinstCVoteResultsWnd_x                                     0xEE10F4
#define pinstCVoteWnd_x                                            0xEE10EC
#define pinstCZoneGuideWnd_x                                       0xEE114C
#define pinstCZonePathWnd_x                                        0xEE1150

#define pinstEQSuiteTextureLoader_x                                0xEA1B30
#define pinstItemIconCache_x                                       0xFAECE0
#define pinstLootFiltersManager_x                                  0xEE0268
#define pinstRewardSelectionWnd_x                                  0xFB3D38

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB460
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB6F0
#define __ConvertItemTags_x                                        0x5F8900
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F5490
#define __EQGetTime_x                                              0x8F2170
#define __ExecuteCmd_x                                             0x5D3920
#define __FixHeading_x                                             0x9EF190
#define __FlushDxKeyboard_x                                        0x6D8E20
#define __GameLoop_x                                               0x6DC750
#define __get_bearing_x                                            0x5DB080
#define __get_melee_range_x                                        0x5DB930
#define __GetAnimationCache_x                                      0x74BD90
#define __GetGaugeValueFromEQ_x                                    0x85C590
#define __GetLabelFromEQ_x                                         0x85DFA0
#define __GetXTargetType_x                                         0x9F1500
#define __HandleMouseWheel_x                                       0x6DDBE0
#define __HeadingDiff_x                                            0x9EF1F0
#define __HelpPath_x                                               0xF9A97C
#define __ExecuteFrontEnd_x                                        0x6D9600
#define __NewUIINI_x                                               0x85C270
#define __ProcessGameEvents_x                                      0x642040
#define __ProcessMouseEvent_x                                      0x641740
#define __SaveColors_x                                             0x56F720
#define __STMLToText_x                                             0x92E5F0
#define __ToggleKeyRingItem_x                                      0x528C60
#define CMemoryMappedFile__SetFile_x                               0xAE0450
#define CrashDetected_x                                            0x6DB350
#define DrawNetStatus_x                                            0x6714A0
#define Expansion_HoT_x                                            0xDAFD50
#define Teleport_Table_Size_x                                      0xF951D0
#define Teleport_Table_x                                           0xF92DA8
#define Util__FastTime_x                                           0x8F1D30
#define __CopyLayout_x                                             0x65E140
#define __WndProc_x                                                0x6DB850
#define __ProcessKeyboardEvent_x                                   0x6DAD90

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491A30
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B5A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B420
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495710
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494950

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x578790
#define AltAdvManager__IsAbilityReady_x                            0x577390
#define AltAdvManager__GetAAById_x                                 0x577730
#define AltAdvManager__CanTrainAbility_x                           0x5777A0
#define AltAdvManager__CanSeeAbility_x                             0x577B50

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1790
#define CharacterZoneClient__HasSkill_x                            0x4DCF40
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE6C0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8C00
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C13D0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFBC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFCC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE00
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAEF0
#define CharacterZoneClient__BardCastBard_x                        0x4CDE50
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5370
#define CharacterZoneClient__GetEffect_x                           0x4C1310
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC420
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC4D0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC570
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC730
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC910
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8BE0
#define CharacterZoneClient__FindItemByGuid_x                      0x6847D0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DECA0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x706C60
#define CBankWnd__WndNotification_x                                0x706A10

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711760

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C3B0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A380

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715EA0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92BBA0
#define CButtonWnd__CButtonWnd_x                                   0x92A520

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x739280
#define CChatManager__InitContextMenu_x                            0x731760
#define CChatManager__FreeChatWindow_x                             0x737E30
#define CChatManager__SetLockedActiveChatWindow_x                  0x738F60
#define CChatManager__CreateChatWindow_x                           0x738460

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD20

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x941A00
#define CContextMenu__dCContextMenu_x                              0x941C40
#define CContextMenu__AddMenuItem_x                                0x941C50
#define CContextMenu__AddChildMenuItem_x                           0x941D90
#define CContextMenu__RemoveMenuItem_x                             0x942040
#define CContextMenu__RemoveAllMenuItems_x                         0x942060
#define CContextMenu__CheckMenuItem_x                              0x9420C0
#define CContextMenu__SetMenuItem_x                                0x941F60
#define CContextMenu__AddSeparator_x                               0x941F40
#define CContextMenu__AddColorSeparator_x                          0x916A80

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x942650
#define CContextMenuManager__RemoveMenu_x                          0x9426C0
#define CContextMenuManager__PopupMenu_x                           0x942780
#define CContextMenuManager__Flush_x                               0x9425F0
#define CContextMenuManager__GetMenu_x                             0x49DA90
#define CContextMenuManager__CreateDefaultMenu_x                   0x745C00

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9C8BC0
#define CChatService__GetFriendName_x                              0x9C8BD0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x739C00
#define CChatWindow__Clear_x                                       0x73B0A0
#define CChatWindow__WndNotification_x                             0x73B830
#define CChatWindow__AddHistory_x                                  0x73A8E0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x93EAC0
#define CComboWnd__Draw_x                                          0x93DF40
#define CComboWnd__GetCurChoice_x                                  0x93E890
#define CComboWnd__GetListRect_x                                   0x93E3F0
#define CComboWnd__GetTextRect_x                                   0x93EB30
#define CComboWnd__InsertChoice_x                                  0x93E580
#define CComboWnd__SetColors_x                                     0x93E550
#define CComboWnd__SetChoice_x                                     0x93E870
#define CComboWnd__GetItemCount_x                                  0x93E8A0
#define CComboWnd__GetCurChoiceText_x                              0x93E8D0
#define CComboWnd__GetChoiceText_x                                 0x93E8B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x93E620

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743230
#define CContainerWnd__vftable_x                                   0xB5D5C4
#define CContainerWnd__SetContainer_x                              0x744AA0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569F60
#define CDisplay__PreZoneMainUI_x                                  0x569F70
#define CDisplay__CleanGameUI_x                                    0x56F500
#define CDisplay__GetClickedActor_x                                0x561D50
#define CDisplay__GetUserDefinedColor_x                            0x559AD0
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x563860
#define CDisplay__is3dON_x                                         0x55E5E0
#define CDisplay__ReloadUI_x                                       0x569280
#define CDisplay__WriteTextHD2_x                                   0x55E3D0
#define CDisplay__TrueDistance_x                                   0x565840
#define CDisplay__SetViewActor_x                                   0x561670
#define CDisplay__GetFloorHeight_x                                 0x55E6A0
#define CDisplay__SetRenderWindow_x                                0x55D050
#define CDisplay__ToggleScreenshotMode_x                           0x561140

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x964370

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x945620
#define CEditWnd__EnsureCaretVisible_x                             0x947990
#define CEditWnd__GetCaretPt_x                                     0x946800
#define CEditWnd__GetCharIndexPt_x                                 0x9465B0
#define CEditWnd__GetDisplayString_x                               0x946450
#define CEditWnd__GetHorzOffset_x                                  0x944B70
#define CEditWnd__GetLineForPrintableChar_x                        0x9478A0
#define CEditWnd__GetSelStartPt_x                                  0x946860
#define CEditWnd__GetSTMLSafeText_x                                0x946260
#define CEditWnd__PointFromPrintableChar_x                         0x9474F0
#define CEditWnd__SelectableCharFromPoint_x                        0x947650
#define CEditWnd__SetEditable_x                                    0x946930
#define CEditWnd__SetWindowTextA_x                                 0x945FB0
#define CEditWnd__ReplaceSelection_x                               0x9470B0
#define CEditWnd__ReplaceSelection1_x                              0x947030

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D640
#define CEverQuest__ClickedPlayer_x                                0x61EB50
#define CEverQuest__CreateTargetIndicator_x                        0x63EFA0
#define CEverQuest__DeleteTargetIndicator_x                        0x63F030
#define CEverQuest__DoTellWindow_x                                 0x4EFE20
#define CEverQuest__OutputTextToLog_x                              0x4F00F0
#define CEverQuest__DropHeldItemOnGround_x                         0x613C20
#define CEverQuest__dsp_chat_x                                     0x4F04C0
#define CEverQuest__trimName_x                                     0x63A590
#define CEverQuest__Emote_x                                        0x62DD00
#define CEverQuest__EnterZone_x                                    0x6279A0
#define CEverQuest__GetBodyTypeDesc_x                              0x633250
#define CEverQuest__GetClassDesc_x                                 0x633890
#define CEverQuest__GetClassThreeLetterCode_x                      0x633E90
#define CEverQuest__GetDeityDesc_x                                 0x63D750
#define CEverQuest__GetLangDesc_x                                  0x634050
#define CEverQuest__GetRaceDesc_x                                  0x633870
#define CEverQuest__InterpretCmd_x                                 0x63DDC0
#define CEverQuest__LeftClickedOnPlayer_x                          0x618110
#define CEverQuest__LMouseUp_x                                     0x6161D0
#define CEverQuest__RightClickedOnPlayer_x                         0x618D00
#define CEverQuest__RMouseUp_x                                     0x617490
#define CEverQuest__SetGameState_x                                 0x6139A0
#define CEverQuest__UPCNotificationFlush_x                         0x63A4B0
#define CEverQuest__IssuePetCommand_x                              0x635650
#define CEverQuest__ReportSuccessfulHit_x                          0x62F5D0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756D20
#define CGaugeWnd__CalcLinesFillRect_x                             0x756D80
#define CGaugeWnd__Draw_x                                          0x756340

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4A10
#define CGuild__GetGuildName_x                                     0x4B3230
#define CGuild__GetGuildIndex_x                                    0x4B3950

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x7742D0

//CHotButton
#define CHotButton__SetCheck_x                                     0x6525D0
#define CHotButton__SetButtonSize_x                                0x652990

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781720
#define CInvSlotMgr__MoveItem_x                                    0x780350
#define CInvSlotMgr__SelectSlot_x                                  0x7817E0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77EA90
#define CInvSlot__SliderComplete_x                                 0x77BC30
#define CInvSlot__GetItemBase_x                                    0x77B4C0
#define CInvSlot__UpdateItem_x                                     0x77B6B0

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7825E0
#define CInvSlotWnd__HandleLButtonUp_x                             0x782FF0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856A10
#define CItemDisplayWnd__UpdateStrings_x                           0x79AE70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78FE50
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x7903A0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B590
#define CItemDisplayWnd__AboutToShow_x                             0x79AA60
#define CItemDisplayWnd__WndNotification_x                         0x79CD30
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C3C0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799930
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79A850

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88BE60

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A24A0
#define CItemDisplayManager__ShowItem_x                            0x7A18D0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A8FE0

// CListWnd
#define CListWnd__CListWnd_x                                       0x9114A0
#define CListWnd__dCListWnd_x                                      0x9117A0
#define CListWnd__AddColumn_x                                      0x9163E0
#define CListWnd__AddColumn1_x                                     0x916500
#define CListWnd__AddLine_x                                        0x916880
#define CListWnd__AddString_x                                      0x916670
#define CListWnd__CalculateFirstVisibleLine_x                      0x916190
#define CListWnd__CalculateVSBRange_x                              0x915F70
#define CListWnd__ClearSel_x                                       0x917250
#define CListWnd__ClearAllSel_x                                    0x9172A0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x917D80
#define CListWnd__Compare_x                                        0x9156F0
#define CListWnd__Draw_x                                           0x911960
#define CListWnd__DrawColumnSeparators_x                           0x9144E0
#define CListWnd__DrawHeader_x                                     0x914940
#define CListWnd__DrawItem_x                                       0x914F90
#define CListWnd__DrawLine_x                                       0x914650
#define CListWnd__DrawSeparator_x                                  0x914580
#define CListWnd__EnableLine_x                                     0x913DA0
#define CListWnd__EnsureVisible_x                                  0x917CB0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x917190
#define CListWnd__GetColumnTooltip_x                               0x913920
#define CListWnd__GetColumnMinWidth_x                              0x913990
#define CListWnd__GetColumnWidth_x                                 0x9138A0
#define CListWnd__GetCurSel_x                                      0x913200
#define CListWnd__GetItemAtPoint_x                                 0x914010
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x914080
#define CListWnd__GetItemColor_x                                   0x913580
#define CListWnd__GetItemData_x                                    0x913280
#define CListWnd__GetItemHeight_x                                  0x913670
#define CListWnd__GetItemIcon_x                                    0x913400
#define CListWnd__GetItemRect_x                                    0x913E90
#define CListWnd__GetItemText_x                                    0x9132C0
#define CListWnd__GetSelList_x                                     0x9172F0
#define CListWnd__GetSeparatorRect_x                               0x9142F0
#define CListWnd__InsertLine_x                                     0x916DC0
#define CListWnd__RemoveLine_x                                     0x916FE0
#define CListWnd__SetColors_x                                      0x915F40
#define CListWnd__SetColumnJustification_x                         0x915C70
#define CListWnd__SetColumnLabel_x                                 0x916610
#define CListWnd__SetItemOnlyDrawTexture_x                         0x9179A0
#define CListWnd__SetColumnWidth_x                                 0x915B80
#define CListWnd__SetCurSel_x                                      0x9170E0
#define CListWnd__SetItemColor_x                                   0x917930
#define CListWnd__SetItemData_x                                    0x9178F0
#define CListWnd__SetItemText_x                                    0x917510
#define CListWnd__ShiftColumnSeparator_x                           0x915D30
#define CListWnd__Sort_x                                           0x9159E0
#define CListWnd__ToggleSel_x                                      0x917110
#define CListWnd__SetColumnsSizable_x                              0x915DD0
#define CListWnd__SetItemWnd_x                                     0x9177B0
#define CListWnd__GetItemWnd_x                                     0x913450
#define CListWnd__SetItemIcon_x                                    0x917590
#define CListWnd__CalculateCustomWindowPositions_x                 0x916290
#define CListWnd__SetVScrollPos_x                                  0x915B60

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0510
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BEB50
#define CMapViewWnd__HandleLButtonDown_x                           0x7BB970
#define CMapViewWnd__WndNotification_x                             0x7C2E40

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3AD0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4430
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4AC0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7DB0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2550
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EDFB0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3730

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x995530
#define CPacketScrambler__hton_x                                   0x995520

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x934C60
#define CSidlManager__FindScreenPieceTemplate_x                    0x935030
#define CSidlManager__FindScreenPieceTemplate1_x                   0x934E60
#define CSidlManager__CreateXWndFromTemplate_x                     0x9384E0
#define CSidlManager__CreateXWndFromTemplate1_x                    0x938780
#define CSidlManagerbase__CreateXWnd_x                             0x9387C0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CA90
#define CSidlManager__CreateLabel_x                                0x84C660

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C0E0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x9309B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x9308B0
#define CSidlScreenWnd__ConvertToRes_x                             0x95E5E0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x930230
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92FF20
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92FFF0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x9300C0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x931250
#define CSidlScreenWnd__EnableIniStorage_x                         0x931730
#define CSidlScreenWnd__GetSidlPiece_x                             0x931440
#define CSidlScreenWnd__Init1_x                                    0x92F9D0
#define CSidlScreenWnd__LoadIniInfo_x                              0x931780
#define CSidlScreenWnd__LoadIniListWnd_x                           0x932350
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92EDC0
#define CSidlScreenWnd__StoreIniInfo_x                             0x931ED0
#define CSidlScreenWnd__StoreIniVis_x                              0x932240
#define CSidlScreenWnd__WndNotification_x                          0x931120
#define CSidlScreenWnd__GetChildItem_x                             0x9316B0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91FD10
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC3C58

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0A30
#define CSkillMgr__GetSkillCap_x                                   0x6C0C00
#define CSkillMgr__GetNameToken_x                                  0x6C0220
#define CSkillMgr__IsActivatedSkill_x                              0x6C0310
#define CSkillMgr__IsCombatSkill_x                                 0x6C0280

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x943750
#define CSliderWnd__SetValue_x                                     0x943580
#define CSliderWnd__SetNumTicks_x                                  0x9435E0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853370

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94CC70
#define CStmlWnd__ParseSTML_x                                      0x94DE10
#define CStmlWnd__CalculateHSBRange_x                              0x94DBD0
#define CStmlWnd__CalculateVSBRange_x                              0x94DB50
#define CStmlWnd__CanBreakAtCharacter_x                            0x952A40
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9536E0
#define CStmlWnd__ForceParseNow_x                                  0x94D1E0
#define CStmlWnd__GetNextTagPiece_x                                0x9529A0
#define CStmlWnd__GetVisibleText_x                                 0x94D200
#define CStmlWnd__InitializeWindowVariables_x                      0x953530
#define CStmlWnd__MakeStmlColorTag_x                               0x94C310
#define CStmlWnd__MakeWndNotificationTag_x                         0x94C380
#define CStmlWnd__SetSTMLText_x                                    0x94B0F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x954900
#define CStmlWnd__UpdateHistoryString_x                            0x9538E0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x949FA0
#define CTabWnd__DrawCurrentPage_x                                 0x94A930
#define CTabWnd__DrawTab_x                                         0x94A520
#define CTabWnd__GetCurrentPage_x                                  0x949700
#define CTabWnd__GetPageInnerRect_x                                0x949930
#define CTabWnd__GetTabInnerRect_x                                 0x949870
#define CTabWnd__GetTabRect_x                                      0x949730
#define CTabWnd__InsertPage_x                                      0x949B20
#define CTabWnd__RemovePage_x                                      0x949C70
#define CTabWnd__SetPage_x                                         0x9499B0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x949EA0
#define CTabWnd__UpdatePage_x                                      0x94A310
#define CTabWnd__GetPageFromTabIndex_x                             0x94A460
#define CTabWnd__GetCurrentTabIndex_x                              0x9496F0

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x949090
#define CPageWnd__FlashTab_x                                       0x9490F0

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACA90

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91C170
#define CTextureFont__GetTextExtent_x                              0x91C470

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x95B090

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x906F50

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x5419F0
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
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x941660
#define CXWnd__BringToTop_x                                        0x9236F0
#define CXWnd__ClrFocus_x                                          0x923080
#define CXWnd__Destroy_x                                           0x923120
#define CXWnd__DoAllDrawing_x                                      0x91F350
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x91F320
#define CXWnd__DrawColoredRect_x                                   0x91F8F0
#define CXWnd__DrawTooltip_x                                       0x91D870
#define CXWnd__DrawTooltipAtPoint_x                                0x91D930
#define CXWnd__GetBorderFrame_x                                    0x91F590
#define CXWnd__GetChildWndAt_x                                     0x923790
#define CXWnd__GetClientClipRect_x                                 0x921920
#define CXWnd__GetScreenClipRect_x                                 0x9219F0
#define CXWnd__GetScreenRect_x                                     0x921BC0
#define CXWnd__GetRelativeRect_x                                   0x921C70
#define CXWnd__GetTooltipRect_x                                    0x91F940
#define CXWnd__GetWindowTextA_x                                    0x4EFCC0
#define CXWnd__IsActive_x                                          0x920090
#define CXWnd__IsDescendantOf_x                                    0x922600
#define CXWnd__IsReallyVisible_x                                   0x922630
#define CXWnd__IsType_x                                            0x923F10
#define CXWnd__Move_x                                              0x9226A0
#define CXWnd__Move1_x                                             0x922790
#define CXWnd__ProcessTransition_x                                 0x923200
#define CXWnd__Refade_x                                            0x922A40
#define CXWnd__Resize_x                                            0x922CE0
#define CXWnd__Right_x                                             0x9234E0
#define CXWnd__SetFocus_x                                          0x923040
#define CXWnd__SetFont_x                                           0x9230B0
#define CXWnd__SetKeyTooltip_x                                     0x923CE0
#define CXWnd__SetMouseOver_x                                      0x920A00
#define CXWnd__StartFade_x                                         0x9224E0
#define CXWnd__GetChildItem_x                                      0x923910
#define CXWnd__SetParent_x                                         0x922310
#define CXWnd__Minimize_x                                          0x922D50

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95F630

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x926730
#define CXWndManager__DrawWindows_x                                0x926880
#define CXWndManager__GetKeyboardFlags_x                           0x929130
#define CXWndManager__HandleKeyboardMsg_x                          0x928D10
#define CXWndManager__RemoveWnd_x                                  0x929400
#define CXWndManager__RemovePendingDeletionWnd_x                   0x9298C0

// CDBStr
#define CDBStr__GetString_x                                        0x5585D0

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5CC0
#define EQ_Character__Cur_HP_x                                     0x4D9B90
#define EQ_Character__Cur_Mana_x                                   0x4E0DF0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C92F0
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B87F0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8940
#define EQ_Character__GetHPRegen_x                                 0x4E68E0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6EA0
#define EQ_Character__GetManaRegen_x                               0x4E72E0
#define EQ_Character__Max_Endurance_x                              0x681050
#define EQ_Character__Max_HP_x                                     0x4D99C0
#define EQ_Character__Max_Mana_x                                   0x680E30
#define EQ_Character__doCombatAbility_x                            0x683C00
#define EQ_Character__UseSkill_x                                   0x4E84B0
#define EQ_Character__GetConLevel_x                                0x679140
#define EQ_Character__IsExpansionFlag_x                            0x5D2110
#define EQ_Character__TotalEffect_x                                0x4CD740
#define EQ_Character__GetPCSpellAffect_x                           0x4CA150
#define EQ_Character__SpellDuration_x                              0x4C9B90
#define EQ_Character__MySpellDuration_x                            0x4B6EC0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD00
#define EQ_Character__GetBaseSkill_x                               0x4DDCB0
#define EQ_Character__CanUseItem_x                                 0x4E1120
#define EQ_Character__CanMedOnHorse_x                              0x4E7FF0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B6150

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x6994A0

//PcClient
#define PcClient__vftable_x                                        0xB51094
#define PcClient__PcClient_x                                       0x676360

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C02A0
#define CCharacterListWnd__EnterWorld_x                            0x4BFC70
#define CCharacterListWnd__Quit_x                                  0x4BF990
#define CCharacterListWnd__UpdateList_x                            0x4BFE60

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x6587F0
#define EQ_Item__CreateItemTagString_x                             0x98E250
#define EQ_Item__IsStackable_x                                     0x9934E0
#define EQ_Item__GetImageNum_x                                     0x98FFC0
#define EQ_Item__CreateItemClient_x                                0x6577B0
#define EQ_Item__GetItemValue_x                                    0x991210
#define EQ_Item__ValueSellMerchant_x                               0x9951F0
#define EQ_Item__IsKeyRingItem_x                                   0x992C90
#define EQ_Item__CanGoInBag_x                                      0x658910
#define EQ_Item__IsEmpty_x                                         0x992650
#define EQ_Item__GetMaxItemCount_x                                 0x991610
#define EQ_Item__GetHeldItem_x                                     0x98FE70
#define EQ_Item__CanGemFitInSlot_x                                 0x98DA20

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x579730
#define EQ_LoadingS__Array_x                                       0xD9CD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x681DA0
#define EQ_PC__GetAlternateAbilityId_x                             0x99F520
#define EQ_PC__GetCombatAbility_x                                  0x99FAB0
#define EQ_PC__GetCombatAbilityTimer_x                             0x99FB20
#define EQ_PC__GetItemRecastTimer_x                                0x684200
#define EQ_PC__HasLoreItem_x                                       0x679AA0
#define EQ_PC__AlertInventoryChanged_x                             0x6789F0
#define EQ_PC__GetPcZoneClient_x                                   0x6A9C10
#define EQ_PC__RemoveMyAffect_x                                    0x687A70
#define EQ_PC__GetKeyRingItems_x                                   0x9A0670
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9A0150
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9A0880

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8500
#define EQItemList__add_object_x                                   0x608B20
#define EQItemList__add_item_x                                     0x5D8AE0
#define EQItemList__delete_item_x                                  0x5D8B30
#define EQItemList__FreeItemList_x                                 0x5D8A40

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554970

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69AED0
#define EQPlayer__dEQPlayer_x                                      0x68D5D0
#define EQPlayer__DoAttack_x                                       0x6A38D0
#define EQPlayer__EQPlayer_x                                       0x68DE20
#define EQPlayer__SetNameSpriteState_x                             0x6923E0
#define EQPlayer__SetNameSpriteTint_x                              0x6932B0
#define PlayerBase__HasProperty_j_x                                0x9ED560
#define EQPlayer__IsTargetable_x                                   0x9EDAC0
#define EQPlayer__CanSee_x                                         0x9ED8B0
#define EQPlayer__CanSee1_x                                        0x9ED980
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ED620

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A76F0
#define PlayerZoneClient__GetLevel_x                               0x6A9C50
#define PlayerZoneClient__IsValidTeleport_x                        0x609FD0
#define PlayerZoneClient__LegalPlayerRace_x                        0x571560

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E080
#define EQPlayerManager__GetSpawnByName_x                          0x69E130
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E1C0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C100
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C1D0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C210
#define KeypressHandler__ClearCommandStateArray_x                  0x65D6D0
#define KeypressHandler__HandleKeyDown_x                           0x65D6F0
#define KeypressHandler__HandleKeyUp_x                             0x65D790
#define KeypressHandler__SaveKeymapping_x                          0x65DD40

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC170
#define MapViewMap__SaveEx_x                                       0x7BF71F
#define MapViewMap__SetZoom_x                                      0x7C5400

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B3FD0

// StringTable 
#define StringTable__getString_x                                   0x9AED20

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6876B0
#define PcZoneClient__RemovePetEffect_x                            0x687D20
#define PcZoneClient__HasAlternateAbility_x                        0x680C80
#define PcZoneClient__GetCurrentMod_x                              0x4EBE80
#define PcZoneClient__GetModCap_x                                  0x4EBD80
#define PcZoneClient__CanEquipItem_x                               0x681360
#define PcZoneClient__GetItemByID_x                                0x684730
#define PcZoneClient__RemoveBuffEffect_x                           0x687DD0
#define PcZoneClient__BandolierSwap_x                              0x682360
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6841A0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60EBF0

//IconCache
#define IconCache__GetIcon_x                                       0x74B730

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742100
#define CContainerMgr__CloseContainer_x                            0x742420
#define CContainerMgr__OpenExperimentContainer_x                   0x742F80

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BA60

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650D30

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1380
#define CLootWnd__RequestLootSlot_x                                0x7B05A0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A39F0
#define EQ_Spell__SpellAffects_x                                   0x5A3F00
#define EQ_Spell__SpellAffectBase_x                                0x5A3C20
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1150
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1100
#define EQ_Spell__IsSPAStacking_x                                  0x5A4E80
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4110
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4EB0
#define EQ_Spell__IsLullSpell_x                                    0x5A45E0
#define __IsResEffectSpell_x                                       0x4D0900

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B17A0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9BEBD0
#define EQ_Affect__SetAffectData_x                                 0x9BF1A0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8686E0
#define CTargetWnd__WndNotification_x                              0x867E80
#define CTargetWnd__RefreshTargetBuffs_x                           0x8681E0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866C60

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D120
#define CTaskWnd__ConfirmAbandonTask_x                             0x8701E0

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552540
#define CTaskManager__HandleMessage_x                              0x550420
#define CTaskManager__GetTaskStatus_x                              0x5525F0
#define CTaskManager__GetElementDescription_x                      0x552670

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E5E0
#define EqSoundManager__PlayScriptMp3_x                            0x59E7E0
#define EqSoundManager__SoundAssistPlay_x                          0x6C4F00
#define EqSoundManager__WaveInstancePlay_x                         0x6C43F0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5416A0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x948500
#define CTextureAnimation__Draw_x                                  0x948740
#define CTextureAnimation__AddBlankFrame_x                         0x948320

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x944250

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581D40
#define CAltAbilityData__GetMercMaxRank_x                          0x581CD0
#define CAltAbilityData__GetMaxRank_x                              0x575F10

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E540

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657600
#define CharacterBase__CreateItemGlobalIndex_x                     0x5D1830
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x7801F0
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C6870
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C68C0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x7264F0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x726DC0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726E70

//messages
#define msg_spell_worn_off_x                                       0x5C9890
#define msg_new_text_x                                             0x5BD270
#define __msgTokenTextParam_x                                      0x5CBCF0
#define msgTokenText_x                                             0x5CC100

//SpellManager
#define SpellManager__vftable_x                                    0xB3B540
#define SpellManager__SpellManager_x                               0x6C8B20
#define Spellmanager__LoadTextSpells_x                             0x6C9420
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8CF0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F1DB0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x671240
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0420
#define ItemGlobalIndex__IsEquippedLocation_x                      0x671210
#define ItemGlobalIndex__IsValidIndex_x                            0x5D22D0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9BF660
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9BF9B0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9460

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746EB0
#define CCursorAttachment__AttachToCursor1_x                       0x746EF0
#define CCursorAttachment__Deactivate_x                            0x7485B0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x939D30
#define CSidlManagerBase__CreatePageWnd_x                          0x939520
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x9349E0
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x934970

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x959C60
#define CEQSuiteTextureLoader__GetTexture_x                        0x9598E0

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5221D0
#define CFindItemWnd__WndNotification_x                            0x5230A0
#define CFindItemWnd__Update_x                                     0x523CC0
#define CFindItemWnd__PickupSelectedItem_x                         0x5218B0

//IString
#define IString__Append_x                                          0x558050

//Camera
#define CDisplay__cameraType_x                                     0xEE0EB8
#define EverQuest__Cameras_x                                       0xDB009C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D160
#define LootFiltersManager__GetItemFilterData_x                    0x52CA90
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CAC0
#define LootFiltersManager__SetItemLootFilter_x                    0x52CCD0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808440

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F7A80
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF320

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73EA80

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9CA580
#define CDistillerInfo__Instance_x                                 0x9CA4C0

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7619D0
#define CGroupWnd__UpdateDisplay_x                                 0x760C20

//ItemBase
#define ItemBase__IsLore_x                                         0x992D50
#define ItemBase__IsLoreEquipped_x                                 0x992DC0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608A80
#define EQPlacedItemManager__GetItemByGuid_x                       0x608BC0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608C20

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3A80
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8330

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517C20

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502720
#define FactionManagerClient__HandleFactionMessage_x               0x502F40
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503760
#define FactionManagerClient__GetMaxFaction_x                      0x50377F
#define FactionManagerClient__GetMinFaction_x                      0x503730

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F500

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x91AE00

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E4A0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F770

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580F00

//CTargetManager
#define CTargetManager__Get_x                                      0x6CCAA0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3A80

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC850

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D89E0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4D730

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA450
#define CAAWnd__UpdateSelected_x                                   0x6E69F0
#define CAAWnd__Update_x                                           0x6E9790

//CXRect
#define CXRect__operator_and_x                                     0x756DE0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F8063
#define __eq_new_x                                                 0x9F85D4

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
