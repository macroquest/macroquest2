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
******************************************************************************/b
#ifdef PRIVATE
#if defined(TEST)
#include "eqgame-private(test).h"
#endif
#endif

#define __ClientName                                              "eqgame"
#define __ExpectedVersionDate                                     "Jun 23 2021"
#define __ExpectedVersionTime                                     "08:41:21"
#define __ActualVersionDate_x                                      0xB53124
#define __ActualVersionTime_x                                      0xB53118
#define __ActualVersionBuild_x                                     0xB432D4

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x665460
#define __MemChecker1_x                                            0x950620
#define __MemChecker2_x                                            0x6DF730
#define __MemChecker3_x                                            0x6DF6A0
#define __MemChecker4_x                                            0x8A36F0
#define __EncryptPad0_x                                            0xE55B50
#define __EncryptPad1_x                                            0xEB0360
#define __EncryptPad2_x                                            0xE64D78
#define __EncryptPad3_x                                            0xE64978
#define __EncryptPad4_x                                            0xEA1170
#define __EncryptPad5_x                                            0xFA3C28
#define __AC1_x                                                    0x85E260
#define __AC2_x                                                    0x619F9F
#define __AC3_x                                                    0x621361
#define __AC4_x                                                    0x6254D0
#define __AC5_x                                                    0x62BE4F
#define __AC6_x                                                    0x630596
#define __AC7_x                                                    0x619A00
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
#define __do_loot_x                                                0x5E2710
#define __DrawHandler_x                                            0x1623448
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
#define __SubscriptionType_x                                       0xFE87C0
#define __TargetAggroHolder_x                                      0xFB7088
#define __ZoneType_x                                               0xDB1208
#define __GroupAggro_x                                             0xFB70C8
#define __LoginName_x                                              0xFA43A4
#define __Inviter_x                                                0xE4F654
#define __AttackOnAssist_x                                         0xDB1D04
#define __UseTellWindows_x                                         0xDB203C
#define __gfMaxZoomCameraDistance_x                                0xB4AFAC
#define __gfMaxCameraDistance_x                                    0xB738BC
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
#define pinstCamActor_x                                            0xEE306C
#define pinstCDBStr_x                                              0xEE2C40
#define pinstCDisplay_x                                            0xF94CBC
#define pinstCEverQuest_x                                          0xFA3C3C
#define pinstEverQuestInfo_x                                       0xDB0D20
#define pinstCharData_x                                            0xF94CAC
#define pinstCharSpawn_x                                           0xF97594
#define pinstControlledMissile_x                                   0xF975A0
#define pinstControlledPlayer_x                                    0xF97594
#define pinstCResolutionHandler_x                                  0x1623670
#define pinstCSidlManager_x                                        0x162260C
#define pinstCXWndManager_x                                        0x1622604
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
#define pinstImeManager_x                                          0x1622608
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
#define pinstViewActor_x                                           0xEE3068
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
#define pinstCButtonWnd_x                                          0x1622870
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
#define pinstCContextMenuManager_x                                 0x16225C0
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
#define pinstCNoteWnd_x                                            0xEE2E1C
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
#define pinstCSkillsSelectWnd_x                                    0xEE3070
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
#define __CastRay_x                                                0x5DD9D0
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DDC60
#define __ConvertItemTags_x                                        0x5FADD0
#define __CleanItemTags_x                                          0x47DA80
#define __DoesFileExist_x                                          0x9535C0
#define __EQGetTime_x                                              0x950290
#define __ExecuteCmd_x                                             0x5D5E10
#define __FixHeading_x                                             0x9EE790
#define __FlushDxKeyboard_x                                        0x6DAA30
#define __GameLoop_x                                               0x6DE330
#define __get_bearing_x                                            0x5DD570
#define __get_melee_range_x                                        0x5DDEA0
#define __GetAnimationCache_x                                      0x74D190
#define __GetGaugeValueFromEQ_x                                    0x85C6A0
#define __GetLabelFromEQ_x                                         0x85E1E0
#define __GetXTargetType_x                                         0x9F0B00
#define __HandleMouseWheel_x                                       0x6DF7C0
#define __HeadingDiff_x                                            0x9EE7F0
#define __HelpPath_x                                               0xF9C904
#define __ExecuteFrontEnd_x                                        0x6DB210
#define __NewUIINI_x                                               0x85C370
#define __ProcessGameEvents_x                                      0x6445A0
#define __ProcessMouseEvent_x                                      0x643CA0
#define __SaveColors_x                                             0x571E50
#define __STMLToText_x                                             0x98C490
#define __ToggleKeyRingItem_x                                      0x52B020
#define CMemoryMappedFile__SetFile_x                               0xADEF30
#define CrashDetected_x                                            0x6DCF40
#define DrawNetStatus_x                                            0x673AD0
#define Expansion_HoT_x                                            0xDB1CF0
#define Teleport_Table_Size_x                                      0xF970E8
#define Teleport_Table_x                                           0xF94CC0
#define Util__FastTime_x                                           0x94FE50
#define __CopyLayout_x                                             0x6606C0
#define __WndProc_x                                                0x6DD440
#define __ProcessKeyboardEvent_x                                   0x6DC980

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B520
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B3A0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4956A0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948E0

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x57AE50
#define AltAdvManager__IsAbilityReady_x                            0x579A30
#define AltAdvManager__GetAAById_x                                 0x579DD0
#define AltAdvManager__CanTrainAbility_x                           0x579E40
#define AltAdvManager__CanSeeAbility_x                             0x57A1F0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D15F0
#define CharacterZoneClient__HasSkill_x                            0x4DCD20
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE460
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8A40
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1200
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E1340
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E1440
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E1540
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAC80
#define CharacterZoneClient__BardCastBard_x                        0x4CDC90
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5140
#define CharacterZoneClient__GetEffect_x                           0x4C1140
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC290
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC340
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC3E0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC5A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC780
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B89F0
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF600
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEF50

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x708650
#define CBankWnd__WndNotification_x                                0x7083F0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x713060

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70DCC0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70BC90

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x717750

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x989A30
#define CButtonWnd__CButtonWnd_x                                   0x9883A0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x73A910
#define CChatManager__InitContextMenu_x                            0x733870
#define CChatManager__FreeChatWindow_x                             0x7394F0
#define CChatManager__SetLockedActiveChatWindow_x                  0x73A5F0
#define CChatManager__CreateChatWindow_x                           0x739B10

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2610

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99F8E0
#define CContextMenu__dCContextMenu_x                              0x99FB10
#define CContextMenu__AddMenuItem_x                                0x99FB20
#define CContextMenu__RemoveMenuItem_x                             0x99FE20
#define CContextMenu__RemoveAllMenuItems_x                         0x99FE40
#define CContextMenu__CheckMenuItem_x                              0x99FEA0
#define CContextMenu__SetMenuItem_x                                0x99FD50
#define CContextMenu__AddSeparator_x                               0x99FCB0

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A0430
#define CContextMenuManager__RemoveMenu_x                          0x9A04A0
#define CContextMenuManager__PopupMenu_x                           0x9A0560
#define CContextMenuManager__Flush_x                               0x9A03D0
#define CContextMenuManager__GetMenu_x                             0x49D910
#define CContextMenuManager__CreateDefaultMenu_x                   0x747160

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92A9E0
#define CChatService__GetFriendName_x                              0x92A9F0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73B270
#define CChatWindow__Clear_x                                       0x73C6B0
#define CChatWindow__WndNotification_x                             0x73CE30
#define CChatWindow__AddHistory_x                                  0x73BF10

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99C900
#define CComboWnd__Draw_x                                          0x99BDA0
#define CComboWnd__GetCurChoice_x                                  0x99C6D0
#define CComboWnd__GetListRect_x                                   0x99C250
#define CComboWnd__GetTextRect_x                                   0x99C960
#define CComboWnd__InsertChoice_x                                  0x99C3E0
#define CComboWnd__SetColors_x                                     0x99C3B0
#define CComboWnd__SetChoice_x                                     0x99C6B0
#define CComboWnd__GetItemCount_x                                  0x99C6E0
#define CComboWnd__GetCurChoiceText_x                              0x99C710
#define CComboWnd__GetChoiceText_x                                 0x99C6F0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99C470

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x7447E0
#define CContainerWnd__vftable_x                                   0xB5C374
#define CContainerWnd__SetContainer_x                              0x746020

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56C650
#define CDisplay__PreZoneMainUI_x                                  0x56C660
#define CDisplay__CleanGameUI_x                                    0x571C30
#define CDisplay__GetClickedActor_x                                0x564420
#define CDisplay__GetUserDefinedColor_x                            0x55C190
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x565F30
#define CDisplay__is3dON_x                                         0x560CB0
#define CDisplay__ReloadUI_x                                       0x56B970
#define CDisplay__WriteTextHD2_x                                   0x560AA0
#define CDisplay__TrueDistance_x                                   0x567F10
#define CDisplay__SetViewActor_x                                   0x563D40
#define CDisplay__GetFloorHeight_x                                 0x560D70
#define CDisplay__SetRenderWindow_x                                0x55F6F0
#define CDisplay__ToggleScreenshotMode_x                           0x563810

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C1FE0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A33B0
#define CEditWnd__EnsureCaretVisible_x                             0x9A56D0
#define CEditWnd__GetCaretPt_x                                     0x9A4560
#define CEditWnd__GetCharIndexPt_x                                 0x9A4320
#define CEditWnd__GetDisplayString_x                               0x9A41D0
#define CEditWnd__GetHorzOffset_x                                  0x9A2930
#define CEditWnd__GetLineForPrintableChar_x                        0x9A55E0
#define CEditWnd__GetSelStartPt_x                                  0x9A45C0
#define CEditWnd__GetSTMLSafeText_x                                0x9A3FE0
#define CEditWnd__PointFromPrintableChar_x                         0x9A5250
#define CEditWnd__SelectableCharFromPoint_x                        0x9A53A0
#define CEditWnd__SetEditable_x                                    0x9A4690
#define CEditWnd__SetWindowTextA_x                                 0x9A3D30
#define CEditWnd__ReplaceSelection_x                               0x9A4E10
#define CEditWnd__ReplaceSelection1_x                              0x9A4D90

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62FC10
#define CEverQuest__ClickedPlayer_x                                0x621140
#define CEverQuest__CreateTargetIndicator_x                        0x641520
#define CEverQuest__DeleteTargetIndicator_x                        0x6415B0
#define CEverQuest__DoTellWindow_x                                 0x4F2710
#define CEverQuest__OutputTextToLog_x                              0x4F29E0
#define CEverQuest__DropHeldItemOnGround_x                         0x616150
#define CEverQuest__dsp_chat_x                                     0x4F2DB0
#define CEverQuest__trimName_x                                     0x63CB20
#define CEverQuest__Emote_x                                        0x6302D0
#define CEverQuest__EnterZone_x                                    0x629F50
#define CEverQuest__GetBodyTypeDesc_x                              0x635860
#define CEverQuest__GetClassDesc_x                                 0x635EA0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6364A0
#define CEverQuest__GetDeityDesc_x                                 0x63FCD0
#define CEverQuest__GetLangDesc_x                                  0x636660
#define CEverQuest__GetRaceDesc_x                                  0x635E80
#define CEverQuest__InterpretCmd_x                                 0x640340
#define CEverQuest__LeftClickedOnPlayer_x                          0x61A6D0
#define CEverQuest__LMouseUp_x                                     0x618700
#define CEverQuest__RightClickedOnPlayer_x                         0x61B2C0
#define CEverQuest__RMouseUp_x                                     0x6199C0
#define CEverQuest__SetGameState_x                                 0x615ED0
#define CEverQuest__UPCNotificationFlush_x                         0x63CA40
#define CEverQuest__IssuePetCommand_x                              0x637C60
#define CEverQuest__ReportSuccessfulHit_x                          0x631BE0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x7580E0
#define CGaugeWnd__CalcLinesFillRect_x                             0x758140
#define CGaugeWnd__Draw_x                                          0x7576F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4830
#define CGuild__GetGuildName_x                                     0x4B3050
#define CGuild__GetGuildIndex_x                                    0x4B3770

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x775510

//CHotButton
#define CHotButton__SetCheck_x                                     0x654B50
#define CHotButton__SetButtonSize_x                                0x654F10

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x7824E0
#define CInvSlotMgr__MoveItem_x                                    0x7810C0
#define CInvSlotMgr__SelectSlot_x                                  0x7825A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F910
#define CInvSlot__SliderComplete_x                                 0x77CE00
#define CInvSlot__GetItemBase_x                                    0x77C6C0
#define CInvSlot__UpdateItem_x                                     0x77C8B0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x784220
#define CInvSlotWnd__CInvSlotWnd_x                                 0x783400
#define CInvSlotWnd__HandleLButtonUp_x                             0x783DA0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856B00
#define CItemDisplayWnd__UpdateStrings_x                           0x79B850
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x790B70
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x7910C0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79BEE0
#define CItemDisplayWnd__AboutToShow_x                             0x79B440
#define CItemDisplayWnd__WndNotification_x                         0x79D5F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79CD00
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79A320
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79B230

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88BC80

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2CD0
#define CItemDisplayManager__ShowItem_x                            0x7A2160

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9810

// CListWnd
#define CListWnd__CListWnd_x                                       0x96EE60
#define CListWnd__dCListWnd_x                                      0x96F150
#define CListWnd__AddColumn_x                                      0x973D00
#define CListWnd__AddColumn1_x                                     0x973E20
#define CListWnd__AddLine_x                                        0x974190
#define CListWnd__AddString_x                                      0x973F90
#define CListWnd__CalculateFirstVisibleLine_x                      0x973AB0
#define CListWnd__CalculateVSBRange_x                              0x9738A0
#define CListWnd__ClearSel_x                                       0x974A80
#define CListWnd__ClearAllSel_x                                    0x974AD0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x975560
#define CListWnd__Compare_x                                        0x973020
#define CListWnd__Draw_x                                           0x96F310
#define CListWnd__DrawColumnSeparators_x                           0x971E30
#define CListWnd__DrawHeader_x                                     0x972280
#define CListWnd__DrawItem_x                                       0x9728C0
#define CListWnd__DrawLine_x                                       0x971F90
#define CListWnd__DrawSeparator_x                                  0x971ED0
#define CListWnd__EnableLine_x                                     0x9716F0
#define CListWnd__EnsureVisible_x                                  0x975490
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x9749C0
#define CListWnd__GetColumnTooltip_x                               0x971270
#define CListWnd__GetColumnMinWidth_x                              0x9712E0
#define CListWnd__GetColumnWidth_x                                 0x9711F0
#define CListWnd__GetCurSel_x                                      0x970B90
#define CListWnd__GetItemAtPoint_x                                 0x971960
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x9719D0
#define CListWnd__GetItemColor_x                                   0x970F10
#define CListWnd__GetItemData_x                                    0x970C10
#define CListWnd__GetItemHeight_x                                  0x970FC0
#define CListWnd__GetItemIcon_x                                    0x970D90
#define CListWnd__GetItemRect_x                                    0x9717E0
#define CListWnd__GetItemText_x                                    0x970C50
#define CListWnd__GetSelList_x                                     0x974B20
#define CListWnd__GetSeparatorRect_x                               0x971C40
#define CListWnd__InsertLine_x                                     0x9745F0
#define CListWnd__RemoveLine_x                                     0x974810
#define CListWnd__SetColors_x                                      0x973870
#define CListWnd__SetColumnJustification_x                         0x9735A0
#define CListWnd__SetColumnLabel_x                                 0x973F30
#define CListWnd__SetColumnWidth_x                                 0x9734B0
#define CListWnd__SetCurSel_x                                      0x974910
#define CListWnd__SetItemColor_x                                   0x975160
#define CListWnd__SetItemData_x                                    0x975120
#define CListWnd__SetItemText_x                                    0x974D40
#define CListWnd__ShiftColumnSeparator_x                           0x973660
#define CListWnd__Sort_x                                           0x973310
#define CListWnd__ToggleSel_x                                      0x974940
#define CListWnd__SetColumnsSizable_x                              0x973700
#define CListWnd__SetItemWnd_x                                     0x974FE0
#define CListWnd__GetItemWnd_x                                     0x970DE0
#define CListWnd__SetItemIcon_x                                    0x974DC0
#define CListWnd__CalculateCustomWindowPositions_x                 0x973BB0
#define CListWnd__SetVScrollPos_x                                  0x973490

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0C10
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BF230
#define CMapViewWnd__HandleLButtonDown_x                           0x7BC0C0
#define CMapViewWnd__WndNotification_x                             0x7C34F0

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3E20
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4780
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4DC0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7FC0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E28C0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE110
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3A80

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F7A30
#define CPacketScrambler__hton_x                                   0x8F7A20

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x992AF0
#define CSidlManager__FindScreenPieceTemplate_x                    0x992EC0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x992CF0
#define CSidlManager__CreateXWndFromTemplate_x                     0x996370
#define CSidlManager__CreateXWndFromTemplate1_x                    0x996600
#define CSidlManagerbase__CreateXWnd_x                             0x996640

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CC60
#define CSidlManager__CreateLabel_x                                0x84C830

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C2B0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98E840
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98E740
#define CSidlScreenWnd__ConvertToRes_x                             0x9BC230
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98E0C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98DDB0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98DE80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98DF50
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98F0C0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98F5A0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98F2B0
#define CSidlScreenWnd__Init1_x                                    0x98D860
#define CSidlScreenWnd__LoadIniInfo_x                              0x98F5F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x9901E0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98CC60
#define CSidlScreenWnd__StoreIniInfo_x                             0x98FD50
#define CSidlScreenWnd__StoreIniVis_x                              0x9900D0
#define CSidlScreenWnd__WndNotification_x                          0x98EF90
#define CSidlScreenWnd__GetChildItem_x                             0x98F520
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97DA60
#define CSidlScreenWnd__m_layoutCopy_x                             0x1622490

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C2490
#define CSkillMgr__GetSkillCap_x                                   0x6C2660
#define CSkillMgr__GetNameToken_x                                  0x6C1CD0
#define CSkillMgr__IsActivatedSkill_x                              0x6C1DC0
#define CSkillMgr__IsCombatSkill_x                                 0x6C1D30

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A1510
#define CSliderWnd__SetValue_x                                     0x9A1340
#define CSliderWnd__SetNumTicks_x                                  0x9A13A0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x8534E0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AA980
#define CStmlWnd__ParseSTML_x                                      0x9ABB00
#define CStmlWnd__CalculateHSBRange_x                              0x9AB8D0
#define CStmlWnd__CalculateVSBRange_x                              0x9AB850
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B0700
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B13A0
#define CStmlWnd__ForceParseNow_x                                  0x9AAEF0
#define CStmlWnd__GetNextTagPiece_x                                0x9B0660
#define CStmlWnd__GetVisibleText_x                                 0x9AAF10
#define CStmlWnd__InitializeWindowVariables_x                      0x9B11F0
#define CStmlWnd__MakeStmlColorTag_x                               0x9AA020
#define CStmlWnd__MakeWndNotificationTag_x                         0x9AA090
#define CStmlWnd__SetSTMLText_x                                    0x9A8E00
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B25C0
#define CStmlWnd__UpdateHistoryString_x                            0x9B15A0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A7CB0
#define CTabWnd__DrawCurrentPage_x                                 0x9A8640
#define CTabWnd__DrawTab_x                                         0x9A8230
#define CTabWnd__GetCurrentPage_x                                  0x9A7420
#define CTabWnd__GetPageInnerRect_x                                0x9A7650
#define CTabWnd__GetTabInnerRect_x                                 0x9A7590
#define CTabWnd__GetTabRect_x                                      0x9A7450
#define CTabWnd__InsertPage_x                                      0x9A7840
#define CTabWnd__RemovePage_x                                      0x9A7980
#define CTabWnd__SetPage_x                                         0x9A76D0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A7BB0
#define CTabWnd__UpdatePage_x                                      0x9A8020
#define CTabWnd__GetPageFromTabIndex_x                             0x9A8170
#define CTabWnd__GetCurrentTabIndex_x                              0x9A7410

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A6DC0
#define CPageWnd__FlashTab_x                                       0x9A6E20

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC8B0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x979EE0
#define CTextureFont__GetTextExtent_x                              0x97A1E0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B8CE0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x964910

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x544A70
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x94C1E0
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x94C420
#define CXStr__operator_equal1_x                                   0x94C460
#define CXStr__operator_plus_equal1_x                              0x94CEC0
#define CXStr__SetString_x                                         0x94ED60
#define CXStr__operator_char_p_x                                   0x94C910
#define CXStr__GetChar_x                                           0x94E6C0
#define CXStr__Delete_x                                            0x94DF90
#define CXStr__GetUnicode_x                                        0x94E730
#define CXStr__Insert_x                                            0x94E790
#define CXStr__FindNext_x                                          0x94E3E0
#define CXStr__Copy_x                                              0x94DDA0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99F540
#define CXWnd__BringToTop_x                                        0x9814C0
#define CXWnd__ClrFocus_x                                          0x980E50
#define CXWnd__Destroy_x                                           0x980EF0
#define CXWnd__DoAllDrawing_x                                      0x97D0C0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97D090
#define CXWnd__DrawColoredRect_x                                   0x97D640
#define CXWnd__DrawTooltip_x                                       0x97B620
#define CXWnd__DrawTooltipAtPoint_x                                0x97B6E0
#define CXWnd__GetBorderFrame_x                                    0x97D2E0
#define CXWnd__GetChildWndAt_x                                     0x981560
#define CXWnd__GetClientClipRect_x                                 0x97F680
#define CXWnd__GetScreenClipRect_x                                 0x97F750
#define CXWnd__GetScreenRect_x                                     0x97F910
#define CXWnd__GetRelativeRect_x                                   0x97F9C0
#define CXWnd__GetTooltipRect_x                                    0x97D690
#define CXWnd__GetWindowTextA_x                                    0x4F25B0
#define CXWnd__IsActive_x                                          0x97DDD0
#define CXWnd__IsDescendantOf_x                                    0x980380
#define CXWnd__IsReallyVisible_x                                   0x9803B0
#define CXWnd__IsType_x                                            0x981CB0
#define CXWnd__Move_x                                              0x980420
#define CXWnd__Move1_x                                             0x980520
#define CXWnd__ProcessTransition_x                                 0x980FD0
#define CXWnd__Refade_x                                            0x9807F0
#define CXWnd__Resize_x                                            0x980A80
#define CXWnd__Right_x                                             0x9812B0
#define CXWnd__SetFocus_x                                          0x980E10
#define CXWnd__SetFont_x                                           0x980E80
#define CXWnd__SetKeyTooltip_x                                     0x981A80
#define CXWnd__SetMouseOver_x                                      0x97E760
#define CXWnd__StartFade_x                                         0x980260
#define CXWnd__GetChildItem_x                                      0x9816D0
#define CXWnd__SetParent_x                                         0x980090
#define CXWnd__Minimize_x                                          0x980AF0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BD280

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x984520
#define CXWndManager__DrawWindows_x                                0x984670
#define CXWndManager__GetKeyboardFlags_x                           0x986FE0
#define CXWndManager__HandleKeyboardMsg_x                          0x986BD0
#define CXWndManager__RemoveWnd_x                                  0x9872B0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x987770

// CDBStr
#define CDBStr__GetString_x                                        0x55ACA0

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5AC0
#define EQ_Character__Cur_HP_x                                     0x4D9990
#define EQ_Character__Cur_Mana_x                                   0x4E1A70
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9130
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8600
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8750
#define EQ_Character__GetHPRegen_x                                 0x4E8460
#define EQ_Character__GetEnduranceRegen_x                          0x4E8A20
#define EQ_Character__GetManaRegen_x                               0x4E8E60
#define EQ_Character__Max_Endurance_x                              0x683640
#define EQ_Character__Max_HP_x                                     0x4D97C0
#define EQ_Character__Max_Mana_x                                   0x683420
#define EQ_Character__doCombatAbility_x                            0x685F70
#define EQ_Character__UseSkill_x                                   0x4EAE80
#define EQ_Character__GetConLevel_x                                0x67B730
#define EQ_Character__IsExpansionFlag_x                            0x5D4670
#define EQ_Character__TotalEffect_x                                0x4CD5A0
#define EQ_Character__GetPCSpellAffect_x                           0x4C9F60
#define EQ_Character__SpellDuration_x                              0x4C99A0
#define EQ_Character__MySpellDuration_x                            0x4B6CC0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCAE0
#define EQ_Character__GetBaseSkill_x                               0x4DDA80
#define EQ_Character__CanUseItem_x                                 0x4E1DA0
#define EQ_Character__CanMedOnHorse_x                              0x4EA9C0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917EA0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69B040

//PcClient
#define PcClient__vftable_x                                        0xB4FEA4
#define PcClient__PcClient_x                                       0x678990

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C00D0
#define CCharacterListWnd__EnterWorld_x                            0x4BFAA0
#define CCharacterListWnd__Quit_x                                  0x4BF7C0
#define CCharacterListWnd__UpdateList_x                            0x4BFC90

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65AD60
#define EQ_Item__CreateItemTagString_x                             0x8F06B0
#define EQ_Item__IsStackable_x                                     0x8F59F0
#define EQ_Item__GetImageNum_x                                     0x8F23E0
#define EQ_Item__CreateItemClient_x                                0x659CE0
#define EQ_Item__GetItemValue_x                                    0x8F36A0
#define EQ_Item__ValueSellMerchant_x                               0x8F7760
#define EQ_Item__IsKeyRingItem_x                                   0x8F5190
#define EQ_Item__CanGoInBag_x                                      0x65AE80
#define EQ_Item__IsEmpty_x                                         0x8F4B50
#define EQ_Item__GetMaxItemCount_x                                 0x8F3AB0
#define EQ_Item__GetHeldItem_x                                     0x8F2290
#define EQ_Item__CanGemFitInSlot_x                                 0x8EFE90

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57BC50
#define EQ_LoadingS__Array_x                                       0xD9ED10

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x684130
#define EQ_PC__GetAlternateAbilityId_x                             0x9016E0
#define EQ_PC__GetCombatAbility_x                                  0x901C60
#define EQ_PC__GetCombatAbilityTimer_x                             0x901CD0
#define EQ_PC__GetItemRecastTimer_x                                0x686570
#define EQ_PC__HasLoreItem_x                                       0x67C0E0
#define EQ_PC__AlertInventoryChanged_x                             0x67AFE0
#define EQ_PC__GetPcZoneClient_x                                   0x6AB750
#define EQ_PC__RemoveMyAffect_x                                    0x689A90
#define EQ_PC__GetKeyRingItems_x                                   0x902760
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9022C0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9028B0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5DA9F0
#define EQItemList__add_object_x                                   0x60AEE0
#define EQItemList__add_item_x                                     0x5DAFD0
#define EQItemList__delete_item_x                                  0x5DB020
#define EQItemList__FreeItemList_x                                 0x5DAF30

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556D30

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69CA70
#define EQPlayer__dEQPlayer_x                                      0x68F320
#define EQPlayer__DoAttack_x                                       0x6A5490
#define EQPlayer__EQPlayer_x                                       0x68FB70
#define EQPlayer__SetNameSpriteState_x                             0x694120
#define EQPlayer__SetNameSpriteTint_x                              0x694FF0
#define PlayerBase__HasProperty_j_x                                0x9ECB50
#define EQPlayer__IsTargetable_x                                   0x9ED0B0
#define EQPlayer__CanSee_x                                         0x9ECEA0
#define EQPlayer__CanSee1_x                                        0x9ECF70
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ECC10

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A9250
#define PlayerZoneClient__GetLevel_x                               0x6AB790
#define PlayerZoneClient__IsValidTeleport_x                        0x60C380
#define PlayerZoneClient__LegalPlayerRace_x                        0x573C10

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69FC30
#define EQPlayerManager__GetSpawnByName_x                          0x69FCE0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69FD70

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65E680
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65E750
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65E790
#define KeypressHandler__ClearCommandStateArray_x                  0x65FC50
#define KeypressHandler__HandleKeyDown_x                           0x65FC70
#define KeypressHandler__HandleKeyUp_x                             0x65FD10
#define KeypressHandler__SaveKeymapping_x                          0x6602C0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC8C0
#define MapViewMap__SaveEx_x                                       0x7BFDFF
#define MapViewMap__SetZoom_x                                      0x7C5A40

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x915D30

// StringTable 
#define StringTable__getString_x                                   0x910B50

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6896E0
#define PcZoneClient__RemovePetEffect_x                            0x689D40
#define PcZoneClient__HasAlternateAbility_x                        0x683280
#define PcZoneClient__GetCurrentMod_x                              0x4EE730
#define PcZoneClient__GetModCap_x                                  0x4EE630
#define PcZoneClient__CanEquipItem_x                               0x683940
#define PcZoneClient__GetItemByID_x                                0x686A40
#define PcZoneClient__GetItemByItemClass_x                         0x686B80
#define PcZoneClient__RemoveBuffEffect_x                           0x689DF0
#define PcZoneClient__BandolierSwap_x                              0x6846E0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x686510

//Doors
#define EQSwitch__UseSwitch_x                                      0x610F80

//IconCache
#define IconCache__GetIcon_x                                       0x74CB30

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7436E0
#define CContainerMgr__CloseContainer_x                            0x7439C0
#define CContainerMgr__OpenExperimentContainer_x                   0x744520

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BD30

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x6532E0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1B20
#define CLootWnd__RequestLootSlot_x                                0x7B0D50

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A61B0
#define EQ_Spell__SpellAffects_x                                   0x5A66B0
#define EQ_Spell__SpellAffectBase_x                                0x5A63D0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0F90
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0F40
#define EQ_Spell__IsSPAStacking_x                                  0x5A7460
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A68B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A7470
#define EQ_Spell__IsLullSpell_x                                    0x5A6CA0
#define __IsResEffectSpell_x                                       0x4D0740

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1600

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9207A0
#define EQ_Affect__SetAffectData_x                                 0x920D70

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868680
#define CTargetWnd__WndNotification_x                              0x867E10
#define CTargetWnd__RefreshTargetBuffs_x                           0x868170
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866BF0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D200
#define CTaskWnd__ConfirmAbandonTask_x                             0x8702D0

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x554900
#define CTaskManager__HandleMessage_x                              0x5527C0
#define CTaskManager__GetTaskStatus_x                              0x5549B0
#define CTaskManager__GetElementDescription_x                      0x554A30

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0D90
#define EqSoundManager__PlayScriptMp3_x                            0x5A0F90
#define EqSoundManager__SoundAssistPlay_x                          0x6C6950
#define EqSoundManager__WaveInstancePlay_x                         0x6C5E40

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544720

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A6240
#define CTextureAnimation__Draw_x                                  0x9A6480
#define CTextureAnimation__AddBlankFrame_x                         0x9A6060

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A2010

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x584210
#define CAltAbilityData__GetMercMaxRank_x                          0x5841A0
#define CAltAbilityData__GetMaxRank_x                              0x5785B0

//CTargetRing
#define CTargetRing__Cast_x                                        0x650AF0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x659B30
#define CharacterBase__CreateItemGlobalIndex_x                     0x6471F0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x659B10
#define CharacterBase__GetItemByGlobalIndex_x                      0x928300
#define CharacterBase__GetItemByGlobalIndex1_x                     0x928350
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x7285E0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x728EA0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728F50

//messages
#define msg_spell_worn_off_x                                       0x5CC030
#define msg_new_text_x                                             0x5BFE20
#define __msgTokenTextParam_x                                      0x5CE490
#define msgTokenText_x                                             0x5CE8A0

//SpellManager
#define SpellManager__vftable_x                                    0xB3A4BC
#define SpellManager__SpellManager_x                               0x6CA580
#define Spellmanager__LoadTextSpells_x                             0x6CAE80
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CA750

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F13B0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D46C0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D2B90
#define ItemGlobalIndex__IsEquippedLocation_x                      0x673870
#define ItemGlobalIndex__IsValidIndex_x                            0x5D4850

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9211A0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9214F0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9C70

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7483E0
#define CCursorAttachment__AttachToCursor1_x                       0x748420
#define CCursorAttachment__Deactivate_x                            0x7499B0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x997B90
#define CSidlManagerBase__CreatePageWnd_x                          0x997390
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x992870
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x992800

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B78B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B7530

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5248A0
#define CFindItemWnd__WndNotification_x                            0x525760
#define CFindItemWnd__Update_x                                     0x526340
#define CFindItemWnd__PickupSelectedItem_x                         0x523FB0

//IString
#define IString__Append_x                                          0x55A720

//Camera
#define CDisplay__cameraType_x                                     0xEE2E2C
#define EverQuest__Cameras_x                                       0xDB2048

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F560
#define LootFiltersManager__GetItemFilterData_x                    0x52EE90
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52EEC0
#define LootFiltersManager__SetItemLootFilter_x                    0x52F0D0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8088A0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F7070
#define CResolutionHandler__GetWindowedStyle_x                     0x6C0DD0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x740060

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92C680
#define CDistillerInfo__Instance_x                                 0x92C5C0

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762CE0
#define CGroupWnd__UpdateDisplay_x                                 0x761F40

//ItemBase
#define ItemBase__IsLore_x                                         0x8F5230
#define ItemBase__IsLoreEquipped_x                                 0x8F52B0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60AE40
#define EQPlacedItemManager__GetItemByGuid_x                       0x60AF80
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60AFE0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5510
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B9DF0

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A330

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5050F0
#define FactionManagerClient__HandleFactionMessage_x               0x505910
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x506100
#define FactionManagerClient__GetMaxFaction_x                      0x50611F
#define FactionManagerClient__GetMinFaction_x                      0x5060D0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511CE0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x978B70

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E330

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511F50

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5833E0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CE500

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5510

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC670

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DAED0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4F6DC

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EBEF0
#define CAAWnd__UpdateSelected_x                                   0x6E8590
#define CAAWnd__Update_x                                           0x6EB220

//CXRect
#define CXRect__operator_and_x                                     0x7581A0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240

//
#define __eq_delete_x                                              0x9F7655
#define __eq_new_x                                                 0x9F7BC4

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

