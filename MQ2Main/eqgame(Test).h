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
#define __ExpectedVersionDate                                     "Jul 28 2021"
#define __ExpectedVersionTime                                     "09:24:40"
#define __ActualVersionDate_x                                      0xB5314C
#define __ActualVersionTime_x                                      0xB53140
#define __ActualVersionBuild_x                                     0xB432F4

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x6652C0
#define __MemChecker1_x                                            0x950A20
#define __MemChecker2_x                                            0x6DF340
#define __MemChecker3_x                                            0x6DF2B0
#define __MemChecker4_x                                            0x8A38D0
#define __EncryptPad0_x                                            0xE55B48
#define __EncryptPad1_x                                            0xEB0358
#define __EncryptPad2_x                                            0xE64D70
#define __EncryptPad3_x                                            0xE64970
#define __EncryptPad4_x                                            0xEA1168
#define __EncryptPad5_x                                            0xFA3C28
#define __AC1_x                                                    0x85E410
#define __AC2_x                                                    0x619DDF
#define __AC3_x                                                    0x621171
#define __AC4_x                                                    0x6252E0
#define __AC5_x                                                    0x62BC5F
#define __AC6_x                                                    0x6303A6
#define __AC7_x                                                    0x619840
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
#define __do_loot_x                                                0x5E24F0
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
#define __CastRay_x                                                0x5DD7A0
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DDA30
#define __ConvertItemTags_x                                        0x5FABE0
#define __CleanItemTags_x                                          0x47DA40
#define __DoesFileExist_x                                          0x9539B0
#define __EQGetTime_x                                              0x950690
#define __ExecuteCmd_x                                             0x5D5BD0
#define __FixHeading_x                                             0x9EEC40
#define __FlushDxKeyboard_x                                        0x6DA640
#define __GameLoop_x                                               0x6DDF40
#define __get_bearing_x                                            0x5DD340
#define __get_melee_range_x                                        0x5DDC70
#define __GetAnimationCache_x                                      0x74CEF0
#define __GetGaugeValueFromEQ_x                                    0x85C850
#define __GetLabelFromEQ_x                                         0x85E390
#define __GetXTargetType_x                                         0x9F0FF0
#define __HandleMouseWheel_x                                       0x6DF3D0
#define __HeadingDiff_x                                            0x9EECA0
#define __HelpPath_x                                               0xF9C904
#define __ExecuteFrontEnd_x                                        0x6DAE20
#define __NewUIINI_x                                               0x85C520
#define __ProcessGameEvents_x                                      0x6443D0
#define __ProcessMouseEvent_x                                      0x643AD0
#define __SaveColors_x                                             0x5720E0
#define __STMLToText_x                                             0x98CA40
#define __ToggleKeyRingItem_x                                      0x52B200
#define CMemoryMappedFile__SetFile_x                               0xADF450
#define CrashDetected_x                                            0x6DCB50
#define DrawNetStatus_x                                            0x673940
#define Expansion_HoT_x                                            0xDB1CF0
#define Teleport_Table_Size_x                                      0xF970F0
#define Teleport_Table_x                                           0xF94CC8
#define Util__FastTime_x                                           0x950250
#define __CopyLayout_x                                             0x660590
#define __WndProc_x                                                0x6DD050
#define __ProcessKeyboardEvent_x                                   0x6DC590

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491980
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4E0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B360
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495660
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948A0

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x57B0F0
#define AltAdvManager__IsAbilityReady_x                            0x579CD0
#define AltAdvManager__GetAAById_x                                 0x57A070
#define AltAdvManager__CanTrainAbility_x                           0x57A0E0
#define AltAdvManager__CanSeeAbility_x                             0x57A490

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1600
#define CharacterZoneClient__HasSkill_x                            0x4DCD70
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE4B0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8A20
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C11E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E13D0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E14D0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E15D0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAC60
#define CharacterZoneClient__BardCastBard_x                        0x4CDC80
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5120
#define CharacterZoneClient__GetEffect_x                           0x4C1120
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC270
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC320
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC3C0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC580
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC760
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B89D0
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF650
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEFA0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x708280
#define CBankWnd__WndNotification_x                                0x708020

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712CA0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70D900
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70B8D0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x717390

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x989FE0
#define CButtonWnd__CButtonWnd_x                                   0x988950

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x73A650
#define CChatManager__InitContextMenu_x                            0x733580
#define CChatManager__FreeChatWindow_x                             0x739210
#define CChatManager__SetLockedActiveChatWindow_x                  0x73A330
#define CChatManager__CreateChatWindow_x                           0x739840

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2720

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99FDA0
#define CContextMenu__dCContextMenu_x                              0x99FFD0
#define CContextMenu__AddMenuItem_x                                0x99FFE0
#define CContextMenu__RemoveMenuItem_x                             0x9A02E0
#define CContextMenu__RemoveAllMenuItems_x                         0x9A0300
#define CContextMenu__CheckMenuItem_x                              0x9A0360
#define CContextMenu__SetMenuItem_x                                0x9A0210
#define CContextMenu__AddSeparator_x                               0x9A0170

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A08F0
#define CContextMenuManager__RemoveMenu_x                          0x9A0960
#define CContextMenuManager__PopupMenu_x                           0x9A0A20
#define CContextMenuManager__Flush_x                               0x9A0890
#define CContextMenuManager__GetMenu_x                             0x49D8D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x746EB0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92AD70
#define CChatService__GetFriendName_x                              0x92AD80

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73AFB0
#define CChatWindow__Clear_x                                       0x73C410
#define CChatWindow__WndNotification_x                             0x73CBA0
#define CChatWindow__AddHistory_x                                  0x73BC70

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99CE80
#define CComboWnd__Draw_x                                          0x99C320
#define CComboWnd__GetCurChoice_x                                  0x99CC50
#define CComboWnd__GetListRect_x                                   0x99C7D0
#define CComboWnd__GetTextRect_x                                   0x99CEE0
#define CComboWnd__InsertChoice_x                                  0x99C960
#define CComboWnd__SetColors_x                                     0x99C930
#define CComboWnd__SetChoice_x                                     0x99CC30
#define CComboWnd__GetItemCount_x                                  0x99CC60
#define CComboWnd__GetCurChoiceText_x                              0x99CC90
#define CComboWnd__GetChoiceText_x                                 0x99CC70
#define CComboWnd__InsertChoiceAtIndex_x                           0x99C9F0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x744540
#define CContainerWnd__vftable_x                                   0xB5C39C
#define CContainerWnd__SetContainer_x                              0x745D70

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56C8E0
#define CDisplay__PreZoneMainUI_x                                  0x56C8F0
#define CDisplay__CleanGameUI_x                                    0x571EC0
#define CDisplay__GetClickedActor_x                                0x5646B0
#define CDisplay__GetUserDefinedColor_x                            0x55C420
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5661C0
#define CDisplay__is3dON_x                                         0x560F40
#define CDisplay__ReloadUI_x                                       0x56BC00
#define CDisplay__WriteTextHD2_x                                   0x560D30
#define CDisplay__TrueDistance_x                                   0x5681A0
#define CDisplay__SetViewActor_x                                   0x563FD0
#define CDisplay__GetFloorHeight_x                                 0x561000
#define CDisplay__SetRenderWindow_x                                0x55F980
#define CDisplay__ToggleScreenshotMode_x                           0x563AA0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C2460

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A3860
#define CEditWnd__EnsureCaretVisible_x                             0x9A5BA0
#define CEditWnd__GetCaretPt_x                                     0x9A4A20
#define CEditWnd__GetCharIndexPt_x                                 0x9A47E0
#define CEditWnd__GetDisplayString_x                               0x9A4680
#define CEditWnd__GetHorzOffset_x                                  0x9A2DE0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A5AB0
#define CEditWnd__GetSelStartPt_x                                  0x9A4A80
#define CEditWnd__GetSTMLSafeText_x                                0x9A4490
#define CEditWnd__PointFromPrintableChar_x                         0x9A5710
#define CEditWnd__SelectableCharFromPoint_x                        0x9A5860
#define CEditWnd__SetEditable_x                                    0x9A4B50
#define CEditWnd__SetWindowTextA_x                                 0x9A41E0
#define CEditWnd__ReplaceSelection_x                               0x9A52D0
#define CEditWnd__ReplaceSelection1_x                              0x9A5250

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62FA20
#define CEverQuest__ClickedPlayer_x                                0x620F50
#define CEverQuest__CreateTargetIndicator_x                        0x641340
#define CEverQuest__DeleteTargetIndicator_x                        0x6413D0
#define CEverQuest__DoTellWindow_x                                 0x4F2820
#define CEverQuest__OutputTextToLog_x                              0x4F2AF0
#define CEverQuest__DropHeldItemOnGround_x                         0x615F90
#define CEverQuest__dsp_chat_x                                     0x4F2EC0
#define CEverQuest__trimName_x                                     0x63C930
#define CEverQuest__Emote_x                                        0x6300E0
#define CEverQuest__EnterZone_x                                    0x629D60
#define CEverQuest__GetBodyTypeDesc_x                              0x635670
#define CEverQuest__GetClassDesc_x                                 0x635CB0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6362B0
#define CEverQuest__GetDeityDesc_x                                 0x63FAF0
#define CEverQuest__GetLangDesc_x                                  0x636470
#define CEverQuest__GetRaceDesc_x                                  0x635C90
#define CEverQuest__InterpretCmd_x                                 0x640160
#define CEverQuest__LeftClickedOnPlayer_x                          0x61A510
#define CEverQuest__LMouseUp_x                                     0x618540
#define CEverQuest__RightClickedOnPlayer_x                         0x61B100
#define CEverQuest__RMouseUp_x                                     0x619800
#define CEverQuest__SetGameState_x                                 0x615D10
#define CEverQuest__UPCNotificationFlush_x                         0x63C850
#define CEverQuest__IssuePetCommand_x                              0x637A70
#define CEverQuest__ReportSuccessfulHit_x                          0x6319F0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757E40
#define CGaugeWnd__CalcLinesFillRect_x                             0x757EA0
#define CGaugeWnd__Draw_x                                          0x757450

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4810
#define CGuild__GetGuildName_x                                     0x4B3030
#define CGuild__GetGuildIndex_x                                    0x4B3750

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x7752B0

//CHotButton
#define CHotButton__SetCheck_x                                     0x6549C0
#define CHotButton__SetButtonSize_x                                0x654D80

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x782300
#define CInvSlotMgr__MoveItem_x                                    0x780EA0
#define CInvSlotMgr__SelectSlot_x                                  0x7823C0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F6F0
#define CInvSlot__SliderComplete_x                                 0x77CBD0
#define CInvSlot__GetItemBase_x                                    0x77C480
#define CInvSlot__UpdateItem_x                                     0x77C670

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x784040
#define CInvSlotWnd__CInvSlotWnd_x                                 0x783220
#define CInvSlotWnd__HandleLButtonUp_x                             0x783BC0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856C90
#define CItemDisplayWnd__UpdateStrings_x                           0x79B6B0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x790990
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790EF0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79BDB0
#define CItemDisplayWnd__AboutToShow_x                             0x79B2A0
#define CItemDisplayWnd__WndNotification_x                         0x79D4F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79CBE0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79A170
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79B090

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88BE70

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2C00
#define CItemDisplayManager__ShowItem_x                            0x7A2050

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9740

// CListWnd
#define CListWnd__CListWnd_x                                       0x96F2F0
#define CListWnd__dCListWnd_x                                      0x96F5E0
#define CListWnd__AddColumn_x                                      0x9741C0
#define CListWnd__AddColumn1_x                                     0x9742E0
#define CListWnd__AddLine_x                                        0x974650
#define CListWnd__AddString_x                                      0x974450
#define CListWnd__CalculateFirstVisibleLine_x                      0x973F70
#define CListWnd__CalculateVSBRange_x                              0x973D50
#define CListWnd__ClearSel_x                                       0x974F40
#define CListWnd__ClearAllSel_x                                    0x974F90
#define CListWnd__CloseAndUpdateEditWindow_x                       0x975A20
#define CListWnd__Compare_x                                        0x9734D0
#define CListWnd__Draw_x                                           0x96F7A0
#define CListWnd__DrawColumnSeparators_x                           0x9722C0
#define CListWnd__DrawHeader_x                                     0x972720
#define CListWnd__DrawItem_x                                       0x972D70
#define CListWnd__DrawLine_x                                       0x972430
#define CListWnd__DrawSeparator_x                                  0x972360
#define CListWnd__EnableLine_x                                     0x971B80
#define CListWnd__EnsureVisible_x                                  0x975950
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x974E80
#define CListWnd__GetColumnTooltip_x                               0x971700
#define CListWnd__GetColumnMinWidth_x                              0x971770
#define CListWnd__GetColumnWidth_x                                 0x971680
#define CListWnd__GetCurSel_x                                      0x971020
#define CListWnd__GetItemAtPoint_x                                 0x971DF0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x971E60
#define CListWnd__GetItemColor_x                                   0x9713A0
#define CListWnd__GetItemData_x                                    0x9710A0
#define CListWnd__GetItemHeight_x                                  0x971450
#define CListWnd__GetItemIcon_x                                    0x971220
#define CListWnd__GetItemRect_x                                    0x971C70
#define CListWnd__GetItemText_x                                    0x9710E0
#define CListWnd__GetSelList_x                                     0x974FE0
#define CListWnd__GetSeparatorRect_x                               0x9720D0
#define CListWnd__InsertLine_x                                     0x974AB0
#define CListWnd__RemoveLine_x                                     0x974CD0
#define CListWnd__SetColors_x                                      0x973D20
#define CListWnd__SetColumnJustification_x                         0x973A50
#define CListWnd__SetColumnLabel_x                                 0x9743F0
#define CListWnd__SetColumnWidth_x                                 0x973960
#define CListWnd__SetCurSel_x                                      0x974DD0
#define CListWnd__SetItemColor_x                                   0x975620
#define CListWnd__SetItemData_x                                    0x9755E0
#define CListWnd__SetItemText_x                                    0x975200
#define CListWnd__ShiftColumnSeparator_x                           0x973B10
#define CListWnd__Sort_x                                           0x9737C0
#define CListWnd__ToggleSel_x                                      0x974E00
#define CListWnd__SetColumnsSizable_x                              0x973BB0
#define CListWnd__SetItemWnd_x                                     0x9754A0
#define CListWnd__GetItemWnd_x                                     0x971270
#define CListWnd__SetItemIcon_x                                    0x975280
#define CListWnd__CalculateCustomWindowPositions_x                 0x974070
#define CListWnd__SetVScrollPos_x                                  0x973940

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0B40
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BF160
#define CMapViewWnd__HandleLButtonDown_x                           0x7BBFF0
#define CMapViewWnd__WndNotification_x                             0x7C3420

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3DF0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4750
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4DE0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E80C0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2890
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE2D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3A50

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F7C40
#define CPacketScrambler__hton_x                                   0x8F7C30

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x993080
#define CSidlManager__FindScreenPieceTemplate_x                    0x993450
#define CSidlManager__FindScreenPieceTemplate1_x                   0x993280
#define CSidlManager__CreateXWndFromTemplate_x                     0x996900
#define CSidlManager__CreateXWndFromTemplate1_x                    0x996B90
#define CSidlManagerbase__CreateXWnd_x                             0x996BD0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CDF0
#define CSidlManager__CreateLabel_x                                0x84C9B0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C420

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98EDC0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98ECC0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BC6B0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98E640
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98E330
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98E400
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98E4D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98F660
#define CSidlScreenWnd__EnableIniStorage_x                         0x98FB40
#define CSidlScreenWnd__GetSidlPiece_x                             0x98F850
#define CSidlScreenWnd__Init1_x                                    0x98DE10
#define CSidlScreenWnd__LoadIniInfo_x                              0x98FB90
#define CSidlScreenWnd__LoadIniListWnd_x                           0x990770
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98D210
#define CSidlScreenWnd__StoreIniInfo_x                             0x9902E0
#define CSidlScreenWnd__StoreIniVis_x                              0x990660
#define CSidlScreenWnd__WndNotification_x                          0x98F530
#define CSidlScreenWnd__GetChildItem_x                             0x98FAC0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97DF50
#define CSidlScreenWnd__m_layoutCopy_x                             0x16224B0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C2330
#define CSkillMgr__GetSkillCap_x                                   0x6C2500
#define CSkillMgr__GetNameToken_x                                  0x6C1B70
#define CSkillMgr__IsActivatedSkill_x                              0x6C1C60
#define CSkillMgr__IsCombatSkill_x                                 0x6C1BD0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A19C0
#define CSliderWnd__SetValue_x                                     0x9A17F0
#define CSliderWnd__SetNumTicks_x                                  0x9A1850

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853670

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AAE10
#define CStmlWnd__ParseSTML_x                                      0x9ABFB0
#define CStmlWnd__CalculateHSBRange_x                              0x9ABD70
#define CStmlWnd__CalculateVSBRange_x                              0x9ABCF0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B0BB0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B1850
#define CStmlWnd__ForceParseNow_x                                  0x9AB380
#define CStmlWnd__GetNextTagPiece_x                                0x9B0B10
#define CStmlWnd__GetVisibleText_x                                 0x9AB3A0
#define CStmlWnd__InitializeWindowVariables_x                      0x9B16A0
#define CStmlWnd__MakeStmlColorTag_x                               0x9AA4B0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9AA520
#define CStmlWnd__SetSTMLText_x                                    0x9A9290
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B2A70
#define CStmlWnd__UpdateHistoryString_x                            0x9B1A50

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A8140
#define CTabWnd__DrawCurrentPage_x                                 0x9A8AD0
#define CTabWnd__DrawTab_x                                         0x9A86C0
#define CTabWnd__GetCurrentPage_x                                  0x9A78A0
#define CTabWnd__GetPageInnerRect_x                                0x9A7AD0
#define CTabWnd__GetTabInnerRect_x                                 0x9A7A10
#define CTabWnd__GetTabRect_x                                      0x9A78D0
#define CTabWnd__InsertPage_x                                      0x9A7CC0
#define CTabWnd__RemovePage_x                                      0x9A7E10
#define CTabWnd__SetPage_x                                         0x9A7B50
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A8040
#define CTabWnd__UpdatePage_x                                      0x9A84B0
#define CTabWnd__GetPageFromTabIndex_x                             0x9A8600
#define CTabWnd__GetCurrentTabIndex_x                              0x9A7890

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A7260
#define CPageWnd__FlashTab_x                                       0x9A72C0

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC890

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x97A3B0
#define CTextureFont__GetTextExtent_x                              0x97A6B0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B9160

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x964D80

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x544D20
#define CXStr__CXStr1_x                                            0x482710
#define CXStr__CXStr3_x                                            0x94C5E0
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x94C820
#define CXStr__operator_equal1_x                                   0x94C860
#define CXStr__operator_plus_equal1_x                              0x94D2C0
#define CXStr__SetString_x                                         0x94F160
#define CXStr__operator_char_p_x                                   0x94CD10
#define CXStr__GetChar_x                                           0x94EAC0
#define CXStr__Delete_x                                            0x94E390
#define CXStr__GetUnicode_x                                        0x94EB30
#define CXStr__Insert_x                                            0x94EB90
#define CXStr__FindNext_x                                          0x94E7E0
#define CXStr__Copy_x                                              0x94E1A0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99FA00
#define CXWnd__BringToTop_x                                        0x981A20
#define CXWnd__ClrFocus_x                                          0x9813B0
#define CXWnd__Destroy_x                                           0x981450
#define CXWnd__DoAllDrawing_x                                      0x97D5A0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97D570
#define CXWnd__DrawColoredRect_x                                   0x97DB30
#define CXWnd__DrawTooltip_x                                       0x97BAF0
#define CXWnd__DrawTooltipAtPoint_x                                0x97BBB0
#define CXWnd__GetBorderFrame_x                                    0x97D7D0
#define CXWnd__GetChildWndAt_x                                     0x981AC0
#define CXWnd__GetClientClipRect_x                                 0x97FBA0
#define CXWnd__GetScreenClipRect_x                                 0x97FC70
#define CXWnd__GetScreenRect_x                                     0x97FE40
#define CXWnd__GetRelativeRect_x                                   0x97FF00
#define CXWnd__GetTooltipRect_x                                    0x97DB80
#define CXWnd__GetWindowTextA_x                                    0x4F26C0
#define CXWnd__IsActive_x                                          0x97E2D0
#define CXWnd__IsDescendantOf_x                                    0x9808D0
#define CXWnd__IsReallyVisible_x                                   0x980900
#define CXWnd__IsType_x                                            0x982220
#define CXWnd__Move_x                                              0x980970
#define CXWnd__Move1_x                                             0x980A70
#define CXWnd__ProcessTransition_x                                 0x981530
#define CXWnd__Refade_x                                            0x980D40
#define CXWnd__Resize_x                                            0x980FD0
#define CXWnd__Right_x                                             0x981810
#define CXWnd__SetFocus_x                                          0x981370
#define CXWnd__SetFont_x                                           0x9813E0
#define CXWnd__SetKeyTooltip_x                                     0x982000
#define CXWnd__SetMouseOver_x                                      0x97EC50
#define CXWnd__StartFade_x                                         0x9807B0
#define CXWnd__GetChildItem_x                                      0x981C40
#define CXWnd__SetParent_x                                         0x9805E0
#define CXWnd__Minimize_x                                          0x981040

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BD700

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x984AC0
#define CXWndManager__DrawWindows_x                                0x984C10
#define CXWndManager__GetKeyboardFlags_x                           0x987590
#define CXWndManager__HandleKeyboardMsg_x                          0x987170
#define CXWndManager__RemoveWnd_x                                  0x987850
#define CXWndManager__RemovePendingDeletionWnd_x                   0x987D00

// CDBStr
#define CDBStr__GetString_x                                        0x55AF30

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5AA0
#define EQ_Character__Cur_HP_x                                     0x4D99E0
#define EQ_Character__Cur_Mana_x                                   0x4E1B00
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9110
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B85E0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8730
#define EQ_Character__GetHPRegen_x                                 0x4E8510
#define EQ_Character__GetEnduranceRegen_x                          0x4E8AD0
#define EQ_Character__GetManaRegen_x                               0x4E8F10
#define EQ_Character__Max_Endurance_x                              0x683480
#define EQ_Character__Max_HP_x                                     0x4D9810
#define EQ_Character__Max_Mana_x                                   0x683260
#define EQ_Character__doCombatAbility_x                            0x685DC0
#define EQ_Character__UseSkill_x                                   0x4EAF50
#define EQ_Character__GetConLevel_x                                0x67B590
#define EQ_Character__IsExpansionFlag_x                            0x5D4410
#define EQ_Character__TotalEffect_x                                0x4CD590
#define EQ_Character__GetPCSpellAffect_x                           0x4C9F40
#define EQ_Character__SpellDuration_x                              0x4C9980
#define EQ_Character__MySpellDuration_x                            0x4B6CA0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCB30
#define EQ_Character__GetBaseSkill_x                               0x4DDAD0
#define EQ_Character__CanUseItem_x                                 0x4E1E30
#define EQ_Character__CanMedOnHorse_x                              0x4EAA90

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9181B0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69AEE0

//PcClient
#define PcClient__vftable_x                                        0xB4FED0
#define PcClient__PcClient_x                                       0x678800

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C00B0
#define CCharacterListWnd__EnterWorld_x                            0x4BFA80
#define CCharacterListWnd__Quit_x                                  0x4BF7A0
#define CCharacterListWnd__UpdateList_x                            0x4BFC70

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65AC10
#define EQ_Item__CreateItemTagString_x                             0x8F08C0
#define EQ_Item__IsStackable_x                                     0x8F5BA0
#define EQ_Item__GetImageNum_x                                     0x8F25C0
#define EQ_Item__CreateItemClient_x                                0x659B90
#define EQ_Item__GetItemValue_x                                    0x8F38B0
#define EQ_Item__ValueSellMerchant_x                               0x8F7900
#define EQ_Item__IsKeyRingItem_x                                   0x8F5370
#define EQ_Item__CanGoInBag_x                                      0x65AD30
#define EQ_Item__IsEmpty_x                                         0x8F4D40
#define EQ_Item__GetMaxItemCount_x                                 0x8F3CA0
#define EQ_Item__GetHeldItem_x                                     0x8F2480
#define EQ_Item__CanGemFitInSlot_x                                 0x8F00D0

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57BEF0
#define EQ_LoadingS__Array_x                                       0xD9ED10

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x683F70
#define EQ_PC__GetAlternateAbilityId_x                             0x9019D0
#define EQ_PC__GetCombatAbility_x                                  0x901F50
#define EQ_PC__GetCombatAbilityTimer_x                             0x901FC0
#define EQ_PC__GetItemRecastTimer_x                                0x6863C0
#define EQ_PC__HasLoreItem_x                                       0x67BF40
#define EQ_PC__AlertInventoryChanged_x                             0x67AE50
#define EQ_PC__GetPcZoneClient_x                                   0x6AB610
#define EQ_PC__RemoveMyAffect_x                                    0x689930
#define EQ_PC__GetKeyRingItems_x                                   0x902A50
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9025B0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x902BA0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5DA7B0
#define EQItemList__add_object_x                                   0x60AD00
#define EQItemList__add_item_x                                     0x5DAD90
#define EQItemList__delete_item_x                                  0x5DADE0
#define EQItemList__FreeItemList_x                                 0x5DACF0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556FD0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69C910
#define EQPlayer__dEQPlayer_x                                      0x68F1D0
#define EQPlayer__DoAttack_x                                       0x6A5340
#define EQPlayer__EQPlayer_x                                       0x68FA20
#define EQPlayer__SetNameSpriteState_x                             0x693FC0
#define EQPlayer__SetNameSpriteTint_x                              0x694E90
#define PlayerBase__HasProperty_j_x                                0x9ED000
#define EQPlayer__IsTargetable_x                                   0x9ED560
#define EQPlayer__CanSee_x                                         0x9ED350
#define EQPlayer__CanSee1_x                                        0x9ED420
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ED0C0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A9100
#define PlayerZoneClient__GetLevel_x                               0x6AB650
#define PlayerZoneClient__IsValidTeleport_x                        0x60C1A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x573EA0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69FAB0
#define EQPlayerManager__GetSpawnByName_x                          0x69FB60
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69FBF0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65E550
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65E620
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65E660
#define KeypressHandler__ClearCommandStateArray_x                  0x65FB20
#define KeypressHandler__HandleKeyDown_x                           0x65FB40
#define KeypressHandler__HandleKeyUp_x                             0x65FBE0
#define KeypressHandler__SaveKeymapping_x                          0x660190

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC7F0
#define MapViewMap__SaveEx_x                                       0x7BFD2F
#define MapViewMap__SetZoom_x                                      0x7C5970

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x916040

// StringTable 
#define StringTable__getString_x                                   0x910E60

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x689580
#define PcZoneClient__RemovePetEffect_x                            0x689BE0
#define PcZoneClient__HasAlternateAbility_x                        0x6830C0
#define PcZoneClient__GetCurrentMod_x                              0x4EE800
#define PcZoneClient__GetModCap_x                                  0x4EE700
#define PcZoneClient__CanEquipItem_x                               0x683780
#define PcZoneClient__GetItemByID_x                                0x686890
#define PcZoneClient__GetItemByItemClass_x                         0x6869D0
#define PcZoneClient__RemoveBuffEffect_x                           0x689C90
#define PcZoneClient__BandolierSwap_x                              0x684530
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x686360

//Doors
#define EQSwitch__UseSwitch_x                                      0x610DA0

//IconCache
#define IconCache__GetIcon_x                                       0x74C890

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x743450
#define CContainerMgr__CloseContainer_x                            0x743730
#define CContainerMgr__OpenExperimentContainer_x                   0x744290

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BC30

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x653100

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1A80
#define CLootWnd__RequestLootSlot_x                                0x7B0CB0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A6490
#define EQ_Spell__SpellAffects_x                                   0x5A6990
#define EQ_Spell__SpellAffectBase_x                                0x5A66B0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0F90
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0F40
#define EQ_Spell__IsSPAStacking_x                                  0x5A7740
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A6B90
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A7750
#define EQ_Spell__IsLullSpell_x                                    0x5A6F80
#define __IsResEffectSpell_x                                       0x4D0740

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B15B0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x920B00
#define EQ_Affect__SetAffectData_x                                 0x9210D0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868840
#define CTargetWnd__WndNotification_x                              0x867FE0
#define CTargetWnd__RefreshTargetBuffs_x                           0x868340
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866DC0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D3C0
#define CTaskWnd__ConfirmAbandonTask_x                             0x870490

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x554B90
#define CTaskManager__HandleMessage_x                              0x552A60
#define CTaskManager__GetTaskStatus_x                              0x554C40
#define CTaskManager__GetElementDescription_x                      0x554CC0

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A10C0
#define EqSoundManager__PlayScriptMp3_x                            0x5A12C0
#define EqSoundManager__SoundAssistPlay_x                          0x6C67F0
#define EqSoundManager__WaveInstancePlay_x                         0x6C5CE0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5449D0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A6710
#define CTextureAnimation__Draw_x                                  0x9A6950
#define CTextureAnimation__AddBlankFrame_x                         0x9A6530

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A24C0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x5844D0
#define CAltAbilityData__GetMercMaxRank_x                          0x584460
#define CAltAbilityData__GetMaxRank_x                              0x578850

//CTargetRing
#define CTargetRing__Cast_x                                        0x650900

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x6599E0
#define CharacterBase__CreateItemGlobalIndex_x                     0x647020
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x6599C0
#define CharacterBase__GetItemByGlobalIndex_x                      0x928680
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9286D0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x728300
#define CCastSpellWnd__IsBardSongPlaying_x                         0x728BC0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728C70

//messages
#define msg_spell_worn_off_x                                       0x5CBCF0
#define msg_new_text_x                                             0x5BF9E0
#define __msgTokenTextParam_x                                      0x5CE160
#define msgTokenText_x                                             0x5CE570

//SpellManager
#define SpellManager__vftable_x                                    0xB3A4E4
#define SpellManager__SpellManager_x                               0x6CA420
#define Spellmanager__LoadTextSpells_x                             0x6CAD20
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CA5F0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F18A0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D4460
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D2860
#define ItemGlobalIndex__IsEquippedLocation_x                      0x6736E0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D45F0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x921500
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x921850

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9BC0

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x748130
#define CCursorAttachment__AttachToCursor1_x                       0x748170
#define CCursorAttachment__Deactivate_x                            0x749700

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x998150
#define CSidlManagerBase__CreatePageWnd_x                          0x997930
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x992E00
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x992D90

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B7D30
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B79B0

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524A50
#define CFindItemWnd__WndNotification_x                            0x525910
#define CFindItemWnd__Update_x                                     0x5264F0
#define CFindItemWnd__PickupSelectedItem_x                         0x524150

//IString
#define IString__Append_x                                          0x55A9B0

//Camera
#define CDisplay__cameraType_x                                     0xEE2E20
#define EverQuest__Cameras_x                                       0xDB203C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F740
#define LootFiltersManager__GetItemFilterData_x                    0x52F070
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52F0A0
#define LootFiltersManager__SetItemLootFilter_x                    0x52F2B0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808720

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F7560
#define CResolutionHandler__GetWindowedStyle_x                     0x6C0C70

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73FDD0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92CA20
#define CDistillerInfo__Instance_x                                 0x92C960

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762A40
#define CGroupWnd__UpdateDisplay_x                                 0x761C90

//ItemBase
#define ItemBase__IsLore_x                                         0x8F5410
#define ItemBase__IsLoreEquipped_x                                 0x8F5480

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60AC60
#define EQPlacedItemManager__GetItemByGuid_x                       0x60ADA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60AE00

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B53E0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B9C90

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A4C0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5051F0
#define FactionManagerClient__HandleFactionMessage_x               0x505A10
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x506200
#define FactionManagerClient__GetMaxFaction_x                      0x50621F
#define FactionManagerClient__GetMinFaction_x                      0x5061D0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511DD0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x979030

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E2F0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x512040

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5836A0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CE3A0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B53E0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC650

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DAC90

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4F6D0

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EBB00
#define CAAWnd__UpdateSelected_x                                   0x6E81A0
#define CAAWnd__Update_x                                           0x6EAE30

//CXRect
#define CXRect__operator_and_x                                     0x757F00

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D200

//
#define __eq_delete_x                                              0x9F7B45
#define __eq_new_x                                                 0x9F80B4

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

