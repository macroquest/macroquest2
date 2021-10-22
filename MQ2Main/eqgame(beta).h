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
#define __ExpectedVersionDate                                     "Oct 22 2021"
#define __ExpectedVersionTime                                     "04:24:19"
#define __ActualVersionDate_x                                      0xB54324
#define __ActualVersionTime_x                                      0xB54318
#define __ActualVersionBuild_x                                     0xB44444

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x662DD0
#define __MemChecker1_x                                            0x8F20F0
#define __MemChecker2_x                                            0x6DDB30
#define __MemChecker3_x                                            0x6DDAA0
#define __MemChecker4_x                                            0x8A34E0
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
#define __do_loot_x                                                0x5E00C0
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
#define __CastRay_x                                                0x5DB390
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB620
#define __ConvertItemTags_x                                        0x5F8810
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F5080
#define __EQGetTime_x                                              0x8F1D60
#define __ExecuteCmd_x                                             0x5D3850
#define __FixHeading_x                                             0x9EE900
#define __FlushDxKeyboard_x                                        0x6D8E00
#define __GameLoop_x                                               0x6DC730
#define __get_bearing_x                                            0x5DAFB0
#define __get_melee_range_x                                        0x5DB860
#define __GetAnimationCache_x                                      0x74BC60
#define __GetGaugeValueFromEQ_x                                    0x85C280
#define __GetLabelFromEQ_x                                         0x85DC90
#define __GetXTargetType_x                                         0x9F0C70
#define __HandleMouseWheel_x                                       0x6DDBC0
#define __HeadingDiff_x                                            0x9EE960
#define __HelpPath_x                                               0xF9A96C
#define __ExecuteFrontEnd_x                                        0x6D95E0
#define __NewUIINI_x                                               0x85BF60
#define __ProcessGameEvents_x                                      0x641F10
#define __ProcessMouseEvent_x                                      0x641610
#define __SaveColors_x                                             0x56F5D0
#define __STMLToText_x                                             0x92DA30
#define __ToggleKeyRingItem_x                                      0x528B60
#define CMemoryMappedFile__SetFile_x                               0xADFB90
#define CrashDetected_x                                            0x6DB330
#define DrawNetStatus_x                                            0x671350
#define Expansion_HoT_x                                            0xDAFD50
#define Teleport_Table_Size_x                                      0xF951C0
#define Teleport_Table_x                                           0xF92D98
#define Util__FastTime_x                                           0x8F1920
#define __CopyLayout_x                                             0x65E060
#define __WndProc_x                                                0x6DB830
#define __ProcessKeyboardEvent_x                                   0x6DAD70

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
#define AltAdvManager__GetCalculatedTimer_x                        0x578630
#define AltAdvManager__IsAbilityReady_x                            0x577230
#define AltAdvManager__GetAAById_x                                 0x5775D0
#define AltAdvManager__CanTrainAbility_x                           0x577640
#define AltAdvManager__CanSeeAbility_x                             0x5779F0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1760
#define CharacterZoneClient__HasSkill_x                            0x4DCF10
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE690
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8BC0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1390
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFB90
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFC90
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFDD0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAEB0
#define CharacterZoneClient__BardCastBard_x                        0x4CDE00
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5330
#define CharacterZoneClient__GetEffect_x                           0x4C12D0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC3E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC490
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC530
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC6F0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC8D0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8BB0
#define CharacterZoneClient__FindItemByGuid_x                      0x684640
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEC70

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x706C30
#define CBankWnd__WndNotification_x                                0x7069E0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711700

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C350
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A330

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715E40

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92AFD0
#define CButtonWnd__CButtonWnd_x                                   0x929940

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x7391E0
#define CChatManager__InitContextMenu_x                            0x7316D0
#define CChatManager__FreeChatWindow_x                             0x737DA0
#define CChatManager__SetLockedActiveChatWindow_x                  0x738EC0
#define CChatManager__CreateChatWindow_x                           0x7383D0

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFCC0

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x940E10
#define CContextMenu__dCContextMenu_x                              0x941050
#define CContextMenu__AddMenuItem_x                                0x941060
#define CContextMenu__AddChildMenuItem_x                           0x9411A0
#define CContextMenu__RemoveMenuItem_x                             0x941450
#define CContextMenu__RemoveAllMenuItems_x                         0x941470
#define CContextMenu__CheckMenuItem_x                              0x9414D0
#define CContextMenu__SetMenuItem_x                                0x941370
#define CContextMenu__AddSeparator_x                               0x941350
#define CContextMenu__AddColorSeparator_x                          0x915CE0

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x941A60
#define CContextMenuManager__RemoveMenu_x                          0x941AD0
#define CContextMenuManager__PopupMenu_x                           0x941B90
#define CContextMenuManager__Flush_x                               0x941A00
#define CContextMenuManager__GetMenu_x                             0x49DA70
#define CContextMenuManager__CreateDefaultMenu_x                   0x745B10

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9C8020
#define CChatService__GetFriendName_x                              0x9C8030

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x739B60
#define CChatWindow__Clear_x                                       0x73AFF0
#define CChatWindow__WndNotification_x                             0x73B770
#define CChatWindow__AddHistory_x                                  0x73A830

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x93DEE0
#define CComboWnd__Draw_x                                          0x93D380
#define CComboWnd__GetCurChoice_x                                  0x93DCB0
#define CComboWnd__GetListRect_x                                   0x93D830
#define CComboWnd__GetTextRect_x                                   0x93DF50
#define CComboWnd__InsertChoice_x                                  0x93D9C0
#define CComboWnd__SetColors_x                                     0x93D990
#define CComboWnd__SetChoice_x                                     0x93DC90
#define CComboWnd__GetItemCount_x                                  0x93DCC0
#define CComboWnd__GetCurChoiceText_x                              0x93DCF0
#define CComboWnd__GetChoiceText_x                                 0x93DCD0
#define CComboWnd__InsertChoiceAtIndex_x                           0x93DA50

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743140
#define CContainerWnd__vftable_x                                   0xB5D5C4
#define CContainerWnd__SetContainer_x                              0x7449B0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569E10
#define CDisplay__PreZoneMainUI_x                                  0x569E20
#define CDisplay__CleanGameUI_x                                    0x56F3B0
#define CDisplay__GetClickedActor_x                                0x561C00
#define CDisplay__GetUserDefinedColor_x                            0x559980
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x563710
#define CDisplay__is3dON_x                                         0x55E490
#define CDisplay__ReloadUI_x                                       0x569130
#define CDisplay__WriteTextHD2_x                                   0x55E280
#define CDisplay__TrueDistance_x                                   0x5656F0
#define CDisplay__SetViewActor_x                                   0x561520
#define CDisplay__GetFloorHeight_x                                 0x55E550
#define CDisplay__SetRenderWindow_x                                0x55CF00
#define CDisplay__ToggleScreenshotMode_x                           0x560FF1

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9637B0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x944A10
#define CEditWnd__EnsureCaretVisible_x                             0x946D70
#define CEditWnd__GetCaretPt_x                                     0x945BE0
#define CEditWnd__GetCharIndexPt_x                                 0x945990
#define CEditWnd__GetDisplayString_x                               0x945840
#define CEditWnd__GetHorzOffset_x                                  0x943F80
#define CEditWnd__GetLineForPrintableChar_x                        0x946C80
#define CEditWnd__GetSelStartPt_x                                  0x945C40
#define CEditWnd__GetSTMLSafeText_x                                0x945650
#define CEditWnd__PointFromPrintableChar_x                         0x9468D0
#define CEditWnd__SelectableCharFromPoint_x                        0x946A30
#define CEditWnd__SetEditable_x                                    0x945D10
#define CEditWnd__SetWindowTextA_x                                 0x9453A0
#define CEditWnd__ReplaceSelection_x                               0x946490
#define CEditWnd__ReplaceSelection1_x                              0x946410

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D530
#define CEverQuest__ClickedPlayer_x                                0x61EA40
#define CEverQuest__CreateTargetIndicator_x                        0x63EE80
#define CEverQuest__DeleteTargetIndicator_x                        0x63EF10
#define CEverQuest__DoTellWindow_x                                 0x4EFDC0
#define CEverQuest__OutputTextToLog_x                              0x4F0090
#define CEverQuest__DropHeldItemOnGround_x                         0x613B10
#define CEverQuest__dsp_chat_x                                     0x4F0460
#define CEverQuest__trimName_x                                     0x63A470
#define CEverQuest__Emote_x                                        0x62DBF0
#define CEverQuest__EnterZone_x                                    0x627890
#define CEverQuest__GetBodyTypeDesc_x                              0x633130
#define CEverQuest__GetClassDesc_x                                 0x633770
#define CEverQuest__GetClassThreeLetterCode_x                      0x633D70
#define CEverQuest__GetDeityDesc_x                                 0x63D630
#define CEverQuest__GetLangDesc_x                                  0x633F30
#define CEverQuest__GetRaceDesc_x                                  0x633750
#define CEverQuest__InterpretCmd_x                                 0x63DCA0
#define CEverQuest__LeftClickedOnPlayer_x                          0x618000
#define CEverQuest__LMouseUp_x                                     0x6160C0
#define CEverQuest__RightClickedOnPlayer_x                         0x618BF0
#define CEverQuest__RMouseUp_x                                     0x617380
#define CEverQuest__SetGameState_x                                 0x613890
#define CEverQuest__UPCNotificationFlush_x                         0x63A390
#define CEverQuest__IssuePetCommand_x                              0x635530
#define CEverQuest__ReportSuccessfulHit_x                          0x62F4B0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756BE0
#define CGaugeWnd__CalcLinesFillRect_x                             0x756C40
#define CGaugeWnd__Draw_x                                          0x7561F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B49C0
#define CGuild__GetGuildName_x                                     0x4B31E0
#define CGuild__GetGuildIndex_x                                    0x4B3900

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x7741E0

//CHotButton
#define CHotButton__SetCheck_x                                     0x652480
#define CHotButton__SetButtonSize_x                                0x652840

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x7815C0
#define CInvSlotMgr__MoveItem_x                                    0x780230
#define CInvSlotMgr__SelectSlot_x                                  0x781680

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77E970
#define CInvSlot__SliderComplete_x                                 0x77BB10
#define CInvSlot__GetItemBase_x                                    0x77B3B0
#define CInvSlot__UpdateItem_x                                     0x77B5A0

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782470
#define CInvSlotWnd__HandleLButtonUp_x                             0x782E90

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856700
#define CItemDisplayWnd__UpdateStrings_x                           0x79AC10
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78FC50
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790180
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B320
#define CItemDisplayWnd__AboutToShow_x                             0x79A810
#define CItemDisplayWnd__WndNotification_x                         0x79CA90
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C140
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x7996E0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79A600

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88BA70

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2220
#define CItemDisplayManager__ShowItem_x                            0x7A1650

// CLabel 
#define CLabel__UpdateText_x                                       0x7A8D60

// CListWnd
#define CListWnd__CListWnd_x                                       0x910710
#define CListWnd__dCListWnd_x                                      0x910A10
#define CListWnd__AddColumn_x                                      0x915640
#define CListWnd__AddColumn1_x                                     0x915760
#define CListWnd__AddLine_x                                        0x915AE0
#define CListWnd__AddString_x                                      0x9158D0
#define CListWnd__CalculateFirstVisibleLine_x                      0x9153F0
#define CListWnd__CalculateVSBRange_x                              0x9151D0
#define CListWnd__ClearSel_x                                       0x9164B0
#define CListWnd__ClearAllSel_x                                    0x916500
#define CListWnd__CloseAndUpdateEditWindow_x                       0x916FF0
#define CListWnd__Compare_x                                        0x914960
#define CListWnd__Draw_x                                           0x910BD0
#define CListWnd__DrawColumnSeparators_x                           0x913760
#define CListWnd__DrawHeader_x                                     0x913BC0
#define CListWnd__DrawItem_x                                       0x914200
#define CListWnd__DrawLine_x                                       0x9138D0
#define CListWnd__DrawSeparator_x                                  0x913800
#define CListWnd__EnableLine_x                                     0x913010
#define CListWnd__EnsureVisible_x                                  0x916F10
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x9163F0
#define CListWnd__GetColumnTooltip_x                               0x912B90
#define CListWnd__GetColumnMinWidth_x                              0x912C00
#define CListWnd__GetColumnWidth_x                                 0x912B10
#define CListWnd__GetCurSel_x                                      0x912470
#define CListWnd__GetItemAtPoint_x                                 0x913290
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x913300
#define CListWnd__GetItemColor_x                                   0x9127F0
#define CListWnd__GetItemData_x                                    0x9124F0
#define CListWnd__GetItemHeight_x                                  0x9128E0
#define CListWnd__GetItemIcon_x                                    0x912670
#define CListWnd__GetItemRect_x                                    0x913100
#define CListWnd__GetItemText_x                                    0x912530
#define CListWnd__GetSelList_x                                     0x916550
#define CListWnd__GetSeparatorRect_x                               0x913570
#define CListWnd__InsertLine_x                                     0x916020
#define CListWnd__RemoveLine_x                                     0x916240
#define CListWnd__SetColors_x                                      0x9151B0
#define CListWnd__SetColumnJustification_x                         0x914EE0
#define CListWnd__SetColumnLabel_x                                 0x915870
#define CListWnd__SetItemOnlyDrawTexture_x                         0x916C00
#define CListWnd__SetColumnWidth_x                                 0x914DF0
#define CListWnd__SetCurSel_x                                      0x916340
#define CListWnd__SetItemColor_x                                   0x916B90
#define CListWnd__SetItemData_x                                    0x916B50
#define CListWnd__SetItemText_x                                    0x916770
#define CListWnd__ShiftColumnSeparator_x                           0x914FA0
#define CListWnd__Sort_x                                           0x914C50
#define CListWnd__ToggleSel_x                                      0x916370
#define CListWnd__SetColumnsSizable_x                              0x915040
#define CListWnd__SetItemWnd_x                                     0x916A10
#define CListWnd__GetItemWnd_x                                     0x9126C0
#define CListWnd__SetItemIcon_x                                    0x9167F0
#define CListWnd__CalculateCustomWindowPositions_x                 0x9154F0
#define CListWnd__SetVScrollPos_x                                  0x914DD0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0270
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BE8B0
#define CMapViewWnd__HandleLButtonDown_x                           0x7BB6D0
#define CMapViewWnd__WndNotification_x                             0x7C2B90

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3810
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4170
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4800
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7AD0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2290
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EDCD0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3460

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x994980
#define CPacketScrambler__hton_x                                   0x994970

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x9340B0
#define CSidlManager__FindScreenPieceTemplate_x                    0x934480
#define CSidlManager__FindScreenPieceTemplate1_x                   0x9342B0
#define CSidlManager__CreateXWndFromTemplate_x                     0x937930
#define CSidlManager__CreateXWndFromTemplate1_x                    0x937BC0
#define CSidlManagerbase__CreateXWnd_x                             0x937C00

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84C770
#define CSidlManager__CreateLabel_x                                0x84C330

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84BDA0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x92FDE0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x92FCE0
#define CSidlScreenWnd__ConvertToRes_x                             0x95DA20
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x92F660
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92F350
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92F420
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x92F4F0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x930690
#define CSidlScreenWnd__EnableIniStorage_x                         0x930B70
#define CSidlScreenWnd__GetSidlPiece_x                             0x930880
#define CSidlScreenWnd__Init1_x                                    0x92EE00
#define CSidlScreenWnd__LoadIniInfo_x                              0x930BC0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x931790
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92E200
#define CSidlScreenWnd__StoreIniInfo_x                             0x931310
#define CSidlScreenWnd__StoreIniVis_x                              0x931680
#define CSidlScreenWnd__WndNotification_x                          0x930560
#define CSidlScreenWnd__GetChildItem_x                             0x930AF0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91EFC0
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC3C48

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C07E0
#define CSkillMgr__GetSkillCap_x                                   0x6C09B0
#define CSkillMgr__GetNameToken_x                                  0x6BFFD0
#define CSkillMgr__IsActivatedSkill_x                              0x6C00C0
#define CSkillMgr__IsCombatSkill_x                                 0x6C0030

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x942B60
#define CSliderWnd__SetValue_x                                     0x942990
#define CSliderWnd__SetNumTicks_x                                  0x9429F0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853050

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94C070
#define CStmlWnd__ParseSTML_x                                      0x94D230
#define CStmlWnd__CalculateHSBRange_x                              0x94CFF0
#define CStmlWnd__CalculateVSBRange_x                              0x94CF60
#define CStmlWnd__CanBreakAtCharacter_x                            0x951E60
#define CStmlWnd__FastForwardToEndOfTag_x                          0x952B00
#define CStmlWnd__ForceParseNow_x                                  0x94C5E0
#define CStmlWnd__GetNextTagPiece_x                                0x951DC0
#define CStmlWnd__GetVisibleText_x                                 0x94C600
#define CStmlWnd__InitializeWindowVariables_x                      0x952950
#define CStmlWnd__MakeStmlColorTag_x                               0x94B710
#define CStmlWnd__MakeWndNotificationTag_x                         0x94B780
#define CStmlWnd__SetSTMLText_x                                    0x94A4F0
#define CStmlWnd__StripFirstSTMLLines_x                            0x953D20
#define CStmlWnd__UpdateHistoryString_x                            0x952D00

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9493A0
#define CTabWnd__DrawCurrentPage_x                                 0x949D30
#define CTabWnd__DrawTab_x                                         0x949920
#define CTabWnd__GetCurrentPage_x                                  0x948B00
#define CTabWnd__GetPageInnerRect_x                                0x948D30
#define CTabWnd__GetTabInnerRect_x                                 0x948C70
#define CTabWnd__GetTabRect_x                                      0x948B30
#define CTabWnd__InsertPage_x                                      0x948F20
#define CTabWnd__RemovePage_x                                      0x949070
#define CTabWnd__SetPage_x                                         0x948DB0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9492A0
#define CTabWnd__UpdatePage_x                                      0x949710
#define CTabWnd__GetPageFromTabIndex_x                             0x949860
#define CTabWnd__GetCurrentTabIndex_x                              0x948AF0

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x948490
#define CPageWnd__FlashTab_x                                       0x9484F0

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACA70

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91B400
#define CTextureFont__GetTextExtent_x                              0x91B700

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x95A4D0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x9061C0

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x5418E0
#define CXStr__CXStr1_x                                            0x4827A0
#define CXStr__CXStr3_x                                            0x8EDCB0
#define CXStr__dCXStr_x                                            0x478FA0
#define CXStr__operator_equal_x                                    0x8EDEF0
#define CXStr__operator_equal1_x                                   0x8EDF30
#define CXStr__operator_plus_equal1_x                              0x8EE990
#define CXStr__SetString_x                                         0x8F0830
#define CXStr__operator_char_p_x                                   0x8EE3E0
#define CXStr__GetChar_x                                           0x8F0190
#define CXStr__Delete_x                                            0x8EFA60
#define CXStr__GetUnicode_x                                        0x8F0200
#define CXStr__Insert_x                                            0x8F0260
#define CXStr__FindNext_x                                          0x8EFEB0
#define CXStr__Copy_x                                              0x8EF870

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x940A70
#define CXWnd__BringToTop_x                                        0x922A10
#define CXWnd__ClrFocus_x                                          0x922390
#define CXWnd__Destroy_x                                           0x922440
#define CXWnd__DoAllDrawing_x                                      0x91E610
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x91E5E0
#define CXWnd__DrawColoredRect_x                                   0x91EBA0
#define CXWnd__DrawTooltip_x                                       0x91CB30
#define CXWnd__DrawTooltipAtPoint_x                                0x91CBF0
#define CXWnd__GetBorderFrame_x                                    0x91E840
#define CXWnd__GetChildWndAt_x                                     0x922AB0
#define CXWnd__GetClientClipRect_x                                 0x920C20
#define CXWnd__GetScreenClipRect_x                                 0x920CD0
#define CXWnd__GetScreenRect_x                                     0x920E80
#define CXWnd__GetRelativeRect_x                                   0x920F50
#define CXWnd__GetTooltipRect_x                                    0x91EBF0
#define CXWnd__GetWindowTextA_x                                    0x4EFC60
#define CXWnd__IsActive_x                                          0x91F340
#define CXWnd__IsDescendantOf_x                                    0x9218F0
#define CXWnd__IsReallyVisible_x                                   0x921920
#define CXWnd__IsType_x                                            0x923220
#define CXWnd__Move_x                                              0x921980
#define CXWnd__Move1_x                                             0x921A80
#define CXWnd__ProcessTransition_x                                 0x922520
#define CXWnd__Refade_x                                            0x921D50
#define CXWnd__Resize_x                                            0x921FC0
#define CXWnd__Right_x                                             0x922800
#define CXWnd__SetFocus_x                                          0x922350
#define CXWnd__SetFont_x                                           0x9223C0
#define CXWnd__SetKeyTooltip_x                                     0x922FE0
#define CXWnd__SetMouseOver_x                                      0x91FCD0
#define CXWnd__StartFade_x                                         0x9217D0
#define CXWnd__GetChildItem_x                                      0x922C30
#define CXWnd__SetParent_x                                         0x921620
#define CXWnd__Minimize_x                                          0x922030

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95EA70

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x925A90
#define CXWndManager__DrawWindows_x                                0x925BE0
#define CXWndManager__GetKeyboardFlags_x                           0x928570
#define CXWndManager__HandleKeyboardMsg_x                          0x928150
#define CXWndManager__RemoveWnd_x                                  0x928830
#define CXWndManager__RemovePendingDeletionWnd_x                   0x928CF0

// CDBStr
#define CDBStr__GetString_x                                        0x558480

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5C80
#define EQ_Character__Cur_HP_x                                     0x4D9B60
#define EQ_Character__Cur_Mana_x                                   0x4E0DB0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C92B0
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B87C0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8910
#define EQ_Character__GetHPRegen_x                                 0x4E68A0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6E60
#define EQ_Character__GetManaRegen_x                               0x4E72A0
#define EQ_Character__Max_Endurance_x                              0x680EE0
#define EQ_Character__Max_HP_x                                     0x4D9990
#define EQ_Character__Max_Mana_x                                   0x680CC0
#define EQ_Character__doCombatAbility_x                            0x683A70
#define EQ_Character__UseSkill_x                                   0x4E8470
#define EQ_Character__GetConLevel_x                                0x678FE0
#define EQ_Character__IsExpansionFlag_x                            0x5D2060
#define EQ_Character__TotalEffect_x                                0x4CD6F0
#define EQ_Character__GetPCSpellAffect_x                           0x4CA110
#define EQ_Character__SpellDuration_x                              0x4C9B50
#define EQ_Character__MySpellDuration_x                            0x4B6E90
#define EQ_Character__GetAdjustedSkill_x                           0x4DCCD0
#define EQ_Character__GetBaseSkill_x                               0x4DDC80
#define EQ_Character__CanUseItem_x                                 0x4E10E0
#define EQ_Character__CanMedOnHorse_x                              0x4E7FB0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B55A0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x6992F0

//PcClient
#define PcClient__vftable_x                                        0xB51094
#define PcClient__PcClient_x                                       0x676210

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0260
#define CCharacterListWnd__EnterWorld_x                            0x4BFC30
#define CCharacterListWnd__Quit_x                                  0x4BF950
#define CCharacterListWnd__UpdateList_x                            0x4BFE20

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x6586F0
#define EQ_Item__CreateItemTagString_x                             0x98D6A0
#define EQ_Item__IsStackable_x                                     0x992960
#define EQ_Item__GetImageNum_x                                     0x98F420
#define EQ_Item__CreateItemClient_x                                0x657670
#define EQ_Item__GetItemValue_x                                    0x990650
#define EQ_Item__ValueSellMerchant_x                               0x994690
#define EQ_Item__IsKeyRingItem_x                                   0x9920F0
#define EQ_Item__CanGoInBag_x                                      0x658810
#define EQ_Item__IsEmpty_x                                         0x991AB0
#define EQ_Item__GetMaxItemCount_x                                 0x990A60
#define EQ_Item__GetHeldItem_x                                     0x98F2D0
#define EQ_Item__CanGemFitInSlot_x                                 0x98CE50

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x5795D0
#define EQ_LoadingS__Array_x                                       0xD9CD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x681C20
#define EQ_PC__GetAlternateAbilityId_x                             0x99E980
#define EQ_PC__GetCombatAbility_x                                  0x99EF10
#define EQ_PC__GetCombatAbilityTimer_x                             0x99EF80
#define EQ_PC__GetItemRecastTimer_x                                0x684070
#define EQ_PC__HasLoreItem_x                                       0x679940
#define EQ_PC__AlertInventoryChanged_x                             0x6788A0
#define EQ_PC__GetPcZoneClient_x                                   0x6A9A60
#define EQ_PC__RemoveMyAffect_x                                    0x6878E0
#define EQ_PC__GetKeyRingItems_x                                   0x99FAD0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x99F5B0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x99FCE0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8410
#define EQItemList__add_object_x                                   0x608A00
#define EQItemList__add_item_x                                     0x5D89F0
#define EQItemList__delete_item_x                                  0x5D8A40
#define EQItemList__FreeItemList_x                                 0x5D8950

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554830

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69AD20
#define EQPlayer__dEQPlayer_x                                      0x68D440
#define EQPlayer__DoAttack_x                                       0x6A3730
#define EQPlayer__EQPlayer_x                                       0x68DC90
#define EQPlayer__SetNameSpriteState_x                             0x692240
#define EQPlayer__SetNameSpriteTint_x                              0x693100
#define PlayerBase__HasProperty_j_x                                0x9ECCA0
#define EQPlayer__IsTargetable_x                                   0x9ED200
#define EQPlayer__CanSee_x                                         0x9ECFF0
#define EQPlayer__CanSee1_x                                        0x9ED0C0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ECD60

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7550
#define PlayerZoneClient__GetLevel_x                               0x6A9AA0
#define PlayerZoneClient__IsValidTeleport_x                        0x609EB0
#define PlayerZoneClient__LegalPlayerRace_x                        0x571410

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69DEE0
#define EQPlayerManager__GetSpawnByName_x                          0x69DF90
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E020

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C020
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C0F0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C130
#define KeypressHandler__ClearCommandStateArray_x                  0x65D5F0
#define KeypressHandler__HandleKeyDown_x                           0x65D610
#define KeypressHandler__HandleKeyUp_x                             0x65D6B0
#define KeypressHandler__SaveKeymapping_x                          0x65DC60

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BBED0
#define MapViewMap__SaveEx_x                                       0x7BF47F
#define MapViewMap__SetZoom_x                                      0x7C5150

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B3420

// StringTable 
#define StringTable__getString_x                                   0x9AE170

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687520
#define PcZoneClient__RemovePetEffect_x                            0x687B90
#define PcZoneClient__HasAlternateAbility_x                        0x680B10
#define PcZoneClient__GetCurrentMod_x                              0x4EBE20
#define PcZoneClient__GetModCap_x                                  0x4EBD20
#define PcZoneClient__CanEquipItem_x                               0x6811F0
#define PcZoneClient__GetItemByID_x                                0x6845A0
#define PcZoneClient__RemoveBuffEffect_x                           0x687C40
#define PcZoneClient__BandolierSwap_x                              0x6821D0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x684010

//Doors
#define EQSwitch__UseSwitch_x                                      0x60EAD0

//IconCache
#define IconCache__GetIcon_x                                       0x74B600

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742010
#define CContainerMgr__CloseContainer_x                            0x742330
#define CContainerMgr__OpenExperimentContainer_x                   0x742E90

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81B7D0

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650C00

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B10D0
#define CLootWnd__RequestLootSlot_x                                0x7B02F0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A37E0
#define EQ_Spell__SpellAffects_x                                   0x5A3CF0
#define EQ_Spell__SpellAffectBase_x                                0x5A3A10
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D10F0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D10A0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4C70
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A3F00
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4CA0
#define EQ_Spell__IsLullSpell_x                                    0x5A43D0
#define __IsResEffectSpell_x                                       0x4D08A0

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1790

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9BE060
#define EQ_Affect__SetAffectData_x                                 0x9BE630

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8683E0
#define CTargetWnd__WndNotification_x                              0x867B80
#define CTargetWnd__RefreshTargetBuffs_x                           0x867EE0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866960

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86CE10
#define CTaskWnd__ConfirmAbandonTask_x                             0x86FEC0

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552400
#define CTaskManager__HandleMessage_x                              0x5502C0
#define CTaskManager__GetTaskStatus_x                              0x5524B0
#define CTaskManager__GetElementDescription_x                      0x552530

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E3C0
#define EqSoundManager__PlayScriptMp3_x                            0x59E5C0
#define EqSoundManager__SoundAssistPlay_x                          0x6C4C80
#define EqSoundManager__WaveInstancePlay_x                         0x6C4170

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541590

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x947900
#define CTextureAnimation__Draw_x                                  0x947B40
#define CTextureAnimation__AddBlankFrame_x                         0x947720

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x943660

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581BD0
#define CAltAbilityData__GetMercMaxRank_x                          0x581B60
#define CAltAbilityData__GetMaxRank_x                              0x575DB0

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E410

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x6574C0
#define CharacterBase__CreateItemGlobalIndex_x                     0x5D1760
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x7800D0
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C5CD0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C5D20
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726450
#define CCastSpellWnd__IsBardSongPlaying_x                         0x726D20
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726DD0

//messages
#define msg_spell_worn_off_x                                       0x5C97D0
#define msg_new_text_x                                             0x5BD1D0
#define __msgTokenTextParam_x                                      0x5CBC30
#define msgTokenText_x                                             0x5CC040

//SpellManager
#define SpellManager__vftable_x                                    0xB3B540
#define SpellManager__SpellManager_x                               0x6C88A0
#define Spellmanager__LoadTextSpells_x                             0x6C91A0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8A70

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F1520

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x6710F0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0350
#define ItemGlobalIndex__IsEquippedLocation_x                      0x6710C0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D2220

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9BEAE0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9BEE30

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A91D0

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746DB0
#define CCursorAttachment__AttachToCursor1_x                       0x746DF0
#define CCursorAttachment__Deactivate_x                            0x7484A0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x939180
#define CSidlManagerBase__CreatePageWnd_x                          0x938960
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x933E30
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x933DC0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x959090
#define CEQSuiteTextureLoader__GetTexture_x                        0x958D10

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5220F0
#define CFindItemWnd__WndNotification_x                            0x522FB0
#define CFindItemWnd__Update_x                                     0x523C00
#define CFindItemWnd__PickupSelectedItem_x                         0x5217D0

//IString
#define IString__Append_x                                          0x557F00

//Camera
#define CDisplay__cameraType_x                                     0xEE0EA8
#define EverQuest__Cameras_x                                       0xDB009C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D060
#define LootFiltersManager__GetItemFilterData_x                    0x52C990
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C9C0
#define LootFiltersManager__SetItemLootFilter_x                    0x52CBD0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808170

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F71F0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF0E0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73E9C0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9C99F0
#define CDistillerInfo__Instance_x                                 0x9C9930

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761880
#define CGroupWnd__UpdateDisplay_x                                 0x760AD0

//ItemBase
#define ItemBase__IsLore_x                                         0x9921B0
#define ItemBase__IsLoreEquipped_x                                 0x992230

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608960
#define EQPlacedItemManager__GetItemByGuid_x                       0x608AA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608B00

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3890
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8110

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517B50

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502770
#define FactionManagerClient__HandleFactionMessage_x               0x502F90
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5037B0
#define FactionManagerClient__GetMaxFaction_x                      0x5037CF
#define FactionManagerClient__GetMinFaction_x                      0x503780

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F460

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x91A070

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E490

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F6D0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580DA0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CC820

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3890

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC830

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D88F0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4D730

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA3D0
#define CAAWnd__UpdateSelected_x                                   0x6E6970
#define CAAWnd__Update_x                                           0x6E9710

//CXRect
#define CXRect__operator_and_x                                     0x756CA0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F77D3
#define __eq_new_x                                                 0x9F7D44

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
