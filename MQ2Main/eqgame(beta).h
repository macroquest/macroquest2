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
#define __ExpectedVersionDate                                     "Nov  2 2021"
#define __ExpectedVersionTime                                     "04:25:42"
#define __ActualVersionDate_x                                      0xB55314
#define __ActualVersionTime_x                                      0xB55308
#define __ActualVersionBuild_x                                     0xB45434

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x663610
#define __MemChecker1_x                                            0x8F3070
#define __MemChecker2_x                                            0x6DE310
#define __MemChecker3_x                                            0x6DE280
#define __MemChecker4_x                                            0x8A4430
#define __EncryptPad0_x                                            0xE54BA8
#define __EncryptPad1_x                                            0xEA2570
#define __EncryptPad2_x                                            0xE63DD0
#define __EncryptPad3_x                                            0xE639D0
#define __EncryptPad4_x                                            0xEA01D8
#define __EP1_Data_x                                               0x3463D4

// Direct Input
#define DI8__Main_x                                                0xFA087C
#define DI8__Keyboard_x                                            0xFA0880
#define DI8__Mouse_x                                               0xFA07D8
#define DI8__Mouse_Copy_x                                          0xDAFDEC
#define DI8__Mouse_Check_x                                         0xFA12B8
#define __AutoSkillArray_x                                         0xDB0908
#define __Attack_x                                                 0xE4E72B
#define __Autofire_x                                               0xE4E72C
#define __BindList_x                                               0xDA5498
#define g_eqCommandStates_x                                        0xDA6200
#define __Clicks_x                                                 0xDAFEA4
#define __CommandList_x                                            0xDA6D88
#define __CurrentMapLabel_x                                        0xFB3894
#define __CurrentSocial_x                                          0xC60460
#define __DoAbilityList_x                                          0xDE624C
#define __do_loot_x                                                0x5E08D0
#define __DrawHandler_x                                            0x1625170
#define __GroupCount_x                                             0xF95E2A
#define __Guilds_x                                                 0xF9A290
#define __gWorld_x                                                 0xF9603C
#define __HWnd_x                                                   0xFA07DC
#define __heqmain_x                                                0xFA374C
#define __InChatMode_x                                             0xDAFDD4
#define __LastTell_x                                               0xDB1948
#define __LMouseHeldTime_x                                         0xDAFF10
#define __Mouse_x                                                  0xFA0868
#define __MouseLook_x                                              0xDAFE6A
#define __MouseEventTime_x                                         0xF9BCBC
#define __gpbCommandEvent_x                                        0xF96148
#define __NetStatusToggle_x                                        0xDAFE6D
#define __PCNames_x                                                0xDB0EF8
#define __RangeAttackReady_x                                       0xDB0BEC
#define __RMouseHeldTime_x                                         0xDAFF0C
#define __RunWalkState_x                                           0xDAFDD8
#define __ScreenMode_x                                             0xEE211C
#define __ScreenX_x                                                0xDAFD8C
#define __ScreenY_x                                                0xDAFD88
#define __ScreenXMax_x                                             0xDAFD90
#define __ScreenYMax_x                                             0xDAFD94
#define __ServerHost_x                                             0xF96313
#define __ServerName_x                                             0xDE620C
#define __ShiftKeyDown_x                                           0xDB0468
#define __ShowNames_x                                              0xDB0DA8
#define EverQuestInfo__bSocialChanged_x                            0xDE6294
#define __Socials_x                                                0xDE630C
#define __SubscriptionType_x                                       0xFEB3B8
#define __TargetAggroHolder_x                                      0xFB6248
#define __ZoneType_x                                               0xDB0268
#define __GroupAggro_x                                             0xFB6288
#define __LoginName_x                                              0xFA0F4C
#define __Inviter_x                                                0xE4E6A8
#define __AttackOnAssist_x                                         0xDB0D64
#define __UseTellWindows_x                                         0xDB1090
#define __gfMaxZoomCameraDistance_x                                0xB4D18C
#define __gfMaxCameraDistance_x                                    0xB75B50
#define __pulAutoRun_x                                             0xDAFE88
#define __pulForward_x                                             0xDB10C8
#define __pulBackward_x                                            0xDB10CC
#define __pulTurnRight_x                                           0xDB10D0
#define __pulTurnLeft_x                                            0xDB10D4
#define __pulStrafeLeft_x                                          0xDB10D8
#define __pulStrafeRight_x                                         0xDB10DC

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF96628
#define instEQZoneInfo_x                                           0xDB0060
#define pinstActiveBanker_x                                        0xF93D28
#define pinstActiveCorpse_x                                        0xF93D20
#define pinstActiveGMaster_x                                       0xF93D24
#define pinstActiveMerchant_x                                      0xF93D1C
#define pinstAltAdvManager_x                                       0xEE2F38
#define pinstBandageTarget_x                                       0xF93D38
#define pinstCamActor_x                                            0xEE2110
#define pinstCDBStr_x                                              0xEE1CA8
#define pinstCDisplay_x                                            0xF93DA4
#define pinstCEverQuest_x                                          0xFA07E4
#define pinstEverQuestInfo_x                                       0xDAFD80
#define pinstCharData_x                                            0xF93D94
#define pinstCharSpawn_x                                           0xF93D70
#define pinstControlledMissile_x                                   0xF93D7C
#define pinstControlledPlayer_x                                    0xF93D70
#define pinstCResolutionHandler_x                                  0x1625398
#define pinstCSidlManager_x                                        0xFC4DD4
#define pinstCXWndManager_x                                        0xFC4DCC
#define instDynamicZone_x                                          0xF9A168
#define pinstDZMember_x                                            0xF9A278
#define pinstDZTimerInfo_x                                         0xF9A27C
#define pinstEqLogin_x                                             0xFA0898
#define instEQMisc_x                                               0xD998D8
#define pinstEQSoundManager_x                                      0xEE3848
#define pinstEQSpellStrings_x                                      0xED2948
#define instExpeditionLeader_x                                     0xF9A1B2
#define instExpeditionName_x                                       0xF9A1F2
#define pinstGroup_x                                               0xF95E26
#define pinstImeManager_x                                          0xFC4DD0
#define pinstLocalPlayer_x                                         0xF93D18
#define pinstMercenaryData_x                                       0xF9D7B4
#define pinstMercenaryStats_x                                      0xFB6314
#define pinstModelPlayer_x                                         0xF93D30
#define pinstPCData_x                                              0xF93D94
#define pinstSkillMgr_x                                            0xF9F8A0
#define pinstSpawnManager_x                                        0xF9E378
#define pinstSpellManager_x                                        0xF9FAE0
#define pinstSpellSets_x                                           0xE47354
#define pinstStringTable_x                                         0xF93DA0
#define pinstSwitchManager_x                                       0xF93BC8
#define pinstTarget_x                                              0xF93D6C
#define pinstTargetObject_x                                        0xF93D8C
#define pinstTargetSwitch_x                                        0xF93D90
#define pinstTaskMember_x                                          0xD99420
#define pinstTrackTarget_x                                         0xF93D74
#define pinstTradeTarget_x                                         0xF93D2C
#define instTributeActive_x                                        0xD998F9
#define pinstViewActor_x                                           0xEE210C
#define pinstWorldData_x                                           0xF93D9C
#define pinstZoneAddr_x                                            0xDB0300
#define pinstPlayerPath_x                                          0xF9E410
#define pinstTargetIndicator_x                                     0xF9FD48
#define EQObject_Top_x                                             0xF93D88

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE2170
#define pinstCAchievementsWnd_x                                    0xEE1E30
#define pinstCActionsWnd_x                                         0xEE2100
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE212C
#define pinstCAdvancedLootWnd_x                                    0xEE2104
#define pinstCAdventureLeaderboardWnd_x                            0xFAD0B8
#define pinstCAdventureRequestWnd_x                                0xFAD168
#define pinstCAdventureStatsWnd_x                                  0xFAD218
#define pinstCAggroMeterWnd_x                                      0xEE1E8C
#define pinstCAlarmWnd_x                                           0xEE1D60
#define pinstCAlertHistoryWnd_x                                    0xEE2154
#define pinstCAlertStackWnd_x                                      0xEE2130
#define pinstCAlertWnd_x                                           0xEE2138
#define pinstCAltStorageWnd_x                                      0xFAD578
#define pinstCAudioTriggersWindow_x                                0xEC4C78
#define pinstCAuraWnd_x                                            0xEE2158
#define pinstCAvaZoneWnd_x                                         0xEE1E2C
#define pinstCBandolierWnd_x                                       0xEE2160
#define pinstCBankWnd_x                                            0xEE20DC
#define pinstCBarterMerchantWnd_x                                  0xFAE7B8
#define pinstCBarterSearchWnd_x                                    0xFAE868
#define pinstCBarterWnd_x                                          0xFAE918
#define pinstCBazaarConfirmationWnd_x                              0xEE1D6C
#define pinstCBazaarSearchWnd_x                                    0xEE1E14
#define pinstCBazaarWnd_x                                          0xEE1DC8
#define pinstCBlockedBuffWnd_x                                     0xEE1E54
#define pinstCBlockedPetBuffWnd_x                                  0xEE1E58
#define pinstCBodyTintWnd_x                                        0xEE1D8C
#define pinstCBookWnd_x                                            0xEE20E4
#define pinstCBreathWnd_x                                          0xEE2174
#define pinstCBuffWindowNORMAL_x                                   0xEE1E4C
#define pinstCBuffWindowSHORT_x                                    0xEE1E50
#define pinstCBugReportWnd_x                                       0xEE1DF8
#define pinstCButtonWnd_x                                          0xFC5038
#define pinstCCastingWnd_x                                         0xEE1E88
#define pinstCCastSpellWnd_x                                       0xEE1E9C
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE1E18
#define pinstCChatWindowManager_x                                  0xFAF3C0
#define pinstCClaimWnd_x                                           0xFAF518
#define pinstCColorPickerWnd_x                                     0xEE1E40
#define pinstCCombatAbilityWnd_x                                   0xEE2144
#define pinstCCombatSkillsSelectWnd_x                              0xEE2140
#define pinstCCompassWnd_x                                         0xEE1D48
#define pinstCConfirmationDialog_x                                 0xFB43E0
#define pinstCContainerMgr_x                                       0xEE216C
#define pinstCContextMenuManager_x                                 0xFC4D88
#define pinstCCursorAttachment_x                                   0xEE1E80
#define pinstCDynamicZoneWnd_x                                     0xFAFAE0
#define pinstCEditLabelWnd_x                                       0xEE1DDC
#define pinstCEQMainWnd_x                                          0xFAFD28
#define pinstCEventCalendarWnd_x                                   0xEE1D50
#define pinstCExtendedTargetWnd_x                                  0xEE1E84
#define pinstCPlayerCustomizationWnd_x                             0xEE1E20
#define pinstCFactionWnd_x                                         0xEE1E98
#define pinstCFellowshipWnd_x                                      0xFAFF28
#define pinstCFileSelectionWnd_x                                   0xEE217C
#define pinstCFindItemWnd_x                                        0xEE1D64
#define pinstCFindLocationWnd_x                                    0xFB0080
#define pinstCFriendsWnd_x                                         0xEE2148
#define pinstCGemsGameWnd_x                                        0xEE1D58
#define pinstCGiveWnd_x                                            0xEE1DD0
#define pinstCGroupSearchFiltersWnd_x                              0xEE1E5C
#define pinstCGroupSearchWnd_x                                     0xFB0478
#define pinstCGroupWnd_x                                           0xFB0528
#define pinstCGuildBankWnd_x                                       0xFB05D8
#define pinstCGuildCreationWnd_x                                   0xFB0688
#define pinstCGuildMgmtWnd_x                                       0xFB0738
#define pinstCharacterCreation_x                                   0xEE1E64
#define pinstCHelpWnd_x                                            0xEE20D0
#define pinstCHeritageSelectionWnd_x                               0xEE1E24
#define pinstCHotButtonWnd_x                                       0xFB2890
#define pinstCHotButtonWnd1_x                                      0xFB2890
#define pinstCHotButtonWnd2_x                                      0xFB2894
#define pinstCHotButtonWnd3_x                                      0xFB2898
#define pinstCHotButtonWnd4_x                                      0xFB289C
#define pinstCIconSelectionWnd_x                                   0xEE1DF4
#define pinstCInspectWnd_x                                         0xEE1DE8
#define pinstCInventoryWnd_x                                       0xEE20D4
#define pinstCInvSlotMgr_x                                         0xEE2164
#define pinstCItemDisplayManager_x                                 0xFB2DE8
#define pinstCItemExpTransferWnd_x                                 0xFB2F1C
#define pinstCItemOverflowWnd_x                                    0xEE1D94
#define pinstCJournalCatWnd_x                                      0xEE1D7C
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE1D70
#define pinstCJournalTextWnd_x                                     0xEE1D70
#define pinstCKeyRingWnd_x                                         0xEE20D8
#define pinstCLargeDialogWnd_x                                     0xFB5060
#define pinstCLayoutCopyWnd_x                                      0xFB3268
#define pinstCLFGuildWnd_x                                         0xFB3318
#define pinstCLoadskinWnd_x                                        0xEE1D5C
#define pinstCLootFiltersCopyWnd_x                                 0xEE11B8
#define pinstCLootFiltersWnd_x                                     0xEE1D74
#define pinstCLootSettingsWnd_x                                    0xEE1D78
#define pinstCLootWnd_x                                            0xEE20E8
#define pinstCMailAddressBookWnd_x                                 0xEE1E0C
#define pinstCMailCompositionWnd_x                                 0xEE1E04
#define pinstCMailIgnoreListWnd_x                                  0xEE1E10
#define pinstCMailWnd_x                                            0xEE1DFC
#define pinstCManageLootWnd_x                                      0xEE33B8
#define pinstCMapToolbarWnd_x                                      0xEE1DD4
#define pinstCMapViewWnd_x                                         0xEE1DCC
#define pinstCMarketplaceWnd_x                                     0xEE1DF0
#define pinstCMerchantWnd_x                                        0xEE1D90
#define pinstCMIZoneSelectWnd_x                                    0xFB3B50
#define pinstCMusicPlayerWnd_x                                     0xEE2168
#define pinstCNameChangeMercWnd_x                                  0xEE2108
#define pinstCNameChangePetWnd_x                                   0xEE20FC
#define pinstCNameChangeWnd_x                                      0xEE1E34
#define pinstCNoteWnd_x                                            0xEE1EBC
#define pinstCObjectPreviewWnd_x                                   0xEE1E3C
#define pinstCOptionsWnd_x                                         0xEE1E48
#define pinstCOverseerWnd_x                                        0xEE1DC0
#define pinstCPetInfoWnd_x                                         0xEE20F0
#define pinstCPetitionQWnd_x                                       0xEE1E6C
#define pinstCPlayerNotesWnd_x                                     0xEE1D4C
#define pinstCPlayerWnd_x                                          0xEE1D54
#define pinstCPopupWndManager_x                                    0xFB43E0
#define pinstCProgressionSelectionWnd_x                            0xFB4490
#define pinstCPurchaseGroupWnd_x                                   0xEE1E08
#define pinstCPurchaseWnd_x                                        0xEE1E00
#define pinstCPvPLeaderboardWnd_x                                  0xFB4540
#define pinstCPvPStatsWnd_x                                        0xFB45F0
#define pinstCQuantityWnd_x                                        0xEE20E0
#define pinstCRaceChangeWnd_x                                      0xEE1E38
#define pinstCRaidOptionsWnd_x                                     0xEE1E90
#define pinstCRaidWnd_x                                            0xEE1EA0
#define pinstCRealEstateItemsWnd_x                                 0xEE1E44
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE1E94
#define pinstCRealEstateManageWnd_x                                0xEE1E70
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE1E74
#define pinstCRealEstatePlotSearchWnd_x                            0xEE1E78
#define pinstCRealEstatePurchaseWnd_x                              0xEE1E7C
#define pinstCRespawnWnd_x                                         0xEE215C
#define pinstCRewardSelectionWnd_x                                 0xFB4D38
#define pinstCSelectorWnd_x                                        0xEE1DBC
#define pinstCSendMoneyWnd_x                                       0xEE1DD8
#define pinstCServerListWnd_x                                      0xEE2178
#define pinstCSkillsSelectWnd_x                                    0xEE213C
#define pinstCSkillsWnd_x                                          0xEE2128
#define pinstCSocialEditWnd_x                                      0xEE1DEC
#define pinstCSocialWnd_x                                          0xEE1D68
#define pinstCSpellBookWnd_x                                       0xEE1EB4
#define pinstCStoryWnd_x                                           0xEE1D84
#define pinstCTargetOfTargetWnd_x                                  0xFB6398
#define pinstCTargetWnd_x                                          0xEE1DE4
#define pinstCTaskOverlayWnd_x                                     0xEE1D80
#define pinstCTaskSelectWnd_x                                      0xFB64F0
#define pinstCTaskManager_x                                        0xC6B268
#define pinstCTaskTemplateSelectWnd_x                              0xFB65A0
#define pinstCTaskWnd_x                                            0xFB6650
#define pinstCTextEntryWnd_x                                       0xEE2134
#define pinstCTimeLeftWnd_x                                        0xEE1E68
#define pinstCTipWndCONTEXT_x                                      0xFB6854
#define pinstCTipWndOFDAY_x                                        0xFB6850
#define pinstCTitleWnd_x                                           0xFB6900
#define pinstCTrackingWnd_x                                        0xEE1DE0
#define pinstCTradeskillWnd_x                                      0xFB6A68
#define pinstCTradeWnd_x                                           0xEE1DB8
#define pinstCTrainWnd_x                                           0xEE20F8
#define pinstCTributeBenefitWnd_x                                  0xFB6C68
#define pinstCTributeMasterWnd_x                                   0xFB6D18
#define pinstCTributeTrophyWnd_x                                   0xFB6DC8
#define pinstCVideoModesWnd_x                                      0xEE1DC4
#define pinstCVoiceMacroWnd_x                                      0xFA0160
#define pinstCVoteResultsWnd_x                                     0xEE20F4
#define pinstCVoteWnd_x                                            0xEE20EC
#define pinstCZoneGuideWnd_x                                       0xEE214C
#define pinstCZonePathWnd_x                                        0xEE2150

#define pinstEQSuiteTextureLoader_x                                0xEA2B30
#define pinstItemIconCache_x                                       0xFAFCE0
#define pinstLootFiltersManager_x                                  0xEE1268
#define pinstRewardSelectionWnd_x                                  0xFB4D38

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DBBA0
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DBE30
#define __ConvertItemTags_x                                        0x5F9040
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F6000
#define __EQGetTime_x                                              0x8F2CE0
#define __ExecuteCmd_x                                             0x5D4000
#define __FixHeading_x                                             0x9EFA60
#define __FlushDxKeyboard_x                                        0x6D95E0
#define __GameLoop_x                                               0x6DCF10
#define __get_bearing_x                                            0x5DB7C0
#define __get_melee_range_x                                        0x5DC070
#define __GetAnimationCache_x                                      0x74C670
#define __GetGaugeValueFromEQ_x                                    0x85D150
#define __GetLabelFromEQ_x                                         0x85EB60
#define __GetXTargetType_x                                         0x9F1DD0
#define __HandleMouseWheel_x                                       0x6DE3A0
#define __HeadingDiff_x                                            0x9EFAC0
#define __HelpPath_x                                               0xF9B97C
#define __ExecuteFrontEnd_x                                        0x6D9DC0
#define __NewUIINI_x                                               0x85CE30
#define __ProcessGameEvents_x                                      0x642760
#define __ProcessMouseEvent_x                                      0x641E60
#define __SaveColors_x                                             0x56F890
#define __STMLToText_x                                             0x92EEE0
#define __ToggleKeyRingItem_x                                      0x528D90
#define CMemoryMappedFile__SetFile_x                               0xAE0D20
#define CrashDetected_x                                            0x6DBB10
#define DrawNetStatus_x                                            0x671CF0
#define Expansion_HoT_x                                            0xDB0D50
#define Teleport_Table_Size_x                                      0xF961D0
#define Teleport_Table_x                                           0xF93DA8
#define Util__FastTime_x                                           0x8F28A0
#define __CopyLayout_x                                             0x65E890
#define __WndProc_x                                                0x6DC010
#define __ProcessKeyboardEvent_x                                   0x6DB550

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
#define AltAdvManager__GetCalculatedTimer_x                        0x578900
#define AltAdvManager__IsAbilityReady_x                            0x577500
#define AltAdvManager__GetAAById_x                                 0x5778A0
#define AltAdvManager__CanTrainAbility_x                           0x577910
#define AltAdvManager__CanSeeAbility_x                             0x577CC0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D17F0
#define CharacterZoneClient__HasSkill_x                            0x4DCFA0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE720
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8C60
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1430
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFC20
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFD20
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE60
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAF50
#define CharacterZoneClient__BardCastBard_x                        0x4CDEB0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C53D0
#define CharacterZoneClient__GetEffect_x                           0x4C1370
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC480
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC530
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC5D0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC790
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC970
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8BD0
#define CharacterZoneClient__FindItemByGuid_x                      0x685010
#define CharacterZoneClient__FindItemByRecord_x                    0x4DED00

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x7074A0
#define CBankWnd__WndNotification_x                                0x707250

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711FB0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70CBF0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70ABC0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x7166E0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92C470
#define CButtonWnd__CButtonWnd_x                                   0x92ADD0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x739B60
#define CChatManager__InitContextMenu_x                            0x732040
#define CChatManager__FreeChatWindow_x                             0x738710
#define CChatManager__SetLockedActiveChatWindow_x                  0x739840
#define CChatManager__CreateChatWindow_x                           0x738D40

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD80

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x9422E0
#define CContextMenu__dCContextMenu_x                              0x942520
#define CContextMenu__AddMenuItem_x                                0x942530
#define CContextMenu__AddChildMenuItem_x                           0x942670
#define CContextMenu__RemoveMenuItem_x                             0x942920
#define CContextMenu__RemoveAllMenuItems_x                         0x942940
#define CContextMenu__CheckMenuItem_x                              0x9429A0
#define CContextMenu__SetMenuItem_x                                0x942840
#define CContextMenu__AddSeparator_x                               0x942820
#define CContextMenu__AddColorSeparator_x                          0x9172A0

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x942F20
#define CContextMenuManager__RemoveMenu_x                          0x942F90
#define CContextMenuManager__PopupMenu_x                           0x943050
#define CContextMenuManager__Flush_x                               0x942EC0
#define CContextMenuManager__GetMenu_x                             0x49DA90
#define CContextMenuManager__CreateDefaultMenu_x                   0x7464F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x992270
#define CChatService__GetFriendName_x                              0x9C9480

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73A4E0
#define CChatWindow__Clear_x                                       0x73B980
#define CChatWindow__WndNotification_x                             0x73C110
#define CChatWindow__AddHistory_x                                  0x73B1C0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x93F3B0
#define CComboWnd__Draw_x                                          0x93E840
#define CComboWnd__GetCurChoice_x                                  0x93F180
#define CComboWnd__GetListRect_x                                   0x93ECE0
#define CComboWnd__GetTextRect_x                                   0x93F420
#define CComboWnd__InsertChoice_x                                  0x93EE70
#define CComboWnd__SetColors_x                                     0x93EE40
#define CComboWnd__SetChoice_x                                     0x93F160
#define CComboWnd__GetItemCount_x                                  0x93F190
#define CComboWnd__GetCurChoiceText_x                              0x93F1C0
#define CComboWnd__GetChoiceText_x                                 0x93F1A0
#define CComboWnd__InsertChoiceAtIndex_x                           0x93EF10

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743B10
#define CContainerWnd__vftable_x                                   0xB5E5B4
#define CContainerWnd__SetContainer_x                              0x745390

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56A0D0
#define CDisplay__PreZoneMainUI_x                                  0x56A0E0
#define CDisplay__CleanGameUI_x                                    0x56F670
#define CDisplay__GetClickedActor_x                                0x561EC0
#define CDisplay__GetUserDefinedColor_x                            0x559C40
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5639D0
#define CDisplay__is3dON_x                                         0x55E750
#define CDisplay__ReloadUI_x                                       0x5693F0
#define CDisplay__WriteTextHD2_x                                   0x55E540
#define CDisplay__TrueDistance_x                                   0x5659B0
#define CDisplay__SetViewActor_x                                   0x5617E0
#define CDisplay__GetFloorHeight_x                                 0x55E810
#define CDisplay__SetRenderWindow_x                                0x55D1C0
#define CDisplay__ToggleScreenshotMode_x                           0x5612B0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x964C80

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x945EF0
#define CEditWnd__EnsureCaretVisible_x                             0x948270
#define CEditWnd__GetCaretPt_x                                     0x9470D0
#define CEditWnd__GetCharIndexPt_x                                 0x946E80
#define CEditWnd__GetDisplayString_x                               0x946D20
#define CEditWnd__GetHorzOffset_x                                  0x945440
#define CEditWnd__GetLineForPrintableChar_x                        0x948180
#define CEditWnd__GetSelStartPt_x                                  0x947130
#define CEditWnd__GetSTMLSafeText_x                                0x946B30
#define CEditWnd__PointFromPrintableChar_x                         0x947DC0
#define CEditWnd__SelectableCharFromPoint_x                        0x947F20
#define CEditWnd__SetEditable_x                                    0x947200
#define CEditWnd__SetWindowTextA_x                                 0x946880
#define CEditWnd__ReplaceSelection_x                               0x947980
#define CEditWnd__ReplaceSelection1_x                              0x947900

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62DD60
#define CEverQuest__ClickedPlayer_x                                0x61F270
#define CEverQuest__CreateTargetIndicator_x                        0x63F6C0
#define CEverQuest__DeleteTargetIndicator_x                        0x63F750
#define CEverQuest__DoTellWindow_x                                 0x4EFE80
#define CEverQuest__OutputTextToLog_x                              0x4F0150
#define CEverQuest__DropHeldItemOnGround_x                         0x614340
#define CEverQuest__dsp_chat_x                                     0x4F0520
#define CEverQuest__trimName_x                                     0x63ACB0
#define CEverQuest__Emote_x                                        0x62E420
#define CEverQuest__EnterZone_x                                    0x6280C0
#define CEverQuest__GetBodyTypeDesc_x                              0x633970
#define CEverQuest__GetClassDesc_x                                 0x633FB0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6345B0
#define CEverQuest__GetDeityDesc_x                                 0x63DE70
#define CEverQuest__GetLangDesc_x                                  0x634770
#define CEverQuest__GetRaceDesc_x                                  0x633F90
#define CEverQuest__InterpretCmd_x                                 0x63E4E0
#define CEverQuest__LeftClickedOnPlayer_x                          0x618830
#define CEverQuest__LMouseUp_x                                     0x6168F0
#define CEverQuest__RightClickedOnPlayer_x                         0x619420
#define CEverQuest__RMouseUp_x                                     0x617BB0
#define CEverQuest__SetGameState_x                                 0x6140C0
#define CEverQuest__UPCNotificationFlush_x                         0x63ABD0
#define CEverQuest__IssuePetCommand_x                              0x635D70
#define CEverQuest__ReportSuccessfulHit_x                          0x62FCF0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757610
#define CGaugeWnd__CalcLinesFillRect_x                             0x757670
#define CGaugeWnd__Draw_x                                          0x756C20

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4A00
#define CGuild__GetGuildName_x                                     0x4B3220
#define CGuild__GetGuildIndex_x                                    0x4B3940

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774BA0

//CHotButton
#define CHotButton__SetCheck_x                                     0x652D00
#define CHotButton__SetButtonSize_x                                0x6530C0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x782070
#define CInvSlotMgr__MoveItem_x                                    0x780C30
#define CInvSlotMgr__SelectSlot_x                                  0x782130

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F370
#define CInvSlot__SliderComplete_x                                 0x77C510
#define CInvSlot__GetItemBase_x                                    0x77BD90
#define CInvSlot__UpdateItem_x                                     0x77BF80

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782F30
#define CInvSlotWnd__HandleLButtonUp_x                             0x783940

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x8575D0
#define CItemDisplayWnd__UpdateStrings_x                           0x79B820
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x790780
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790CF0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79BF40
#define CItemDisplayWnd__AboutToShow_x                             0x79B410
#define CItemDisplayWnd__WndNotification_x                         0x79D6D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79CD70
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79A2E0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79B200

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88C9D0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2E50
#define CItemDisplayManager__ShowItem_x                            0x7A2270

// CLabel 
#define CLabel__UpdateText_x                                       0x7A99A0

// CListWnd
#define CListWnd__CListWnd_x                                       0x911CB0
#define CListWnd__dCListWnd_x                                      0x911FB0
#define CListWnd__AddColumn_x                                      0x916C00
#define CListWnd__AddColumn1_x                                     0x916D20
#define CListWnd__AddLine_x                                        0x9170A0
#define CListWnd__AddString_x                                      0x916E90
#define CListWnd__CalculateFirstVisibleLine_x                      0x9169B0
#define CListWnd__CalculateVSBRange_x                              0x916790
#define CListWnd__ClearSel_x                                       0x917A70
#define CListWnd__ClearAllSel_x                                    0x917AC0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9185B0
#define CListWnd__Compare_x                                        0x915F10
#define CListWnd__Draw_x                                           0x912170
#define CListWnd__DrawColumnSeparators_x                           0x914D00
#define CListWnd__DrawHeader_x                                     0x915160
#define CListWnd__DrawItem_x                                       0x9157B0
#define CListWnd__DrawLine_x                                       0x914E70
#define CListWnd__DrawSeparator_x                                  0x914DA0
#define CListWnd__EnableLine_x                                     0x9145B0
#define CListWnd__EnsureVisible_x                                  0x9184D0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x9179B0
#define CListWnd__GetColumnTooltip_x                               0x914130
#define CListWnd__GetColumnMinWidth_x                              0x9141A0
#define CListWnd__GetColumnWidth_x                                 0x9140B0
#define CListWnd__GetCurSel_x                                      0x913A10
#define CListWnd__GetItemAtPoint_x                                 0x914830
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x9148A0
#define CListWnd__GetItemColor_x                                   0x913D90
#define CListWnd__GetItemData_x                                    0x913A90
#define CListWnd__GetItemHeight_x                                  0x913E80
#define CListWnd__GetItemIcon_x                                    0x913C10
#define CListWnd__GetItemRect_x                                    0x9146A0
#define CListWnd__GetItemText_x                                    0x913AD0
#define CListWnd__GetSelList_x                                     0x917B10
#define CListWnd__GetSeparatorRect_x                               0x914B10
#define CListWnd__InsertLine_x                                     0x9175E0
#define CListWnd__RemoveLine_x                                     0x917800
#define CListWnd__SetColors_x                                      0x916760
#define CListWnd__SetColumnJustification_x                         0x916490
#define CListWnd__SetColumnLabel_x                                 0x916E30
#define CListWnd__SetItemOnlyDrawTexture_x                         0x9181C0
#define CListWnd__SetColumnWidth_x                                 0x9163A0
#define CListWnd__SetCurSel_x                                      0x917900
#define CListWnd__SetItemColor_x                                   0x918150
#define CListWnd__SetItemData_x                                    0x918110
#define CListWnd__SetItemText_x                                    0x917D30
#define CListWnd__ShiftColumnSeparator_x                           0x916550
#define CListWnd__Sort_x                                           0x916200
#define CListWnd__ToggleSel_x                                      0x917930
#define CListWnd__SetColumnsSizable_x                              0x9165F0
#define CListWnd__SetItemWnd_x                                     0x917FD0
#define CListWnd__GetItemWnd_x                                     0x913C60
#define CListWnd__SetItemIcon_x                                    0x917DB0
#define CListWnd__CalculateCustomWindowPositions_x                 0x916AB0
#define CListWnd__SetVScrollPos_x                                  0x916380

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0EE0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BF520
#define CMapViewWnd__HandleLButtonDown_x                           0x7BC340
#define CMapViewWnd__WndNotification_x                             0x7C3810

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E4540
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4EA0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E5530
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E8830
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2FB0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EEA50
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E4190

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x995E20
#define CPacketScrambler__hton_x                                   0x995E10

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x935580
#define CSidlManager__FindScreenPieceTemplate_x                    0x935950
#define CSidlManager__FindScreenPieceTemplate1_x                   0x935780
#define CSidlManager__CreateXWndFromTemplate_x                     0x938E00
#define CSidlManager__CreateXWndFromTemplate1_x                    0x939090
#define CSidlManagerbase__CreateXWnd_x                             0x9390D0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84D620
#define CSidlManager__CreateLabel_x                                0x84D1F0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84CC70

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x931290
#define CSidlScreenWnd__CalculateVSBRange_x                        0x931190
#define CSidlScreenWnd__ConvertToRes_x                             0x95EEF0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x930B10
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x930800
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x9308D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x9309A0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x931B50
#define CSidlScreenWnd__EnableIniStorage_x                         0x932030
#define CSidlScreenWnd__GetSidlPiece_x                             0x931D40
#define CSidlScreenWnd__Init1_x                                    0x9302B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x932080
#define CSidlScreenWnd__LoadIniListWnd_x                           0x932C70
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92F6B0
#define CSidlScreenWnd__StoreIniInfo_x                             0x9327E0
#define CSidlScreenWnd__StoreIniVis_x                              0x932B60
#define CSidlScreenWnd__WndNotification_x                          0x931A20
#define CSidlScreenWnd__GetChildItem_x                             0x931FB0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x9204A0
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC4C58

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C1250
#define CSkillMgr__GetSkillCap_x                                   0x6C1420
#define CSkillMgr__GetNameToken_x                                  0x6C0A40
#define CSkillMgr__IsActivatedSkill_x                              0x6C0B30
#define CSkillMgr__IsCombatSkill_x                                 0x6C0AA0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x944020
#define CSliderWnd__SetValue_x                                     0x943E50
#define CSliderWnd__SetNumTicks_x                                  0x943EB0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853F30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94D570
#define CStmlWnd__ParseSTML_x                                      0x94E730
#define CStmlWnd__CalculateHSBRange_x                              0x94E4F0
#define CStmlWnd__CalculateVSBRange_x                              0x94E460
#define CStmlWnd__CanBreakAtCharacter_x                            0x953350
#define CStmlWnd__FastForwardToEndOfTag_x                          0x953FF0
#define CStmlWnd__ForceParseNow_x                                  0x94DAE0
#define CStmlWnd__GetNextTagPiece_x                                0x9532B0
#define CStmlWnd__GetVisibleText_x                                 0x94DB00
#define CStmlWnd__InitializeWindowVariables_x                      0x953E40
#define CStmlWnd__MakeStmlColorTag_x                               0x94CC10
#define CStmlWnd__MakeWndNotificationTag_x                         0x94CC80
#define CStmlWnd__SetSTMLText_x                                    0x94B9F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x955210
#define CStmlWnd__UpdateHistoryString_x                            0x9541F0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x94A8A0
#define CTabWnd__DrawCurrentPage_x                                 0x94B230
#define CTabWnd__DrawTab_x                                         0x94AE20
#define CTabWnd__GetCurrentPage_x                                  0x94A000
#define CTabWnd__GetPageInnerRect_x                                0x94A230
#define CTabWnd__GetTabInnerRect_x                                 0x94A170
#define CTabWnd__GetTabRect_x                                      0x94A030
#define CTabWnd__InsertPage_x                                      0x94A420
#define CTabWnd__RemovePage_x                                      0x94A570
#define CTabWnd__SetPage_x                                         0x94A2B0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x94A7A0
#define CTabWnd__UpdatePage_x                                      0x94AC10
#define CTabWnd__GetPageFromTabIndex_x                             0x94AD60
#define CTabWnd__GetCurrentTabIndex_x                              0x949FF0

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x949990
#define CPageWnd__FlashTab_x                                       0x9499F0

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACAD0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91C9C0
#define CTextureFont__GetTextExtent_x                              0x91CCC0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x95B9A0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x907760

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x541B40
#define CXStr__CXStr1_x                                            0x4827A0
#define CXStr__CXStr3_x                                            0x8EEC30
#define CXStr__dCXStr_x                                            0x478FA0
#define CXStr__operator_equal_x                                    0x8EEE70
#define CXStr__operator_equal1_x                                   0x8EEEB0
#define CXStr__operator_plus_equal1_x                              0x8EF910
#define CXStr__SetString_x                                         0x8F17B0
#define CXStr__operator_char_p_x                                   0x8EF360
#define CXStr__GetChar_x                                           0x8F1110
#define CXStr__Delete_x                                            0x8F09E0
#define CXStr__GetUnicode_x                                        0x8F1180
#define CXStr__Insert_x                                            0x8F11E0
#define CXStr__FindNext_x                                          0x8F0E30
#define CXStr__Copy_x                                              0x8F07F0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x941F40
#define CXWnd__BringToTop_x                                        0x923F20
#define CXWnd__ClrFocus_x                                          0x9238B0
#define CXWnd__Destroy_x                                           0x923950
#define CXWnd__DoAllDrawing_x                                      0x91FAE0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x91FAB0
#define CXWnd__DrawColoredRect_x                                   0x920080
#define CXWnd__DrawTooltip_x                                       0x91E0A0
#define CXWnd__DrawTooltipAtPoint_x                                0x91E160
#define CXWnd__GetBorderFrame_x                                    0x91FD20
#define CXWnd__GetChildWndAt_x                                     0x923FC0
#define CXWnd__GetClientClipRect_x                                 0x9220C0
#define CXWnd__GetScreenClipRect_x                                 0x922190
#define CXWnd__GetScreenRect_x                                     0x922320
#define CXWnd__GetRelativeRect_x                                   0x9223F0
#define CXWnd__GetTooltipRect_x                                    0x9200D0
#define CXWnd__GetWindowTextA_x                                    0x4EFD20
#define CXWnd__IsActive_x                                          0x920820
#define CXWnd__IsDescendantOf_x                                    0x922DC0
#define CXWnd__IsReallyVisible_x                                   0x922DF0
#define CXWnd__IsType_x                                            0x924750
#define CXWnd__Move_x                                              0x922E60
#define CXWnd__Move1_x                                             0x922F60
#define CXWnd__ProcessTransition_x                                 0x923A30
#define CXWnd__Refade_x                                            0x923240
#define CXWnd__Resize_x                                            0x9234D0
#define CXWnd__Right_x                                             0x923D10
#define CXWnd__SetFocus_x                                          0x923870
#define CXWnd__SetFont_x                                           0x9238E0
#define CXWnd__SetKeyTooltip_x                                     0x924510
#define CXWnd__SetMouseOver_x                                      0x9211D0
#define CXWnd__StartFade_x                                         0x922CA0
#define CXWnd__GetChildItem_x                                      0x924140
#define CXWnd__SetParent_x                                         0x922AD0
#define CXWnd__Minimize_x                                          0x923540

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95FF40

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x926FF0
#define CXWndManager__DrawWindows_x                                0x927140
#define CXWndManager__GetKeyboardFlags_x                           0x9299F0
#define CXWndManager__HandleKeyboardMsg_x                          0x9295D0
#define CXWndManager__RemoveWnd_x                                  0x929CC0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x92A180

// CDBStr
#define CDBStr__GetString_x                                        0x558730

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5D20
#define EQ_Character__Cur_HP_x                                     0x4D9BF0
#define EQ_Character__Cur_Mana_x                                   0x4E0E50
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9350
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B87E0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8930
#define EQ_Character__GetHPRegen_x                                 0x4E6940
#define EQ_Character__GetEnduranceRegen_x                          0x4E6F00
#define EQ_Character__GetManaRegen_x                               0x4E7340
#define EQ_Character__Max_Endurance_x                              0x681890
#define EQ_Character__Max_HP_x                                     0x4D9A20
#define EQ_Character__Max_Mana_x                                   0x681670
#define EQ_Character__doCombatAbility_x                            0x684440
#define EQ_Character__UseSkill_x                                   0x4E8510
#define EQ_Character__GetConLevel_x                                0x679980
#define EQ_Character__IsExpansionFlag_x                            0x5D27E0
#define EQ_Character__TotalEffect_x                                0x4CD7A0
#define EQ_Character__GetPCSpellAffect_x                           0x4CA1B0
#define EQ_Character__SpellDuration_x                              0x4C9BF0
#define EQ_Character__MySpellDuration_x                            0x4B6EB0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD60
#define EQ_Character__GetBaseSkill_x                               0x4DDD10
#define EQ_Character__CanUseItem_x                                 0x4E1180
#define EQ_Character__CanMedOnHorse_x                              0x4E8050

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B6A10

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699CE0

//PcClient
#define PcClient__vftable_x                                        0xB52084
#define PcClient__PcClient_x                                       0x676BB0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C02F0
#define CCharacterListWnd__EnterWorld_x                            0x4BFCC0
#define CCharacterListWnd__Quit_x                                  0x4BF9E0
#define CCharacterListWnd__UpdateList_x                            0x4BFEB0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658F40
#define EQ_Item__CreateItemTagString_x                             0x98EB20
#define EQ_Item__IsStackable_x                                     0x993DE0
#define EQ_Item__GetImageNum_x                                     0x990890
#define EQ_Item__CreateItemClient_x                                0x657EF0
#define EQ_Item__GetItemValue_x                                    0x991AF0
#define EQ_Item__ValueSellMerchant_x                               0x995AE0
#define EQ_Item__IsKeyRingItem_x                                   0x993590
#define EQ_Item__CanGoInBag_x                                      0x659060
#define EQ_Item__IsEmpty_x                                         0x992F50
#define EQ_Item__GetMaxItemCount_x                                 0x991EF0
#define EQ_Item__GetHeldItem_x                                     0x990740
#define EQ_Item__CanGemFitInSlot_x                                 0x98E300

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x5798A0
#define EQ_LoadingS__Array_x                                       0xD9DD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x6825E0
#define EQ_PC__GetAlternateAbilityId_x                             0x99FDE0
#define EQ_PC__GetCombatAbility_x                                  0x9A0370
#define EQ_PC__GetCombatAbilityTimer_x                             0x9A03E0
#define EQ_PC__GetItemRecastTimer_x                                0x684A40
#define EQ_PC__HasLoreItem_x                                       0x67A2E0
#define EQ_PC__AlertInventoryChanged_x                             0x679240
#define EQ_PC__GetPcZoneClient_x                                   0x6AA430
#define EQ_PC__RemoveMyAffect_x                                    0x6882B0
#define EQ_PC__GetKeyRingItems_x                                   0x9A0F30
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9A0A10
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9A1140

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8BE0
#define EQItemList__add_object_x                                   0x609230
#define EQItemList__add_item_x                                     0x5D91C0
#define EQItemList__delete_item_x                                  0x5D9210
#define EQItemList__FreeItemList_x                                 0x5D9120

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554AB0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B710
#define EQPlayer__dEQPlayer_x                                      0x68DE20
#define EQPlayer__DoAttack_x                                       0x6A40F0
#define EQPlayer__EQPlayer_x                                       0x68E670
#define EQPlayer__SetNameSpriteState_x                             0x692C20
#define EQPlayer__SetNameSpriteTint_x                              0x693AF0
#define PlayerBase__HasProperty_j_x                                0x9EDE20
#define EQPlayer__IsTargetable_x                                   0x9EE380
#define EQPlayer__CanSee_x                                         0x9EE170
#define EQPlayer__CanSee1_x                                        0x9EE240
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EDEE0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7F10
#define PlayerZoneClient__GetLevel_x                               0x6AA470
#define PlayerZoneClient__IsValidTeleport_x                        0x60A6E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x5716D0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E8A0
#define EQPlayerManager__GetSpawnByName_x                          0x69E950
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E9E0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C850
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C920
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C960
#define KeypressHandler__ClearCommandStateArray_x                  0x65DE20
#define KeypressHandler__HandleKeyDown_x                           0x65DE40
#define KeypressHandler__HandleKeyUp_x                             0x65DEE0
#define KeypressHandler__SaveKeymapping_x                          0x65E490

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BCB40
#define MapViewMap__SaveEx_x                                       0x7C00EF
#define MapViewMap__SetZoom_x                                      0x7C5DD0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B4890

// StringTable 
#define StringTable__getString_x                                   0x9AF5E0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687EF0
#define PcZoneClient__RemovePetEffect_x                            0x688560
#define PcZoneClient__HasAlternateAbility_x                        0x6814C0
#define PcZoneClient__GetCurrentMod_x                              0x4EBEE0
#define PcZoneClient__GetModCap_x                                  0x4EBDE0
#define PcZoneClient__CanEquipItem_x                               0x681BA0
#define PcZoneClient__GetItemByID_x                                0x684F70
#define PcZoneClient__RemoveBuffEffect_x                           0x688610
#define PcZoneClient__BandolierSwap_x                              0x682BA0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6849E0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60F300

//IconCache
#define IconCache__GetIcon_x                                       0x74C010

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7429E0
#define CContainerMgr__CloseContainer_x                            0x742D00
#define CContainerMgr__OpenExperimentContainer_x                   0x743860

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81C550

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651460

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1D50
#define CLootWnd__RequestLootSlot_x                                0x7B0F70

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3B90
#define EQ_Spell__SpellAffects_x                                   0x5A40A0
#define EQ_Spell__SpellAffectBase_x                                0x5A3DC0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D11B0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1160
#define EQ_Spell__IsSPAStacking_x                                  0x5A5020
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A42B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A5050
#define EQ_Spell__IsLullSpell_x                                    0x5A4780
#define __IsResEffectSpell_x                                       0x4D0960

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B17F0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9BF490
#define EQ_Affect__SetAffectData_x                                 0x9BFA60

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8692B0
#define CTargetWnd__WndNotification_x                              0x868A50
#define CTargetWnd__RefreshTargetBuffs_x                           0x868DB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x867830

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86DCF0
#define CTaskWnd__ConfirmAbandonTask_x                             0x870DB0

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552690
#define CTaskManager__HandleMessage_x                              0x550560
#define CTaskManager__GetTaskStatus_x                              0x552740
#define CTaskManager__GetElementDescription_x                      0x5527C0

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E780
#define EqSoundManager__PlayScriptMp3_x                            0x59E980
#define EqSoundManager__SoundAssistPlay_x                          0x6C56C0
#define EqSoundManager__WaveInstancePlay_x                         0x6C4BB0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5417F0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x948E00
#define CTextureAnimation__Draw_x                                  0x949040
#define CTextureAnimation__AddBlankFrame_x                         0x948C20

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x944B20

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581EB0
#define CAltAbilityData__GetMercMaxRank_x                          0x581E40
#define CAltAbilityData__GetMaxRank_x                              0x576080

//CTargetRing
#define CTargetRing__Cast_x                                        0x64EC70

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657D40
#define CharacterBase__CreateItemGlobalIndex_x                     0x5D1EF0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x780AD0
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C7130
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C7180
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726DB0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x727680
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x727730

//messages
#define msg_spell_worn_off_x                                       0x5C9F50
#define msg_new_text_x                                             0x5BD8E0
#define __msgTokenTextParam_x                                      0x5CC3B0
#define msgTokenText_x                                             0x5CC7C0

//SpellManager
#define SpellManager__vftable_x                                    0xB3C540
#define SpellManager__SpellManager_x                               0x6C92E0
#define Spellmanager__LoadTextSpells_x                             0x6C9BE0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C94B0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F2680

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D2830
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0AE0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x671A90
#define ItemGlobalIndex__IsValidIndex_x                            0x5D29D0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9BFF20
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9C0270

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9E20

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7477A0
#define CCursorAttachment__AttachToCursor1_x                       0x7477E0
#define CCursorAttachment__Deactivate_x                            0x748EA0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x93A640
#define CSidlManagerBase__CreatePageWnd_x                          0x939E30
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x935300
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x935290

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x95A570
#define CEQSuiteTextureLoader__GetTexture_x                        0x95A1F0

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5222D0
#define CFindItemWnd__WndNotification_x                            0x5231A0
#define CFindItemWnd__Update_x                                     0x523DF0
#define CFindItemWnd__PickupSelectedItem_x                         0x5219A0

//IString
#define IString__Append_x                                          0x5581B0

//Camera
#define CDisplay__cameraType_x                                     0xEE1EB8
#define EverQuest__Cameras_x                                       0xDB109C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D2C0
#define LootFiltersManager__GetItemFilterData_x                    0x52CC00
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CC30
#define LootFiltersManager__SetItemLootFilter_x                    0x52CE40

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808EF0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F8350
#define CResolutionHandler__GetWindowedStyle_x                     0x6BFB40

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73F360

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9CAE40
#define CDistillerInfo__Instance_x                                 0x9CAD80

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762280
#define CGroupWnd__UpdateDisplay_x                                 0x7614D0

//ItemBase
#define ItemBase__IsLore_x                                         0x993650
#define ItemBase__IsLoreEquipped_x                                 0x9936C0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x609190
#define EQPlacedItemManager__GetItemByGuid_x                       0x6092D0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x609330

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4290
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8B60

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517CA0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5027C0
#define FactionManagerClient__HandleFactionMessage_x               0x502FE0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503800
#define FactionManagerClient__GetMaxFaction_x                      0x50381F
#define FactionManagerClient__GetMinFaction_x                      0x5037D0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F5A0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x91B630

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E4B0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F810

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x581080

//CTargetManager
#define CTargetManager__Get_x                                      0x6CD260

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4290

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC890

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D90C0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4E730

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EAC10
#define CAAWnd__UpdateSelected_x                                   0x6E71B0
#define CAAWnd__Update_x                                           0x6E9F50

//CXRect
#define CXRect__operator_and_x                                     0x7576D0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F8933
#define __eq_new_x                                                 0x9F8EA4

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
