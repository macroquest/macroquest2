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
#define __ExpectedVersionDate                                     "Jul 13 2021"
#define __ExpectedVersionTime                                     "12:34:51"
#define __ActualVersionDate_x                                      0xB5314C
#define __ActualVersionTime_x                                      0xB53140
#define __ActualVersionBuild_x                                     0xB432F4

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x664F90
#define __MemChecker1_x                                            0x9501D0
#define __MemChecker2_x                                            0x6DF190
#define __MemChecker3_x                                            0x6DF100
#define __MemChecker4_x                                            0x8A3130
#define __EncryptPad0_x                                            0xE55B48
#define __EncryptPad1_x                                            0xEB0358
#define __EncryptPad2_x                                            0xE64D70
#define __EncryptPad3_x                                            0xE64970
#define __EncryptPad4_x                                            0xEA1168
#define __EncryptPad5_x                                            0xFA3C28
#define __AC1_x                                                    0x85DCA0
#define __AC2_x                                                    0x619ABF
#define __AC3_x                                                    0x620E51
#define __AC4_x                                                    0x624FC0
#define __AC5_x                                                    0x62B93F
#define __AC6_x                                                    0x630086
#define __AC7_x                                                    0x619520
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x244D84

// Direct Input
#define DI8__Main_x                                                0xFA3CD4
#define DI8__Keyboard_x                                            0xFA3CD8
#define DI8__Mouse_x                                               0xFA3C34
#define DI8__Mouse_Copy_x                                          0xDB0D8C
#define DI8__Mouse_Check_x                                         0xFA177C
#define __AutoSkillArray_x                                         0xDB18A8
#define __Attack_x                                                 0xE4F6CB
#define __Autofire_x                                               0xE4F6CC
#define __BindList_x                                               0xDA6458
#define g_eqCommandStates_x                                        0xDA71C0
#define __Clicks_x                                                 0xDB0E44
#define __CommandList_x                                            0xDA7D48
#define __CurrentMapLabel_x                                        0xFB46D4
#define __CurrentSocial_x                                          0xC6146C
#define __DoAbilityList_x                                          0xDE71EC
#define __do_loot_x                                                0x5E2220
#define __DrawHandler_x                                            0x1623468
#define __GroupCount_x                                             0xF96D4A
#define __Guilds_x                                                 0xF9B218
#define __gWorld_x                                                 0xF96F5C
#define __HWnd_x                                                   0xFA3C38
#define __heqmain_x                                                0xFA3C10
#define __InChatMode_x                                             0xDB0D74
#define __LastTell_x                                               0xDB28E8
#define __LMouseHeldTime_x                                         0xDB0EB0
#define __Mouse_x                                                  0xFA3CC0
#define __MouseLook_x                                              0xDB0E0A
#define __MouseEventTime_x                                         0xF9CC44
#define __gpbCommandEvent_x                                        0xF97068
#define __NetStatusToggle_x                                        0xDB0E0D
#define __PCNames_x                                                0xDB1E98
#define __RangeAttackReady_x                                       0xDB1B8C
#define __RMouseHeldTime_x                                         0xDB0EAC
#define __RunWalkState_x                                           0xDB0D78
#define __ScreenMode_x                                             0xEE3070
#define __ScreenX_x                                                0xDB0D2C
#define __ScreenY_x                                                0xDB0D28
#define __ScreenXMax_x                                             0xDB0D30
#define __ScreenYMax_x                                             0xDB0D34
#define __ServerHost_x                                             0xF97233
#define __ServerName_x                                             0xDE71AC
#define __ShiftKeyDown_x                                           0xDB1408
#define __ShowNames_x                                              0xDB1D48
#define EverQuestInfo__bSocialChanged_x                            0xDE7234
#define __Socials_x                                                0xDE72AC
#define __SubscriptionType_x                                       0xFE87C0
#define __TargetAggroHolder_x                                      0xFB7088
#define __ZoneType_x                                               0xDB1208
#define __GroupAggro_x                                             0xFB70C8
#define __LoginName_x                                              0xFA43A4
#define __Inviter_x                                                0xE4F648
#define __AttackOnAssist_x                                         0xDB1D04
#define __UseTellWindows_x                                         0xDB2030
#define __gfMaxZoomCameraDistance_x                                0xB4AFDC
#define __gfMaxCameraDistance_x                                    0xB738E4
#define __pulAutoRun_x                                             0xDB0E28
#define __pulForward_x                                             0xDB2068
#define __pulBackward_x                                            0xDB206C
#define __pulTurnRight_x                                           0xDB2070
#define __pulTurnLeft_x                                            0xDB2074
#define __pulStrafeLeft_x                                          0xDB2078
#define __pulStrafeRight_x                                         0xDB207C

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF975B0
#define instEQZoneInfo_x                                           0xDB1000
#define pinstActiveBanker_x                                        0xF97554
#define pinstActiveCorpse_x                                        0xF9754C
#define pinstActiveGMaster_x                                       0xF97550
#define pinstActiveMerchant_x                                      0xF97548
#define pinstAltAdvManager_x                                       0xEE3EC0
#define pinstBandageTarget_x                                       0xF97564
#define pinstCamActor_x                                            0xEE3064
#define pinstCDBStr_x                                              0xEE2C40
#define pinstCDisplay_x                                            0xF94CC4
#define pinstCEverQuest_x                                          0xFA3C3C
#define pinstEverQuestInfo_x                                       0xDB0D20
#define pinstCharData_x                                            0xF94CB4
#define pinstCharSpawn_x                                           0xF9759C
#define pinstControlledMissile_x                                   0xF975A8
#define pinstControlledPlayer_x                                    0xF9759C
#define pinstCResolutionHandler_x                                  0x1623690
#define pinstCSidlManager_x                                        0x162262C
#define pinstCXWndManager_x                                        0x1622624
#define instDynamicZone_x                                          0xF9B0F0
#define pinstDZMember_x                                            0xF9B200
#define pinstDZTimerInfo_x                                         0xF9B204
#define pinstEqLogin_x                                             0xFA3CF0
#define instEQMisc_x                                               0xD9A8D8
#define pinstEQSoundManager_x                                      0xEE47D0
#define pinstEQSpellStrings_x                                      0xED38E0
#define instExpeditionLeader_x                                     0xF9B13A
#define instExpeditionName_x                                       0xF9B17A
#define pinstGroup_x                                               0xF96D46
#define pinstImeManager_x                                          0x1622628
#define pinstLocalPlayer_x                                         0xF97544
#define pinstMercenaryData_x                                       0xF9E73C
#define pinstMercenaryStats_x                                      0xFB7154
#define pinstModelPlayer_x                                         0xF9755C
#define pinstPCData_x                                              0xF94CB4
#define pinstSkillMgr_x                                            0xFA0828
#define pinstSpawnManager_x                                        0xF9F300
#define pinstSpellManager_x                                        0xFA0A68
#define pinstSpellSets_x                                           0xE482F4
#define pinstStringTable_x                                         0xF94CBC
#define pinstSwitchManager_x                                       0xF94B50
#define pinstTarget_x                                              0xF97598
#define pinstTargetObject_x                                        0xF94CAC
#define pinstTargetSwitch_x                                        0xF94CB0
#define pinstTaskMember_x                                          0xD9A420
#define pinstTrackTarget_x                                         0xF975A0
#define pinstTradeTarget_x                                         0xF97558
#define instTributeActive_x                                        0xD9A8F9
#define pinstViewActor_x                                           0xEE3060
#define pinstWorldData_x                                           0xF94CC0
#define pinstZoneAddr_x                                            0xDB12A0
#define pinstPlayerPath_x                                          0xF9F398
#define pinstTargetIndicator_x                                     0xFA0CD0
#define EQObject_Top_x                                             0xF94CA8
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE30D0
#define pinstCAchievementsWnd_x                                    0xEE2D50
#define pinstCActionsWnd_x                                         0xEE3058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE3080
#define pinstCAdvancedLootWnd_x                                    0xEE305C
#define pinstCAdventureLeaderboardWnd_x                            0xFADEF8
#define pinstCAdventureRequestWnd_x                                0xFADFA8
#define pinstCAdventureStatsWnd_x                                  0xFAE058
#define pinstCAggroMeterWnd_x                                      0xEE2DE0
#define pinstCAlarmWnd_x                                           0xEE30C8
#define pinstCAlertHistoryWnd_x                                    0xEE303C
#define pinstCAlertStackWnd_x                                      0xEE2E14
#define pinstCAlertWnd_x                                           0xEE2E1C
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
#define pinstCButtonWnd_x                                          0x1622890
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
#define pinstCContextMenuManager_x                                 0x16225E0
#define pinstCCursorAttachment_x                                   0xEE2DD4
#define pinstCDynamicZoneWnd_x                                     0xFB0920
#define pinstCEditLabelWnd_x                                       0xEE2D40
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
#define pinstCHelpWnd_x                                            0xEE302C
#define pinstCHeritageSelectionWnd_x                               0xEE2D8C
#define pinstCHotButtonWnd_x                                       0xFB36D0
#define pinstCHotButtonWnd1_x                                      0xFB36D0
#define pinstCHotButtonWnd2_x                                      0xFB36D4
#define pinstCHotButtonWnd3_x                                      0xFB36D8
#define pinstCHotButtonWnd4_x                                      0xFB36DC
#define pinstCIconSelectionWnd_x                                   0xEE2D58
#define pinstCInspectWnd_x                                         0xEE2D4C
#define pinstCInventoryWnd_x                                       0xEE3028
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
#define pinstCNoteWnd_x                                            0xEE2E24
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
#define pinstCSkillsSelectWnd_x                                    0xEE3084
#define pinstCSkillsWnd_x                                          0xEE307C
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
#define pinstCTrackingWnd_x                                        0xEE2D44
#define pinstCTradeskillWnd_x                                      0xFB78A8
#define pinstCTradeWnd_x                                           0xEE2D18
#define pinstCTrainWnd_x                                           0xEE3054
#define pinstCTributeBenefitWnd_x                                  0xFB7AA8
#define pinstCTributeMasterWnd_x                                   0xFB7B58
#define pinstCTributeTrophyWnd_x                                   0xFB7C08
#define pinstCVideoModesWnd_x                                      0xEE2D3C
#define pinstCVoiceMacroWnd_x                                      0xFA10E8
#define pinstCVoteResultsWnd_x                                     0xEE2DF8
#define pinstCVoteWnd_x                                            0xEE2DF4
#define pinstCZoneGuideWnd_x                                       0xEE3030
#define pinstCZonePathWnd_x                                        0xEE3038

#define pinstEQSuiteTextureLoader_x                                0xEB0918
#define pinstItemIconCache_x                                       0xFB0B20
#define pinstLootFiltersManager_x                                  0xEE2200
#define pinstRewardSelectionWnd_x                                  0xFB5B78

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DD4D0
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DD760
#define __ConvertItemTags_x                                        0x5FA8F0
#define __CleanItemTags_x                                          0x47DA80
#define __DoesFileExist_x                                          0x953160
#define __EQGetTime_x                                              0x94FE40
#define __ExecuteCmd_x                                             0x5D5910
#define __FixHeading_x                                             0x9EEAB0
#define __FlushDxKeyboard_x                                        0x6DA490
#define __GameLoop_x                                               0x6DDD90
#define __get_bearing_x                                            0x5DD070
#define __get_melee_range_x                                        0x5DD9A0
#define __GetAnimationCache_x                                      0x74CB30
#define __GetGaugeValueFromEQ_x                                    0x85C0E0
#define __GetLabelFromEQ_x                                         0x85DC20
#define __GetXTargetType_x                                         0x9F0E20
#define __HandleMouseWheel_x                                       0x6DF220
#define __HeadingDiff_x                                            0x9EEB10
#define __HelpPath_x                                               0xF9C904
#define __ExecuteFrontEnd_x                                        0x6DAC70
#define __NewUIINI_x                                               0x85BDB0
#define __ProcessGameEvents_x                                      0x6440A0
#define __ProcessMouseEvent_x                                      0x6437A0
#define __SaveColors_x                                             0x571E90
#define __STMLToText_x                                             0x98C850
#define __ToggleKeyRingItem_x                                      0x52B000
#define CMemoryMappedFile__SetFile_x                               0xADF220
#define CrashDetected_x                                            0x6DC9A0
#define DrawNetStatus_x                                            0x673520
#define Expansion_HoT_x                                            0xDB1CF0
#define Teleport_Table_Size_x                                      0xF970F0
#define Teleport_Table_x                                           0xF94CC8
#define Util__FastTime_x                                           0x94FA00
#define __CopyLayout_x                                             0x660210
#define __WndProc_x                                                0x6DCEA0
#define __ProcessKeyboardEvent_x                                   0x6DC3E0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B510
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B390
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495690
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948D0

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x57AE80
#define AltAdvManager__IsAbilityReady_x                            0x579A60
#define AltAdvManager__GetAAById_x                                 0x579E00
#define AltAdvManager__CanTrainAbility_x                           0x579E70
#define AltAdvManager__CanSeeAbility_x                             0x57A220

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1580
#define CharacterZoneClient__HasSkill_x                            0x4DCCF0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE430
#define CharacterZoneClient__IsStackBlocked_x                      0x4C89D0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1190
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E1340
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E1440
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E1540
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAC10
#define CharacterZoneClient__BardCastBard_x                        0x4CDC20
#define CharacterZoneClient__GetMaxEffects_x                       0x4C50D0
#define CharacterZoneClient__GetEffect_x                           0x4C10D0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC220
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC2D0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC370
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC530
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC710
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B89A0
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF5D0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEF20

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x708050
#define CBankWnd__WndNotification_x                                0x707DF0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712A80

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70D6D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70B6B0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x717160

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x989DF0
#define CButtonWnd__CButtonWnd_x                                   0x9887A0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x73A330
#define CChatManager__InitContextMenu_x                            0x733290
#define CChatManager__FreeChatWindow_x                             0x738F10
#define CChatManager__SetLockedActiveChatWindow_x                  0x73A010
#define CChatManager__CreateChatWindow_x                           0x739530

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2650

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99FC40
#define CContextMenu__dCContextMenu_x                              0x99FE70
#define CContextMenu__AddMenuItem_x                                0x99FE80
#define CContextMenu__RemoveMenuItem_x                             0x9A0190
#define CContextMenu__RemoveAllMenuItems_x                         0x9A01B0
#define CContextMenu__CheckMenuItem_x                              0x9A0210
#define CContextMenu__SetMenuItem_x                                0x9A00B0
#define CContextMenu__AddSeparator_x                               0x9A0010

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A07A0
#define CContextMenuManager__RemoveMenu_x                          0x9A0810
#define CContextMenuManager__PopupMenu_x                           0x9A08D0
#define CContextMenuManager__Flush_x                               0x9A0740
#define CContextMenuManager__GetMenu_x                             0x49D900
#define CContextMenuManager__CreateDefaultMenu_x                   0x746B10

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92A530
#define CChatService__GetFriendName_x                              0x92A540

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73AC90
#define CChatWindow__Clear_x                                       0x73C0D0
#define CChatWindow__WndNotification_x                             0x73C850
#define CChatWindow__AddHistory_x                                  0x73B930

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99CC70
#define CComboWnd__Draw_x                                          0x99C110
#define CComboWnd__GetCurChoice_x                                  0x99CA40
#define CComboWnd__GetListRect_x                                   0x99C5C0
#define CComboWnd__GetTextRect_x                                   0x99CCE0
#define CComboWnd__InsertChoice_x                                  0x99C750
#define CComboWnd__SetColors_x                                     0x99C720
#define CComboWnd__SetChoice_x                                     0x99CA20
#define CComboWnd__GetItemCount_x                                  0x99CA50
#define CComboWnd__GetCurChoiceText_x                              0x99CA80
#define CComboWnd__GetChoiceText_x                                 0x99CA60
#define CComboWnd__InsertChoiceAtIndex_x                           0x99C7E0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x7441C0
#define CContainerWnd__vftable_x                                   0xB5C39C
#define CContainerWnd__SetContainer_x                              0x7459E0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56C690
#define CDisplay__PreZoneMainUI_x                                  0x56C6A0
#define CDisplay__CleanGameUI_x                                    0x571C70
#define CDisplay__GetClickedActor_x                                0x564460
#define CDisplay__GetUserDefinedColor_x                            0x55C1D0
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x565F70
#define CDisplay__is3dON_x                                         0x560CF0
#define CDisplay__ReloadUI_x                                       0x56B9B0
#define CDisplay__WriteTextHD2_x                                   0x560AE0
#define CDisplay__TrueDistance_x                                   0x567F50
#define CDisplay__SetViewActor_x                                   0x563D80
#define CDisplay__GetFloorHeight_x                                 0x560DB0
#define CDisplay__SetRenderWindow_x                                0x55F730
#define CDisplay__ToggleScreenshotMode_x                           0x563850

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C2330

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A36B0
#define CEditWnd__EnsureCaretVisible_x                             0x9A5A10
#define CEditWnd__GetCaretPt_x                                     0x9A4880
#define CEditWnd__GetCharIndexPt_x                                 0x9A4630
#define CEditWnd__GetDisplayString_x                               0x9A44E0
#define CEditWnd__GetHorzOffset_x                                  0x9A2C50
#define CEditWnd__GetLineForPrintableChar_x                        0x9A5920
#define CEditWnd__GetSelStartPt_x                                  0x9A48E0
#define CEditWnd__GetSTMLSafeText_x                                0x9A42F0
#define CEditWnd__PointFromPrintableChar_x                         0x9A5570
#define CEditWnd__SelectableCharFromPoint_x                        0x9A56D0
#define CEditWnd__SetEditable_x                                    0x9A49B0
#define CEditWnd__SetWindowTextA_x                                 0x9A4040
#define CEditWnd__ReplaceSelection_x                               0x9A5130
#define CEditWnd__ReplaceSelection1_x                              0x9A50B0

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62F700
#define CEverQuest__ClickedPlayer_x                                0x620C30
#define CEverQuest__CreateTargetIndicator_x                        0x641020
#define CEverQuest__DeleteTargetIndicator_x                        0x6410B0
#define CEverQuest__DoTellWindow_x                                 0x4F2750
#define CEverQuest__OutputTextToLog_x                              0x4F2A20
#define CEverQuest__DropHeldItemOnGround_x                         0x615C70
#define CEverQuest__dsp_chat_x                                     0x4F2DF0
#define CEverQuest__trimName_x                                     0x63C610
#define CEverQuest__Emote_x                                        0x62FDC0
#define CEverQuest__EnterZone_x                                    0x629A40
#define CEverQuest__GetBodyTypeDesc_x                              0x635350
#define CEverQuest__GetClassDesc_x                                 0x635990
#define CEverQuest__GetClassThreeLetterCode_x                      0x635F90
#define CEverQuest__GetDeityDesc_x                                 0x63F7D0
#define CEverQuest__GetLangDesc_x                                  0x636150
#define CEverQuest__GetRaceDesc_x                                  0x635970
#define CEverQuest__InterpretCmd_x                                 0x63FE40
#define CEverQuest__LeftClickedOnPlayer_x                          0x61A1F0
#define CEverQuest__LMouseUp_x                                     0x618220
#define CEverQuest__RightClickedOnPlayer_x                         0x61ADE0
#define CEverQuest__RMouseUp_x                                     0x6194E0
#define CEverQuest__SetGameState_x                                 0x6159F0
#define CEverQuest__UPCNotificationFlush_x                         0x63C530
#define CEverQuest__IssuePetCommand_x                              0x637750
#define CEverQuest__ReportSuccessfulHit_x                          0x6316D0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757A60
#define CGaugeWnd__CalcLinesFillRect_x                             0x757AC0
#define CGaugeWnd__Draw_x                                          0x757070

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B47E0
#define CGuild__GetGuildName_x                                     0x4B3000
#define CGuild__GetGuildIndex_x                                    0x4B3720

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774ED0

//CHotButton
#define CHotButton__SetCheck_x                                     0x654670
#define CHotButton__SetButtonSize_x                                0x654A30

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781EC0
#define CInvSlotMgr__MoveItem_x                                    0x780A90
#define CInvSlotMgr__SelectSlot_x                                  0x781F80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F2E0
#define CInvSlot__SliderComplete_x                                 0x77C7C0
#define CInvSlot__GetItemBase_x                                    0x77C090
#define CInvSlot__UpdateItem_x                                     0x77C280

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x783BF0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782DD0
#define CInvSlotWnd__HandleLButtonUp_x                             0x783770

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856530
#define CItemDisplayWnd__UpdateStrings_x                           0x79B0F0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x790470
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x7909C0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B7E0
#define CItemDisplayWnd__AboutToShow_x                             0x79ACF0
#define CItemDisplayWnd__WndNotification_x                         0x79CEF0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C600
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799BE0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79AAE0

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88B6C0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A25F0
#define CItemDisplayManager__ShowItem_x                            0x7A1A40

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9110

// CListWnd
#define CListWnd__CListWnd_x                                       0x96F300
#define CListWnd__dCListWnd_x                                      0x96F5F0
#define CListWnd__AddColumn_x                                      0x9741C0
#define CListWnd__AddColumn1_x                                     0x9742E0
#define CListWnd__AddLine_x                                        0x974650
#define CListWnd__AddString_x                                      0x974450
#define CListWnd__CalculateFirstVisibleLine_x                      0x973F70
#define CListWnd__CalculateVSBRange_x                              0x973D60
#define CListWnd__ClearSel_x                                       0x974F40
#define CListWnd__ClearAllSel_x                                    0x974F90
#define CListWnd__CloseAndUpdateEditWindow_x                       0x975A40
#define CListWnd__Compare_x                                        0x9734F0
#define CListWnd__Draw_x                                           0x96F7B0
#define CListWnd__DrawColumnSeparators_x                           0x9722F0
#define CListWnd__DrawHeader_x                                     0x972750
#define CListWnd__DrawItem_x                                       0x972D90
#define CListWnd__DrawLine_x                                       0x972460
#define CListWnd__DrawSeparator_x                                  0x972390
#define CListWnd__EnableLine_x                                     0x971BA0
#define CListWnd__EnsureVisible_x                                  0x975960
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x974E80
#define CListWnd__GetColumnTooltip_x                               0x971720
#define CListWnd__GetColumnMinWidth_x                              0x971790
#define CListWnd__GetColumnWidth_x                                 0x9716A0
#define CListWnd__GetCurSel_x                                      0x971050
#define CListWnd__GetItemAtPoint_x                                 0x971E20
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x971E90
#define CListWnd__GetItemColor_x                                   0x9713D0
#define CListWnd__GetItemData_x                                    0x9710D0
#define CListWnd__GetItemHeight_x                                  0x971470
#define CListWnd__GetItemIcon_x                                    0x971250
#define CListWnd__GetItemRect_x                                    0x971C90
#define CListWnd__GetItemText_x                                    0x971110
#define CListWnd__GetSelList_x                                     0x974FE0
#define CListWnd__GetSeparatorRect_x                               0x972100
#define CListWnd__InsertLine_x                                     0x974AB0
#define CListWnd__RemoveLine_x                                     0x974CD0
#define CListWnd__SetColors_x                                      0x973D40
#define CListWnd__SetColumnJustification_x                         0x973A70
#define CListWnd__SetColumnLabel_x                                 0x9743F0
#define CListWnd__SetColumnWidth_x                                 0x973980
#define CListWnd__SetCurSel_x                                      0x974DD0
#define CListWnd__SetItemColor_x                                   0x975620
#define CListWnd__SetItemData_x                                    0x9755E0
#define CListWnd__SetItemText_x                                    0x975200
#define CListWnd__ShiftColumnSeparator_x                           0x973B30
#define CListWnd__Sort_x                                           0x9737E0
#define CListWnd__ToggleSel_x                                      0x974E00
#define CListWnd__SetColumnsSizable_x                              0x973BD0
#define CListWnd__SetItemWnd_x                                     0x9754A0
#define CListWnd__GetItemWnd_x                                     0x9712A0
#define CListWnd__SetItemIcon_x                                    0x975280
#define CListWnd__CalculateCustomWindowPositions_x                 0x974070
#define CListWnd__SetVScrollPos_x                                  0x973960

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C04B0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BEAD0
#define CMapViewWnd__HandleLButtonDown_x                           0x7BB960
#define CMapViewWnd__WndNotification_x                             0x7C2D80

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3740
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E40A0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4730
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7A10
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E21D0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EDC20
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3390

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F7400
#define CPacketScrambler__hton_x                                   0x8F73F0

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x992E90
#define CSidlManager__FindScreenPieceTemplate_x                    0x993260
#define CSidlManager__FindScreenPieceTemplate1_x                   0x993090
#define CSidlManager__CreateXWndFromTemplate_x                     0x996710
#define CSidlManager__CreateXWndFromTemplate1_x                    0x9969A0
#define CSidlManagerbase__CreateXWnd_x                             0x9969E0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84C6A0
#define CSidlManager__CreateLabel_x                                0x84C270

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84BCF0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98EBD0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98EAD0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BC580
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98E450
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98E140
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98E210
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98E2E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98F470
#define CSidlScreenWnd__EnableIniStorage_x                         0x98F950
#define CSidlScreenWnd__GetSidlPiece_x                             0x98F660
#define CSidlScreenWnd__Init1_x                                    0x98DC20
#define CSidlScreenWnd__LoadIniInfo_x                              0x98F9A0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x990580
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98D020
#define CSidlScreenWnd__StoreIniInfo_x                             0x9900F0
#define CSidlScreenWnd__StoreIniVis_x                              0x990470
#define CSidlScreenWnd__WndNotification_x                          0x98F340
#define CSidlScreenWnd__GetChildItem_x                             0x98F8D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97DF00
#define CSidlScreenWnd__m_layoutCopy_x                             0x16224B0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C1F40
#define CSkillMgr__GetSkillCap_x                                   0x6C2110
#define CSkillMgr__GetNameToken_x                                  0x6C1780
#define CSkillMgr__IsActivatedSkill_x                              0x6C1870
#define CSkillMgr__IsCombatSkill_x                                 0x6C17E0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A1850
#define CSliderWnd__SetValue_x                                     0x9A1680
#define CSliderWnd__SetNumTicks_x                                  0x9A16E0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x852F10

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AAC90
#define CStmlWnd__ParseSTML_x                                      0x9ABE40
#define CStmlWnd__CalculateHSBRange_x                              0x9ABC10
#define CStmlWnd__CalculateVSBRange_x                              0x9ABB80
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B0A70
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B1710
#define CStmlWnd__ForceParseNow_x                                  0x9AB200
#define CStmlWnd__GetNextTagPiece_x                                0x9B09D0
#define CStmlWnd__GetVisibleText_x                                 0x9AB220
#define CStmlWnd__InitializeWindowVariables_x                      0x9B1560
#define CStmlWnd__MakeStmlColorTag_x                               0x9AA330
#define CStmlWnd__MakeWndNotificationTag_x                         0x9AA3A0
#define CStmlWnd__SetSTMLText_x                                    0x9A9110
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B2930
#define CStmlWnd__UpdateHistoryString_x                            0x9B1910

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A7FC0
#define CTabWnd__DrawCurrentPage_x                                 0x9A8950
#define CTabWnd__DrawTab_x                                         0x9A8540
#define CTabWnd__GetCurrentPage_x                                  0x9A7730
#define CTabWnd__GetPageInnerRect_x                                0x9A7960
#define CTabWnd__GetTabInnerRect_x                                 0x9A78A0
#define CTabWnd__GetTabRect_x                                      0x9A7760
#define CTabWnd__InsertPage_x                                      0x9A7B50
#define CTabWnd__RemovePage_x                                      0x9A7C90
#define CTabWnd__SetPage_x                                         0x9A79E0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A7EC0
#define CTabWnd__UpdatePage_x                                      0x9A8330
#define CTabWnd__GetPageFromTabIndex_x                             0x9A8480
#define CTabWnd__GetCurrentTabIndex_x                              0x9A7720

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A7100
#define CPageWnd__FlashTab_x                                       0x9A7160

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC890

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x97A3E0
#define CTextureFont__GetTextExtent_x                              0x97A6E0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B9030

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x964DB0

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x544B00
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x94BD90
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x94BFD0
#define CXStr__operator_equal1_x                                   0x94C010
#define CXStr__operator_plus_equal1_x                              0x94CA70
#define CXStr__SetString_x                                         0x94E910
#define CXStr__operator_char_p_x                                   0x94C4C0
#define CXStr__GetChar_x                                           0x94E270
#define CXStr__Delete_x                                            0x94DB40
#define CXStr__GetUnicode_x                                        0x94E2E0
#define CXStr__Insert_x                                            0x94E340
#define CXStr__FindNext_x                                          0x94DF90
#define CXStr__Copy_x                                              0x94D950

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99F8A0
#define CXWnd__BringToTop_x                                        0x9818E0
#define CXWnd__ClrFocus_x                                          0x981260
#define CXWnd__Destroy_x                                           0x981310
#define CXWnd__DoAllDrawing_x                                      0x97D580
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97D550
#define CXWnd__DrawColoredRect_x                                   0x97DAF0
#define CXWnd__DrawTooltip_x                                       0x97BB20
#define CXWnd__DrawTooltipAtPoint_x                                0x97BBE0
#define CXWnd__GetBorderFrame_x                                    0x97D790
#define CXWnd__GetChildWndAt_x                                     0x981980
#define CXWnd__GetClientClipRect_x                                 0x97FAC0
#define CXWnd__GetScreenClipRect_x                                 0x97FB90
#define CXWnd__GetScreenRect_x                                     0x97FD50
#define CXWnd__GetRelativeRect_x                                   0x97FE10
#define CXWnd__GetTooltipRect_x                                    0x97DB40
#define CXWnd__GetWindowTextA_x                                    0x4F25F0
#define CXWnd__IsActive_x                                          0x97E270
#define CXWnd__IsDescendantOf_x                                    0x9807B0
#define CXWnd__IsReallyVisible_x                                   0x9807E0
#define CXWnd__IsType_x                                            0x982110
#define CXWnd__Move_x                                              0x980850
#define CXWnd__Move1_x                                             0x980950
#define CXWnd__ProcessTransition_x                                 0x9813F0
#define CXWnd__Refade_x                                            0x980C10
#define CXWnd__Resize_x                                            0x980E90
#define CXWnd__Right_x                                             0x9816D0
#define CXWnd__SetFocus_x                                          0x981220
#define CXWnd__SetFont_x                                           0x981290
#define CXWnd__SetKeyTooltip_x                                     0x981ED0
#define CXWnd__SetMouseOver_x                                      0x97EBD0
#define CXWnd__StartFade_x                                         0x980690
#define CXWnd__GetChildItem_x                                      0x981B00
#define CXWnd__SetParent_x                                         0x9804E0
#define CXWnd__Minimize_x                                          0x980F00

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BD5D0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x984960
#define CXWndManager__DrawWindows_x                                0x984AB0
#define CXWndManager__GetKeyboardFlags_x                           0x9873E0
#define CXWndManager__HandleKeyboardMsg_x                          0x986FD0
#define CXWndManager__RemoveWnd_x                                  0x9876A0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x987B60

// CDBStr
#define CDBStr__GetString_x                                        0x55ACE0

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5A50
#define EQ_Character__Cur_HP_x                                     0x4D9960
#define EQ_Character__Cur_Mana_x                                   0x4E1A70
#define EQ_Character__GetCastingTimeModifier_x                     0x4C90C0
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B85B0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8700
#define EQ_Character__GetHPRegen_x                                 0x4E8460
#define EQ_Character__GetEnduranceRegen_x                          0x4E8A20
#define EQ_Character__GetManaRegen_x                               0x4E8E60
#define EQ_Character__Max_Endurance_x                              0x683080
#define EQ_Character__Max_HP_x                                     0x4D9790
#define EQ_Character__Max_Mana_x                                   0x682E60
#define EQ_Character__doCombatAbility_x                            0x6859C0
#define EQ_Character__UseSkill_x                                   0x4EAEA0
#define EQ_Character__GetConLevel_x                                0x67B170
#define EQ_Character__IsExpansionFlag_x                            0x5D4180
#define EQ_Character__TotalEffect_x                                0x4CD530
#define EQ_Character__GetPCSpellAffect_x                           0x4C9EF0
#define EQ_Character__SpellDuration_x                              0x4C9930
#define EQ_Character__MySpellDuration_x                            0x4B6C70
#define EQ_Character__GetAdjustedSkill_x                           0x4DCAB0
#define EQ_Character__GetBaseSkill_x                               0x4DDA50
#define EQ_Character__CanUseItem_x                                 0x4E1DA0
#define EQ_Character__CanMedOnHorse_x                              0x4EA9E0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917960

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69AB10

//PcClient
#define PcClient__vftable_x                                        0xB4FED0
#define PcClient__PcClient_x                                       0x6783E0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0060
#define CCharacterListWnd__EnterWorld_x                            0x4BFA30
#define CCharacterListWnd__Quit_x                                  0x4BF750
#define CCharacterListWnd__UpdateList_x                            0x4BFC20

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65A890
#define EQ_Item__CreateItemTagString_x                             0x8F00D0
#define EQ_Item__IsStackable_x                                     0x8F5380
#define EQ_Item__GetImageNum_x                                     0x8F1D90
#define EQ_Item__CreateItemClient_x                                0x659810
#define EQ_Item__GetItemValue_x                                    0x8F3090
#define EQ_Item__ValueSellMerchant_x                               0x8F70C0
#define EQ_Item__IsKeyRingItem_x                                   0x8F4B50
#define EQ_Item__CanGoInBag_x                                      0x65A9B0
#define EQ_Item__IsEmpty_x                                         0x8F4520
#define EQ_Item__GetMaxItemCount_x                                 0x8F3490
#define EQ_Item__GetHeldItem_x                                     0x8F1C40
#define EQ_Item__CanGemFitInSlot_x                                 0x8EF8E0

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57BC80
#define EQ_LoadingS__Array_x                                       0xD9ED10

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x683B70
#define EQ_PC__GetAlternateAbilityId_x                             0x901170
#define EQ_PC__GetCombatAbility_x                                  0x9016F0
#define EQ_PC__GetCombatAbilityTimer_x                             0x901760
#define EQ_PC__GetItemRecastTimer_x                                0x685FC0
#define EQ_PC__HasLoreItem_x                                       0x67BB20
#define EQ_PC__AlertInventoryChanged_x                             0x67AA30
#define EQ_PC__GetPcZoneClient_x                                   0x6AB230
#define EQ_PC__RemoveMyAffect_x                                    0x689530
#define EQ_PC__GetKeyRingItems_x                                   0x9021F0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x901D50
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x902340

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5DA4E0
#define EQItemList__add_object_x                                   0x60AA20
#define EQItemList__add_item_x                                     0x5DAAC0
#define EQItemList__delete_item_x                                  0x5DAB10
#define EQItemList__FreeItemList_x                                 0x5DAA20

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556D90

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69C540
#define EQPlayer__dEQPlayer_x                                      0x68EE00
#define EQPlayer__DoAttack_x                                       0x6A4F60
#define EQPlayer__EQPlayer_x                                       0x68F650
#define EQPlayer__SetNameSpriteState_x                             0x693C00
#define EQPlayer__SetNameSpriteTint_x                              0x694AC0
#define PlayerBase__HasProperty_j_x                                0x9ECE80
#define EQPlayer__IsTargetable_x                                   0x9ED3E0
#define EQPlayer__CanSee_x                                         0x9ED1D0
#define EQPlayer__CanSee1_x                                        0x9ED2A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ECF40

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A8D20
#define PlayerZoneClient__GetLevel_x                               0x6AB270
#define PlayerZoneClient__IsValidTeleport_x                        0x60BEC0
#define PlayerZoneClient__LegalPlayerRace_x                        0x573C50

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69F6F0
#define EQPlayerManager__GetSpawnByName_x                          0x69F7A0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69F830

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65E1D0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65E2A0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65E2E0
#define KeypressHandler__ClearCommandStateArray_x                  0x65F7A0
#define KeypressHandler__HandleKeyDown_x                           0x65F7C0
#define KeypressHandler__HandleKeyUp_x                             0x65F860
#define KeypressHandler__SaveKeymapping_x                          0x65FE10

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC160
#define MapViewMap__SaveEx_x                                       0x7BF69F
#define MapViewMap__SetZoom_x                                      0x7C52D0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9157F0

// StringTable 
#define StringTable__getString_x                                   0x910610

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x689180
#define PcZoneClient__RemovePetEffect_x                            0x6897E0
#define PcZoneClient__HasAlternateAbility_x                        0x682CC0
#define PcZoneClient__GetCurrentMod_x                              0x4EE740
#define PcZoneClient__GetModCap_x                                  0x4EE640
#define PcZoneClient__CanEquipItem_x                               0x683380
#define PcZoneClient__GetItemByID_x                                0x686490
#define PcZoneClient__GetItemByItemClass_x                         0x6865D0
#define PcZoneClient__RemoveBuffEffect_x                           0x689890
#define PcZoneClient__BandolierSwap_x                              0x684130
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x685F60

//Doors
#define EQSwitch__UseSwitch_x                                      0x610AC0

//IconCache
#define IconCache__GetIcon_x                                       0x74C4D0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7430D0
#define CContainerMgr__CloseContainer_x                            0x7433B0
#define CContainerMgr__OpenExperimentContainer_x                   0x743F10

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81B570

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x652DD0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B13F0
#define CLootWnd__RequestLootSlot_x                                0x7B0620

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A6230
#define EQ_Spell__SpellAffects_x                                   0x5A6730
#define EQ_Spell__SpellAffectBase_x                                0x5A6450
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0F20
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0ED0
#define EQ_Spell__IsSPAStacking_x                                  0x5A74E0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A6930
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A74F0
#define EQ_Spell__IsLullSpell_x                                    0x5A6D20
#define __IsResEffectSpell_x                                       0x4D06D0

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1590

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9202C0
#define EQ_Affect__SetAffectData_x                                 0x920890

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8680E0
#define CTargetWnd__WndNotification_x                              0x867870
#define CTargetWnd__RefreshTargetBuffs_x                           0x867BD0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866650

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86CC50
#define CTaskWnd__ConfirmAbandonTask_x                             0x86FD00

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x554930
#define CTaskManager__HandleMessage_x                              0x552820
#define CTaskManager__GetTaskStatus_x                              0x5549E0
#define CTaskManager__GetElementDescription_x                      0x554A60

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0E10
#define EqSoundManager__PlayScriptMp3_x                            0x5A1010
#define EqSoundManager__SoundAssistPlay_x                          0x6C63B0
#define EqSoundManager__WaveInstancePlay_x                         0x6C58A0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5447B0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A65B0
#define CTextureAnimation__Draw_x                                  0x9A67F0
#define CTextureAnimation__AddBlankFrame_x                         0x9A63D0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A2330

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x584250
#define CAltAbilityData__GetMercMaxRank_x                          0x5841E0
#define CAltAbilityData__GetMaxRank_x                              0x5785E0

//CTargetRing
#define CTargetRing__Cast_x                                        0x6505E0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x659660
#define CharacterBase__CreateItemGlobalIndex_x                     0x646CF0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x659640
#define CharacterBase__GetItemByGlobalIndex_x                      0x927E40
#define CharacterBase__GetItemByGlobalIndex1_x                     0x927E90
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x728020
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7288E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728990

//messages
#define msg_spell_worn_off_x                                       0x5CBA70
#define msg_new_text_x                                             0x5BF760
#define __msgTokenTextParam_x                                      0x5CDED0
#define msgTokenText_x                                             0x5CE2E0

//SpellManager
#define SpellManager__vftable_x                                    0xB3A4E4
#define SpellManager__SpellManager_x                               0x6C9FE0
#define Spellmanager__LoadTextSpells_x                             0x6CA8E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CA1B0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F16D0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D41D0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D25E0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x6732C0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D4360

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x920CC0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x921010

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9570

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x747D80
#define CCursorAttachment__AttachToCursor1_x                       0x747DC0
#define CCursorAttachment__Deactivate_x                            0x749350

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x997F30
#define CSidlManagerBase__CreatePageWnd_x                          0x997730
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x992C10
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x992BA0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B7C00
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B7880

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5248A0
#define CFindItemWnd__WndNotification_x                            0x525750
#define CFindItemWnd__Update_x                                     0x526330
#define CFindItemWnd__PickupSelectedItem_x                         0x523FA0

//IString
#define IString__Append_x                                          0x55A760

//Camera
#define CDisplay__cameraType_x                                     0xEE2E20
#define EverQuest__Cameras_x                                       0xDB203C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F530
#define LootFiltersManager__GetItemFilterData_x                    0x52EE70
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52EEA0
#define LootFiltersManager__SetItemLootFilter_x                    0x52F0B0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x807FE0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F7390
#define CResolutionHandler__GetWindowedStyle_x                     0x6C0890

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73FA80

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92C1E0
#define CDistillerInfo__Instance_x                                 0x92C120

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762650
#define CGroupWnd__UpdateDisplay_x                                 0x7618B0

//ItemBase
#define ItemBase__IsLore_x                                         0x8F4BF0
#define ItemBase__IsLoreEquipped_x                                 0x8F4C60

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60A980
#define EQPlacedItemManager__GetItemByGuid_x                       0x60AAC0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60AB20

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4FE0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B98B0

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A310

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
#define ArrayClass__DeleteElement_x                                0x979050

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E320

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511F50

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x583430

//CTargetManager
#define CTargetManager__Get_x                                      0x6CDF60

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4FE0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC650

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DA9C0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4F6D0

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EB8D0
#define CAAWnd__UpdateSelected_x                                   0x6E7F70
#define CAAWnd__Update_x                                           0x6EAC00

//CXRect
#define CXRect__operator_and_x                                     0x757B20

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240

//
#define __eq_delete_x                                              0x9F7975
#define __eq_new_x                                                 0x9F7EE4

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

