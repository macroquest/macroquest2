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
#define __ExpectedVersionDate                                     "Oct 24 2021"
#define __ExpectedVersionTime                                     "04:24:28"
#define __ActualVersionDate_x                                      0xB54324
#define __ActualVersionTime_x                                      0xB54318
#define __ActualVersionBuild_x                                     0xB44444

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x662F00
#define __MemChecker1_x                                            0x8F2820
#define __MemChecker2_x                                            0x6DDEE0
#define __MemChecker3_x                                            0x6DDE50
#define __MemChecker4_x                                            0x8A3BE0
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
#define __do_loot_x                                                0x5E0190
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
#define __CastRay_x                                                0x5DB460
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB6F0
#define __ConvertItemTags_x                                        0x5F8900
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F57B0
#define __EQGetTime_x                                              0x8F2490
#define __ExecuteCmd_x                                             0x5D3920
#define __FixHeading_x                                             0x9EE930
#define __FlushDxKeyboard_x                                        0x6D91B0
#define __GameLoop_x                                               0x6DCAE0
#define __get_bearing_x                                            0x5DB080
#define __get_melee_range_x                                        0x5DB930
#define __GetAnimationCache_x                                      0x74C1D0
#define __GetGaugeValueFromEQ_x                                    0x85C960
#define __GetLabelFromEQ_x                                         0x85E370
#define __GetXTargetType_x                                         0x9F0CA0
#define __HandleMouseWheel_x                                       0x6DDF70
#define __HeadingDiff_x                                            0x9EE990
#define __HelpPath_x                                               0xF9A96C
#define __ExecuteFrontEnd_x                                        0x6D9990
#define __NewUIINI_x                                               0x85C640
#define __ProcessGameEvents_x                                      0x642090
#define __ProcessMouseEvent_x                                      0x641790
#define __SaveColors_x                                             0x56F690
#define __STMLToText_x                                             0x92DAA0
#define __ToggleKeyRingItem_x                                      0x528BB0
#define CMemoryMappedFile__SetFile_x                               0xADFC20
#define CrashDetected_x                                            0x6DB6E0
#define DrawNetStatus_x                                            0x671610
#define Expansion_HoT_x                                            0xDAFD50
#define Teleport_Table_Size_x                                      0xF951C0
#define Teleport_Table_x                                           0xF92D98
#define Util__FastTime_x                                           0x8F2050
#define __CopyLayout_x                                             0x65E1E0
#define __WndProc_x                                                0x6DBBE0
#define __ProcessKeyboardEvent_x                                   0x6DB120

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
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D17A0
#define CharacterZoneClient__HasSkill_x                            0x4DCF50
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE6D0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8C40
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1410
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFBD0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFCD0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE10
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAF30
#define CharacterZoneClient__BardCastBard_x                        0x4CDE80
#define CharacterZoneClient__GetMaxEffects_x                       0x4C53B0
#define CharacterZoneClient__GetEffect_x                           0x4C1350
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC460
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC510
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC5B0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC770
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC950
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8C00
#define CharacterZoneClient__FindItemByGuid_x                      0x684920
#define CharacterZoneClient__FindItemByRecord_x                    0x4DECB0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x706FE0
#define CBankWnd__WndNotification_x                                0x706D90

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711AF0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C730
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A700

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716240

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92B050
#define CButtonWnd__CButtonWnd_x                                   0x9299F0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x7396A0
#define CChatManager__InitContextMenu_x                            0x731B80
#define CChatManager__FreeChatWindow_x                             0x738250
#define CChatManager__SetLockedActiveChatWindow_x                  0x739380
#define CChatManager__CreateChatWindow_x                           0x738880

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD10

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x940ED0
#define CContextMenu__dCContextMenu_x                              0x941110
#define CContextMenu__AddMenuItem_x                                0x941120
#define CContextMenu__AddChildMenuItem_x                           0x941260
#define CContextMenu__RemoveMenuItem_x                             0x941510
#define CContextMenu__RemoveAllMenuItems_x                         0x941530
#define CContextMenu__CheckMenuItem_x                              0x941590
#define CContextMenu__SetMenuItem_x                                0x941430
#define CContextMenu__AddSeparator_x                               0x941410
#define CContextMenu__AddColorSeparator_x                          0x915E30

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x941B20
#define CContextMenuManager__RemoveMenu_x                          0x941B90
#define CContextMenuManager__PopupMenu_x                           0x941C50
#define CContextMenuManager__Flush_x                               0x941AC0
#define CContextMenuManager__GetMenu_x                             0x49DA70
#define CContextMenuManager__CreateDefaultMenu_x                   0x746040

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9C8070
#define CChatService__GetFriendName_x                              0x9C8080

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73A020
#define CChatWindow__Clear_x                                       0x73B4C0
#define CChatWindow__WndNotification_x                             0x73BC50
#define CChatWindow__AddHistory_x                                  0x73AD00

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x93DF90
#define CComboWnd__Draw_x                                          0x93D410
#define CComboWnd__GetCurChoice_x                                  0x93DD60
#define CComboWnd__GetListRect_x                                   0x93D8C0
#define CComboWnd__GetTextRect_x                                   0x93E000
#define CComboWnd__InsertChoice_x                                  0x93DA50
#define CComboWnd__SetColors_x                                     0x93DA20
#define CComboWnd__SetChoice_x                                     0x93DD40
#define CComboWnd__GetItemCount_x                                  0x93DD70
#define CComboWnd__GetCurChoiceText_x                              0x93DDA0
#define CComboWnd__GetChoiceText_x                                 0x93DD80
#define CComboWnd__InsertChoiceAtIndex_x                           0x93DAF0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743670
#define CContainerWnd__vftable_x                                   0xB5D5C4
#define CContainerWnd__SetContainer_x                              0x744EE0

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
#define CEditBaseWnd__SetSel_x                                     0x963880

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x944AE0
#define CEditWnd__EnsureCaretVisible_x                             0x946E60
#define CEditWnd__GetCaretPt_x                                     0x945CC0
#define CEditWnd__GetCharIndexPt_x                                 0x945A70
#define CEditWnd__GetDisplayString_x                               0x945910
#define CEditWnd__GetHorzOffset_x                                  0x944030
#define CEditWnd__GetLineForPrintableChar_x                        0x946D70
#define CEditWnd__GetSelStartPt_x                                  0x945D20
#define CEditWnd__GetSTMLSafeText_x                                0x945720
#define CEditWnd__PointFromPrintableChar_x                         0x9469B0
#define CEditWnd__SelectableCharFromPoint_x                        0x946B10
#define CEditWnd__SetEditable_x                                    0x945DF0
#define CEditWnd__SetWindowTextA_x                                 0x945470
#define CEditWnd__ReplaceSelection_x                               0x946570
#define CEditWnd__ReplaceSelection1_x                              0x9464F0

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D6A0
#define CEverQuest__ClickedPlayer_x                                0x61EBB0
#define CEverQuest__CreateTargetIndicator_x                        0x63F000
#define CEverQuest__DeleteTargetIndicator_x                        0x63F090
#define CEverQuest__DoTellWindow_x                                 0x4EFE10
#define CEverQuest__OutputTextToLog_x                              0x4F00E0
#define CEverQuest__DropHeldItemOnGround_x                         0x613C80
#define CEverQuest__dsp_chat_x                                     0x4F04B0
#define CEverQuest__trimName_x                                     0x63A5F0
#define CEverQuest__Emote_x                                        0x62DD60
#define CEverQuest__EnterZone_x                                    0x627A00
#define CEverQuest__GetBodyTypeDesc_x                              0x6332B0
#define CEverQuest__GetClassDesc_x                                 0x6338F0
#define CEverQuest__GetClassThreeLetterCode_x                      0x633EF0
#define CEverQuest__GetDeityDesc_x                                 0x63D7B0
#define CEverQuest__GetLangDesc_x                                  0x6340B0
#define CEverQuest__GetRaceDesc_x                                  0x6338D0
#define CEverQuest__InterpretCmd_x                                 0x63DE20
#define CEverQuest__LeftClickedOnPlayer_x                          0x618170
#define CEverQuest__LMouseUp_x                                     0x616230
#define CEverQuest__RightClickedOnPlayer_x                         0x618D60
#define CEverQuest__RMouseUp_x                                     0x6174F0
#define CEverQuest__SetGameState_x                                 0x613A00
#define CEverQuest__UPCNotificationFlush_x                         0x63A510
#define CEverQuest__IssuePetCommand_x                              0x6356B0
#define CEverQuest__ReportSuccessfulHit_x                          0x62F630

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757160
#define CGaugeWnd__CalcLinesFillRect_x                             0x7571C0
#define CGaugeWnd__Draw_x                                          0x756780

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4A10
#define CGuild__GetGuildName_x                                     0x4B3230
#define CGuild__GetGuildIndex_x                                    0x4B3950

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x7746D0

//CHotButton
#define CHotButton__SetCheck_x                                     0x652620
#define CHotButton__SetButtonSize_x                                0x6529E0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781AD0
#define CInvSlotMgr__MoveItem_x                                    0x780730
#define CInvSlotMgr__SelectSlot_x                                  0x781B90

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77EE70
#define CInvSlot__SliderComplete_x                                 0x77C010
#define CInvSlot__GetItemBase_x                                    0x77B8B0
#define CInvSlot__UpdateItem_x                                     0x77BAA0

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782990
#define CInvSlotWnd__HandleLButtonUp_x                             0x7833C0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856DD0
#define CItemDisplayWnd__UpdateStrings_x                           0x79B1C0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x7901F0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790730
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B8D0
#define CItemDisplayWnd__AboutToShow_x                             0x79ADB0
#define CItemDisplayWnd__WndNotification_x                         0x79D030
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C6F0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799C80
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79ABA0

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88C180

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A27A0
#define CItemDisplayManager__ShowItem_x                            0x7A1BD0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9300

// CListWnd
#define CListWnd__CListWnd_x                                       0x910850
#define CListWnd__dCListWnd_x                                      0x910B50
#define CListWnd__AddColumn_x                                      0x915790
#define CListWnd__AddColumn1_x                                     0x9158B0
#define CListWnd__AddLine_x                                        0x915C30
#define CListWnd__AddString_x                                      0x915A20
#define CListWnd__CalculateFirstVisibleLine_x                      0x915540
#define CListWnd__CalculateVSBRange_x                              0x915320
#define CListWnd__ClearSel_x                                       0x916600
#define CListWnd__ClearAllSel_x                                    0x916650
#define CListWnd__CloseAndUpdateEditWindow_x                       0x917130
#define CListWnd__Compare_x                                        0x914AA0
#define CListWnd__Draw_x                                           0x910D10
#define CListWnd__DrawColumnSeparators_x                           0x913890
#define CListWnd__DrawHeader_x                                     0x913CF0
#define CListWnd__DrawItem_x                                       0x914340
#define CListWnd__DrawLine_x                                       0x913A00
#define CListWnd__DrawSeparator_x                                  0x913930
#define CListWnd__EnableLine_x                                     0x913140
#define CListWnd__EnsureVisible_x                                  0x917050
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x916540
#define CListWnd__GetColumnTooltip_x                               0x912CC0
#define CListWnd__GetColumnMinWidth_x                              0x912D30
#define CListWnd__GetColumnWidth_x                                 0x912C40
#define CListWnd__GetCurSel_x                                      0x9125B0
#define CListWnd__GetItemAtPoint_x                                 0x9133C0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x913430
#define CListWnd__GetItemColor_x                                   0x912930
#define CListWnd__GetItemData_x                                    0x912630
#define CListWnd__GetItemHeight_x                                  0x912A10
#define CListWnd__GetItemIcon_x                                    0x9127B0
#define CListWnd__GetItemRect_x                                    0x913230
#define CListWnd__GetItemText_x                                    0x912670
#define CListWnd__GetSelList_x                                     0x9166A0
#define CListWnd__GetSeparatorRect_x                               0x9136A0
#define CListWnd__InsertLine_x                                     0x916170
#define CListWnd__RemoveLine_x                                     0x916390
#define CListWnd__SetColors_x                                      0x9152F0
#define CListWnd__SetColumnJustification_x                         0x915020
#define CListWnd__SetColumnLabel_x                                 0x9159C0
#define CListWnd__SetItemOnlyDrawTexture_x                         0x916D40
#define CListWnd__SetColumnWidth_x                                 0x914F30
#define CListWnd__SetCurSel_x                                      0x916490
#define CListWnd__SetItemColor_x                                   0x916CD0
#define CListWnd__SetItemData_x                                    0x916C90
#define CListWnd__SetItemText_x                                    0x9168C0
#define CListWnd__ShiftColumnSeparator_x                           0x9150E0
#define CListWnd__Sort_x                                           0x914D90
#define CListWnd__ToggleSel_x                                      0x9164C0
#define CListWnd__SetColumnsSizable_x                              0x915180
#define CListWnd__SetItemWnd_x                                     0x916B60
#define CListWnd__GetItemWnd_x                                     0x912800
#define CListWnd__SetItemIcon_x                                    0x916940
#define CListWnd__CalculateCustomWindowPositions_x                 0x915640
#define CListWnd__SetVScrollPos_x                                  0x914F10

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0850
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BEE90
#define CMapViewWnd__HandleLButtonDown_x                           0x7BBCB0
#define CMapViewWnd__WndNotification_x                             0x7C3180

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3E50
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E47B0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4E40
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E8120
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E28C0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE320
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3AA0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x994A10
#define CPacketScrambler__hton_x                                   0x994A00

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x934130
#define CSidlManager__FindScreenPieceTemplate_x                    0x934500
#define CSidlManager__FindScreenPieceTemplate1_x                   0x934330
#define CSidlManager__CreateXWndFromTemplate_x                     0x9379B0
#define CSidlManager__CreateXWndFromTemplate1_x                    0x937C40
#define CSidlManagerbase__CreateXWnd_x                             0x937C80

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CE30
#define CSidlManager__CreateLabel_x                                0x84C9F0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C460

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x92FE50
#define CSidlScreenWnd__CalculateVSBRange_x                        0x92FD50
#define CSidlScreenWnd__ConvertToRes_x                             0x95DAF0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x92F6D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92F3C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92F490
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x92F560
#define CSidlScreenWnd__DrawSidlPiece_x                            0x930710
#define CSidlScreenWnd__EnableIniStorage_x                         0x930BF0
#define CSidlScreenWnd__GetSidlPiece_x                             0x930900
#define CSidlScreenWnd__Init1_x                                    0x92EE70
#define CSidlScreenWnd__LoadIniInfo_x                              0x930C40
#define CSidlScreenWnd__LoadIniListWnd_x                           0x931820
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92E270
#define CSidlScreenWnd__StoreIniInfo_x                             0x931390
#define CSidlScreenWnd__StoreIniVis_x                              0x931710
#define CSidlScreenWnd__WndNotification_x                          0x9305E0
#define CSidlScreenWnd__GetChildItem_x                             0x930B70
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91F0C0
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC3C48

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0B60
#define CSkillMgr__GetSkillCap_x                                   0x6C0D30
#define CSkillMgr__GetNameToken_x                                  0x6C0350
#define CSkillMgr__IsActivatedSkill_x                              0x6C0440
#define CSkillMgr__IsCombatSkill_x                                 0x6C03B0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x942C30
#define CSliderWnd__SetValue_x                                     0x942A60
#define CSliderWnd__SetNumTicks_x                                  0x942AC0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853730

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94C160
#define CStmlWnd__ParseSTML_x                                      0x94D320
#define CStmlWnd__CalculateHSBRange_x                              0x94D0E0
#define CStmlWnd__CalculateVSBRange_x                              0x94D050
#define CStmlWnd__CanBreakAtCharacter_x                            0x951F50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x952BF0
#define CStmlWnd__ForceParseNow_x                                  0x94C6D0
#define CStmlWnd__GetNextTagPiece_x                                0x951EB0
#define CStmlWnd__GetVisibleText_x                                 0x94C6F0
#define CStmlWnd__InitializeWindowVariables_x                      0x952A40
#define CStmlWnd__MakeStmlColorTag_x                               0x94B800
#define CStmlWnd__MakeWndNotificationTag_x                         0x94B870
#define CStmlWnd__SetSTMLText_x                                    0x94A5E0
#define CStmlWnd__StripFirstSTMLLines_x                            0x953E10
#define CStmlWnd__UpdateHistoryString_x                            0x952DF0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x949490
#define CTabWnd__DrawCurrentPage_x                                 0x949E20
#define CTabWnd__DrawTab_x                                         0x949A10
#define CTabWnd__GetCurrentPage_x                                  0x948BF0
#define CTabWnd__GetPageInnerRect_x                                0x948E20
#define CTabWnd__GetTabInnerRect_x                                 0x948D60
#define CTabWnd__GetTabRect_x                                      0x948C20
#define CTabWnd__InsertPage_x                                      0x949010
#define CTabWnd__RemovePage_x                                      0x949160
#define CTabWnd__SetPage_x                                         0x948EA0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x949390
#define CTabWnd__UpdatePage_x                                      0x949800
#define CTabWnd__GetPageFromTabIndex_x                             0x949950
#define CTabWnd__GetCurrentTabIndex_x                              0x948BE0

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x948580
#define CPageWnd__FlashTab_x                                       0x9485E0

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACA60

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91B540
#define CTextureFont__GetTextExtent_x                              0x91B840

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x95A5A0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x906300

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x541930
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
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x940B30
#define CXWnd__BringToTop_x                                        0x922AF0
#define CXWnd__ClrFocus_x                                          0x922480
#define CXWnd__Destroy_x                                           0x922520
#define CXWnd__DoAllDrawing_x                                      0x91E710
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x91E6E0
#define CXWnd__DrawColoredRect_x                                   0x91ECA0
#define CXWnd__DrawTooltip_x                                       0x91CC40
#define CXWnd__DrawTooltipAtPoint_x                                0x91CD00
#define CXWnd__GetBorderFrame_x                                    0x91E940
#define CXWnd__GetChildWndAt_x                                     0x922B90
#define CXWnd__GetClientClipRect_x                                 0x920D40
#define CXWnd__GetScreenClipRect_x                                 0x920E10
#define CXWnd__GetScreenRect_x                                     0x920FD0
#define CXWnd__GetRelativeRect_x                                   0x921090
#define CXWnd__GetTooltipRect_x                                    0x91ECF0
#define CXWnd__GetWindowTextA_x                                    0x4EFCB0
#define CXWnd__IsActive_x                                          0x91F440
#define CXWnd__IsDescendantOf_x                                    0x921A10
#define CXWnd__IsReallyVisible_x                                   0x921A40
#define CXWnd__IsType_x                                            0x923310
#define CXWnd__Move_x                                              0x921AB0
#define CXWnd__Move1_x                                             0x921BA0
#define CXWnd__ProcessTransition_x                                 0x922600
#define CXWnd__Refade_x                                            0x921E50
#define CXWnd__Resize_x                                            0x9220F0
#define CXWnd__Right_x                                             0x9228E0
#define CXWnd__SetFocus_x                                          0x922440
#define CXWnd__SetFont_x                                           0x9224B0
#define CXWnd__SetKeyTooltip_x                                     0x9230E0
#define CXWnd__SetMouseOver_x                                      0x91FDF0
#define CXWnd__StartFade_x                                         0x9218F0
#define CXWnd__GetChildItem_x                                      0x922D10
#define CXWnd__SetParent_x                                         0x921730
#define CXWnd__Minimize_x                                          0x922150

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95EB40

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x925B30
#define CXWndManager__DrawWindows_x                                0x925C80
#define CXWndManager__GetKeyboardFlags_x                           0x928620
#define CXWndManager__HandleKeyboardMsg_x                          0x928200
#define CXWndManager__RemoveWnd_x                                  0x9288E0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x928D90

// CDBStr
#define CDBStr__GetString_x                                        0x558540

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5D00
#define EQ_Character__Cur_HP_x                                     0x4D9BA0
#define EQ_Character__Cur_Mana_x                                   0x4E0DF0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9330
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8810
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8960
#define EQ_Character__GetHPRegen_x                                 0x4E68E0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6EA0
#define EQ_Character__GetManaRegen_x                               0x4E72E0
#define EQ_Character__Max_Endurance_x                              0x6811A0
#define EQ_Character__Max_HP_x                                     0x4D99D0
#define EQ_Character__Max_Mana_x                                   0x680F80
#define EQ_Character__doCombatAbility_x                            0x683D50
#define EQ_Character__UseSkill_x                                   0x4E84B0
#define EQ_Character__GetConLevel_x                                0x6792A0
#define EQ_Character__IsExpansionFlag_x                            0x5D2130
#define EQ_Character__TotalEffect_x                                0x4CD770
#define EQ_Character__GetPCSpellAffect_x                           0x4CA190
#define EQ_Character__SpellDuration_x                              0x4C9BD0
#define EQ_Character__MySpellDuration_x                            0x4B6EE0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD10
#define EQ_Character__GetBaseSkill_x                               0x4DDCC0
#define EQ_Character__CanUseItem_x                                 0x4E1120
#define EQ_Character__CanMedOnHorse_x                              0x4E7FF0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B5610

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x6995F0

//PcClient
#define PcClient__vftable_x                                        0xB51094
#define PcClient__PcClient_x                                       0x6764D0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C02E0
#define CCharacterListWnd__EnterWorld_x                            0x4BFCB0
#define CCharacterListWnd__Quit_x                                  0x4BF9D0
#define CCharacterListWnd__UpdateList_x                            0x4BFEA0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658890
#define EQ_Item__CreateItemTagString_x                             0x98D760
#define EQ_Item__IsStackable_x                                     0x992980
#define EQ_Item__GetImageNum_x                                     0x98F470
#define EQ_Item__CreateItemClient_x                                0x657820
#define EQ_Item__GetItemValue_x                                    0x9906C0
#define EQ_Item__ValueSellMerchant_x                               0x9946D0
#define EQ_Item__IsKeyRingItem_x                                   0x992130
#define EQ_Item__CanGoInBag_x                                      0x6589B0
#define EQ_Item__IsEmpty_x                                         0x991B00
#define EQ_Item__GetMaxItemCount_x                                 0x990AB0
#define EQ_Item__GetHeldItem_x                                     0x98F320
#define EQ_Item__CanGemFitInSlot_x                                 0x98CF60

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x5796B0
#define EQ_LoadingS__Array_x                                       0xD9CD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x681EF0
#define EQ_PC__GetAlternateAbilityId_x                             0x99E9F0
#define EQ_PC__GetCombatAbility_x                                  0x99EF80
#define EQ_PC__GetCombatAbilityTimer_x                             0x99EFF0
#define EQ_PC__GetItemRecastTimer_x                                0x684350
#define EQ_PC__HasLoreItem_x                                       0x679BF0
#define EQ_PC__AlertInventoryChanged_x                             0x678B60
#define EQ_PC__GetPcZoneClient_x                                   0x6A9D60
#define EQ_PC__RemoveMyAffect_x                                    0x687BC0
#define EQ_PC__GetKeyRingItems_x                                   0x99FB40
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x99F620
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x99FD50

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8500
#define EQItemList__add_object_x                                   0x608B20
#define EQItemList__add_item_x                                     0x5D8AE0
#define EQItemList__delete_item_x                                  0x5D8B30
#define EQItemList__FreeItemList_x                                 0x5D8A40

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5548A0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B020
#define EQPlayer__dEQPlayer_x                                      0x68D720
#define EQPlayer__DoAttack_x                                       0x6A3A20
#define EQPlayer__EQPlayer_x                                       0x68DF70
#define EQPlayer__SetNameSpriteState_x                             0x692530
#define EQPlayer__SetNameSpriteTint_x                              0x693400
#define PlayerBase__HasProperty_j_x                                0x9ECD00
#define EQPlayer__IsTargetable_x                                   0x9ED260
#define EQPlayer__CanSee_x                                         0x9ED050
#define EQPlayer__CanSee1_x                                        0x9ED120
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ECDC0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7840
#define PlayerZoneClient__GetLevel_x                               0x6A9DA0
#define PlayerZoneClient__IsValidTeleport_x                        0x609FF0
#define PlayerZoneClient__LegalPlayerRace_x                        0x5714D0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E1D0
#define EQPlayerManager__GetSpawnByName_x                          0x69E280
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E310

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C1A0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C270
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C2B0
#define KeypressHandler__ClearCommandStateArray_x                  0x65D770
#define KeypressHandler__HandleKeyDown_x                           0x65D790
#define KeypressHandler__HandleKeyUp_x                             0x65D830
#define KeypressHandler__SaveKeymapping_x                          0x65DDE0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC4B0
#define MapViewMap__SaveEx_x                                       0x7BFA5F
#define MapViewMap__SetZoom_x                                      0x7C5740

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B3490

// StringTable 
#define StringTable__getString_x                                   0x9AE1E0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687800
#define PcZoneClient__RemovePetEffect_x                            0x687E70
#define PcZoneClient__HasAlternateAbility_x                        0x680DD0
#define PcZoneClient__GetCurrentMod_x                              0x4EBE70
#define PcZoneClient__GetModCap_x                                  0x4EBD70
#define PcZoneClient__CanEquipItem_x                               0x6814B0
#define PcZoneClient__GetItemByID_x                                0x684880
#define PcZoneClient__RemoveBuffEffect_x                           0x687F20
#define PcZoneClient__BandolierSwap_x                              0x6824B0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6842F0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60EC10

//IconCache
#define IconCache__GetIcon_x                                       0x74BB70

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742540
#define CContainerMgr__CloseContainer_x                            0x742860
#define CContainerMgr__OpenExperimentContainer_x                   0x7433C0

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BD90

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650D90

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B16C0
#define CLootWnd__RequestLootSlot_x                                0x7B08E0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3840
#define EQ_Spell__SpellAffects_x                                   0x5A3D50
#define EQ_Spell__SpellAffectBase_x                                0x5A3A70
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1170
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1120
#define EQ_Spell__IsSPAStacking_x                                  0x5A4CD0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A3F60
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4D00
#define EQ_Spell__IsLullSpell_x                                    0x5A4430
#define __IsResEffectSpell_x                                       0x4D0920

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B17C0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9BE090
#define EQ_Affect__SetAffectData_x                                 0x9BE660

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868AC0
#define CTargetWnd__WndNotification_x                              0x868260
#define CTargetWnd__RefreshTargetBuffs_x                           0x8685C0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x867040

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D500
#define CTaskWnd__ConfirmAbandonTask_x                             0x8705C0

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552470
#define CTaskManager__HandleMessage_x                              0x550340
#define CTaskManager__GetTaskStatus_x                              0x552520
#define CTaskManager__GetElementDescription_x                      0x5525A0

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E430
#define EqSoundManager__PlayScriptMp3_x                            0x59E630
#define EqSoundManager__SoundAssistPlay_x                          0x6C4FF0
#define EqSoundManager__WaveInstancePlay_x                         0x6C44E0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5415E0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9479F0
#define CTextureAnimation__Draw_x                                  0x947C30
#define CTextureAnimation__AddBlankFrame_x                         0x947810

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x943710

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581CB0
#define CAltAbilityData__GetMercMaxRank_x                          0x581C40
#define CAltAbilityData__GetMaxRank_x                              0x575E90

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E5A0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657670
#define CharacterBase__CreateItemGlobalIndex_x                     0x5D1820
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x7805D0
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C5D20
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C5D70
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726900
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7271D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x727280

//messages
#define msg_spell_worn_off_x                                       0x5C9890
#define msg_new_text_x                                             0x5BD270
#define __msgTokenTextParam_x                                      0x5CBCF0
#define msgTokenText_x                                             0x5CC100

//SpellManager
#define SpellManager__vftable_x                                    0xB3B540
#define SpellManager__SpellManager_x                               0x6C8C10
#define Spellmanager__LoadTextSpells_x                             0x6C9510
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8DE0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F1550

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x6713A0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0410
#define ItemGlobalIndex__IsEquippedLocation_x                      0x671370
#define ItemGlobalIndex__IsValidIndex_x                            0x5D22F0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9BEB10
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9BEE60

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9780

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7472F0
#define CCursorAttachment__AttachToCursor1_x                       0x747330
#define CCursorAttachment__Deactivate_x                            0x7489F0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x939200
#define CSidlManagerBase__CreatePageWnd_x                          0x9389E0
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x933EB0
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x933E40

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x959170
#define CEQSuiteTextureLoader__GetTexture_x                        0x958DF0

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522120
#define CFindItemWnd__WndNotification_x                            0x522FF0
#define CFindItemWnd__Update_x                                     0x523C40
#define CFindItemWnd__PickupSelectedItem_x                         0x521800

//IString
#define IString__Append_x                                          0x557FC0

//Camera
#define CDisplay__cameraType_x                                     0xEE0EA8
#define EverQuest__Cameras_x                                       0xDB009C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D0B0
#define LootFiltersManager__GetItemFilterData_x                    0x52C9E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CA10
#define LootFiltersManager__SetItemLootFilter_x                    0x52CC20

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808780

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F7230
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF450

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73EEA0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9C9A40
#define CDistillerInfo__Instance_x                                 0x9C9980

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761DB0
#define CGroupWnd__UpdateDisplay_x                                 0x761000

//ItemBase
#define ItemBase__IsLore_x                                         0x9921F0
#define ItemBase__IsLoreEquipped_x                                 0x992260

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608A80
#define EQPlacedItemManager__GetItemByGuid_x                       0x608BC0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608C20

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3BC0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8470

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517B60

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5027E0
#define FactionManagerClient__HandleFactionMessage_x               0x503000
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5037F0
#define FactionManagerClient__GetMaxFaction_x                      0x50380F
#define FactionManagerClient__GetMinFaction_x                      0x5037C0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F480

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x91A1B0

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E480

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F6F0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580E60

//CTargetManager
#define CTargetManager__Get_x                                      0x6CCBA0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3BC0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC820

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D89E0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4D730

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA790
#define CAAWnd__UpdateSelected_x                                   0x6E6D30
#define CAAWnd__Update_x                                           0x6E9AD0

//CXRect
#define CXRect__operator_and_x                                     0x757220

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F7813
#define __eq_new_x                                                 0x9F7D84

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
