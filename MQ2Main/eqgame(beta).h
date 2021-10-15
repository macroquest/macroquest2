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
#define __ExpectedVersionDate                                     "Oct 15 2021"
#define __ExpectedVersionTime                                     "04:23:10"
#define __ActualVersionDate_x                                      0xB54324
#define __ActualVersionTime_x                                      0xB54318
#define __ActualVersionBuild_x                                     0xB44444

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x662FB0
#define __MemChecker1_x                                            0x8F2820
#define __MemChecker2_x                                            0x6DDC80
#define __MemChecker3_x                                            0x6DDBF0
#define __MemChecker4_x                                            0x8A3C30
#define __EncryptPad0_x                                            0xE53BA8
#define __EncryptPad1_x                                            0xEA1570
#define __EncryptPad2_x                                            0xE62DD0
#define __EncryptPad3_x                                            0xE629D0
#define __EncryptPad4_x                                            0xE9F1D8
#define __EP1_Data_x                                               0x37A3D4

// Direct Input
#define DI8__Main_x                                                0xF9F86C
#define DI8__Keyboard_x                                            0xF9F870
#define DI8__Mouse_x                                               0xF9F7C8
#define DI8__Mouse_Copy_x                                          0xDAEDEC
#define DI8__Mouse_Check_x                                         0xFA02A8
#define __AutoSkillArray_x                                         0xDAF908
#define __Attack_x                                                 0xE4D72B
#define __Autofire_x                                               0xE4D72C
#define __BindList_x                                               0xDA4498
#define g_eqCommandStates_x                                        0xDA5200
#define __Clicks_x                                                 0xDAEEA4
#define __CommandList_x                                            0xDA5D88
#define __CurrentMapLabel_x                                        0xFB2884
#define __CurrentSocial_x                                          0xC5F460
#define __DoAbilityList_x                                          0xDE524C
#define __do_loot_x                                                0x5E01F0
#define __DrawHandler_x                                            0x1624160
#define __GroupCount_x                                             0xF94E1A
#define __Guilds_x                                                 0xF99280
#define __gWorld_x                                                 0xF9502C
#define __HWnd_x                                                   0xF9F7CC
#define __heqmain_x                                                0xFA273C
#define __InChatMode_x                                             0xDAEDD4
#define __LastTell_x                                               0xDB0948
#define __LMouseHeldTime_x                                         0xDAEF10
#define __Mouse_x                                                  0xF9F858
#define __MouseLook_x                                              0xDAEE6A
#define __MouseEventTime_x                                         0xF9ACAC
#define __gpbCommandEvent_x                                        0xF95138
#define __NetStatusToggle_x                                        0xDAEE6D
#define __PCNames_x                                                0xDAFEF8
#define __RangeAttackReady_x                                       0xDAFBEC
#define __RMouseHeldTime_x                                         0xDAEF0C
#define __RunWalkState_x                                           0xDAEDD8
#define __ScreenMode_x                                             0xEE110C
#define __ScreenX_x                                                0xDAED8C
#define __ScreenY_x                                                0xDAED88
#define __ScreenXMax_x                                             0xDAED90
#define __ScreenYMax_x                                             0xDAED94
#define __ServerHost_x                                             0xF95303
#define __ServerName_x                                             0xDE520C
#define __ShiftKeyDown_x                                           0xDAF468
#define __ShowNames_x                                              0xDAFDA8
#define EverQuestInfo__bSocialChanged_x                            0xDE5294
#define __Socials_x                                                0xDE530C
#define __SubscriptionType_x                                       0xFEA3A8
#define __TargetAggroHolder_x                                      0xFB5238
#define __ZoneType_x                                               0xDAF268
#define __GroupAggro_x                                             0xFB5278
#define __LoginName_x                                              0xF9FF3C
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
#define instCRaid_x                                                0xF95618
#define instEQZoneInfo_x                                           0xDAF060
#define pinstActiveBanker_x                                        0xF92D18
#define pinstActiveCorpse_x                                        0xF92D10
#define pinstActiveGMaster_x                                       0xF92D14
#define pinstActiveMerchant_x                                      0xF92D0C
#define pinstAltAdvManager_x                                       0xEE1F28
#define pinstBandageTarget_x                                       0xF92D28
#define pinstCamActor_x                                            0xEE1100
#define pinstCDBStr_x                                              0xEE0C98
#define pinstCDisplay_x                                            0xF92D94
#define pinstCEverQuest_x                                          0xF9F7D4
#define pinstEverQuestInfo_x                                       0xDAED80
#define pinstCharData_x                                            0xF92D84
#define pinstCharSpawn_x                                           0xF92D60
#define pinstControlledMissile_x                                   0xF92D6C
#define pinstControlledPlayer_x                                    0xF92D60
#define pinstCResolutionHandler_x                                  0x1624388
#define pinstCSidlManager_x                                        0xFC3DC4
#define pinstCXWndManager_x                                        0xFC3DBC
#define instDynamicZone_x                                          0xF99158
#define pinstDZMember_x                                            0xF99268
#define pinstDZTimerInfo_x                                         0xF9926C
#define pinstEqLogin_x                                             0xF9F888
#define instEQMisc_x                                               0xD988D8
#define pinstEQSoundManager_x                                      0xEE2838
#define pinstEQSpellStrings_x                                      0xED1938
#define instExpeditionLeader_x                                     0xF991A2
#define instExpeditionName_x                                       0xF991E2
#define pinstGroup_x                                               0xF94E16
#define pinstImeManager_x                                          0xFC3DC0
#define pinstLocalPlayer_x                                         0xF92D08
#define pinstMercenaryData_x                                       0xF9C7A4
#define pinstMercenaryStats_x                                      0xFB5304
#define pinstModelPlayer_x                                         0xF92D20
#define pinstPCData_x                                              0xF92D84
#define pinstSkillMgr_x                                            0xF9E890
#define pinstSpawnManager_x                                        0xF9D368
#define pinstSpellManager_x                                        0xF9EAD0
#define pinstSpellSets_x                                           0xE46354
#define pinstStringTable_x                                         0xF92D90
#define pinstSwitchManager_x                                       0xF92BB8
#define pinstTarget_x                                              0xF92D5C
#define pinstTargetObject_x                                        0xF92D7C
#define pinstTargetSwitch_x                                        0xF92D80
#define pinstTaskMember_x                                          0xD98420
#define pinstTrackTarget_x                                         0xF92D64
#define pinstTradeTarget_x                                         0xF92D1C
#define instTributeActive_x                                        0xD988F9
#define pinstViewActor_x                                           0xEE10FC
#define pinstWorldData_x                                           0xF92D8C
#define pinstZoneAddr_x                                            0xDAF300
#define pinstPlayerPath_x                                          0xF9D400
#define pinstTargetIndicator_x                                     0xF9ED38
#define EQObject_Top_x                                             0xF92D78

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE1160
#define pinstCAchievementsWnd_x                                    0xEE0E20
#define pinstCActionsWnd_x                                         0xEE10F0
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE111C
#define pinstCAdvancedLootWnd_x                                    0xEE10F4
#define pinstCAdventureLeaderboardWnd_x                            0xFAC0A8
#define pinstCAdventureRequestWnd_x                                0xFAC158
#define pinstCAdventureStatsWnd_x                                  0xFAC208
#define pinstCAggroMeterWnd_x                                      0xEE0E7C
#define pinstCAlarmWnd_x                                           0xEE0D50
#define pinstCAlertHistoryWnd_x                                    0xEE1144
#define pinstCAlertStackWnd_x                                      0xEE1120
#define pinstCAlertWnd_x                                           0xEE1128
#define pinstCAltStorageWnd_x                                      0xFAC568
#define pinstCAudioTriggersWindow_x                                0xEC3C68
#define pinstCAuraWnd_x                                            0xEE1148
#define pinstCAvaZoneWnd_x                                         0xEE0E1C
#define pinstCBandolierWnd_x                                       0xEE1150
#define pinstCBankWnd_x                                            0xEE10CC
#define pinstCBarterMerchantWnd_x                                  0xFAD7A8
#define pinstCBarterSearchWnd_x                                    0xFAD858
#define pinstCBarterWnd_x                                          0xFAD908
#define pinstCBazaarConfirmationWnd_x                              0xEE0D5C
#define pinstCBazaarSearchWnd_x                                    0xEE0E04
#define pinstCBazaarWnd_x                                          0xEE0DB8
#define pinstCBlockedBuffWnd_x                                     0xEE0E44
#define pinstCBlockedPetBuffWnd_x                                  0xEE0E48
#define pinstCBodyTintWnd_x                                        0xEE0D7C
#define pinstCBookWnd_x                                            0xEE10D4
#define pinstCBreathWnd_x                                          0xEE1164
#define pinstCBuffWindowNORMAL_x                                   0xEE0E3C
#define pinstCBuffWindowSHORT_x                                    0xEE0E40
#define pinstCBugReportWnd_x                                       0xEE0DE8
#define pinstCButtonWnd_x                                          0xFC4028
#define pinstCCastingWnd_x                                         0xEE0E78
#define pinstCCastSpellWnd_x                                       0xEE0E8C
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE0E08
#define pinstCChatWindowManager_x                                  0xFAE3B0
#define pinstCClaimWnd_x                                           0xFAE508
#define pinstCColorPickerWnd_x                                     0xEE0E30
#define pinstCCombatAbilityWnd_x                                   0xEE1134
#define pinstCCombatSkillsSelectWnd_x                              0xEE1130
#define pinstCCompassWnd_x                                         0xEE0D38
#define pinstCConfirmationDialog_x                                 0xFB33D0
#define pinstCContainerMgr_x                                       0xEE115C
#define pinstCContextMenuManager_x                                 0xFC3D78
#define pinstCCursorAttachment_x                                   0xEE0E70
#define pinstCDynamicZoneWnd_x                                     0xFAEAD0
#define pinstCEditLabelWnd_x                                       0xEE0DCC
#define pinstCEQMainWnd_x                                          0xFAED18
#define pinstCEventCalendarWnd_x                                   0xEE0D40
#define pinstCExtendedTargetWnd_x                                  0xEE0E74
#define pinstCPlayerCustomizationWnd_x                             0xEE0E10
#define pinstCFactionWnd_x                                         0xEE0E88
#define pinstCFellowshipWnd_x                                      0xFAEF18
#define pinstCFileSelectionWnd_x                                   0xEE116C
#define pinstCFindItemWnd_x                                        0xEE0D54
#define pinstCFindLocationWnd_x                                    0xFAF070
#define pinstCFriendsWnd_x                                         0xEE1138
#define pinstCGemsGameWnd_x                                        0xEE0D48
#define pinstCGiveWnd_x                                            0xEE0DC0
#define pinstCGroupSearchFiltersWnd_x                              0xEE0E4C
#define pinstCGroupSearchWnd_x                                     0xFAF468
#define pinstCGroupWnd_x                                           0xFAF518
#define pinstCGuildBankWnd_x                                       0xFAF5C8
#define pinstCGuildCreationWnd_x                                   0xFAF678
#define pinstCGuildMgmtWnd_x                                       0xFAF728
#define pinstCharacterCreation_x                                   0xEE0E54
#define pinstCHelpWnd_x                                            0xEE10C0
#define pinstCHeritageSelectionWnd_x                               0xEE0E14
#define pinstCHotButtonWnd_x                                       0xFB1880
#define pinstCHotButtonWnd1_x                                      0xFB1880
#define pinstCHotButtonWnd2_x                                      0xFB1884
#define pinstCHotButtonWnd3_x                                      0xFB1888
#define pinstCHotButtonWnd4_x                                      0xFB188C
#define pinstCIconSelectionWnd_x                                   0xEE0DE0
#define pinstCInspectWnd_x                                         0xEE0DD8
#define pinstCInventoryWnd_x                                       0xEE10C4
#define pinstCInvSlotMgr_x                                         0xEE1154
#define pinstCItemDisplayManager_x                                 0xFB1DD8
#define pinstCItemExpTransferWnd_x                                 0xFB1F0C
#define pinstCItemOverflowWnd_x                                    0xEE0D84
#define pinstCJournalCatWnd_x                                      0xEE0D6C
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE0D60
#define pinstCJournalTextWnd_x                                     0xEE0D60
#define pinstCKeyRingWnd_x                                         0xEE10C8
#define pinstCLargeDialogWnd_x                                     0xFB4050
#define pinstCLayoutCopyWnd_x                                      0xFB2258
#define pinstCLFGuildWnd_x                                         0xFB2308
#define pinstCLoadskinWnd_x                                        0xEE0D4C
#define pinstCLootFiltersCopyWnd_x                                 0xEE01A8
#define pinstCLootFiltersWnd_x                                     0xEE0D64
#define pinstCLootSettingsWnd_x                                    0xEE0D68
#define pinstCLootWnd_x                                            0xEE10D8
#define pinstCMailAddressBookWnd_x                                 0xEE0DFC
#define pinstCMailCompositionWnd_x                                 0xEE0DF4
#define pinstCMailIgnoreListWnd_x                                  0xEE0E00
#define pinstCMailWnd_x                                            0xEE0DEC
#define pinstCManageLootWnd_x                                      0xEE23A8
#define pinstCMapToolbarWnd_x                                      0xEE0DC4
#define pinstCMapViewWnd_x                                         0xEE0DBC
#define pinstCMarketplaceWnd_x                                     0xEE0DE4
#define pinstCMerchantWnd_x                                        0xEE0D80
#define pinstCMIZoneSelectWnd_x                                    0xFB2B40
#define pinstCMusicPlayerWnd_x                                     0xEE1158
#define pinstCNameChangeMercWnd_x                                  0xEE10F8
#define pinstCNameChangePetWnd_x                                   0xEE10EC
#define pinstCNameChangeWnd_x                                      0xEE0E24
#define pinstCNoteWnd_x                                            0xEE0EAC
#define pinstCObjectPreviewWnd_x                                   0xEE0E2C
#define pinstCOptionsWnd_x                                         0xEE0E38
#define pinstCOverseerWnd_x                                        0xEE0DB0
#define pinstCPetInfoWnd_x                                         0xEE10E0
#define pinstCPetitionQWnd_x                                       0xEE0E5C
#define pinstCPlayerNotesWnd_x                                     0xEE0D3C
#define pinstCPlayerWnd_x                                          0xEE0D44
#define pinstCPopupWndManager_x                                    0xFB33D0
#define pinstCProgressionSelectionWnd_x                            0xFB3480
#define pinstCPurchaseGroupWnd_x                                   0xEE0DF8
#define pinstCPurchaseWnd_x                                        0xEE0DF0
#define pinstCPvPLeaderboardWnd_x                                  0xFB3530
#define pinstCPvPStatsWnd_x                                        0xFB35E0
#define pinstCQuantityWnd_x                                        0xEE10D0
#define pinstCRaceChangeWnd_x                                      0xEE0E28
#define pinstCRaidOptionsWnd_x                                     0xEE0E80
#define pinstCRaidWnd_x                                            0xEE0E90
#define pinstCRealEstateItemsWnd_x                                 0xEE0E34
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE0E84
#define pinstCRealEstateManageWnd_x                                0xEE0E60
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE0E64
#define pinstCRealEstatePlotSearchWnd_x                            0xEE0E68
#define pinstCRealEstatePurchaseWnd_x                              0xEE0E6C
#define pinstCRespawnWnd_x                                         0xEE114C
#define pinstCRewardSelectionWnd_x                                 0xFB3D28
#define pinstCSelectorWnd_x                                        0xEE0DAC
#define pinstCSendMoneyWnd_x                                       0xEE0DC8
#define pinstCServerListWnd_x                                      0xEE1168
#define pinstCSkillsSelectWnd_x                                    0xEE112C
#define pinstCSkillsWnd_x                                          0xEE1118
#define pinstCSocialEditWnd_x                                      0xEE0DDC
#define pinstCSocialWnd_x                                          0xEE0D58
#define pinstCSpellBookWnd_x                                       0xEE0EA4
#define pinstCStoryWnd_x                                           0xEE0D74
#define pinstCTargetOfTargetWnd_x                                  0xFB5388
#define pinstCTargetWnd_x                                          0xEE0DD4
#define pinstCTaskOverlayWnd_x                                     0xEE0D70
#define pinstCTaskSelectWnd_x                                      0xFB54E0
#define pinstCTaskManager_x                                        0xC6A268
#define pinstCTaskTemplateSelectWnd_x                              0xFB5590
#define pinstCTaskWnd_x                                            0xFB5640
#define pinstCTextEntryWnd_x                                       0xEE1124
#define pinstCTimeLeftWnd_x                                        0xEE0E58
#define pinstCTipWndCONTEXT_x                                      0xFB5844
#define pinstCTipWndOFDAY_x                                        0xFB5840
#define pinstCTitleWnd_x                                           0xFB58F0
#define pinstCTrackingWnd_x                                        0xEE0DD0
#define pinstCTradeskillWnd_x                                      0xFB5A58
#define pinstCTradeWnd_x                                           0xEE0DA8
#define pinstCTrainWnd_x                                           0xEE10E8
#define pinstCTributeBenefitWnd_x                                  0xFB5C58
#define pinstCTributeMasterWnd_x                                   0xFB5D08
#define pinstCTributeTrophyWnd_x                                   0xFB5DB8
#define pinstCVideoModesWnd_x                                      0xEE0DB4
#define pinstCVoiceMacroWnd_x                                      0xF9F150
#define pinstCVoteResultsWnd_x                                     0xEE10E4
#define pinstCVoteWnd_x                                            0xEE10DC
#define pinstCZoneGuideWnd_x                                       0xEE113C
#define pinstCZonePathWnd_x                                        0xEE1140

#define pinstEQSuiteTextureLoader_x                                0xEA1B30
#define pinstItemIconCache_x                                       0xFAECD0
#define pinstLootFiltersManager_x                                  0xEE0258
#define pinstRewardSelectionWnd_x                                  0xFB3D28

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB4C0
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB750
#define __ConvertItemTags_x                                        0x5F8950
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F57B0
#define __EQGetTime_x                                              0x8F2490
#define __ExecuteCmd_x                                             0x5D3970
#define __FixHeading_x                                             0x9EF100
#define __FlushDxKeyboard_x                                        0x6D8F50
#define __GameLoop_x                                               0x6DC880
#define __get_bearing_x                                            0x5DB0E0
#define __get_melee_range_x                                        0x5DB990
#define __GetAnimationCache_x                                      0x74BF50
#define __GetGaugeValueFromEQ_x                                    0x85C960
#define __GetLabelFromEQ_x                                         0x85E370
#define __GetXTargetType_x                                         0x9F1470
#define __HandleMouseWheel_x                                       0x6DDD10
#define __HeadingDiff_x                                            0x9EF160
#define __HelpPath_x                                               0xF9A96C
#define __ExecuteFrontEnd_x                                        0x6D9730
#define __NewUIINI_x                                               0x85C640
#define __ProcessGameEvents_x                                      0x6420D0
#define __ProcessMouseEvent_x                                      0x6417D0
#define __SaveColors_x                                             0x56F7B0
#define __STMLToText_x                                             0x92E370
#define __ToggleKeyRingItem_x                                      0x528CF0
#define CMemoryMappedFile__SetFile_x                               0xAE03F0
#define CrashDetected_x                                            0x6DB480
#define DrawNetStatus_x                                            0x671650
#define Expansion_HoT_x                                            0xDAFD50
#define Teleport_Table_Size_x                                      0xF951C0
#define Teleport_Table_x                                           0xF92D98
#define Util__FastTime_x                                           0x8F2050
#define __CopyLayout_x                                             0x65E240
#define __WndProc_x                                                0x6DB980
#define __ProcessKeyboardEvent_x                                   0x6DAEC0

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
#define AltAdvManager__GetCalculatedTimer_x                        0x578810
#define AltAdvManager__IsAbilityReady_x                            0x577410
#define AltAdvManager__GetAAById_x                                 0x5777B0
#define AltAdvManager__CanTrainAbility_x                           0x577820
#define AltAdvManager__CanSeeAbility_x                             0x577BD0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D17F0
#define CharacterZoneClient__HasSkill_x                            0x4DCFA0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE720
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8C90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1460
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFC20
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFD20
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE60
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAF80
#define CharacterZoneClient__BardCastBard_x                        0x4CDED0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5400
#define CharacterZoneClient__GetEffect_x                           0x4C13A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC4B0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC560
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC600
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC7C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC9A0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8C70
#define CharacterZoneClient__FindItemByGuid_x                      0x684960
#define CharacterZoneClient__FindItemByRecord_x                    0x4DED00

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x706DE0
#define CBankWnd__WndNotification_x                                0x706B90

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7118C0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C510
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A4E0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716000

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92B900
#define CButtonWnd__CButtonWnd_x                                   0x92A290

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x739450
#define CChatManager__InitContextMenu_x                            0x731930
#define CChatManager__FreeChatWindow_x                             0x738000
#define CChatManager__SetLockedActiveChatWindow_x                  0x739130
#define CChatManager__CreateChatWindow_x                           0x738630

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD80

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x941780
#define CContextMenu__dCContextMenu_x                              0x9419B0
#define CContextMenu__AddMenuItem_x                                0x9419C0
#define CContextMenu__RemoveMenuItem_x                             0x941D90
#define CContextMenu__RemoveAllMenuItems_x                         0x941DB0
#define CContextMenu__CheckMenuItem_x                              0x941E10
#define CContextMenu__SetMenuItem_x                                0x941CC0
#define CContextMenu__AddSeparator_x                               0x941CA0
#define CContextMenu__AddColorSeparator_x                          0x9165D0

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9423A0
#define CContextMenuManager__RemoveMenu_x                          0x942410
#define CContextMenuManager__PopupMenu_x                           0x9424D0
#define CContextMenuManager__Flush_x                               0x942340
#define CContextMenuManager__GetMenu_x                             0x49DA90
#define CContextMenuManager__CreateDefaultMenu_x                   0x745DB0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9C8840
#define CChatService__GetFriendName_x                              0x9C8850

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x739DD0
#define CChatWindow__Clear_x                                       0x73B270
#define CChatWindow__WndNotification_x                             0x73BA00
#define CChatWindow__AddHistory_x                                  0x73AAB0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x93E850
#define CComboWnd__Draw_x                                          0x93DCF0
#define CComboWnd__GetCurChoice_x                                  0x93E620
#define CComboWnd__GetListRect_x                                   0x93E1A0
#define CComboWnd__GetTextRect_x                                   0x93E8B0
#define CComboWnd__InsertChoice_x                                  0x93E330
#define CComboWnd__SetColors_x                                     0x93E300
#define CComboWnd__SetChoice_x                                     0x93E600
#define CComboWnd__GetItemCount_x                                  0x93E630
#define CComboWnd__GetCurChoiceText_x                              0x93E660
#define CComboWnd__GetChoiceText_x                                 0x93E640
#define CComboWnd__InsertChoiceAtIndex_x                           0x93E3C0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743400
#define CContainerWnd__vftable_x                                   0xB5D5C4
#define CContainerWnd__SetContainer_x                              0x744C50

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569FF0
#define CDisplay__PreZoneMainUI_x                                  0x56A000
#define CDisplay__CleanGameUI_x                                    0x56F590
#define CDisplay__GetClickedActor_x                                0x561DE0
#define CDisplay__GetUserDefinedColor_x                            0x559B60
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5638F0
#define CDisplay__is3dON_x                                         0x55E670
#define CDisplay__ReloadUI_x                                       0x569310
#define CDisplay__WriteTextHD2_x                                   0x55E460
#define CDisplay__TrueDistance_x                                   0x5658D0
#define CDisplay__SetViewActor_x                                   0x561700
#define CDisplay__GetFloorHeight_x                                 0x55E730
#define CDisplay__SetRenderWindow_x                                0x55D0E0
#define CDisplay__ToggleScreenshotMode_x                           0x5611D0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9640B0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x945370
#define CEditWnd__EnsureCaretVisible_x                             0x9476C0
#define CEditWnd__GetCaretPt_x                                     0x946530
#define CEditWnd__GetCharIndexPt_x                                 0x9462F0
#define CEditWnd__GetDisplayString_x                               0x946190
#define CEditWnd__GetHorzOffset_x                                  0x9448D0
#define CEditWnd__GetLineForPrintableChar_x                        0x9475D0
#define CEditWnd__GetSelStartPt_x                                  0x946590
#define CEditWnd__GetSTMLSafeText_x                                0x945FA0
#define CEditWnd__PointFromPrintableChar_x                         0x947220
#define CEditWnd__SelectableCharFromPoint_x                        0x947380
#define CEditWnd__SetEditable_x                                    0x946660
#define CEditWnd__SetWindowTextA_x                                 0x945CF0
#define CEditWnd__ReplaceSelection_x                               0x946DE0
#define CEditWnd__ReplaceSelection1_x                              0x946D60

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D6A0
#define CEverQuest__ClickedPlayer_x                                0x61EBB0
#define CEverQuest__CreateTargetIndicator_x                        0x63F030
#define CEverQuest__DeleteTargetIndicator_x                        0x63F0C0
#define CEverQuest__DoTellWindow_x                                 0x4EFE80
#define CEverQuest__OutputTextToLog_x                              0x4F0150
#define CEverQuest__DropHeldItemOnGround_x                         0x613C80
#define CEverQuest__dsp_chat_x                                     0x4F0520
#define CEverQuest__trimName_x                                     0x63A620
#define CEverQuest__Emote_x                                        0x62DD60
#define CEverQuest__EnterZone_x                                    0x627A00
#define CEverQuest__GetBodyTypeDesc_x                              0x6332B0
#define CEverQuest__GetClassDesc_x                                 0x6338F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x633EF0
#define CEverQuest__GetDeityDesc_x                                 0x63D7E0
#define CEverQuest__GetLangDesc_x                                  0x6340B0
#define CEverQuest__GetRaceDesc_x                                  0x6338D0
#define CEverQuest__InterpretCmd_x                                 0x63DE50
#define CEverQuest__LeftClickedOnPlayer_x                          0x618170
#define CEverQuest__LMouseUp_x                                     0x616230
#define CEverQuest__RightClickedOnPlayer_x                         0x618D60
#define CEverQuest__RMouseUp_x                                     0x6174F0
#define CEverQuest__SetGameState_x                                 0x613A00
#define CEverQuest__UPCNotificationFlush_x                         0x63A540
#define CEverQuest__IssuePetCommand_x                              0x6356B0
#define CEverQuest__ReportSuccessfulHit_x                          0x62F630

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756EF0
#define CGaugeWnd__CalcLinesFillRect_x                             0x756F50
#define CGaugeWnd__Draw_x                                          0x756500

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4AA0
#define CGuild__GetGuildName_x                                     0x4B32C0
#define CGuild__GetGuildIndex_x                                    0x4B39E0

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x7744B0

//CHotButton
#define CHotButton__SetCheck_x                                     0x652660
#define CHotButton__SetButtonSize_x                                0x652A20

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781980
#define CInvSlotMgr__MoveItem_x                                    0x7805D0
#define CInvSlotMgr__SelectSlot_x                                  0x781A40

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77EBB0
#define CInvSlot__SliderComplete_x                                 0x77BE20
#define CInvSlot__GetItemBase_x                                    0x77B6B0
#define CInvSlot__UpdateItem_x                                     0x77B8A0

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782840
#define CInvSlotWnd__HandleLButtonUp_x                             0x783270

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856DC0
#define CItemDisplayWnd__UpdateStrings_x                           0x79B180
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x790120
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790680
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B8A0
#define CItemDisplayWnd__AboutToShow_x                             0x79AD70
#define CItemDisplayWnd__WndNotification_x                         0x79D010
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C6C0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799C40
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79AB60

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88C1D0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A27A0
#define CItemDisplayManager__ShowItem_x                            0x7A1BC0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9300

// CListWnd
#define CListWnd__CListWnd_x                                       0x911010
#define CListWnd__dCListWnd_x                                      0x911310
#define CListWnd__AddColumn_x                                      0x915F30
#define CListWnd__AddColumn1_x                                     0x916050
#define CListWnd__AddLine_x                                        0x9163D0
#define CListWnd__AddString_x                                      0x9161C0
#define CListWnd__CalculateFirstVisibleLine_x                      0x915CE0
#define CListWnd__CalculateVSBRange_x                              0x915AC0
#define CListWnd__ClearSel_x                                       0x916DA0
#define CListWnd__ClearAllSel_x                                    0x916DF0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9178C0
#define CListWnd__Compare_x                                        0x915240
#define CListWnd__Draw_x                                           0x9114D0
#define CListWnd__DrawColumnSeparators_x                           0x914030
#define CListWnd__DrawHeader_x                                     0x914490
#define CListWnd__DrawItem_x                                       0x914AE0
#define CListWnd__DrawLine_x                                       0x9141A0
#define CListWnd__DrawSeparator_x                                  0x9140D0
#define CListWnd__EnableLine_x                                     0x9138F0
#define CListWnd__EnsureVisible_x                                  0x9177F0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x916CE0
#define CListWnd__GetColumnTooltip_x                               0x913470
#define CListWnd__GetColumnMinWidth_x                              0x9134E0
#define CListWnd__GetColumnWidth_x                                 0x9133F0
#define CListWnd__GetCurSel_x                                      0x912D50
#define CListWnd__GetItemAtPoint_x                                 0x913B60
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x913BD0
#define CListWnd__GetItemColor_x                                   0x9130D0
#define CListWnd__GetItemData_x                                    0x912DD0
#define CListWnd__GetItemHeight_x                                  0x9131C0
#define CListWnd__GetItemIcon_x                                    0x912F50
#define CListWnd__GetItemRect_x                                    0x9139E0
#define CListWnd__GetItemText_x                                    0x912E10
#define CListWnd__GetSelList_x                                     0x916E40
#define CListWnd__GetSeparatorRect_x                               0x913E40
#define CListWnd__InsertLine_x                                     0x916910
#define CListWnd__RemoveLine_x                                     0x916B30
#define CListWnd__SetColors_x                                      0x915A90
#define CListWnd__SetColumnJustification_x                         0x9157C0
#define CListWnd__SetColumnLabel_x                                 0x916160
#define CListWnd__SetItemOnlyDrawTexture_x                         0x9174F0
#define CListWnd__SetColumnWidth_x                                 0x9156D0
#define CListWnd__SetCurSel_x                                      0x916C30
#define CListWnd__SetItemColor_x                                   0x917480
#define CListWnd__SetItemData_x                                    0x917440
#define CListWnd__SetItemText_x                                    0x917060
#define CListWnd__ShiftColumnSeparator_x                           0x915880
#define CListWnd__Sort_x                                           0x915530
#define CListWnd__ToggleSel_x                                      0x916C60
#define CListWnd__SetColumnsSizable_x                              0x915920
#define CListWnd__SetItemWnd_x                                     0x917300
#define CListWnd__GetItemWnd_x                                     0x912FA0
#define CListWnd__SetItemIcon_x                                    0x9170E0
#define CListWnd__CalculateCustomWindowPositions_x                 0x915DE0
#define CListWnd__SetVScrollPos_x                                  0x9156B0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0840
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BEE80
#define CMapViewWnd__HandleLButtonDown_x                           0x7BBCA0
#define CMapViewWnd__WndNotification_x                             0x7C3170

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3E60
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E47C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4E50
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E8130
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E28E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE350
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3AB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x9951E0
#define CPacketScrambler__hton_x                                   0x9951D0

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x934A10
#define CSidlManager__FindScreenPieceTemplate_x                    0x934DE0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x934C10
#define CSidlManager__CreateXWndFromTemplate_x                     0x938290
#define CSidlManager__CreateXWndFromTemplate1_x                    0x938520
#define CSidlManagerbase__CreateXWnd_x                             0x938560

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CE20
#define CSidlManager__CreateLabel_x                                0x84C9F0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C470

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x930720
#define CSidlScreenWnd__CalculateVSBRange_x                        0x930620
#define CSidlScreenWnd__ConvertToRes_x                             0x95E320
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x92FFA0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92FC90
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92FD60
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x92FE30
#define CSidlScreenWnd__DrawSidlPiece_x                            0x930FE0
#define CSidlScreenWnd__EnableIniStorage_x                         0x9314C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x9311D0
#define CSidlScreenWnd__Init1_x                                    0x92F740
#define CSidlScreenWnd__LoadIniInfo_x                              0x931510
#define CSidlScreenWnd__LoadIniListWnd_x                           0x932100
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92EB40
#define CSidlScreenWnd__StoreIniInfo_x                             0x931C70
#define CSidlScreenWnd__StoreIniVis_x                              0x931FF0
#define CSidlScreenWnd__WndNotification_x                          0x930EB0
#define CSidlScreenWnd__GetChildItem_x                             0x931440
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91F830
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC3C48

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0BB0
#define CSkillMgr__GetSkillCap_x                                   0x6C0D80
#define CSkillMgr__GetNameToken_x                                  0x6C03A0
#define CSkillMgr__IsActivatedSkill_x                              0x6C0490
#define CSkillMgr__IsCombatSkill_x                                 0x6C0400

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9434B0
#define CSliderWnd__SetValue_x                                     0x9432E0
#define CSliderWnd__SetNumTicks_x                                  0x943340

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853720

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94C9C0
#define CStmlWnd__ParseSTML_x                                      0x94DB80
#define CStmlWnd__CalculateHSBRange_x                              0x94D940
#define CStmlWnd__CalculateVSBRange_x                              0x94D8B0
#define CStmlWnd__CanBreakAtCharacter_x                            0x952780
#define CStmlWnd__FastForwardToEndOfTag_x                          0x953420
#define CStmlWnd__ForceParseNow_x                                  0x94CF30
#define CStmlWnd__GetNextTagPiece_x                                0x9526E0
#define CStmlWnd__GetVisibleText_x                                 0x94CF50
#define CStmlWnd__InitializeWindowVariables_x                      0x953270
#define CStmlWnd__MakeStmlColorTag_x                               0x94C060
#define CStmlWnd__MakeWndNotificationTag_x                         0x94C0D0
#define CStmlWnd__SetSTMLText_x                                    0x94AE40
#define CStmlWnd__StripFirstSTMLLines_x                            0x954640
#define CStmlWnd__UpdateHistoryString_x                            0x953620

// CTabWnd 
#define CTabWnd__Draw_x                                            0x949CF0
#define CTabWnd__DrawCurrentPage_x                                 0x94A680
#define CTabWnd__DrawTab_x                                         0x94A270
#define CTabWnd__GetCurrentPage_x                                  0x949450
#define CTabWnd__GetPageInnerRect_x                                0x949680
#define CTabWnd__GetTabInnerRect_x                                 0x9495C0
#define CTabWnd__GetTabRect_x                                      0x949480
#define CTabWnd__InsertPage_x                                      0x949870
#define CTabWnd__RemovePage_x                                      0x9499C0
#define CTabWnd__SetPage_x                                         0x949700
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x949BF0
#define CTabWnd__UpdatePage_x                                      0x94A060
#define CTabWnd__GetPageFromTabIndex_x                             0x94A1B0
#define CTabWnd__GetCurrentTabIndex_x                              0x949440

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x948DE0
#define CPageWnd__FlashTab_x                                       0x948E40

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACAD0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91BCD0
#define CTextureFont__GetTextExtent_x                              0x91BFD0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x95ADD0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x906AC0

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x541A80
#define CXStr__CXStr1_x                                            0x4827A0
#define CXStr__CXStr3_x                                            0x8EE3E0
#define CXStr__dCXStr_x                                            0x478FA0
#define CXStr__operator_equal_x                                    0x8EE620
#define CXStr__operator_equal1_x                                   0x8EE660
#define CXStr__operator_plus_equal1_x                              0x8EF0C0
#define CXStr__SetString_x                                         0x8F0F60
#define CXStr__operator_char_p_x                                   0x8EEB10
#define CXStr__GetChar_x                                           0x8F08C0
#define CXStr__Delete_x                                            0x8F0190
#define CXStr__GetUnicode_x                                        0x8F0930
#define CXStr__Insert_x                                            0x8F0990
#define CXStr__FindNext_x                                          0x8F05E0
#define CXStr__Copy_x                                              0x8EFFA0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9413E0
#define CXWnd__BringToTop_x                                        0x923330
#define CXWnd__ClrFocus_x                                          0x922CC0
#define CXWnd__Destroy_x                                           0x922D60
#define CXWnd__DoAllDrawing_x                                      0x91EE80
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x91EE50
#define CXWnd__DrawColoredRect_x                                   0x91F410
#define CXWnd__DrawTooltip_x                                       0x91D3C0
#define CXWnd__DrawTooltipAtPoint_x                                0x91D480
#define CXWnd__GetBorderFrame_x                                    0x91F0B0
#define CXWnd__GetChildWndAt_x                                     0x9233D0
#define CXWnd__GetClientClipRect_x                                 0x921470
#define CXWnd__GetScreenClipRect_x                                 0x921540
#define CXWnd__GetScreenRect_x                                     0x921710
#define CXWnd__GetRelativeRect_x                                   0x9217E0
#define CXWnd__GetTooltipRect_x                                    0x91F460
#define CXWnd__GetWindowTextA_x                                    0x4EFD20
#define CXWnd__IsActive_x                                          0x91FBB0
#define CXWnd__IsDescendantOf_x                                    0x9221A0
#define CXWnd__IsReallyVisible_x                                   0x9221D0
#define CXWnd__IsType_x                                            0x923B50
#define CXWnd__Move_x                                              0x922240
#define CXWnd__Move1_x                                             0x922340
#define CXWnd__ProcessTransition_x                                 0x922E40
#define CXWnd__Refade_x                                            0x922620
#define CXWnd__Resize_x                                            0x9228F0
#define CXWnd__Right_x                                             0x923120
#define CXWnd__SetFocus_x                                          0x922C80
#define CXWnd__SetFont_x                                           0x922CF0
#define CXWnd__SetKeyTooltip_x                                     0x923920
#define CXWnd__SetMouseOver_x                                      0x920550
#define CXWnd__StartFade_x                                         0x922090
#define CXWnd__GetChildItem_x                                      0x923550
#define CXWnd__SetParent_x                                         0x921EC0
#define CXWnd__Minimize_x                                          0x922960

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95F370

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x926400
#define CXWndManager__DrawWindows_x                                0x926550
#define CXWndManager__GetKeyboardFlags_x                           0x928EC0
#define CXWndManager__HandleKeyboardMsg_x                          0x928AA0
#define CXWndManager__RemoveWnd_x                                  0x929180
#define CXWndManager__RemovePendingDeletionWnd_x                   0x929630

// CDBStr
#define CDBStr__GetString_x                                        0x558640

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5D50
#define EQ_Character__Cur_HP_x                                     0x4D9BF0
#define EQ_Character__Cur_Mana_x                                   0x4E0E50
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9380
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8880
#define EQ_Character__GetFocusRangeModifier_x                      0x4B89D0
#define EQ_Character__GetHPRegen_x                                 0x4E6940
#define EQ_Character__GetEnduranceRegen_x                          0x4E6F00
#define EQ_Character__GetManaRegen_x                               0x4E7340
#define EQ_Character__Max_Endurance_x                              0x681200
#define EQ_Character__Max_HP_x                                     0x4D9A20
#define EQ_Character__Max_Mana_x                                   0x680FE0
#define EQ_Character__doCombatAbility_x                            0x683D90
#define EQ_Character__UseSkill_x                                   0x4E8510
#define EQ_Character__GetConLevel_x                                0x6792E0
#define EQ_Character__IsExpansionFlag_x                            0x5D21A0
#define EQ_Character__TotalEffect_x                                0x4CD7C0
#define EQ_Character__GetPCSpellAffect_x                           0x4CA1E0
#define EQ_Character__SpellDuration_x                              0x4C9C20
#define EQ_Character__MySpellDuration_x                            0x4B6F50
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD60
#define EQ_Character__GetBaseSkill_x                               0x4DDD10
#define EQ_Character__CanUseItem_x                                 0x4E1180
#define EQ_Character__CanMedOnHorse_x                              0x4E8050

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B5DB0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699630

//PcClient
#define PcClient__vftable_x                                        0xB51094
#define PcClient__PcClient_x                                       0x676510

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0330
#define CCharacterListWnd__EnterWorld_x                            0x4BFD00
#define CCharacterListWnd__Quit_x                                  0x4BFA20
#define CCharacterListWnd__UpdateList_x                            0x4BFEF0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x6588D0
#define EQ_Item__CreateItemTagString_x                             0x98DF70
#define EQ_Item__IsStackable_x                                     0x993150
#define EQ_Item__GetImageNum_x                                     0x98FC40
#define EQ_Item__CreateItemClient_x                                0x657860
#define EQ_Item__GetItemValue_x                                    0x990EA0
#define EQ_Item__ValueSellMerchant_x                               0x994EA0
#define EQ_Item__IsKeyRingItem_x                                   0x992900
#define EQ_Item__CanGoInBag_x                                      0x6589F0
#define EQ_Item__IsEmpty_x                                         0x9922D0
#define EQ_Item__GetMaxItemCount_x                                 0x9912A0
#define EQ_Item__GetHeldItem_x                                     0x98FB00
#define EQ_Item__CanGemFitInSlot_x                                 0x98D780

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x5797C0
#define EQ_LoadingS__Array_x                                       0xD9CD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x681F40
#define EQ_PC__GetAlternateAbilityId_x                             0x99F1B0
#define EQ_PC__GetCombatAbility_x                                  0x99F740
#define EQ_PC__GetCombatAbilityTimer_x                             0x99F7B0
#define EQ_PC__GetItemRecastTimer_x                                0x684390
#define EQ_PC__HasLoreItem_x                                       0x679C30
#define EQ_PC__AlertInventoryChanged_x                             0x678BA0
#define EQ_PC__GetPcZoneClient_x                                   0x6A9DA0
#define EQ_PC__RemoveMyAffect_x                                    0x687C00
#define EQ_PC__GetKeyRingItems_x                                   0x9A0300
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x99FDE0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9A0510

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8550
#define EQItemList__add_object_x                                   0x608B40
#define EQItemList__add_item_x                                     0x5D8B30
#define EQItemList__delete_item_x                                  0x5D8B80
#define EQItemList__FreeItemList_x                                 0x5D8A90

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5549F0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B060
#define EQPlayer__dEQPlayer_x                                      0x68D770
#define EQPlayer__DoAttack_x                                       0x6A3A70
#define EQPlayer__EQPlayer_x                                       0x68DFC0
#define EQPlayer__SetNameSpriteState_x                             0x692570
#define EQPlayer__SetNameSpriteTint_x                              0x693440
#define PlayerBase__HasProperty_j_x                                0x9ED4C0
#define EQPlayer__IsTargetable_x                                   0x9EDA20
#define EQPlayer__CanSee_x                                         0x9ED810
#define EQPlayer__CanSee1_x                                        0x9ED8E0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ED580

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7890
#define PlayerZoneClient__GetLevel_x                               0x6A9DE0
#define PlayerZoneClient__IsValidTeleport_x                        0x609FF0
#define PlayerZoneClient__LegalPlayerRace_x                        0x5715F0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E200
#define EQPlayerManager__GetSpawnByName_x                          0x69E2B0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E340

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C200
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C2D0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C310
#define KeypressHandler__ClearCommandStateArray_x                  0x65D7D0
#define KeypressHandler__HandleKeyDown_x                           0x65D7F0
#define KeypressHandler__HandleKeyUp_x                             0x65D890
#define KeypressHandler__SaveKeymapping_x                          0x65DE40

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC4A0
#define MapViewMap__SaveEx_x                                       0x7BFA4F
#define MapViewMap__SetZoom_x                                      0x7C5730

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B3C30

// StringTable 
#define StringTable__getString_x                                   0x9AE980

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687840
#define PcZoneClient__RemovePetEffect_x                            0x687EB0
#define PcZoneClient__HasAlternateAbility_x                        0x680E30
#define PcZoneClient__GetCurrentMod_x                              0x4EBEE0
#define PcZoneClient__GetModCap_x                                  0x4EBDE0
#define PcZoneClient__CanEquipItem_x                               0x681510
#define PcZoneClient__GetItemByID_x                                0x6848C0
#define PcZoneClient__RemoveBuffEffect_x                           0x687F60
#define PcZoneClient__BandolierSwap_x                              0x6824F0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x684330

//Doors
#define EQSwitch__UseSwitch_x                                      0x60EC10

//IconCache
#define IconCache__GetIcon_x                                       0x74B8F0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7422D0
#define CContainerMgr__CloseContainer_x                            0x7425F0
#define CContainerMgr__OpenExperimentContainer_x                   0x743150

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BE40

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650DC0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B16B0
#define CLootWnd__RequestLootSlot_x                                0x7B08D0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A39D0
#define EQ_Spell__SpellAffects_x                                   0x5A3EE0
#define EQ_Spell__SpellAffectBase_x                                0x5A3C00
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D11C0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1170
#define EQ_Spell__IsSPAStacking_x                                  0x5A4E60
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A40F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4E90
#define EQ_Spell__IsLullSpell_x                                    0x5A45C0
#define __IsResEffectSpell_x                                       0x4D0970

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1840

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9BE870
#define EQ_Affect__SetAffectData_x                                 0x9BEE40

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868AB0
#define CTargetWnd__WndNotification_x                              0x868250
#define CTargetWnd__RefreshTargetBuffs_x                           0x8685B0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x867030

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D4F0
#define CTaskWnd__ConfirmAbandonTask_x                             0x8705B0

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5525C0
#define CTaskManager__HandleMessage_x                              0x550490
#define CTaskManager__GetTaskStatus_x                              0x552670
#define CTaskManager__GetElementDescription_x                      0x5526F0

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E5C0
#define EqSoundManager__PlayScriptMp3_x                            0x59E7C0
#define EqSoundManager__SoundAssistPlay_x                          0x6C5050
#define EqSoundManager__WaveInstancePlay_x                         0x6C4540

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541730

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x948250
#define CTextureAnimation__Draw_x                                  0x948490
#define CTextureAnimation__AddBlankFrame_x                         0x948070

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x943FB0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581DA0
#define CAltAbilityData__GetMercMaxRank_x                          0x581D30
#define CAltAbilityData__GetMaxRank_x                              0x575F90

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E5D0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x6576B0
#define CharacterBase__CreateItemGlobalIndex_x                     0x5D1890
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x780470
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C64F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C6540
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x7266C0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x726F90
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x727040

//messages
#define msg_spell_worn_off_x                                       0x5C98F0
#define msg_new_text_x                                             0x5BD2D0
#define __msgTokenTextParam_x                                      0x5CBD50
#define msgTokenText_x                                             0x5CC160

//SpellManager
#define SpellManager__vftable_x                                    0xB3B540
#define SpellManager__SpellManager_x                               0x6C8C70
#define Spellmanager__LoadTextSpells_x                             0x6C9570
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8E40

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F1D20

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x6713F0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0480
#define ItemGlobalIndex__IsEquippedLocation_x                      0x6713C0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D2360

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9BF300
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9BF650

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9780

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x747080
#define CCursorAttachment__AttachToCursor1_x                       0x7470C0
#define CCursorAttachment__Deactivate_x                            0x748780

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x939AD0
#define CSidlManagerBase__CreatePageWnd_x                          0x9392C0
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x934790
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x934720

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9599A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x959620

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522260
#define CFindItemWnd__WndNotification_x                            0x523130
#define CFindItemWnd__Update_x                                     0x523D80
#define CFindItemWnd__PickupSelectedItem_x                         0x521930

//IString
#define IString__Append_x                                          0x5580C0

//Camera
#define CDisplay__cameraType_x                                     0xEE0EA8
#define EverQuest__Cameras_x                                       0xDB009C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D200
#define LootFiltersManager__GetItemFilterData_x                    0x52CB30
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CB60
#define LootFiltersManager__SetItemLootFilter_x                    0x52CD70

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8087F0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F79F0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF4A0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73EC50

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9CA210
#define CDistillerInfo__Instance_x                                 0x9CA150

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761B50
#define CGroupWnd__UpdateDisplay_x                                 0x760DA0

//ItemBase
#define ItemBase__IsLore_x                                         0x9929C0
#define ItemBase__IsLoreEquipped_x                                 0x992A30

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608AA0
#define EQPlacedItemManager__GetItemByGuid_x                       0x608BE0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608C40

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3C00
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B84D0

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517C60

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5028A0
#define FactionManagerClient__HandleFactionMessage_x               0x5030C0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5038B0
#define FactionManagerClient__GetMaxFaction_x                      0x5038CF
#define FactionManagerClient__GetMinFaction_x                      0x503880

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F550

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x91A940

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E4B0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F7C0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580F90

//CTargetManager
#define CTargetManager__Get_x                                      0x6CCBF0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3C00

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC890

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8A30

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4D730

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA570
#define CAAWnd__UpdateSelected_x                                   0x6E6B10
#define CAAWnd__Update_x                                           0x6E98B0

//CXRect
#define CXRect__operator_and_x                                     0x756FB0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F7FD3
#define __eq_new_x                                                 0x9F8544

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
