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
#define __ExpectedVersionDate                                     "Nov  9 2021"
#define __ExpectedVersionTime                                     "09:05:51"
#define __ActualVersionDate_x                                      0xB5056C
#define __ActualVersionTime_x                                      0xB50560
#define __ActualVersionBuild_x                                     0xB40744

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x6629E0
#define __MemChecker1_x                                            0x94E8E0
#define __MemChecker2_x                                            0x6DD3E0
#define __MemChecker3_x                                            0x6DD350
#define __MemChecker4_x                                            0x8A1E20
#define __EncryptPad0_x                                            0xE4FBF0
#define __EncryptPad1_x                                            0xEAA400
#define __EncryptPad2_x                                            0xE5EE18
#define __EncryptPad3_x                                            0xE5EA18
#define __EncryptPad4_x                                            0xE9B218
#define __EP1_Data_x                                               0x37A04C

// Direct Input
#define DI8__Main_x                                                0xF9DD4C
#define DI8__Keyboard_x                                            0xF9DD50
#define DI8__Mouse_x                                               0xF9DCAC
#define DI8__Mouse_Copy_x                                          0xDAAE34
#define DI8__Mouse_Check_x                                         0xF9B80C
#define __AutoSkillArray_x                                         0xDAB950
#define __Attack_x                                                 0xE49773
#define __Autofire_x                                               0xE49774
#define __BindList_x                                               0xDA04E8
#define g_eqCommandStates_x                                        0xDA1250
#define __Clicks_x                                                 0xDAAEEC
#define __CommandList_x                                            0xDA1DD8
#define __CurrentMapLabel_x                                        0xFAE74C
#define __CurrentSocial_x                                          0xC5B460
#define __DoAbilityList_x                                          0xDE1294
#define __do_loot_x                                                0x5DFDA0
#define __DrawHandler_x                                            0x161D4E0
#define __GroupCount_x                                             0xF90E42
#define __Guilds_x                                                 0xF952A8
#define __gWorld_x                                                 0xF91150
#define __HWnd_x                                                   0xF9DCB0
#define __heqmain_x                                                0xF9DCA0
#define __InChatMode_x                                             0xDAAE1C
#define __LastTell_x                                               0xDAC990
#define __LMouseHeldTime_x                                         0xDAAF58
#define __Mouse_x                                                  0xF9DD38
#define __MouseLook_x                                              0xDAAEB2
#define __MouseEventTime_x                                         0xF96CD4
#define __gpbCommandEvent_x                                        0xF9115C
#define __NetStatusToggle_x                                        0xDAAEB5
#define __PCNames_x                                                0xDABF40
#define __RangeAttackReady_x                                       0xDABC34
#define __RMouseHeldTime_x                                         0xDAAF54
#define __RunWalkState_x                                           0xDAAE20
#define __ScreenMode_x                                             0xEDD148
#define __ScreenX_x                                                0xDAADD4
#define __ScreenY_x                                                0xDAADD0
#define __ScreenXMax_x                                             0xDAADD8
#define __ScreenYMax_x                                             0xDAADDC
#define __ServerHost_x                                             0xF9132B
#define __ServerName_x                                             0xDE1254
#define __ShiftKeyDown_x                                           0xDAB4B0
#define __ShowNames_x                                              0xDABDF0
#define EverQuestInfo__bSocialChanged_x                            0xDE12DC
#define __Socials_x                                                0xDE1354
#define __SubscriptionType_x                                       0xFE2838
#define __TargetAggroHolder_x                                      0xFB1100
#define __ZoneType_x                                               0xDAB2B0
#define __GroupAggro_x                                             0xFB1140
#define __LoginName_x                                              0xF9E41C
#define __Inviter_x                                                0xE496F0
#define __AttackOnAssist_x                                         0xDABDAC
#define __UseTellWindows_x                                         0xDAC0D8
#define __gfMaxZoomCameraDistance_x                                0xB483E4
#define __gfMaxCameraDistance_x                                    0xB70DC0
#define __pulAutoRun_x                                             0xDAAED0
#define __pulForward_x                                             0xDAC110
#define __pulBackward_x                                            0xDAC114
#define __pulTurnRight_x                                           0xDAC118
#define __pulTurnLeft_x                                            0xDAC11C
#define __pulStrafeLeft_x                                          0xDAC120
#define __pulStrafeRight_x                                         0xDAC124

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF91640
#define instEQZoneInfo_x                                           0xDAB0A8
#define pinstActiveBanker_x                                        0xF8ED3C
#define pinstActiveCorpse_x                                        0xF8ED34
#define pinstActiveGMaster_x                                       0xF8ED38
#define pinstActiveMerchant_x                                      0xF8ED30
#define pinstAltAdvManager_x                                       0xEDDF48
#define pinstBandageTarget_x                                       0xF8ED4C
#define pinstCamActor_x                                            0xEDD13C
#define pinstCDBStr_x                                              0xEDCCB8
#define pinstCDisplay_x                                            0xF90DB8
#define pinstCEverQuest_x                                          0xF9DCB4
#define pinstEverQuestInfo_x                                       0xDAADC8
#define pinstCharData_x                                            0xF8EDA8
#define pinstCharSpawn_x                                           0xF8ED84
#define pinstControlledMissile_x                                   0xF8ED90
#define pinstControlledPlayer_x                                    0xF8ED84
#define pinstCResolutionHandler_x                                  0x161D708
#define pinstCSidlManager_x                                        0x161C6A4
#define pinstCXWndManager_x                                        0x161C69C
#define instDynamicZone_x                                          0xF95180
#define pinstDZMember_x                                            0xF95290
#define pinstDZTimerInfo_x                                         0xF95294
#define pinstEqLogin_x                                             0xF9DD68
#define instEQMisc_x                                               0xD948D8
#define pinstEQSoundManager_x                                      0xEDE858
#define pinstEQSpellStrings_x                                      0xECD958
#define instExpeditionLeader_x                                     0xF951CA
#define instExpeditionName_x                                       0xF9520A
#define pinstGroup_x                                               0xF90E3E
#define pinstImeManager_x                                          0x161C6A0
#define pinstLocalPlayer_x                                         0xF8ED2C
#define pinstMercenaryData_x                                       0xF987C8
#define pinstMercenaryStats_x                                      0xFB11CC
#define pinstModelPlayer_x                                         0xF8ED44
#define pinstPCData_x                                              0xF8EDA8
#define pinstSkillMgr_x                                            0xF9A8B8
#define pinstSpawnManager_x                                        0xF99390
#define pinstSpellManager_x                                        0xF9AAF8
#define pinstSpellSets_x                                           0xE4239C
#define pinstStringTable_x                                         0xF8EDB4
#define pinstSwitchManager_x                                       0xF8EBD8
#define pinstTarget_x                                              0xF8ED80
#define pinstTargetObject_x                                        0xF8EDA0
#define pinstTargetSwitch_x                                        0xF8EDA4
#define pinstTaskMember_x                                          0xD94420
#define pinstTrackTarget_x                                         0xF8ED88
#define pinstTradeTarget_x                                         0xF8ED40
#define instTributeActive_x                                        0xD948F9
#define pinstViewActor_x                                           0xEDD138
#define pinstWorldData_x                                           0xF8EDB0
#define pinstZoneAddr_x                                            0xDAB348
#define pinstPlayerPath_x                                          0xF99428
#define pinstTargetIndicator_x                                     0xF9AD60
#define EQObject_Top_x                                             0xF8ED9C

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEDCD74
#define pinstCAchievementsWnd_x                                    0xEDCE14
#define pinstCActionsWnd_x                                         0xEDD134
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDD158
#define pinstCAdvancedLootWnd_x                                    0xEDD154
#define pinstCAdventureLeaderboardWnd_x                            0xFA7F70
#define pinstCAdventureRequestWnd_x                                0xFA8020
#define pinstCAdventureStatsWnd_x                                  0xFA80D0
#define pinstCAggroMeterWnd_x                                      0xEDCEAC
#define pinstCAlarmWnd_x                                           0xEDCD6C
#define pinstCAlertHistoryWnd_x                                    0xEDD118
#define pinstCAlertStackWnd_x                                      0xEDD0F8
#define pinstCAlertWnd_x                                           0xEDD0FC
#define pinstCAltStorageWnd_x                                      0xFA8430
#define pinstCAudioTriggersWindow_x                                0xEBFC88
#define pinstCAuraWnd_x                                            0xEDD180
#define pinstCAvaZoneWnd_x                                         0xEDCDEC
#define pinstCBandolierWnd_x                                       0xEDD18C
#define pinstCBankWnd_x                                            0xEDD11C
#define pinstCBarterMerchantWnd_x                                  0xFA9670
#define pinstCBarterSearchWnd_x                                    0xFA9720
#define pinstCBarterWnd_x                                          0xFA97D0
#define pinstCBazaarConfirmationWnd_x                              0xEDCD80
#define pinstCBazaarSearchWnd_x                                    0xEDCE48
#define pinstCBazaarWnd_x                                          0xEDCDF8
#define pinstCBlockedBuffWnd_x                                     0xEDCE74
#define pinstCBlockedPetBuffWnd_x                                  0xEDCE80
#define pinstCBodyTintWnd_x                                        0xEDCDA0
#define pinstCBookWnd_x                                            0xEDD124
#define pinstCBreathWnd_x                                          0xEDCD78
#define pinstCBuffWindowNORMAL_x                                   0xEDCE6C
#define pinstCBuffWindowSHORT_x                                    0xEDCE70
#define pinstCBugReportWnd_x                                       0xEDCE2C
#define pinstCButtonWnd_x                                          0x161C908
#define pinstCCastingWnd_x                                         0xEDCEA8
#define pinstCCastSpellWnd_x                                       0xEDCEB8
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEDCE50
#define pinstCChatWindowManager_x                                  0xFAA278
#define pinstCClaimWnd_x                                           0xFAA3D0
#define pinstCColorPickerWnd_x                                     0xEDCE60
#define pinstCCombatAbilityWnd_x                                   0xEDD16C
#define pinstCCombatSkillsSelectWnd_x                              0xEDD170
#define pinstCCompassWnd_x                                         0xEDD17C
#define pinstCConfirmationDialog_x                                 0xFAF298
#define pinstCContainerMgr_x                                       0xEDCD70
#define pinstCContextMenuManager_x                                 0x161C658
#define pinstCCursorAttachment_x                                   0xEDCEA0
#define pinstCDragonHoardWnd_x                                     0xEDCDE8
#define pinstCDynamicZoneWnd_x                                     0xFAA998
#define pinstCEditLabelWnd_x                                       0xEDCE0C
#define pinstCEQMainWnd_x                                          0xFAABE0
#define pinstCEventCalendarWnd_x                                   0xEDCD58
#define pinstCExtendedTargetWnd_x                                  0xEDCEA4
#define pinstCFactionWnd_x                                         0xEDCEB4
#define pinstCFellowshipWnd_x                                      0xFAADE0
#define pinstCFileSelectionWnd_x                                   0xEDD178
#define pinstCFindItemWnd_x                                        0xEDCDA8
#define pinstCFindLocationWnd_x                                    0xFAAF38
#define pinstCFriendsWnd_x                                         0xEDD174
#define pinstCGemsGameWnd_x                                        0xEDCD60
#define pinstCGiveWnd_x                                            0xEDCE00
#define pinstCGroupSearchFiltersWnd_x                              0xEDCE90
#define pinstCGroupSearchWnd_x                                     0xFAB330
#define pinstCGroupWnd_x                                           0xFAB3E0
#define pinstCGuildBankWnd_x                                       0xFAB490
#define pinstCGuildCreationWnd_x                                   0xFAB540
#define pinstCGuildMgmtWnd_x                                       0xFAB5F0
#define pinstCharacterCreation_x                                   0xEDCE9C
#define pinstCHelpWnd_x                                            0xEDD104
#define pinstCHeritageSelectionWnd_x                               0xEDCE58
#define pinstCHotButtonWnd_x                                       0xFAD748
#define pinstCHotButtonWnd1_x                                      0xFAD748
#define pinstCHotButtonWnd2_x                                      0xFAD74C
#define pinstCHotButtonWnd3_x                                      0xFAD750
#define pinstCHotButtonWnd4_x                                      0xFAD754
#define pinstCIconSelectionWnd_x                                   0xEDCE28
#define pinstCInspectWnd_x                                         0xEDCE1C
#define pinstCInventoryWnd_x                                       0xEDD108
#define pinstCInvSlotMgr_x                                         0xEDCD5C
#define pinstCItemDisplayManager_x                                 0xFADCA0
#define pinstCItemExpTransferWnd_x                                 0xFADDD0
#define pinstCItemFuseWnd_x                                        0xEDCD9C
#define pinstCItemOverflowWnd_x                                    0xEDCDE0
#define pinstCJournalCatWnd_x                                      0xEDCD90
#define pinstCJournalNPCWnd_x                                      0xEDCD84
#define pinstCJournalTextWnd_x                                     0xEDCD84
#define pinstCKeyRingWnd_x                                         0xEDD114
#define pinstCLargeDialogWnd_x                                     0xFAFF18
#define pinstCLayoutCopyWnd_x                                      0xFAE120
#define pinstCLFGuildWnd_x                                         0xFAE1D0
#define pinstCLoadskinWnd_x                                        0xEDCD68
#define pinstCLootFiltersCopyWnd_x                                 0xEDC1C8
#define pinstCLootFiltersWnd_x                                     0xEDCD88
#define pinstCLootSettingsWnd_x                                    0xEDCD8C
#define pinstCLootWnd_x                                            0xEDD128
#define pinstCMailAddressBookWnd_x                                 0xEDCE40
#define pinstCMailCompositionWnd_x                                 0xEDCE38
#define pinstCMailIgnoreListWnd_x                                  0xEDCE44
#define pinstCMailWnd_x                                            0xEDCE30
#define pinstCManageLootWnd_x                                      0xEDE3C8
#define pinstCMapToolbarWnd_x                                      0xEDCE04
#define pinstCMapViewWnd_x                                         0xEDCDFC
#define pinstCMarketplaceWnd_x                                     0xEDCDD0
#define pinstCMerchantWnd_x                                        0xEDCDD8
#define pinstCMIZoneSelectWnd_x                                    0xFAEA08
#define pinstCMusicPlayerWnd_x                                     0xEDCD64
#define pinstCNameChangeMercWnd_x                                  0xEDCECC
#define pinstCNameChangePetWnd_x                                   0xEDCEC8
#define pinstCNameChangeWnd_x                                      0xEDCE24
#define pinstCNoteWnd_x                                            0xEDD100
#define pinstCObjectPreviewWnd_x                                   0xEDCE3C
#define pinstCOptionsWnd_x                                         0xEDCE68
#define pinstCOverseerWnd_x                                        0xEDCDCC
#define pinstCPetInfoWnd_x                                         0xEDD12C
#define pinstCPetitionQWnd_x                                       0xEDCE84
#define pinstCPlayerCustomizationWnd_x                             0xEDCE54
#define pinstCPlayerNotesWnd_x                                     0xEDD184
#define pinstCPlayerWnd_x                                          0xEDCDA4
#define pinstCPopupWndManager_x                                    0xFAF298
#define pinstCProgressionSelectionWnd_x                            0xFAF348
#define pinstCPurchaseGroupWnd_x                                   0xEDCDDC
#define pinstCPurchaseWnd_x                                        0xEDCDD4
#define pinstCPvPLeaderboardWnd_x                                  0xFAF3F8
#define pinstCPvPStatsWnd_x                                        0xFAF4A8
#define pinstCQuantityWnd_x                                        0xEDD120
#define pinstCRaceChangeWnd_x                                      0xEDCE34
#define pinstCRaidOptionsWnd_x                                     0xEDCEB0
#define pinstCRaidWnd_x                                            0xEDCEBC
#define pinstCRealEstateItemsWnd_x                                 0xEDCE5C
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDCE98
#define pinstCRealEstateManageWnd_x                                0xEDCE7C
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDCE88
#define pinstCRealEstatePlotSearchWnd_x                            0xEDCE8C
#define pinstCRealEstatePurchaseWnd_x                              0xEDCE94
#define pinstCRespawnWnd_x                                         0xEDD188
#define pinstCRewardSelectionWnd_x                                 0xFAFBF0
#define pinstCSelectorWnd_x                                        0xEDCDF0
#define pinstCSendMoneyWnd_x                                       0xEDCE08
#define pinstCServerListWnd_x                                      0xEDD168
#define pinstCSkillsSelectWnd_x                                    0xEDD164
#define pinstCSkillsWnd_x                                          0xEDD15C
#define pinstCSocialEditWnd_x                                      0xEDCE20
#define pinstCSocialWnd_x                                          0xEDCD7C
#define pinstCSpellBookWnd_x                                       0xEDCEE4
#define pinstCStoryWnd_x                                           0xEDCD98
#define pinstCTargetOfTargetWnd_x                                  0xFB1250
#define pinstCTargetWnd_x                                          0xEDCE18
#define pinstCTaskOverlayWnd_x                                     0xEDCD94
#define pinstCTaskSelectWnd_x                                      0xFB13A8
#define pinstCTaskManager_x                                        0xC66268
#define pinstCTaskTemplateSelectWnd_x                              0xFB1458
#define pinstCTaskWnd_x                                            0xFB1508
#define pinstCTextEntryWnd_x                                       0xEDD160
#define pinstCTimeLeftWnd_x                                        0xEDCE74
#define pinstCTipWndCONTEXT_x                                      0xFB170C
#define pinstCTipWndOFDAY_x                                        0xFB1708
#define pinstCTitleWnd_x                                           0xFB17B8
#define pinstCTrackingWnd_x                                        0xEDCE10
#define pinstCTradeskillWnd_x                                      0xFB1920
#define pinstCTradeWnd_x                                           0xEDCDE4
#define pinstCTrainWnd_x                                           0xEDD130
#define pinstCTributeBenefitWnd_x                                  0xFB1B20
#define pinstCTributeMasterWnd_x                                   0xFB1BD0
#define pinstCTributeTrophyWnd_x                                   0xFB1C80
#define pinstCVideoModesWnd_x                                      0xEDCDF4
#define pinstCVoiceMacroWnd_x                                      0xF9B178
#define pinstCVoteResultsWnd_x                                     0xEDCEC4
#define pinstCVoteWnd_x                                            0xEDCEC0
#define pinstCZoneGuideWnd_x                                       0xEDD10C
#define pinstCZonePathWnd_x                                        0xEDD110

#define pinstEQSuiteTextureLoader_x                                0xEAA9C0
#define pinstItemIconCache_x                                       0xFAAB98
#define pinstLootFiltersManager_x                                  0xEDC278
#define pinstRewardSelectionWnd_x                                  0xFAFBF0

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB080
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB310
#define __ConvertItemTags_x                                        0x5F8540
#define __CleanItemTags_x                                          0x47DA70
#define __DoesFileExist_x                                          0x951870
#define __EQGetTime_x                                              0x94E550
#define __ExecuteCmd_x                                             0x5D34B0
#define __FixHeading_x                                             0x9ED100
#define __FlushDxKeyboard_x                                        0x6D86D0
#define __GameLoop_x                                               0x6DBFE0
#define __get_bearing_x                                            0x5DAC20
#define __get_melee_range_x                                        0x5DB550
#define __GetAnimationCache_x                                      0x74A720
#define __GetGaugeValueFromEQ_x                                    0x85AB00
#define __GetLabelFromEQ_x                                         0x85C510
#define __GetXTargetType_x                                         0x9EF470
#define __HandleMouseWheel_x                                       0x6DD470
#define __HeadingDiff_x                                            0x9ED160
#define __HelpPath_x                                               0xF96994
#define __ExecuteFrontEnd_x                                        0x6D8EB0
#define __NewUIINI_x                                               0x85A7E0
#define __ProcessGameEvents_x                                      0x641C10
#define __ProcessMouseEvent_x                                      0x641310
#define __SaveColors_x                                             0x56F5B0
#define __STMLToText_x                                             0x98ACC0
#define __ToggleKeyRingItem_x                                      0x528AF0
#define CMemoryMappedFile__SetFile_x                               0xADCB50
#define CrashDetected_x                                            0x6DABE0
#define DrawNetStatus_x                                            0x670F30
#define Expansion_HoT_x                                            0xDABD98
#define Teleport_Table_Size_x                                      0xF911E4
#define Teleport_Table_x                                           0xF8EDB8
#define Util__FastTime_x                                           0x94E110
#define __CopyLayout_x                                             0x65DC60
#define __WndProc_x                                                0x6DB0E0
#define __ProcessKeyboardEvent_x                                   0x6DA620

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B500
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B380
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495690
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948CC

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x578620
#define AltAdvManager__IsAbilityReady_x                            0x577200
#define AltAdvManager__GetAAById_x                                 0x5775A0
#define AltAdvManager__CanTrainAbility_x                           0x577610
#define AltAdvManager__CanSeeAbility_x                             0x5779C0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1890
#define CharacterZoneClient__HasSkill_x                            0x4DD000
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE770
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8C00
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C13E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFC70
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFD70
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFEB0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAED0
#define CharacterZoneClient__BardCastBard_x                        0x4CDF10
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5350
#define CharacterZoneClient__GetEffect_x                           0x4C1320
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC4E0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC590
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC630
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC7F0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC9D0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8B90
#define CharacterZoneClient__FindItemByGuid_x                      0x6842F0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DED50

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x706300
#define CBankWnd__WndNotification_x                                0x7060A0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x710E00

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70BA50
#define CBarterSearchWnd__UpdateInventoryList_x                    0x709A30

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715530

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x988260
#define CButtonWnd__CButtonWnd_x                                   0x986C20

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x737E00
#define CChatManager__InitContextMenu_x                            0x730D40
#define CChatManager__FreeChatWindow_x                             0x7369D0
#define CChatManager__SetLockedActiveChatWindow_x                  0x737AE0
#define CChatManager__CreateChatWindow_x                           0x737000

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD90

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99E080
#define CContextMenu__dCContextMenu_x                              0x99E2C0
#define CContextMenu__AddMenuItem_x                                0x99E2D0
#define CContextMenu__RemoveMenuItem_x                             0x99E5E0
#define CContextMenu__RemoveAllMenuItems_x                         0x99E600
#define CContextMenu__CheckMenuItem_x                              0x99E660
#define CContextMenu__SetMenuItem_x                                0x99E500
#define CContextMenu__AddSeparator_x                               0x99E460

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99EBF0
#define CContextMenuManager__RemoveMenu_x                          0x99EC60
#define CContextMenuManager__PopupMenu_x                           0x99ED20
#define CContextMenuManager__Flush_x                               0x99EB90
#define CContextMenuManager__GetMenu_x                             0x49D9F0
#define CContextMenuManager__CreateDefaultMenu_x                   0x7446F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x928FE0
#define CChatService__GetFriendName_x                              0x928FF0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x738790
#define CChatWindow__Clear_x                                       0x739C00
#define CChatWindow__WndNotification_x                             0x73A380
#define CChatWindow__AddHistory_x                                  0x739440

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99B170
#define CComboWnd__Draw_x                                          0x99A600
#define CComboWnd__GetCurChoice_x                                  0x99AF40
#define CComboWnd__GetListRect_x                                   0x99AAB0
#define CComboWnd__GetTextRect_x                                   0x99B1E0
#define CComboWnd__InsertChoice_x                                  0x99AC40
#define CComboWnd__SetColors_x                                     0x99AC10
#define CComboWnd__SetChoice_x                                     0x99AF20
#define CComboWnd__GetItemCount_x                                  0x99AF50
#define CComboWnd__GetCurChoiceText_x                              0x99AF80
#define CComboWnd__GetChoiceText_x                                 0x99AF60
#define CComboWnd__InsertChoiceAtIndex_x                           0x99ACE0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x741D40
#define CContainerWnd__vftable_x                                   0xB597FC
#define CContainerWnd__SetContainer_x                              0x7435A0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569DF0
#define CDisplay__PreZoneMainUI_x                                  0x569E00
#define CDisplay__CleanGameUI_x                                    0x56F390
#define CDisplay__GetClickedActor_x                                0x561BC0
#define CDisplay__GetUserDefinedColor_x                            0x559940
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5636D0
#define CDisplay__is3dON_x                                         0x55E450
#define CDisplay__ReloadUI_x                                       0x569110
#define CDisplay__WriteTextHD2_x                                   0x55E240
#define CDisplay__TrueDistance_x                                   0x5656B0
#define CDisplay__SetViewActor_x                                   0x5614E0
#define CDisplay__GetFloorHeight_x                                 0x55E510
#define CDisplay__SetRenderWindow_x                                0x55CEC0
#define CDisplay__ToggleScreenshotMode_x                           0x560FB0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C0900

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A1B90
#define CEditWnd__EnsureCaretVisible_x                             0x9A3EF0
#define CEditWnd__GetCaretPt_x                                     0x9A2D60
#define CEditWnd__GetCharIndexPt_x                                 0x9A2B10
#define CEditWnd__GetDisplayString_x                               0x9A29C0
#define CEditWnd__GetHorzOffset_x                                  0x9A10F0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A3E00
#define CEditWnd__GetSelStartPt_x                                  0x9A2DC0
#define CEditWnd__GetSTMLSafeText_x                                0x9A27D0
#define CEditWnd__PointFromPrintableChar_x                         0x9A3A50
#define CEditWnd__SelectableCharFromPoint_x                        0x9A3BB0
#define CEditWnd__SetEditable_x                                    0x9A2E90
#define CEditWnd__SetWindowTextA_x                                 0x9A2520
#define CEditWnd__ReplaceSelection_x                               0x9A3610
#define CEditWnd__ReplaceSelection1_x                              0x9A3590

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D200
#define CEverQuest__ClickedPlayer_x                                0x61E720
#define CEverQuest__CreateTargetIndicator_x                        0x63EB70
#define CEverQuest__DeleteTargetIndicator_x                        0x63EC00
#define CEverQuest__DoTellWindow_x                                 0x4EFE90
#define CEverQuest__OutputTextToLog_x                              0x4F0160
#define CEverQuest__DropHeldItemOnGround_x                         0x6137F0
#define CEverQuest__dsp_chat_x                                     0x4F0530
#define CEverQuest__trimName_x                                     0x63A160
#define CEverQuest__Emote_x                                        0x62D8C0
#define CEverQuest__EnterZone_x                                    0x627560
#define CEverQuest__GetBodyTypeDesc_x                              0x632E20
#define CEverQuest__GetClassDesc_x                                 0x633460
#define CEverQuest__GetClassThreeLetterCode_x                      0x633A60
#define CEverQuest__GetDeityDesc_x                                 0x63D320
#define CEverQuest__GetLangDesc_x                                  0x633C20
#define CEverQuest__GetRaceDesc_x                                  0x633440
#define CEverQuest__InterpretCmd_x                                 0x63D990
#define CEverQuest__LeftClickedOnPlayer_x                          0x617CE0
#define CEverQuest__LMouseUp_x                                     0x615DA0
#define CEverQuest__RightClickedOnPlayer_x                         0x6188D0
#define CEverQuest__RMouseUp_x                                     0x617060
#define CEverQuest__SetGameState_x                                 0x613570
#define CEverQuest__UPCNotificationFlush_x                         0x63A080
#define CEverQuest__IssuePetCommand_x                              0x635220
#define CEverQuest__ReportSuccessfulHit_x                          0x62F1A0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x7556C0
#define CGaugeWnd__CalcLinesFillRect_x                             0x755720
#define CGaugeWnd__Draw_x                                          0x754CD0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B49A0
#define CGuild__GetGuildName_x                                     0x4B31C0
#define CGuild__GetGuildIndex_x                                    0x4B38E0

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x772B90

//CHotButton
#define CHotButton__SetCheck_x                                     0x6521A0
#define CHotButton__SetButtonSize_x                                0x652560

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x77FD80
#define CInvSlotMgr__MoveItem_x                                    0x77E990
#define CInvSlotMgr__SelectSlot_x                                  0x77FE40

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77D090
#define CInvSlot__SliderComplete_x                                 0x77A4B0
#define CInvSlot__GetItemBase_x                                    0x779D40
#define CInvSlot__UpdateItem_x                                     0x779F30

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x780C50
#define CInvSlotWnd__HandleLButtonUp_x                             0x781660

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x854F50
#define CItemDisplayWnd__UpdateStrings_x                           0x799540
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78E4A0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78EA10
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x799C50
#define CItemDisplayWnd__AboutToShow_x                             0x799140
#define CItemDisplayWnd__WndNotification_x                         0x79B3F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79AA80
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x798010
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x798F30

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88A3C0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A0B40
#define CItemDisplayManager__ShowItem_x                            0x79FFA0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A7680

// CListWnd
#define CListWnd__CListWnd_x                                       0x96D640
#define CListWnd__dCListWnd_x                                      0x96D940
#define CListWnd__AddColumn_x                                      0x9724F0
#define CListWnd__AddColumn1_x                                     0x972610
#define CListWnd__AddLine_x                                        0x972980
#define CListWnd__AddString_x                                      0x972780
#define CListWnd__CalculateFirstVisibleLine_x                      0x9722A0
#define CListWnd__CalculateVSBRange_x                              0x972080
#define CListWnd__ClearSel_x                                       0x973270
#define CListWnd__ClearAllSel_x                                    0x9732C0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x973D70
#define CListWnd__Compare_x                                        0x971800
#define CListWnd__Draw_x                                           0x96DB00
#define CListWnd__DrawColumnSeparators_x                           0x970610
#define CListWnd__DrawHeader_x                                     0x970A60
#define CListWnd__DrawItem_x                                       0x9710A0
#define CListWnd__DrawLine_x                                       0x970770
#define CListWnd__DrawSeparator_x                                  0x9706B0
#define CListWnd__EnableLine_x                                     0x96FED0
#define CListWnd__EnsureVisible_x                                  0x973C90
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x9731B0
#define CListWnd__GetColumnTooltip_x                               0x96FA50
#define CListWnd__GetColumnMinWidth_x                              0x96FAC0
#define CListWnd__GetColumnWidth_x                                 0x96F9D0
#define CListWnd__GetCurSel_x                                      0x96F380
#define CListWnd__GetItemAtPoint_x                                 0x970140
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x9701B0
#define CListWnd__GetItemColor_x                                   0x96F700
#define CListWnd__GetItemData_x                                    0x96F400
#define CListWnd__GetItemHeight_x                                  0x96F7A0
#define CListWnd__GetItemIcon_x                                    0x96F580
#define CListWnd__GetItemRect_x                                    0x96FFC0
#define CListWnd__GetItemText_x                                    0x96F440
#define CListWnd__GetSelList_x                                     0x973310
#define CListWnd__GetSeparatorRect_x                               0x970420
#define CListWnd__InsertLine_x                                     0x972DE0
#define CListWnd__RemoveLine_x                                     0x973000
#define CListWnd__SetColors_x                                      0x972050
#define CListWnd__SetColumnJustification_x                         0x971D80
#define CListWnd__SetColumnLabel_x                                 0x972720
#define CListWnd__SetItemOnlyDrawTexture_x                         0x9739C0
#define CListWnd__SetColumnWidth_x                                 0x971C90
#define CListWnd__SetCurSel_x                                      0x973100
#define CListWnd__SetItemColor_x                                   0x973950
#define CListWnd__SetItemData_x                                    0x973910
#define CListWnd__SetItemText_x                                    0x973530
#define CListWnd__ShiftColumnSeparator_x                           0x971E40
#define CListWnd__Sort_x                                           0x971AF0
#define CListWnd__ToggleSel_x                                      0x973130
#define CListWnd__SetColumnsSizable_x                              0x971EE0
#define CListWnd__SetItemWnd_x                                     0x9737D0
#define CListWnd__GetItemWnd_x                                     0x96F5D0
#define CListWnd__SetItemIcon_x                                    0x9735B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x9723A0
#define CListWnd__SetVScrollPos_x                                  0x971C70

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7BEAA0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BD0E0
#define CMapViewWnd__HandleLButtonDown_x                           0x7B9F70
#define CMapViewWnd__WndNotification_x                             0x7C13C0

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E2030
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E2990
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E3020
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E6300
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E0AB0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EC500
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E1C80

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F5EE0
#define CPacketScrambler__hton_x                                   0x8F5ED0

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x991310
#define CSidlManager__FindScreenPieceTemplate_x                    0x9916E0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x991510
#define CSidlManager__CreateXWndFromTemplate_x                     0x994B90
#define CSidlManager__CreateXWndFromTemplate1_x                    0x994E20
#define CSidlManagerbase__CreateXWnd_x                             0x994E60

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84B0B0
#define CSidlManager__CreateLabel_x                                0x84AC70

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84A6E0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98D050
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98CF50
#define CSidlScreenWnd__ConvertToRes_x                             0x9BAB50
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98C8D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98C5C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98C690
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98C760
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98D8E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98DDC0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98DAD0
#define CSidlScreenWnd__Init1_x                                    0x98C090
#define CSidlScreenWnd__LoadIniInfo_x                              0x98DE10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98EA00
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98B490
#define CSidlScreenWnd__StoreIniInfo_x                             0x98E570
#define CSidlScreenWnd__StoreIniVis_x                              0x98E8F0
#define CSidlScreenWnd__WndNotification_x                          0x98D7B0
#define CSidlScreenWnd__GetChildItem_x                             0x98DD40
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97C290
#define CSidlScreenWnd__m_layoutCopy_x                             0x161C528

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0450
#define CSkillMgr__GetSkillCap_x                                   0x6C0620
#define CSkillMgr__GetNameToken_x                                  0x6BFC60
#define CSkillMgr__IsActivatedSkill_x                              0x6BFD50
#define CSkillMgr__IsCombatSkill_x                                 0x6BFCC0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x99FCF0
#define CSliderWnd__SetValue_x                                     0x99FB20
#define CSliderWnd__SetNumTicks_x                                  0x99FB80

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x851930

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A91E0
#define CStmlWnd__ParseSTML_x                                      0x9AA380
#define CStmlWnd__CalculateHSBRange_x                              0x9AA150
#define CStmlWnd__CalculateVSBRange_x                              0x9AA0C0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AEFB0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9AFC50
#define CStmlWnd__ForceParseNow_x                                  0x9A9750
#define CStmlWnd__GetNextTagPiece_x                                0x9AEF10
#define CStmlWnd__GetVisibleText_x                                 0x9A9770
#define CStmlWnd__InitializeWindowVariables_x                      0x9AFAA0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A8880
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A88F0
#define CStmlWnd__SetSTMLText_x                                    0x9A7660
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B0E60
#define CStmlWnd__UpdateHistoryString_x                            0x9AFE50

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A6510
#define CTabWnd__DrawCurrentPage_x                                 0x9A6EA0
#define CTabWnd__DrawTab_x                                         0x9A6A90
#define CTabWnd__GetCurrentPage_x                                  0x9A5C70
#define CTabWnd__GetPageInnerRect_x                                0x9A5EA0
#define CTabWnd__GetTabInnerRect_x                                 0x9A5DE0
#define CTabWnd__GetTabRect_x                                      0x9A5CA0
#define CTabWnd__InsertPage_x                                      0x9A6090
#define CTabWnd__RemovePage_x                                      0x9A61E0
#define CTabWnd__SetPage_x                                         0x9A5F20
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A6410
#define CTabWnd__UpdatePage_x                                      0x9A6880
#define CTabWnd__GetPageFromTabIndex_x                             0x9A69D0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A5C60

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x9A5600
#define CPageWnd__FlashTab_x                                       0x9A5660

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC9F0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x978700
#define CTextureFont__GetTextExtent_x                              0x978A00

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B7600

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x9630F0

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x541810
#define CXStr__CXStr1_x                                            0x482740
#define CXStr__CXStr3_x                                            0x94A4A0
#define CXStr__dCXStr_x                                            0x478F40
#define CXStr__operator_equal_x                                    0x94A6E0
#define CXStr__operator_equal1_x                                   0x94A720
#define CXStr__operator_plus_equal1_x                              0x94B180
#define CXStr__SetString_x                                         0x94D020
#define CXStr__operator_char_p_x                                   0x94ABD0
#define CXStr__GetChar_x                                           0x94C980
#define CXStr__Delete_x                                            0x94C250
#define CXStr__GetUnicode_x                                        0x94C9F0
#define CXStr__Insert_x                                            0x94CA50
#define CXStr__FindNext_x                                          0x94C6A0
#define CXStr__Copy_x                                              0x94C060

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99DCE0
#define CXWnd__BringToTop_x                                        0x97FD40
#define CXWnd__ClrFocus_x                                          0x97F6C0
#define CXWnd__Destroy_x                                           0x97F770
#define CXWnd__DoAllDrawing_x                                      0x97B8E0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97B8B0
#define CXWnd__DrawColoredRect_x                                   0x97BE70
#define CXWnd__DrawTooltip_x                                       0x979E00
#define CXWnd__DrawTooltipAtPoint_x                                0x979EC0
#define CXWnd__GetBorderFrame_x                                    0x97BB10
#define CXWnd__GetChildWndAt_x                                     0x97FDE0
#define CXWnd__GetClientClipRect_x                                 0x97DEB0
#define CXWnd__GetScreenClipRect_x                                 0x97DF80
#define CXWnd__GetScreenRect_x                                     0x97E150
#define CXWnd__GetRelativeRect_x                                   0x97E210
#define CXWnd__GetTooltipRect_x                                    0x97BEC0
#define CXWnd__GetWindowTextA_x                                    0x4EFD30
#define CXWnd__IsActive_x                                          0x97C610
#define CXWnd__IsDescendantOf_x                                    0x97EBD0
#define CXWnd__IsReallyVisible_x                                   0x97EC00
#define CXWnd__IsType_x                                            0x980550
#define CXWnd__Move_x                                              0x97EC60
#define CXWnd__Move1_x                                             0x97ED60
#define CXWnd__ProcessTransition_x                                 0x97F850
#define CXWnd__Refade_x                                            0x97F040
#define CXWnd__Resize_x                                            0x97F2E0
#define CXWnd__Right_x                                             0x97FB30
#define CXWnd__SetFocus_x                                          0x97F680
#define CXWnd__SetFont_x                                           0x97F6F0
#define CXWnd__SetKeyTooltip_x                                     0x980310
#define CXWnd__SetMouseOver_x                                      0x97CF80
#define CXWnd__StartFade_x                                         0x97EAB0
#define CXWnd__GetChildItem_x                                      0x97FF60
#define CXWnd__SetParent_x                                         0x97E8F0
#define CXWnd__Minimize_x                                          0x97F350

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BBBA0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x982DA0
#define CXWndManager__DrawWindows_x                                0x982EF0
#define CXWndManager__GetKeyboardFlags_x                           0x985860
#define CXWndManager__HandleKeyboardMsg_x                          0x985440
#define CXWndManager__RemoveWnd_x                                  0x985B20
#define CXWndManager__RemovePendingDeletionWnd_x                   0x985FD0

// CDBStr
#define CDBStr__GetString_x                                        0x558410

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5CD0
#define EQ_Character__Cur_HP_x                                     0x4D9C50
#define EQ_Character__Cur_Mana_x                                   0x4E0EA0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C92F0
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B87A0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B88F0
#define EQ_Character__GetHPRegen_x                                 0x4E6970
#define EQ_Character__GetEnduranceRegen_x                          0x4E6F30
#define EQ_Character__GetManaRegen_x                               0x4E7370
#define EQ_Character__Max_Endurance_x                              0x680BB0
#define EQ_Character__Max_HP_x                                     0x4D9A80
#define EQ_Character__Max_Mana_x                                   0x680990
#define EQ_Character__doCombatAbility_x                            0x683720
#define EQ_Character__UseSkill_x                                   0x4E8540
#define EQ_Character__GetConLevel_x                                0x678CE0
#define EQ_Character__IsExpansionFlag_x                            0x5D1C90
#define EQ_Character__TotalEffect_x                                0x4CD800
#define EQ_Character__GetPCSpellAffect_x                           0x4CA120
#define EQ_Character__SpellDuration_x                              0x4C9B60
#define EQ_Character__MySpellDuration_x                            0x4B6E70
#define EQ_Character__GetAdjustedSkill_x                           0x4DCDC0
#define EQ_Character__GetBaseSkill_x                               0x4DDD60
#define EQ_Character__CanUseItem_x                                 0x4E11D0
#define EQ_Character__CanMedOnHorse_x                              0x4E8080

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x916830

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x698FA0

//PcClient
#define PcClient__vftable_x                                        0xB4D2DC
#define PcClient__PcClient_x                                       0x675DF0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C02A0
#define CCharacterListWnd__EnterWorld_x                            0x4BFC70
#define CCharacterListWnd__Quit_x                                  0x4BF990
#define CCharacterListWnd__UpdateList_x                            0x4BFE60

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x6582D0
#define EQ_Item__CreateItemTagString_x                             0x8EED20
#define EQ_Item__IsStackable_x                                     0x8F3E70
#define EQ_Item__GetImageNum_x                                     0x8F09E0
#define EQ_Item__CreateItemClient_x                                0x657240
#define EQ_Item__GetItemValue_x                                    0x8F1C40
#define EQ_Item__ValueSellMerchant_x                               0x8F5BA0
#define EQ_Item__IsKeyRingItem_x                                   0x8F3640
#define EQ_Item__CanGoInBag_x                                      0x6583F0
#define EQ_Item__IsEmpty_x                                         0x8F3030
#define EQ_Item__GetMaxItemCount_x                                 0x8F2030
#define EQ_Item__GetHeldItem_x                                     0x8F0890
#define EQ_Item__CanGemFitInSlot_x                                 0x8EE540

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x579430
#define EQ_LoadingS__Array_x                                       0xD98D30

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x6818E0
#define EQ_PC__GetAlternateAbilityId_x                             0x8FFC80
#define EQ_PC__GetCombatAbility_x                                  0x900200
#define EQ_PC__GetCombatAbilityTimer_x                             0x900270
#define EQ_PC__GetItemRecastTimer_x                                0x683D20
#define EQ_PC__HasLoreItem_x                                       0x679630
#define EQ_PC__AlertInventoryChanged_x                             0x6784B0
#define EQ_PC__GetPcZoneClient_x                                   0x6A96B0
#define EQ_PC__RemoveMyAffect_x                                    0x687580
#define EQ_PC__GetKeyRingItems_x                                   0x900D60
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9008C0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x900F40

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8070
#define EQItemList__add_object_x                                   0x6086B0
#define EQItemList__add_item_x                                     0x5D8650
#define EQItemList__delete_item_x                                  0x5D86A0
#define EQItemList__FreeItemList_x                                 0x5D85B0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554780

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69A9D0
#define EQPlayer__dEQPlayer_x                                      0x68D130
#define EQPlayer__DoAttack_x                                       0x6A33E0
#define EQPlayer__EQPlayer_x                                       0x68D980
#define EQPlayer__SetNameSpriteState_x                             0x691F20
#define EQPlayer__SetNameSpriteTint_x                              0x692DE0
#define PlayerBase__HasProperty_j_x                                0x9EB4D0
#define EQPlayer__IsTargetable_x                                   0x9EBA30
#define EQPlayer__CanSee_x                                         0x9EB820
#define EQPlayer__CanSee1_x                                        0x9EB8F0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EB590

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A71A0
#define PlayerZoneClient__GetLevel_x                               0x6A96F0
#define PlayerZoneClient__IsValidTeleport_x                        0x609B60
#define PlayerZoneClient__LegalPlayerRace_x                        0x5713F0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69DB70
#define EQPlayerManager__GetSpawnByName_x                          0x69DC20
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69DCB0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65BC20
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65BCF0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65BD30
#define KeypressHandler__ClearCommandStateArray_x                  0x65D1F0
#define KeypressHandler__HandleKeyDown_x                           0x65D210
#define KeypressHandler__HandleKeyUp_x                             0x65D2B0
#define KeypressHandler__SaveKeymapping_x                          0x65D860

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BA770
#define MapViewMap__SaveEx_x                                       0x7BDCAF
#define MapViewMap__SetZoom_x                                      0x7C3980

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9146C0

// StringTable 
#define StringTable__getString_x                                   0x90F410

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6871D0
#define PcZoneClient__RemovePetEffect_x                            0x687830
#define PcZoneClient__HasAlternateAbility_x                        0x6807F0
#define PcZoneClient__GetCurrentMod_x                              0x4EBF00
#define PcZoneClient__GetModCap_x                                  0x4EBE00
#define PcZoneClient__CanEquipItem_x                               0x680EB0
#define PcZoneClient__GetItemByID_x                                0x684250
#define PcZoneClient__RemoveBuffEffect_x                           0x6878E0
#define PcZoneClient__BandolierSwap_x                              0x681E90
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x683CC0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60E790

//IconCache
#define IconCache__GetIcon_x                                       0x74A0C0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x740C10
#define CContainerMgr__CloseContainer_x                            0x740F30
#define CContainerMgr__OpenExperimentContainer_x                   0x741A90

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x819F70

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650980

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7AF9B0
#define CLootWnd__RequestLootSlot_x                                0x7AEBD0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3650
#define EQ_Spell__SpellAffects_x                                   0x5A3B60
#define EQ_Spell__SpellAffectBase_x                                0x5A3880
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1220
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D11D0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4AE0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A3D70
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4B10
#define EQ_Spell__IsLullSpell_x                                    0x5A4240
#define __IsResEffectSpell_x                                       0x4D09D0

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1740

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x91F170
#define EQ_Affect__SetAffectData_x                                 0x91F740

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x866C60
#define CTargetWnd__WndNotification_x                              0x866400
#define CTargetWnd__RefreshTargetBuffs_x                           0x866760
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x8651E0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86B7D0
#define CTaskWnd__ConfirmAbandonTask_x                             0x86E880

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552340
#define CTaskManager__HandleMessage_x                              0x550210
#define CTaskManager__GetTaskStatus_x                              0x5523F0
#define CTaskManager__GetElementDescription_x                      0x552470

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E260
#define EqSoundManager__PlayScriptMp3_x                            0x59E460
#define EqSoundManager__SoundAssistPlay_x                          0x6C48F0
#define EqSoundManager__WaveInstancePlay_x                         0x6C3DE0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5414C0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A4A80
#define CTextureAnimation__Draw_x                                  0x9A4CC0
#define CTextureAnimation__AddBlankFrame_x                         0x9A48A0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A07D0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581A20
#define CAltAbilityData__GetMercMaxRank_x                          0x5819B0
#define CAltAbilityData__GetMaxRank_x                              0x575D80

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E190

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657090
#define CharacterBase__CreateItemGlobalIndex_x                     0x6448D0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x77E810
#define CharacterBase__GetItemByGlobalIndex_x                      0x926CF0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x926D40
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x725AE0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7263A0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726450

//messages
#define msg_spell_worn_off_x                                       0x5C9400
#define msg_new_text_x                                             0x5BCE30
#define __msgTokenTextParam_x                                      0x5CB860
#define msgTokenText_x                                             0x5CBC70

//SpellManager
#define SpellManager__vftable_x                                    0xB37520
#define SpellManager__SpellManager_x                               0x6C8510
#define Spellmanager__LoadTextSpells_x                             0x6C8E10
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C86E0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9EFD20

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x780A40
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5CFF90
#define ItemGlobalIndex__IsEquippedLocation_x                      0x670CD0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D1E50

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x91FC00
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x91FF50

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A7AF0

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x745980
#define CCursorAttachment__AttachToCursor1_x                       0x7459C0
#define CCursorAttachment__Deactivate_x                            0x746F50

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x9963E0
#define CSidlManagerBase__CreatePageWnd_x                          0x995BC0
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x991090
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x991020

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B61D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B5E50

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5222E0
#define CFindItemWnd__WndNotification_x                            0x5231A0
#define CFindItemWnd__Update_x                                     0x523DF0
#define CFindItemWnd__PickupSelectedItem_x                         0x521980

//IString
#define IString__Append_x                                          0x557E90

//Camera
#define CDisplay__cameraType_x                                     0xEDCEE0
#define EverQuest__Cameras_x                                       0xDAC0E4

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CFA0
#define LootFiltersManager__GetItemFilterData_x                    0x52C8D0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C900
#define LootFiltersManager__SetItemLootFilter_x                    0x52CB10

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x806950

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F59E0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BED70

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73D5B0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92A9B0
#define CDistillerInfo__Instance_x                                 0x92A8F0

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7602D0
#define CGroupWnd__UpdateDisplay_x                                 0x75F520

//ItemBase
#define ItemBase__IsLore_x                                         0x8F36E0
#define ItemBase__IsLoreEquipped_x                                 0x8F3750

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608610
#define EQPlacedItemManager__GetItemByGuid_x                       0x608750
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x6087B0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B34D0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B7D90

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517CE0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502830
#define FactionManagerClient__HandleFactionMessage_x               0x503050
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503870
#define FactionManagerClient__GetMaxFaction_x                      0x50388F
#define FactionManagerClient__GetMinFaction_x                      0x503840

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F610

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x977370

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E410

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F880

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580BF0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CC4A0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B34D0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC7B0

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8550

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE49778

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6E9B40
#define CAAWnd__UpdateSelected_x                                   0x6E61E0
#define CAAWnd__Update_x                                           0x6E8E70

//CXRect
#define CXRect__operator_and_x                                     0x755780

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D230

//
#define __eq_delete_x                                              0x9F5FC3
#define __eq_new_x                                                 0x9F6534

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
