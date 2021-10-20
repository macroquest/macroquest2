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
#define __ExpectedVersionDate                                     "Oct 20 2021"
#define __ExpectedVersionTime                                     "04:23:52"
#define __ActualVersionDate_x                                      0xB54324
#define __ActualVersionTime_x                                      0xB54318
#define __ActualVersionBuild_x                                     0xB44444

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x663540
#define __MemChecker1_x                                            0x8F27C0
#define __MemChecker2_x                                            0x6DE0C0
#define __MemChecker3_x                                            0x6DE030
#define __MemChecker4_x                                            0x8A3BC0
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
#define __do_loot_x                                                0x5E0830
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
#define __CastRay_x                                                0x5DBB00
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DBD90
#define __ConvertItemTags_x                                        0x5F8F80
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F5750
#define __EQGetTime_x                                              0x8F2430
#define __ExecuteCmd_x                                             0x5D3FC0
#define __FixHeading_x                                             0x9EF3B0
#define __FlushDxKeyboard_x                                        0x6D9390
#define __GameLoop_x                                               0x6DCCC0
#define __get_bearing_x                                            0x5DB720
#define __get_melee_range_x                                        0x5DBFD0
#define __GetAnimationCache_x                                      0x74C180
#define __GetGaugeValueFromEQ_x                                    0x85C920
#define __GetLabelFromEQ_x                                         0x85E330
#define __GetXTargetType_x                                         0x9F1720
#define __HandleMouseWheel_x                                       0x6DE150
#define __HeadingDiff_x                                            0x9EF410
#define __HelpPath_x                                               0xF9A96C
#define __ExecuteFrontEnd_x                                        0x6D9B70
#define __NewUIINI_x                                               0x85C600
#define __ProcessGameEvents_x                                      0x6426E0
#define __ProcessMouseEvent_x                                      0x641DE0
#define __SaveColors_x                                             0x56F710
#define __STMLToText_x                                             0x92E550
#define __ToggleKeyRingItem_x                                      0x528C20
#define CMemoryMappedFile__SetFile_x                               0xAE0670
#define CrashDetected_x                                            0x6DB8C0
#define DrawNetStatus_x                                            0x671AC0
#define Expansion_HoT_x                                            0xDAFD50
#define Teleport_Table_Size_x                                      0xF951C0
#define Teleport_Table_x                                           0xF92D98
#define Util__FastTime_x                                           0x8F1FF0
#define __CopyLayout_x                                             0x65E7D0
#define __WndProc_x                                                0x6DBDC0
#define __ProcessKeyboardEvent_x                                   0x6DB300

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
#define AltAdvManager__GetCalculatedTimer_x                        0x578780
#define AltAdvManager__IsAbilityReady_x                            0x577380
#define AltAdvManager__GetAAById_x                                 0x577720
#define AltAdvManager__CanTrainAbility_x                           0x577790
#define AltAdvManager__CanSeeAbility_x                             0x577B40

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1790
#define CharacterZoneClient__HasSkill_x                            0x4DCF40
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE6C0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8BF0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C13C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFBC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFCC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE00
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAEE0
#define CharacterZoneClient__BardCastBard_x                        0x4CDE40
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5360
#define CharacterZoneClient__GetEffect_x                           0x4C1300
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC410
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC4C0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC560
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC720
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC900
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8BD0
#define CharacterZoneClient__FindItemByGuid_x                      0x684DE0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DECA0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x707100
#define CBankWnd__WndNotification_x                                0x706EB0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711BD0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C820
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A800

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716300

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92BAF0
#define CButtonWnd__CButtonWnd_x                                   0x92A460

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x7396C0
#define CChatManager__InitContextMenu_x                            0x731BA0
#define CChatManager__FreeChatWindow_x                             0x738270
#define CChatManager__SetLockedActiveChatWindow_x                  0x7393A0
#define CChatManager__CreateChatWindow_x                           0x7388A0

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD10

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x941920
#define CContextMenu__dCContextMenu_x                              0x941B60
#define CContextMenu__AddMenuItem_x                                0x941B70
#define CContextMenu__AddChildMenuItem_x                           0x941CB0
#define CContextMenu__RemoveMenuItem_x                             0x941F60
#define CContextMenu__RemoveAllMenuItems_x                         0x941F80
#define CContextMenu__CheckMenuItem_x                              0x941FE0
#define CContextMenu__SetMenuItem_x                                0x941E80
#define CContextMenu__AddSeparator_x                               0x941E60
#define CContextMenu__AddColorSeparator_x                          0x916A40

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x942560
#define CContextMenuManager__RemoveMenu_x                          0x9425D0
#define CContextMenuManager__PopupMenu_x                           0x942690
#define CContextMenuManager__Flush_x                               0x942500
#define CContextMenuManager__GetMenu_x                             0x49DA70
#define CContextMenuManager__CreateDefaultMenu_x                   0x746020

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9C8AF0
#define CChatService__GetFriendName_x                              0x9C8B00

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73A040
#define CChatWindow__Clear_x                                       0x73B4E0
#define CChatWindow__WndNotification_x                             0x73BC70
#define CChatWindow__AddHistory_x                                  0x73AD20

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x93E9F0
#define CComboWnd__Draw_x                                          0x93DE80
#define CComboWnd__GetCurChoice_x                                  0x93E7C0
#define CComboWnd__GetListRect_x                                   0x93E320
#define CComboWnd__GetTextRect_x                                   0x93EA60
#define CComboWnd__InsertChoice_x                                  0x93E4B0
#define CComboWnd__SetColors_x                                     0x93E480
#define CComboWnd__SetChoice_x                                     0x93E7A0
#define CComboWnd__GetItemCount_x                                  0x93E7D0
#define CComboWnd__GetCurChoiceText_x                              0x93E800
#define CComboWnd__GetChoiceText_x                                 0x93E7E0
#define CComboWnd__InsertChoiceAtIndex_x                           0x93E550

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743650
#define CContainerWnd__vftable_x                                   0xB5D5C4
#define CContainerWnd__SetContainer_x                              0x744EC0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569F50
#define CDisplay__PreZoneMainUI_x                                  0x569F60
#define CDisplay__CleanGameUI_x                                    0x56F4F0
#define CDisplay__GetClickedActor_x                                0x561D40
#define CDisplay__GetUserDefinedColor_x                            0x559AC0
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x563850
#define CDisplay__is3dON_x                                         0x55E5D0
#define CDisplay__ReloadUI_x                                       0x569270
#define CDisplay__WriteTextHD2_x                                   0x55E3C0
#define CDisplay__TrueDistance_x                                   0x565830
#define CDisplay__SetViewActor_x                                   0x561660
#define CDisplay__GetFloorHeight_x                                 0x55E690
#define CDisplay__SetRenderWindow_x                                0x55D040
#define CDisplay__ToggleScreenshotMode_x                           0x561130

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x964290

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x945530
#define CEditWnd__EnsureCaretVisible_x                             0x9478B0
#define CEditWnd__GetCaretPt_x                                     0x946710
#define CEditWnd__GetCharIndexPt_x                                 0x9464C0
#define CEditWnd__GetDisplayString_x                               0x946360
#define CEditWnd__GetHorzOffset_x                                  0x944A80
#define CEditWnd__GetLineForPrintableChar_x                        0x9477C0
#define CEditWnd__GetSelStartPt_x                                  0x946770
#define CEditWnd__GetSTMLSafeText_x                                0x946170
#define CEditWnd__PointFromPrintableChar_x                         0x947400
#define CEditWnd__SelectableCharFromPoint_x                        0x947560
#define CEditWnd__SetEditable_x                                    0x946840
#define CEditWnd__SetWindowTextA_x                                 0x945EC0
#define CEditWnd__ReplaceSelection_x                               0x946FC0
#define CEditWnd__ReplaceSelection1_x                              0x946F40

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62DCC0
#define CEverQuest__ClickedPlayer_x                                0x61F1D0
#define CEverQuest__CreateTargetIndicator_x                        0x63F640
#define CEverQuest__DeleteTargetIndicator_x                        0x63F6D0
#define CEverQuest__DoTellWindow_x                                 0x4EFE10
#define CEverQuest__OutputTextToLog_x                              0x4F00E0
#define CEverQuest__DropHeldItemOnGround_x                         0x6142A0
#define CEverQuest__dsp_chat_x                                     0x4F04B0
#define CEverQuest__trimName_x                                     0x63AC30
#define CEverQuest__Emote_x                                        0x62E380
#define CEverQuest__EnterZone_x                                    0x628020
#define CEverQuest__GetBodyTypeDesc_x                              0x6338C0
#define CEverQuest__GetClassDesc_x                                 0x633F00
#define CEverQuest__GetClassThreeLetterCode_x                      0x634500
#define CEverQuest__GetDeityDesc_x                                 0x63DDF0
#define CEverQuest__GetLangDesc_x                                  0x6346C0
#define CEverQuest__GetRaceDesc_x                                  0x633EE0
#define CEverQuest__InterpretCmd_x                                 0x63E460
#define CEverQuest__LeftClickedOnPlayer_x                          0x618790
#define CEverQuest__LMouseUp_x                                     0x616850
#define CEverQuest__RightClickedOnPlayer_x                         0x619380
#define CEverQuest__RMouseUp_x                                     0x617B10
#define CEverQuest__SetGameState_x                                 0x614020
#define CEverQuest__UPCNotificationFlush_x                         0x63AB50
#define CEverQuest__IssuePetCommand_x                              0x635CC0
#define CEverQuest__ReportSuccessfulHit_x                          0x62FC40

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757110
#define CGaugeWnd__CalcLinesFillRect_x                             0x757170
#define CGaugeWnd__Draw_x                                          0x756720

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4A00
#define CGuild__GetGuildName_x                                     0x4B3220
#define CGuild__GetGuildIndex_x                                    0x4B3940

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774630

//CHotButton
#define CHotButton__SetCheck_x                                     0x652C70
#define CHotButton__SetButtonSize_x                                0x653030

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781B00
#define CInvSlotMgr__MoveItem_x                                    0x780740
#define CInvSlotMgr__SelectSlot_x                                  0x781BC0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77ED00
#define CInvSlot__SliderComplete_x                                 0x77BF70
#define CInvSlot__GetItemBase_x                                    0x77B810
#define CInvSlot__UpdateItem_x                                     0x77BA00

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7829B0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7833C0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856D90
#define CItemDisplayWnd__UpdateStrings_x                           0x79B260
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x7901B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790720
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B980
#define CItemDisplayWnd__AboutToShow_x                             0x79AE60
#define CItemDisplayWnd__WndNotification_x                         0x79D120
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C7B0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799D30
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79AC50

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88C150

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A28D0
#define CItemDisplayManager__ShowItem_x                            0x7A1CF0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9420

// CListWnd
#define CListWnd__CListWnd_x                                       0x911480
#define CListWnd__dCListWnd_x                                      0x911780
#define CListWnd__AddColumn_x                                      0x9163A0
#define CListWnd__AddColumn1_x                                     0x9164C0
#define CListWnd__AddLine_x                                        0x916840
#define CListWnd__AddString_x                                      0x916630
#define CListWnd__CalculateFirstVisibleLine_x                      0x916150
#define CListWnd__CalculateVSBRange_x                              0x915F30
#define CListWnd__ClearSel_x                                       0x917210
#define CListWnd__ClearAllSel_x                                    0x917260
#define CListWnd__CloseAndUpdateEditWindow_x                       0x917D50
#define CListWnd__Compare_x                                        0x9156B0
#define CListWnd__Draw_x                                           0x911940
#define CListWnd__DrawColumnSeparators_x                           0x9144B0
#define CListWnd__DrawHeader_x                                     0x914900
#define CListWnd__DrawItem_x                                       0x914F50
#define CListWnd__DrawLine_x                                       0x914610
#define CListWnd__DrawSeparator_x                                  0x914550
#define CListWnd__EnableLine_x                                     0x913D70
#define CListWnd__EnsureVisible_x                                  0x917C70
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x917150
#define CListWnd__GetColumnTooltip_x                               0x9138F0
#define CListWnd__GetColumnMinWidth_x                              0x913960
#define CListWnd__GetColumnWidth_x                                 0x913870
#define CListWnd__GetCurSel_x                                      0x9131D0
#define CListWnd__GetItemAtPoint_x                                 0x913FE0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x914050
#define CListWnd__GetItemColor_x                                   0x913550
#define CListWnd__GetItemData_x                                    0x913250
#define CListWnd__GetItemHeight_x                                  0x913640
#define CListWnd__GetItemIcon_x                                    0x9133D0
#define CListWnd__GetItemRect_x                                    0x913E60
#define CListWnd__GetItemText_x                                    0x913290
#define CListWnd__GetSelList_x                                     0x9172B0
#define CListWnd__GetSeparatorRect_x                               0x9142C0
#define CListWnd__InsertLine_x                                     0x916D80
#define CListWnd__RemoveLine_x                                     0x916FA0
#define CListWnd__SetColors_x                                      0x915F00
#define CListWnd__SetColumnJustification_x                         0x915C30
#define CListWnd__SetColumnLabel_x                                 0x9165D0
#define CListWnd__SetItemOnlyDrawTexture_x                         0x917960
#define CListWnd__SetColumnWidth_x                                 0x915B40
#define CListWnd__SetCurSel_x                                      0x9170A0
#define CListWnd__SetItemColor_x                                   0x9178F0
#define CListWnd__SetItemData_x                                    0x9178B0
#define CListWnd__SetItemText_x                                    0x9174D0
#define CListWnd__ShiftColumnSeparator_x                           0x915CF0
#define CListWnd__Sort_x                                           0x9159A0
#define CListWnd__ToggleSel_x                                      0x9170D0
#define CListWnd__SetColumnsSizable_x                              0x915D90
#define CListWnd__SetItemWnd_x                                     0x917770
#define CListWnd__GetItemWnd_x                                     0x913420
#define CListWnd__SetItemIcon_x                                    0x917550
#define CListWnd__CalculateCustomWindowPositions_x                 0x916250
#define CListWnd__SetVScrollPos_x                                  0x915B20

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C08D0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BEF10
#define CMapViewWnd__HandleLButtonDown_x                           0x7BBD30
#define CMapViewWnd__WndNotification_x                             0x7C31F0

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3E60
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E47C0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4E50
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E8130
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E28E0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE350
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3AB0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x995490
#define CPacketScrambler__hton_x                                   0x995480

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x934BB0
#define CSidlManager__FindScreenPieceTemplate_x                    0x934F80
#define CSidlManager__FindScreenPieceTemplate1_x                   0x934DB0
#define CSidlManager__CreateXWndFromTemplate_x                     0x938430
#define CSidlManager__CreateXWndFromTemplate1_x                    0x9386C0
#define CSidlManagerbase__CreateXWnd_x                             0x938700

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CE20
#define CSidlManager__CreateLabel_x                                0x84C9F0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C470

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x930900
#define CSidlScreenWnd__CalculateVSBRange_x                        0x930800
#define CSidlScreenWnd__ConvertToRes_x                             0x95E500
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x930180
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92FE70
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92FF40
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x930010
#define CSidlScreenWnd__DrawSidlPiece_x                            0x931190
#define CSidlScreenWnd__EnableIniStorage_x                         0x931670
#define CSidlScreenWnd__GetSidlPiece_x                             0x931380
#define CSidlScreenWnd__Init1_x                                    0x92F920
#define CSidlScreenWnd__LoadIniInfo_x                              0x9316C0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x9322A0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92ED20
#define CSidlScreenWnd__StoreIniInfo_x                             0x931E10
#define CSidlScreenWnd__StoreIniVis_x                              0x932190
#define CSidlScreenWnd__WndNotification_x                          0x931060
#define CSidlScreenWnd__GetChildItem_x                             0x9315F0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91FBE0
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC3C48

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0FB0
#define CSkillMgr__GetSkillCap_x                                   0x6C1180
#define CSkillMgr__GetNameToken_x                                  0x6C07A0
#define CSkillMgr__IsActivatedSkill_x                              0x6C0890
#define CSkillMgr__IsCombatSkill_x                                 0x6C0800

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x943660
#define CSliderWnd__SetValue_x                                     0x943490
#define CSliderWnd__SetNumTicks_x                                  0x9434F0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x8536F0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94CBB0
#define CStmlWnd__ParseSTML_x                                      0x94DD50
#define CStmlWnd__CalculateHSBRange_x                              0x94DB20
#define CStmlWnd__CalculateVSBRange_x                              0x94DA90
#define CStmlWnd__CanBreakAtCharacter_x                            0x952970
#define CStmlWnd__FastForwardToEndOfTag_x                          0x953610
#define CStmlWnd__ForceParseNow_x                                  0x94D120
#define CStmlWnd__GetNextTagPiece_x                                0x9528D0
#define CStmlWnd__GetVisibleText_x                                 0x94D140
#define CStmlWnd__InitializeWindowVariables_x                      0x953460
#define CStmlWnd__MakeStmlColorTag_x                               0x94C250
#define CStmlWnd__MakeWndNotificationTag_x                         0x94C2C0
#define CStmlWnd__SetSTMLText_x                                    0x94B030
#define CStmlWnd__StripFirstSTMLLines_x                            0x954820
#define CStmlWnd__UpdateHistoryString_x                            0x953810

// CTabWnd 
#define CTabWnd__Draw_x                                            0x949EE0
#define CTabWnd__DrawCurrentPage_x                                 0x94A870
#define CTabWnd__DrawTab_x                                         0x94A460
#define CTabWnd__GetCurrentPage_x                                  0x949640
#define CTabWnd__GetPageInnerRect_x                                0x949870
#define CTabWnd__GetTabInnerRect_x                                 0x9497B0
#define CTabWnd__GetTabRect_x                                      0x949670
#define CTabWnd__InsertPage_x                                      0x949A60
#define CTabWnd__RemovePage_x                                      0x949BB0
#define CTabWnd__SetPage_x                                         0x9498F0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x949DE0
#define CTabWnd__UpdatePage_x                                      0x94A250
#define CTabWnd__GetPageFromTabIndex_x                             0x94A3A0
#define CTabWnd__GetCurrentTabIndex_x                              0x949630

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x948FD0
#define CPageWnd__FlashTab_x                                       0x949030

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACA90

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91C160
#define CTextureFont__GetTextExtent_x                              0x91C460

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x95AFB0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x906F30

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x5419A0
#define CXStr__CXStr1_x                                            0x4827A0
#define CXStr__CXStr3_x                                            0x8EE380
#define CXStr__dCXStr_x                                            0x478FA0
#define CXStr__operator_equal_x                                    0x8EE5C0
#define CXStr__operator_equal1_x                                   0x8EE600
#define CXStr__operator_plus_equal1_x                              0x8EF060
#define CXStr__SetString_x                                         0x8F0F00
#define CXStr__operator_char_p_x                                   0x8EEAB0
#define CXStr__GetChar_x                                           0x8F0860
#define CXStr__Delete_x                                            0x8F0130
#define CXStr__GetUnicode_x                                        0x8F08D0
#define CXStr__Insert_x                                            0x8F0930
#define CXStr__FindNext_x                                          0x8F0580
#define CXStr__Copy_x                                              0x8EFF40

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x941580
#define CXWnd__BringToTop_x                                        0x9235F0
#define CXWnd__ClrFocus_x                                          0x922F80
#define CXWnd__Destroy_x                                           0x923020
#define CXWnd__DoAllDrawing_x                                      0x91F240
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x91F210
#define CXWnd__DrawColoredRect_x                                   0x91F7C0
#define CXWnd__DrawTooltip_x                                       0x91D800
#define CXWnd__DrawTooltipAtPoint_x                                0x91D8C0
#define CXWnd__GetBorderFrame_x                                    0x91F460
#define CXWnd__GetChildWndAt_x                                     0x923690
#define CXWnd__GetClientClipRect_x                                 0x9217D0
#define CXWnd__GetScreenClipRect_x                                 0x921880
#define CXWnd__GetScreenRect_x                                     0x921A30
#define CXWnd__GetRelativeRect_x                                   0x921AF0
#define CXWnd__GetTooltipRect_x                                    0x91F810
#define CXWnd__GetWindowTextA_x                                    0x4EFCB0
#define CXWnd__IsActive_x                                          0x91FF60
#define CXWnd__IsDescendantOf_x                                    0x9224B0
#define CXWnd__IsReallyVisible_x                                   0x9224E0
#define CXWnd__IsType_x                                            0x923DF0
#define CXWnd__Move_x                                              0x922540
#define CXWnd__Move1_x                                             0x922640
#define CXWnd__ProcessTransition_x                                 0x923100
#define CXWnd__Refade_x                                            0x922910
#define CXWnd__Resize_x                                            0x922BA0
#define CXWnd__Right_x                                             0x9233E0
#define CXWnd__SetFocus_x                                          0x922F40
#define CXWnd__SetFont_x                                           0x922FB0
#define CXWnd__SetKeyTooltip_x                                     0x923BD0
#define CXWnd__SetMouseOver_x                                      0x9208D0
#define CXWnd__StartFade_x                                         0x9223A0
#define CXWnd__GetChildItem_x                                      0x923810
#define CXWnd__SetParent_x                                         0x9221D0
#define CXWnd__Minimize_x                                          0x922C10

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95F550

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x926670
#define CXWndManager__DrawWindows_x                                0x9267C0
#define CXWndManager__GetKeyboardFlags_x                           0x929070
#define CXWndManager__HandleKeyboardMsg_x                          0x928C50
#define CXWndManager__RemoveWnd_x                                  0x929340
#define CXWndManager__RemovePendingDeletionWnd_x                   0x929800

// CDBStr
#define CDBStr__GetString_x                                        0x5585C0

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5CB0
#define EQ_Character__Cur_HP_x                                     0x4D9B90
#define EQ_Character__Cur_Mana_x                                   0x4E0DF0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C92E0
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B87E0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8930
#define EQ_Character__GetHPRegen_x                                 0x4E68E0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6EA0
#define EQ_Character__GetManaRegen_x                               0x4E72E0
#define EQ_Character__Max_Endurance_x                              0x681680
#define EQ_Character__Max_HP_x                                     0x4D99C0
#define EQ_Character__Max_Mana_x                                   0x681460
#define EQ_Character__doCombatAbility_x                            0x684210
#define EQ_Character__UseSkill_x                                   0x4E84B0
#define EQ_Character__GetConLevel_x                                0x679760
#define EQ_Character__IsExpansionFlag_x                            0x5D27D0
#define EQ_Character__TotalEffect_x                                0x4CD730
#define EQ_Character__GetPCSpellAffect_x                           0x4CA140
#define EQ_Character__SpellDuration_x                              0x4C9B80
#define EQ_Character__MySpellDuration_x                            0x4B6EB0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD00
#define EQ_Character__GetBaseSkill_x                               0x4DDCB0
#define EQ_Character__CanUseItem_x                                 0x4E1120
#define EQ_Character__CanMedOnHorse_x                              0x4E7FF0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B60A0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699AB0

//PcClient
#define PcClient__vftable_x                                        0xB51094
#define PcClient__PcClient_x                                       0x676990

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0290
#define CCharacterListWnd__EnterWorld_x                            0x4BFC60
#define CCharacterListWnd__Quit_x                                  0x4BF980
#define CCharacterListWnd__UpdateList_x                            0x4BFE50

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658E90
#define EQ_Item__CreateItemTagString_x                             0x98E1B0
#define EQ_Item__IsStackable_x                                     0x993460
#define EQ_Item__GetImageNum_x                                     0x98FF10
#define EQ_Item__CreateItemClient_x                                0x657E40
#define EQ_Item__GetItemValue_x                                    0x991140
#define EQ_Item__ValueSellMerchant_x                               0x9951A0
#define EQ_Item__IsKeyRingItem_x                                   0x992BE0
#define EQ_Item__CanGoInBag_x                                      0x658FB0
#define EQ_Item__IsEmpty_x                                         0x9925A0
#define EQ_Item__GetMaxItemCount_x                                 0x991550
#define EQ_Item__GetHeldItem_x                                     0x98FDD0
#define EQ_Item__CanGemFitInSlot_x                                 0x98D970

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x579730
#define EQ_LoadingS__Array_x                                       0xD9CD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x6823C0
#define EQ_PC__GetAlternateAbilityId_x                             0x99F480
#define EQ_PC__GetCombatAbility_x                                  0x99FA10
#define EQ_PC__GetCombatAbilityTimer_x                             0x99FA80
#define EQ_PC__GetItemRecastTimer_x                                0x684810
#define EQ_PC__HasLoreItem_x                                       0x67A0C0
#define EQ_PC__AlertInventoryChanged_x                             0x679020
#define EQ_PC__GetPcZoneClient_x                                   0x6AA210
#define EQ_PC__RemoveMyAffect_x                                    0x688080
#define EQ_PC__GetKeyRingItems_x                                   0x9A05D0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9A00B0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9A07E0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8B80
#define EQItemList__add_object_x                                   0x609160
#define EQItemList__add_item_x                                     0x5D9160
#define EQItemList__delete_item_x                                  0x5D91B0
#define EQItemList__FreeItemList_x                                 0x5D90C0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554920

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B4E0
#define EQPlayer__dEQPlayer_x                                      0x68DC00
#define EQPlayer__DoAttack_x                                       0x6A3EE0
#define EQPlayer__EQPlayer_x                                       0x68E450
#define EQPlayer__SetNameSpriteState_x                             0x692A00
#define EQPlayer__SetNameSpriteTint_x                              0x6938C0
#define PlayerBase__HasProperty_j_x                                0x9ED780
#define EQPlayer__IsTargetable_x                                   0x9EDCE0
#define EQPlayer__CanSee_x                                         0x9EDAD0
#define EQPlayer__CanSee1_x                                        0x9EDBA0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ED840

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7D00
#define PlayerZoneClient__GetLevel_x                               0x6AA250
#define PlayerZoneClient__IsValidTeleport_x                        0x60A610
#define PlayerZoneClient__LegalPlayerRace_x                        0x571550

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E690
#define EQPlayerManager__GetSpawnByName_x                          0x69E740
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E7D0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C790
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C860
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C8A0
#define KeypressHandler__ClearCommandStateArray_x                  0x65DD60
#define KeypressHandler__HandleKeyDown_x                           0x65DD80
#define KeypressHandler__HandleKeyUp_x                             0x65DE20
#define KeypressHandler__SaveKeymapping_x                          0x65E3D0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC530
#define MapViewMap__SaveEx_x                                       0x7BFADF
#define MapViewMap__SetZoom_x                                      0x7C57B0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B3F20

// StringTable 
#define StringTable__getString_x                                   0x9AEC70

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687CC0
#define PcZoneClient__RemovePetEffect_x                            0x688330
#define PcZoneClient__HasAlternateAbility_x                        0x6812B0
#define PcZoneClient__GetCurrentMod_x                              0x4EBE70
#define PcZoneClient__GetModCap_x                                  0x4EBD70
#define PcZoneClient__CanEquipItem_x                               0x681990
#define PcZoneClient__GetItemByID_x                                0x684D40
#define PcZoneClient__RemoveBuffEffect_x                           0x6883E0
#define PcZoneClient__BandolierSwap_x                              0x682970
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6847B0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60F230

//IconCache
#define IconCache__GetIcon_x                                       0x74BB20

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742520
#define CContainerMgr__CloseContainer_x                            0x742840
#define CContainerMgr__OpenExperimentContainer_x                   0x7433A0

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BE70

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x6513D0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B17A0
#define CLootWnd__RequestLootSlot_x                                0x7B09C0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A38F0
#define EQ_Spell__SpellAffects_x                                   0x5A3E00
#define EQ_Spell__SpellAffectBase_x                                0x5A3B20
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1140
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D10F0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4D80
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4010
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4DB0
#define EQ_Spell__IsLullSpell_x                                    0x5A44E0
#define __IsResEffectSpell_x                                       0x4D08F0

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B17C0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9BEB20
#define EQ_Affect__SetAffectData_x                                 0x9BF0F0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868A80
#define CTargetWnd__WndNotification_x                              0x868220
#define CTargetWnd__RefreshTargetBuffs_x                           0x868580
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x867000

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D4B0
#define CTaskWnd__ConfirmAbandonTask_x                             0x870560

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5524D0
#define CTaskManager__HandleMessage_x                              0x5503B0
#define CTaskManager__GetTaskStatus_x                              0x552580
#define CTaskManager__GetElementDescription_x                      0x552600

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E4E0
#define EqSoundManager__PlayScriptMp3_x                            0x59E6E0
#define EqSoundManager__SoundAssistPlay_x                          0x6C5480
#define EqSoundManager__WaveInstancePlay_x                         0x6C4970

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541650

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x948440
#define CTextureAnimation__Draw_x                                  0x948680
#define CTextureAnimation__AddBlankFrame_x                         0x948260

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x944160

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581D40
#define CAltAbilityData__GetMercMaxRank_x                          0x581CD0
#define CAltAbilityData__GetMaxRank_x                              0x575F00

//CTargetRing
#define CTargetRing__Cast_x                                        0x64EBE0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657C90
#define CharacterBase__CreateItemGlobalIndex_x                     0x5D1ED0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x7805E0
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C67A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C67F0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726930
#define CCastSpellWnd__IsBardSongPlaying_x                         0x727200
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x7272B0

//messages
#define msg_spell_worn_off_x                                       0x5C9F30
#define msg_new_text_x                                             0x5BD910
#define __msgTokenTextParam_x                                      0x5CC390
#define msgTokenText_x                                             0x5CC7A0

//SpellManager
#define SpellManager__vftable_x                                    0xB3B540
#define SpellManager__SpellManager_x                               0x6C90B0
#define Spellmanager__LoadTextSpells_x                             0x6C99B0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C9280

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F1FD0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x671850
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0AC0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x671820
#define ItemGlobalIndex__IsValidIndex_x                            0x5D2990

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9BF5B0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9BF900

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A98A0

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7472C0
#define CCursorAttachment__AttachToCursor1_x                       0x747300
#define CCursorAttachment__Deactivate_x                            0x7489C0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x939C70
#define CSidlManagerBase__CreatePageWnd_x                          0x939460
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x934930
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9348C0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x959B80
#define CEQSuiteTextureLoader__GetTexture_x                        0x959800

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5221A0
#define CFindItemWnd__WndNotification_x                            0x523060
#define CFindItemWnd__Update_x                                     0x523C80
#define CFindItemWnd__PickupSelectedItem_x                         0x521870

//IString
#define IString__Append_x                                          0x558040

//Camera
#define CDisplay__cameraType_x                                     0xEE0EA8
#define EverQuest__Cameras_x                                       0xDB009C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D120
#define LootFiltersManager__GetItemFilterData_x                    0x52CA50
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CA80
#define LootFiltersManager__SetItemLootFilter_x                    0x52CC90

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8087F0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F7CA0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF8B0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73EEC0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9CA4C0
#define CDistillerInfo__Instance_x                                 0x9CA400

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761D10
#define CGroupWnd__UpdateDisplay_x                                 0x760F60

//ItemBase
#define ItemBase__IsLore_x                                         0x992CA0
#define ItemBase__IsLoreEquipped_x                                 0x992D20

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x6090C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x609200
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x609260

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4030
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B88D0

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517BD0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502850
#define FactionManagerClient__HandleFactionMessage_x               0x503070
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503860
#define FactionManagerClient__GetMaxFaction_x                      0x50387F
#define FactionManagerClient__GetMinFaction_x                      0x503830

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F4E0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x91ADD0

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E490

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F750

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580F00

//CTargetManager
#define CTargetManager__Get_x                                      0x6CD030

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4030

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC850

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D9060

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4D730

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA990
#define CAAWnd__UpdateSelected_x                                   0x6E6F30
#define CAAWnd__Update_x                                           0x6E9CD0

//CXRect
#define CXRect__operator_and_x                                     0x7571D0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F8283
#define __eq_new_x                                                 0x9F87F4

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
