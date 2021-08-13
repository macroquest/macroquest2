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
#define __ExpectedVersionDate                                     "Aug 10 2021"
#define __ExpectedVersionTime                                     "13:26:55"
#define __ActualVersionDate_x                                      0xB53184
#define __ActualVersionTime_x                                      0xB53178
#define __ActualVersionBuild_x                                     0xB4332C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x665030
#define __MemChecker1_x                                            0x950360
#define __MemChecker2_x                                            0x6DF060
#define __MemChecker3_x                                            0x6DEFD0
#define __MemChecker4_x                                            0x8A3230
#define __EncryptPad0_x                                            0xE55B48
#define __EncryptPad1_x                                            0xEB0360
#define __EncryptPad2_x                                            0xE64D70
#define __EncryptPad3_x                                            0xE64970
#define __EncryptPad4_x                                            0xEA1170
#define __EP1_Data_x                                               0x3460DC

// Direct Input
#define DI8__Main_x                                                0xFA3CBC
#define DI8__Keyboard_x                                            0xFA3CC0
#define DI8__Mouse_x                                               0xFA3C1C
#define DI8__Mouse_Copy_x                                          0xDB0D8C
#define DI8__Mouse_Check_x                                         0xFA177C
#define __AutoSkillArray_x                                         0xDB18A8
#define __Attack_x                                                 0xE4F6CB
#define __Autofire_x                                               0xE4F6CC
#define __BindList_x                                               0xDA6458
#define g_eqCommandStates_x                                        0xDA71C0
#define __Clicks_x                                                 0xDB0E44
#define __CommandList_x                                            0xDA7D48
#define __CurrentMapLabel_x                                        0xFB46BC
#define __CurrentSocial_x                                          0xC6146C
#define __DoAbilityList_x                                          0xDE71EC
#define __do_loot_x                                                0x5E2430
#define __DrawHandler_x                                            0x1623450
#define __GroupCount_x                                             0xF96D52
#define __Guilds_x                                                 0xF9B218
#define __gWorld_x                                                 0xF97060
#define __HWnd_x                                                   0xFA3C20
#define __heqmain_x                                                0xFA3C10
#define __InChatMode_x                                             0xDB0D74
#define __LastTell_x                                               0xDB28E8
#define __LMouseHeldTime_x                                         0xDB0EB0
#define __Mouse_x                                                  0xFA3CA8
#define __MouseLook_x                                              0xDB0E0A
#define __MouseEventTime_x                                         0xF9CC44
#define __gpbCommandEvent_x                                        0xF9706C
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
#define __ServerHost_x                                             0xF9723B
#define __ServerName_x                                             0xDE71AC
#define __ShiftKeyDown_x                                           0xDB1408
#define __ShowNames_x                                              0xDB1D48
#define EverQuestInfo__bSocialChanged_x                            0xDE7234
#define __Socials_x                                                0xDE72AC
#define __SubscriptionType_x                                       0xFE87A8
#define __TargetAggroHolder_x                                      0xFB7070
#define __ZoneType_x                                               0xDB1208
#define __GroupAggro_x                                             0xFB70B0
#define __LoginName_x                                              0xFA438C
#define __Inviter_x                                                0xE4F648
#define __AttackOnAssist_x                                         0xDB1D04
#define __UseTellWindows_x                                         0xDB2030
#define __gfMaxZoomCameraDistance_x                                0xB4B014
#define __gfMaxCameraDistance_x                                    0xB7392C
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
#define pinstActiveBanker_x                                        0xF97558
#define pinstActiveCorpse_x                                        0xF97550
#define pinstActiveGMaster_x                                       0xF97554
#define pinstActiveMerchant_x                                      0xF9754C
#define pinstAltAdvManager_x                                       0xEE3EC0
#define pinstBandageTarget_x                                       0xF97568
#define pinstCamActor_x                                            0xEE3064
#define pinstCDBStr_x                                              0xEE2C40
#define pinstCDisplay_x                                            0xF96CC8
#define pinstCEverQuest_x                                          0xFA3C24
#define pinstEverQuestInfo_x                                       0xDB0D20
#define pinstCharData_x                                            0xF94CB8
#define pinstCharSpawn_x                                           0xF975A0
#define pinstControlledMissile_x                                   0xF94CA0
#define pinstControlledPlayer_x                                    0xF975A0
#define pinstCResolutionHandler_x                                  0x1623678
#define pinstCSidlManager_x                                        0x1622614
#define pinstCXWndManager_x                                        0x162260C
#define instDynamicZone_x                                          0xF9B0F0
#define pinstDZMember_x                                            0xF9B200
#define pinstDZTimerInfo_x                                         0xF9B204
#define pinstEqLogin_x                                             0xFA3CD8
#define instEQMisc_x                                               0xD9A8D8
#define pinstEQSoundManager_x                                      0xEE47D0
#define pinstEQSpellStrings_x                                      0xED38E0
#define instExpeditionLeader_x                                     0xF9B13A
#define instExpeditionName_x                                       0xF9B17A
#define pinstGroup_x                                               0xF96D4E
#define pinstImeManager_x                                          0x1622610
#define pinstLocalPlayer_x                                         0xF97344
#define pinstMercenaryData_x                                       0xF9E73C
#define pinstMercenaryStats_x                                      0xFB713C
#define pinstModelPlayer_x                                         0xF97560
#define pinstPCData_x                                              0xF94CB8
#define pinstSkillMgr_x                                            0xFA0828
#define pinstSpawnManager_x                                        0xF9F300
#define pinstSpellManager_x                                        0xFA0A68
#define pinstSpellSets_x                                           0xE482F4
#define pinstStringTable_x                                         0xF94CC0
#define pinstSwitchManager_x                                       0xF94B50
#define pinstTarget_x                                              0xF9759C
#define pinstTargetObject_x                                        0xF94CB0
#define pinstTargetSwitch_x                                        0xF94CB4
#define pinstTaskMember_x                                          0xD9A420
#define pinstTrackTarget_x                                         0xF975A4
#define pinstTradeTarget_x                                         0xF9755C
#define instTributeActive_x                                        0xD9A8F9
#define pinstViewActor_x                                           0xEE3060
#define pinstWorldData_x                                           0xF94CC4
#define pinstZoneAddr_x                                            0xDB12A0
#define pinstPlayerPath_x                                          0xF9F398
#define pinstTargetIndicator_x                                     0xFA0CD0
#define EQObject_Top_x                                             0xF94CAC
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE30D0
#define pinstCAchievementsWnd_x                                    0xEE2D50
#define pinstCActionsWnd_x                                         0xEE3058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE3080
#define pinstCAdvancedLootWnd_x                                    0xEE305C
#define pinstCAdventureLeaderboardWnd_x                            0xFADEE0
#define pinstCAdventureRequestWnd_x                                0xFADF90
#define pinstCAdventureStatsWnd_x                                  0xFAE040
#define pinstCAggroMeterWnd_x                                      0xEE2DE0
#define pinstCAlarmWnd_x                                           0xEE30C8
#define pinstCAlertHistoryWnd_x                                    0xEE3040
#define pinstCAlertStackWnd_x                                      0xEE2E1C
#define pinstCAlertWnd_x                                           0xEE3020
#define pinstCAltStorageWnd_x                                      0xFAE3A0
#define pinstCAudioTriggersWindow_x                                0xEC5C10
#define pinstCAuraWnd_x                                            0xEE30A0
#define pinstCAvaZoneWnd_x                                         0xEE2D38
#define pinstCBandolierWnd_x                                       0xEE30B0
#define pinstCBankWnd_x                                            0xEE303C
#define pinstCBarterMerchantWnd_x                                  0xFAF5E0
#define pinstCBarterSearchWnd_x                                    0xFAF690
#define pinstCBarterWnd_x                                          0xFAF740
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
#define pinstCButtonWnd_x                                          0x1622878
#define pinstCCastingWnd_x                                         0xEE2DDC
#define pinstCCastSpellWnd_x                                       0xEE2DEC
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE2D80
#define pinstCChatWindowManager_x                                  0xFB01E8
#define pinstCClaimWnd_x                                           0xFB0340
#define pinstCColorPickerWnd_x                                     0xEE2D94
#define pinstCCombatAbilityWnd_x                                   0xEE308C
#define pinstCCombatSkillsSelectWnd_x                              0xEE3094
#define pinstCCompassWnd_x                                         0xEE30A8
#define pinstCConfirmationDialog_x                                 0xFB5208
#define pinstCContainerMgr_x                                       0xEE30CC
#define pinstCContextMenuManager_x                                 0x16225C8
#define pinstCCursorAttachment_x                                   0xEE2DD4
#define pinstCDynamicZoneWnd_x                                     0xFB0908
#define pinstCEditLabelWnd_x                                       0xEE2D40
#define pinstCEQMainWnd_x                                          0xFB0B50
#define pinstCEventCalendarWnd_x                                   0xEE30BC
#define pinstCExtendedTargetWnd_x                                  0xEE2DD8
#define pinstCPlayerCustomizationWnd_x                             0xEE2D88
#define pinstCFactionWnd_x                                         0xEE2DE8
#define pinstCFellowshipWnd_x                                      0xFB0D50
#define pinstCFileSelectionWnd_x                                   0xEE309C
#define pinstCFindItemWnd_x                                        0xEE3104
#define pinstCFindLocationWnd_x                                    0xFB0EA8
#define pinstCFriendsWnd_x                                         0xEE3098
#define pinstCGemsGameWnd_x                                        0xEE30C0
#define pinstCGiveWnd_x                                            0xEE2D28
#define pinstCGroupSearchFiltersWnd_x                              0xEE2DC4
#define pinstCGroupSearchWnd_x                                     0xFB12A0
#define pinstCGroupWnd_x                                           0xFB1350
#define pinstCGuildBankWnd_x                                       0xFB1400
#define pinstCGuildCreationWnd_x                                   0xFB14B0
#define pinstCGuildMgmtWnd_x                                       0xFB1560
#define pinstCharacterCreation_x                                   0xEE2DD0
#define pinstCHelpWnd_x                                            0xEE302C
#define pinstCHeritageSelectionWnd_x                               0xEE2D8C
#define pinstCHotButtonWnd_x                                       0xFB36B8
#define pinstCHotButtonWnd1_x                                      0xFB36B8
#define pinstCHotButtonWnd2_x                                      0xFB36BC
#define pinstCHotButtonWnd3_x                                      0xFB36C0
#define pinstCHotButtonWnd4_x                                      0xFB36C4
#define pinstCIconSelectionWnd_x                                   0xEE2D58
#define pinstCInspectWnd_x                                         0xEE2D4C
#define pinstCInventoryWnd_x                                       0xEE3028
#define pinstCInvSlotMgr_x                                         0xEE30B4
#define pinstCItemDisplayManager_x                                 0xFB3C10
#define pinstCItemExpTransferWnd_x                                 0xFB3D40
#define pinstCItemOverflowWnd_x                                    0xEE2D10
#define pinstCJournalCatWnd_x                                      0xEE30EC
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE30E0
#define pinstCJournalTextWnd_x                                     0xEE30E0
#define pinstCKeyRingWnd_x                                         0xEE3034
#define pinstCLargeDialogWnd_x                                     0xFB5E88
#define pinstCLayoutCopyWnd_x                                      0xFB4090
#define pinstCLFGuildWnd_x                                         0xFB4140
#define pinstCLoadskinWnd_x                                        0xEE30C4
#define pinstCLootFiltersCopyWnd_x                                 0xEE2150
#define pinstCLootFiltersWnd_x                                     0xEE30E4
#define pinstCLootSettingsWnd_x                                    0xEE30E8
#define pinstCLootWnd_x                                            0xEE304C
#define pinstCMailAddressBookWnd_x                                 0xEE2D70
#define pinstCMailCompositionWnd_x                                 0xEE2D68
#define pinstCMailIgnoreListWnd_x                                  0xEE2D74
#define pinstCMailWnd_x                                            0xEE2D64
#define pinstCManageLootWnd_x                                      0xEE4340
#define pinstCMapToolbarWnd_x                                      0xEE2D34
#define pinstCMapViewWnd_x                                         0xEE2D24
#define pinstCMarketplaceWnd_x                                     0xEE2D04
#define pinstCMerchantWnd_x                                        0xEE2D08
#define pinstCMIZoneSelectWnd_x                                    0xFB4978
#define pinstCMusicPlayerWnd_x                                     0xEE30B8
#define pinstCNameChangeMercWnd_x                                  0xEE2E00
#define pinstCNameChangePetWnd_x                                   0xEE2DFC
#define pinstCNameChangeWnd_x                                      0xEE2D60
#define pinstCNoteWnd_x                                            0xEE3024
#define pinstCObjectPreviewWnd_x                                   0xEE2D78
#define pinstCOptionsWnd_x                                         0xEE2D98
#define pinstCOverseerWnd_x                                        0xEE2D00
#define pinstCPetInfoWnd_x                                         0xEE3050
#define pinstCPetitionQWnd_x                                       0xEE2DB8
#define pinstCPlayerNotesWnd_x                                     0xEE30AC
#define pinstCPlayerWnd_x                                          0xEE30FC
#define pinstCPopupWndManager_x                                    0xFB5208
#define pinstCProgressionSelectionWnd_x                            0xFB52B8
#define pinstCPurchaseGroupWnd_x                                   0xEE2D14
#define pinstCPurchaseWnd_x                                        0xEE2D0C
#define pinstCPvPLeaderboardWnd_x                                  0xFB5368
#define pinstCPvPStatsWnd_x                                        0xFB5418
#define pinstCQuantityWnd_x                                        0xEE3044
#define pinstCRaceChangeWnd_x                                      0xEE2D6C
#define pinstCRaidOptionsWnd_x                                     0xEE2DE4
#define pinstCRaidWnd_x                                            0xEE2DF0
#define pinstCRealEstateItemsWnd_x                                 0xEE2D90
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE2DCC
#define pinstCRealEstateManageWnd_x                                0xEE2DB4
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE2DBC
#define pinstCRealEstatePlotSearchWnd_x                            0xEE2DC0
#define pinstCRealEstatePurchaseWnd_x                              0xEE2DC8
#define pinstCRespawnWnd_x                                         0xEE30A4
#define pinstCRewardSelectionWnd_x                                 0xFB5B60
#define pinstCSelectorWnd_x                                        0xEE2D1C
#define pinstCSendMoneyWnd_x                                       0xEE2D3C
#define pinstCServerListWnd_x                                      0xEE3090
#define pinstCSkillsSelectWnd_x                                    0xEE3084
#define pinstCSkillsWnd_x                                          0xEE307C
#define pinstCSocialEditWnd_x                                      0xEE2D54
#define pinstCSocialWnd_x                                          0xEE30D8
#define pinstCSpellBookWnd_x                                       0xEE2E10
#define pinstCStoryWnd_x                                           0xEE30F8
#define pinstCTargetOfTargetWnd_x                                  0xFB71C0
#define pinstCTargetWnd_x                                          0xEE2D48
#define pinstCTaskOverlayWnd_x                                     0xEE30F0
#define pinstCTaskSelectWnd_x                                      0xFB7318
#define pinstCTaskManager_x                                        0xC6C268
#define pinstCTaskTemplateSelectWnd_x                              0xFB73C8
#define pinstCTaskWnd_x                                            0xFB7478
#define pinstCTextEntryWnd_x                                       0xEE3088
#define pinstCTimeLeftWnd_x                                        0xEE2DAC
#define pinstCTipWndCONTEXT_x                                      0xFB767C
#define pinstCTipWndOFDAY_x                                        0xFB7678
#define pinstCTitleWnd_x                                           0xFB7728
#define pinstCTrackingWnd_x                                        0xEE2D44
#define pinstCTradeskillWnd_x                                      0xFB7890
#define pinstCTradeWnd_x                                           0xEE2D18
#define pinstCTrainWnd_x                                           0xEE3054
#define pinstCTributeBenefitWnd_x                                  0xFB7A90
#define pinstCTributeMasterWnd_x                                   0xFB7B40
#define pinstCTributeTrophyWnd_x                                   0xFB7BF0
#define pinstCVideoModesWnd_x                                      0xEE2D2C
#define pinstCVoiceMacroWnd_x                                      0xFA10E8
#define pinstCVoteResultsWnd_x                                     0xEE2DF8
#define pinstCVoteWnd_x                                            0xEE2DF4
#define pinstCZoneGuideWnd_x                                       0xEE3030
#define pinstCZonePathWnd_x                                        0xEE3038

#define pinstEQSuiteTextureLoader_x                                0xEB0920
#define pinstItemIconCache_x                                       0xFB0B08
#define pinstLootFiltersManager_x                                  0xEE2200
#define pinstRewardSelectionWnd_x                                  0xFB5B60

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DD720
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DD9B0
#define __ConvertItemTags_x                                        0x5FAB80
#define __CleanItemTags_x                                          0x47DA30
#define __DoesFileExist_x                                          0x9532F0
#define __EQGetTime_x                                              0x94FFD0
#define __ExecuteCmd_x                                             0x5D5B50
#define __FixHeading_x                                             0x9EE1C0
#define __FlushDxKeyboard_x                                        0x6DA360
#define __GameLoop_x                                               0x6DDC60
#define __get_bearing_x                                            0x5DD2C0
#define __get_melee_range_x                                        0x5DDBF0
#define __GetAnimationCache_x                                      0x74CBA0
#define __GetGaugeValueFromEQ_x                                    0x85C1D0
#define __GetLabelFromEQ_x                                         0x85DD10
#define __GetXTargetType_x                                         0x9F0530
#define __HandleMouseWheel_x                                       0x6DF0F0
#define __HeadingDiff_x                                            0x9EE220
#define __HelpPath_x                                               0xF9C904
#define __ExecuteFrontEnd_x                                        0x6DAB40
#define __NewUIINI_x                                               0x85BEA0
#define __ProcessGameEvents_x                                      0x6441C0
#define __ProcessMouseEvent_x                                      0x6438C0
#define __SaveColors_x                                             0x571FA0
#define __STMLToText_x                                             0x98BD90
#define __ToggleKeyRingItem_x                                      0x52B140
#define CMemoryMappedFile__SetFile_x                               0xADE960
#define CrashDetected_x                                            0x6DC870
#define DrawNetStatus_x                                            0x6736A0
#define Expansion_HoT_x                                            0xDB1CF0
#define Teleport_Table_Size_x                                      0xF970F4
#define Teleport_Table_x                                           0xF94CC8
#define Util__FastTime_x                                           0x94FB90
#define __CopyLayout_x                                             0x660290
#define __WndProc_x                                                0x6DCD70
#define __ProcessKeyboardEvent_x                                   0x6DC2B0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491980
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B350
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495660
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948A0

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x57AFB0
#define AltAdvManager__IsAbilityReady_x                            0x579B90
#define AltAdvManager__GetAAById_x                                 0x579F30
#define AltAdvManager__CanTrainAbility_x                           0x579FA0
#define AltAdvManager__CanSeeAbility_x                             0x57A350

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1550
#define CharacterZoneClient__HasSkill_x                            0x4DCCC0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE410
#define CharacterZoneClient__IsStackBlocked_x                      0x4C89A0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1160
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E1310
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E1410
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E1510
#define CharacterZoneClient__FindAffectSlot_x                      0x4CABE0
#define CharacterZoneClient__BardCastBard_x                        0x4CDBF0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C50A0
#define CharacterZoneClient__GetEffect_x                           0x4C10A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC1F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC2A0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC340
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC500
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC6E0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8960
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF5B0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEF00

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x707F40
#define CBankWnd__WndNotification_x                                0x707CE0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712970

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70D5C0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70B590

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x7170A0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x989340
#define CButtonWnd__CButtonWnd_x                                   0x987CA0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x73A300
#define CChatManager__InitContextMenu_x                            0x733230
#define CChatManager__FreeChatWindow_x                             0x738EC0
#define CChatManager__SetLockedActiveChatWindow_x                  0x739FE0
#define CChatManager__CreateChatWindow_x                           0x7394F0

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F26B0

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99F140
#define CContextMenu__dCContextMenu_x                              0x99F380
#define CContextMenu__AddMenuItem_x                                0x99F390
#define CContextMenu__RemoveMenuItem_x                             0x99F6A0
#define CContextMenu__RemoveAllMenuItems_x                         0x99F6C0
#define CContextMenu__CheckMenuItem_x                              0x99F720
#define CContextMenu__SetMenuItem_x                                0x99F5C0
#define CContextMenu__AddSeparator_x                               0x99F520

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99FCB0
#define CContextMenuManager__RemoveMenu_x                          0x99FD20
#define CContextMenuManager__PopupMenu_x                           0x99FDE0
#define CContextMenuManager__Flush_x                               0x99FC50
#define CContextMenuManager__GetMenu_x                             0x49D8C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x746B50

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92A6C0
#define CChatService__GetFriendName_x                              0x92A6D0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73AC60
#define CChatWindow__Clear_x                                       0x73C0C0
#define CChatWindow__WndNotification_x                             0x73C850
#define CChatWindow__AddHistory_x                                  0x73B920

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99C210
#define CComboWnd__Draw_x                                          0x99B6A0
#define CComboWnd__GetCurChoice_x                                  0x99BFE0
#define CComboWnd__GetListRect_x                                   0x99BB50
#define CComboWnd__GetTextRect_x                                   0x99C280
#define CComboWnd__InsertChoice_x                                  0x99BCE0
#define CComboWnd__SetColors_x                                     0x99BCB0
#define CComboWnd__SetChoice_x                                     0x99BFC0
#define CComboWnd__GetItemCount_x                                  0x99BFF0
#define CComboWnd__GetCurChoiceText_x                              0x99C020
#define CComboWnd__GetChoiceText_x                                 0x99C000
#define CComboWnd__InsertChoiceAtIndex_x                           0x99BD80

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x7441E0
#define CContainerWnd__vftable_x                                   0xB5C3DC
#define CContainerWnd__SetContainer_x                              0x745A10

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56C7E0
#define CDisplay__PreZoneMainUI_x                                  0x56C7F0
#define CDisplay__CleanGameUI_x                                    0x571D80
#define CDisplay__GetClickedActor_x                                0x5645B0
#define CDisplay__GetUserDefinedColor_x                            0x55C340
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5660C0
#define CDisplay__is3dON_x                                         0x560E40
#define CDisplay__ReloadUI_x                                       0x56BB00
#define CDisplay__WriteTextHD2_x                                   0x560C30
#define CDisplay__TrueDistance_x                                   0x5680A0
#define CDisplay__SetViewActor_x                                   0x563ED0
#define CDisplay__GetFloorHeight_x                                 0x560F00
#define CDisplay__SetRenderWindow_x                                0x55F880
#define CDisplay__ToggleScreenshotMode_x                           0x5639A0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C19D0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A2C80
#define CEditWnd__EnsureCaretVisible_x                             0x9A5000
#define CEditWnd__GetCaretPt_x                                     0x9A3E60
#define CEditWnd__GetCharIndexPt_x                                 0x9A3C10
#define CEditWnd__GetDisplayString_x                               0x9A3AB0
#define CEditWnd__GetHorzOffset_x                                  0x9A21D0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A4F10
#define CEditWnd__GetSelStartPt_x                                  0x9A3EC0
#define CEditWnd__GetSTMLSafeText_x                                0x9A38C0
#define CEditWnd__PointFromPrintableChar_x                         0x9A4B50
#define CEditWnd__SelectableCharFromPoint_x                        0x9A4CB0
#define CEditWnd__SetEditable_x                                    0x9A3F90
#define CEditWnd__SetWindowTextA_x                                 0x9A3610
#define CEditWnd__ReplaceSelection_x                               0x9A4710
#define CEditWnd__ReplaceSelection1_x                              0x9A4690

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62F850
#define CEverQuest__ClickedPlayer_x                                0x620E20
#define CEverQuest__CreateTargetIndicator_x                        0x641140
#define CEverQuest__DeleteTargetIndicator_x                        0x6411D0
#define CEverQuest__DoTellWindow_x                                 0x4F27B0
#define CEverQuest__OutputTextToLog_x                              0x4F2A80
#define CEverQuest__DropHeldItemOnGround_x                         0x615EF0
#define CEverQuest__dsp_chat_x                                     0x4F2E50
#define CEverQuest__trimName_x                                     0x63C730
#define CEverQuest__Emote_x                                        0x62FF10
#define CEverQuest__EnterZone_x                                    0x629BD0
#define CEverQuest__GetBodyTypeDesc_x                              0x635470
#define CEverQuest__GetClassDesc_x                                 0x635AB0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6360B0
#define CEverQuest__GetDeityDesc_x                                 0x63F8F0
#define CEverQuest__GetLangDesc_x                                  0x636270
#define CEverQuest__GetRaceDesc_x                                  0x635A90
#define CEverQuest__InterpretCmd_x                                 0x63FF60
#define CEverQuest__LeftClickedOnPlayer_x                          0x61A3E0
#define CEverQuest__LMouseUp_x                                     0x6184A0
#define CEverQuest__RightClickedOnPlayer_x                         0x61AFD0
#define CEverQuest__RMouseUp_x                                     0x619760
#define CEverQuest__SetGameState_x                                 0x615C70
#define CEverQuest__UPCNotificationFlush_x                         0x63C650
#define CEverQuest__IssuePetCommand_x                              0x637870
#define CEverQuest__ReportSuccessfulHit_x                          0x6317F0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757AE0
#define CGaugeWnd__CalcLinesFillRect_x                             0x757B40
#define CGaugeWnd__Draw_x                                          0x757100

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B47A0
#define CGuild__GetGuildName_x                                     0x4B2FC0
#define CGuild__GetGuildIndex_x                                    0x4B36E0

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774F00

//CHotButton
#define CHotButton__SetCheck_x                                     0x654750
#define CHotButton__SetButtonSize_x                                0x654B10

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781EC0
#define CInvSlotMgr__MoveItem_x                                    0x780AA0
#define CInvSlotMgr__SelectSlot_x                                  0x781F80

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F2F0
#define CInvSlot__SliderComplete_x                                 0x77C7F0
#define CInvSlot__GetItemBase_x                                    0x77C0C0
#define CInvSlot__UpdateItem_x                                     0x77C2B0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x783C00
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782DE0
#define CInvSlotWnd__HandleLButtonUp_x                             0x783780

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856640
#define CItemDisplayWnd__UpdateStrings_x                           0x79B180
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x7904B0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790A00
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B880
#define CItemDisplayWnd__AboutToShow_x                             0x79AD70
#define CItemDisplayWnd__WndNotification_x                         0x79CF90
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C6A0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799C40
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79AB60

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88B7D0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2690
#define CItemDisplayManager__ShowItem_x                            0x7A1B00

// CLabel 
#define CLabel__UpdateText_x                                       0x7A91D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96E740
#define CListWnd__dCListWnd_x                                      0x96EA40
#define CListWnd__AddColumn_x                                      0x973640
#define CListWnd__AddColumn1_x                                     0x973760
#define CListWnd__AddLine_x                                        0x973AD0
#define CListWnd__AddString_x                                      0x9738D0
#define CListWnd__CalculateFirstVisibleLine_x                      0x9733F0
#define CListWnd__CalculateVSBRange_x                              0x9731E0
#define CListWnd__ClearSel_x                                       0x9743C0
#define CListWnd__ClearAllSel_x                                    0x974410
#define CListWnd__CloseAndUpdateEditWindow_x                       0x974EC0
#define CListWnd__Compare_x                                        0x972960
#define CListWnd__Draw_x                                           0x96EC00
#define CListWnd__DrawColumnSeparators_x                           0x971750
#define CListWnd__DrawHeader_x                                     0x971BB0
#define CListWnd__DrawItem_x                                       0x972200
#define CListWnd__DrawLine_x                                       0x9718C0
#define CListWnd__DrawSeparator_x                                  0x9717F0
#define CListWnd__EnableLine_x                                     0x971000
#define CListWnd__EnsureVisible_x                                  0x974DE0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x974300
#define CListWnd__GetColumnTooltip_x                               0x970B80
#define CListWnd__GetColumnMinWidth_x                              0x970BF0
#define CListWnd__GetColumnWidth_x                                 0x970B00
#define CListWnd__GetCurSel_x                                      0x9704A0
#define CListWnd__GetItemAtPoint_x                                 0x971280
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x9712F0
#define CListWnd__GetItemColor_x                                   0x970820
#define CListWnd__GetItemData_x                                    0x970520
#define CListWnd__GetItemHeight_x                                  0x9708D0
#define CListWnd__GetItemIcon_x                                    0x9706A0
#define CListWnd__GetItemRect_x                                    0x9710F0
#define CListWnd__GetItemText_x                                    0x970560
#define CListWnd__GetSelList_x                                     0x974460
#define CListWnd__GetSeparatorRect_x                               0x971560
#define CListWnd__InsertLine_x                                     0x973F30
#define CListWnd__RemoveLine_x                                     0x974150
#define CListWnd__SetColors_x                                      0x9731B0
#define CListWnd__SetColumnJustification_x                         0x972EE0
#define CListWnd__SetColumnLabel_x                                 0x973870
#define CListWnd__SetColumnWidth_x                                 0x972DF0
#define CListWnd__SetCurSel_x                                      0x974250
#define CListWnd__SetItemColor_x                                   0x974AA0
#define CListWnd__SetItemData_x                                    0x974A60
#define CListWnd__SetItemText_x                                    0x974680
#define CListWnd__ShiftColumnSeparator_x                           0x972FA0
#define CListWnd__Sort_x                                           0x972C50
#define CListWnd__ToggleSel_x                                      0x974280
#define CListWnd__SetColumnsSizable_x                              0x973040
#define CListWnd__SetItemWnd_x                                     0x974920
#define CListWnd__GetItemWnd_x                                     0x9706F0
#define CListWnd__SetItemIcon_x                                    0x974700
#define CListWnd__CalculateCustomWindowPositions_x                 0x9734F0
#define CListWnd__SetVScrollPos_x                                  0x972DD0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0610
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BEC30
#define CMapViewWnd__HandleLButtonDown_x                           0x7BBAC0
#define CMapViewWnd__WndNotification_x                             0x7C2EF0

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E38D0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4230
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E48B0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7B70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2360
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EDD60
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3520

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F75D0
#define CPacketScrambler__hton_x                                   0x8F75C0

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x9923F0
#define CSidlManager__FindScreenPieceTemplate_x                    0x9927C0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x9925F0
#define CSidlManager__CreateXWndFromTemplate_x                     0x995C70
#define CSidlManager__CreateXWndFromTemplate1_x                    0x995F00
#define CSidlManagerbase__CreateXWnd_x                             0x995F40

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84C7A0
#define CSidlManager__CreateLabel_x                                0x84C380

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84BE00

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98E140
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98E040
#define CSidlScreenWnd__ConvertToRes_x                             0x9BBC20
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98D9C0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98D6B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98D780
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98D850
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98E9F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98EED0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98EBE0
#define CSidlScreenWnd__Init1_x                                    0x98D160
#define CSidlScreenWnd__LoadIniInfo_x                              0x98EF20
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98FAE0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98C560
#define CSidlScreenWnd__StoreIniInfo_x                             0x98F660
#define CSidlScreenWnd__StoreIniVis_x                              0x98F9D0
#define CSidlScreenWnd__WndNotification_x                          0x98E8C0
#define CSidlScreenWnd__GetChildItem_x                             0x98EE50
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97D400
#define CSidlScreenWnd__m_layoutCopy_x                             0x1622498

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C20C0
#define CSkillMgr__GetSkillCap_x                                   0x6C2290
#define CSkillMgr__GetNameToken_x                                  0x6C1900
#define CSkillMgr__IsActivatedSkill_x                              0x6C19F0
#define CSkillMgr__IsCombatSkill_x                                 0x6C1960

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A0DB0
#define CSliderWnd__SetValue_x                                     0x9A0BE0
#define CSliderWnd__SetNumTicks_x                                  0x9A0C40

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853010

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AA2F0
#define CStmlWnd__ParseSTML_x                                      0x9AB4A0
#define CStmlWnd__CalculateHSBRange_x                              0x9AB270
#define CStmlWnd__CalculateVSBRange_x                              0x9AB1E0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B00D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B0D70
#define CStmlWnd__ForceParseNow_x                                  0x9AA860
#define CStmlWnd__GetNextTagPiece_x                                0x9B0030
#define CStmlWnd__GetVisibleText_x                                 0x9AA880
#define CStmlWnd__InitializeWindowVariables_x                      0x9B0BC0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A9990
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A9A00
#define CStmlWnd__SetSTMLText_x                                    0x9A8770
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B1F90
#define CStmlWnd__UpdateHistoryString_x                            0x9B0F70

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A7620
#define CTabWnd__DrawCurrentPage_x                                 0x9A7FB0
#define CTabWnd__DrawTab_x                                         0x9A7BA0
#define CTabWnd__GetCurrentPage_x                                  0x9A6D80
#define CTabWnd__GetPageInnerRect_x                                0x9A6FB0
#define CTabWnd__GetTabInnerRect_x                                 0x9A6EF0
#define CTabWnd__GetTabRect_x                                      0x9A6DB0
#define CTabWnd__InsertPage_x                                      0x9A71A0
#define CTabWnd__RemovePage_x                                      0x9A72F0
#define CTabWnd__SetPage_x                                         0x9A7030
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A7520
#define CTabWnd__UpdatePage_x                                      0x9A7990
#define CTabWnd__GetPageFromTabIndex_x                             0x9A7AE0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A6D70

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A6710
#define CPageWnd__FlashTab_x                                       0x9A6770

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC870

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x979860
#define CTextureFont__GetTextExtent_x                              0x979B60

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B86D0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x9641F0

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x544C50
#define CXStr__CXStr1_x                                            0x482700
#define CXStr__CXStr3_x                                            0x94BF20
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x94C160
#define CXStr__operator_equal1_x                                   0x94C1A0
#define CXStr__operator_plus_equal1_x                              0x94CC00
#define CXStr__SetString_x                                         0x94EAA0
#define CXStr__operator_char_p_x                                   0x94C650
#define CXStr__GetChar_x                                           0x94E400
#define CXStr__Delete_x                                            0x94DCD0
#define CXStr__GetUnicode_x                                        0x94E470
#define CXStr__Insert_x                                            0x94E4D0
#define CXStr__FindNext_x                                          0x94E120
#define CXStr__Copy_x                                              0x94DAE0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99EDA0
#define CXWnd__BringToTop_x                                        0x980DB0
#define CXWnd__ClrFocus_x                                          0x980730
#define CXWnd__Destroy_x                                           0x9807E0
#define CXWnd__DoAllDrawing_x                                      0x97CA60
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97CA30
#define CXWnd__DrawColoredRect_x                                   0x97CFE0
#define CXWnd__DrawTooltip_x                                       0x97AFA0
#define CXWnd__DrawTooltipAtPoint_x                                0x97B060
#define CXWnd__GetBorderFrame_x                                    0x97CC80
#define CXWnd__GetChildWndAt_x                                     0x980E50
#define CXWnd__GetClientClipRect_x                                 0x97F010
#define CXWnd__GetScreenClipRect_x                                 0x97F0E0
#define CXWnd__GetScreenRect_x                                     0x97F2B0
#define CXWnd__GetRelativeRect_x                                   0x97F370
#define CXWnd__GetTooltipRect_x                                    0x97D030
#define CXWnd__GetWindowTextA_x                                    0x4F2650
#define CXWnd__IsActive_x                                          0x97D780
#define CXWnd__IsDescendantOf_x                                    0x97FCF0
#define CXWnd__IsReallyVisible_x                                   0x97FD20
#define CXWnd__IsType_x                                            0x9815D0
#define CXWnd__Move_x                                              0x97FD90
#define CXWnd__Move1_x                                             0x97FE80
#define CXWnd__ProcessTransition_x                                 0x9808C0
#define CXWnd__Refade_x                                            0x980120
#define CXWnd__Resize_x                                            0x980370
#define CXWnd__Right_x                                             0x980BA0
#define CXWnd__SetFocus_x                                          0x9806F0
#define CXWnd__SetFont_x                                           0x980760
#define CXWnd__SetKeyTooltip_x                                     0x9813A0
#define CXWnd__SetMouseOver_x                                      0x97E0F0
#define CXWnd__StartFade_x                                         0x97FBD0
#define CXWnd__GetChildItem_x                                      0x980FD0
#define CXWnd__SetParent_x                                         0x97FA00
#define CXWnd__Minimize_x                                          0x9803E0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BCC70

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x983E00
#define CXWndManager__DrawWindows_x                                0x983F50
#define CXWndManager__GetKeyboardFlags_x                           0x9868D0
#define CXWndManager__HandleKeyboardMsg_x                          0x9864B0
#define CXWndManager__RemoveWnd_x                                  0x986B90
#define CXWndManager__RemovePendingDeletionWnd_x                   0x987040

// CDBStr
#define CDBStr__GetString_x                                        0x55AE60

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5A20
#define EQ_Character__Cur_HP_x                                     0x4D9930
#define EQ_Character__Cur_Mana_x                                   0x4E1A40
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9090
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8570
#define EQ_Character__GetFocusRangeModifier_x                      0x4B86C0
#define EQ_Character__GetHPRegen_x                                 0x4E8450
#define EQ_Character__GetEnduranceRegen_x                          0x4E8A10
#define EQ_Character__GetManaRegen_x                               0x4E8E50
#define EQ_Character__Max_Endurance_x                              0x683200
#define EQ_Character__Max_HP_x                                     0x4D9760
#define EQ_Character__Max_Mana_x                                   0x682FE0
#define EQ_Character__doCombatAbility_x                            0x685B30
#define EQ_Character__UseSkill_x                                   0x4EAE70
#define EQ_Character__GetConLevel_x                                0x67B2F0
#define EQ_Character__IsExpansionFlag_x                            0x5D43A0
#define EQ_Character__TotalEffect_x                                0x4CD500
#define EQ_Character__GetPCSpellAffect_x                           0x4C9EC0
#define EQ_Character__SpellDuration_x                              0x4C9900
#define EQ_Character__MySpellDuration_x                            0x4B6C30
#define EQ_Character__GetAdjustedSkill_x                           0x4DCA80
#define EQ_Character__GetBaseSkill_x                               0x4DDA20
#define EQ_Character__CanUseItem_x                                 0x4E1D70
#define EQ_Character__CanMedOnHorse_x                              0x4EA9B0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917B30

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69AC90

//PcClient
#define PcClient__vftable_x                                        0xB4FF08
#define PcClient__PcClient_x                                       0x678560

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0030
#define CCharacterListWnd__EnterWorld_x                            0x4BFA00
#define CCharacterListWnd__Quit_x                                  0x4BF720
#define CCharacterListWnd__UpdateList_x                            0x4BFBF0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65A960
#define EQ_Item__CreateItemTagString_x                             0x8F0210
#define EQ_Item__IsStackable_x                                     0x8F5570
#define EQ_Item__GetImageNum_x                                     0x8F1F70
#define EQ_Item__CreateItemClient_x                                0x659920
#define EQ_Item__GetItemValue_x                                    0x8F3230
#define EQ_Item__ValueSellMerchant_x                               0x8F72E0
#define EQ_Item__IsKeyRingItem_x                                   0x8F4D20
#define EQ_Item__CanGoInBag_x                                      0x65AA80
#define EQ_Item__IsEmpty_x                                         0x8F46D0
#define EQ_Item__GetMaxItemCount_x                                 0x8F3640
#define EQ_Item__GetHeldItem_x                                     0x8F1E20
#define EQ_Item__CanGemFitInSlot_x                                 0x8EF9E0

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57BDB0
#define EQ_LoadingS__Array_x                                       0xD9ED10

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x683CF0
#define EQ_PC__GetAlternateAbilityId_x                             0x901360
#define EQ_PC__GetCombatAbility_x                                  0x9018E0
#define EQ_PC__GetCombatAbilityTimer_x                             0x901950
#define EQ_PC__GetItemRecastTimer_x                                0x686130
#define EQ_PC__HasLoreItem_x                                       0x67BCA0
#define EQ_PC__AlertInventoryChanged_x                             0x67ABB0
#define EQ_PC__GetPcZoneClient_x                                   0x6AB390
#define EQ_PC__RemoveMyAffect_x                                    0x6896A0
#define EQ_PC__GetKeyRingItems_x                                   0x9023E0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x901F40
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x902530

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5DA730
#define EQItemList__add_object_x                                   0x60AC80
#define EQItemList__add_item_x                                     0x5DAD10
#define EQItemList__delete_item_x                                  0x5DAD60
#define EQItemList__FreeItemList_x                                 0x5DAC70

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556F10

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69C6C0
#define EQPlayer__dEQPlayer_x                                      0x68EF60
#define EQPlayer__DoAttack_x                                       0x6A50D0
#define EQPlayer__EQPlayer_x                                       0x68F7B0
#define EQPlayer__SetNameSpriteState_x                             0x693D70
#define EQPlayer__SetNameSpriteTint_x                              0x694C40
#define PlayerBase__HasProperty_j_x                                0x9EC580
#define EQPlayer__IsTargetable_x                                   0x9ECAE0
#define EQPlayer__CanSee_x                                         0x9EC8D0
#define EQPlayer__CanSee1_x                                        0x9EC9A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EC640

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A8E90
#define PlayerZoneClient__GetLevel_x                               0x6AB3D0
#define PlayerZoneClient__IsValidTeleport_x                        0x60C120
#define PlayerZoneClient__LegalPlayerRace_x                        0x573D60

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69F860
#define EQPlayerManager__GetSpawnByName_x                          0x69F910
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69F9A0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65E250
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65E320
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65E360
#define KeypressHandler__ClearCommandStateArray_x                  0x65F820
#define KeypressHandler__HandleKeyDown_x                           0x65F840
#define KeypressHandler__HandleKeyUp_x                             0x65F8E0
#define KeypressHandler__SaveKeymapping_x                          0x65FE90

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC2C0
#define MapViewMap__SaveEx_x                                       0x7BF7FF
#define MapViewMap__SetZoom_x                                      0x7C5440

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9159C0

// StringTable 
#define StringTable__getString_x                                   0x9107E0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6892F0
#define PcZoneClient__RemovePetEffect_x                            0x689950
#define PcZoneClient__HasAlternateAbility_x                        0x682E40
#define PcZoneClient__GetCurrentMod_x                              0x4EE780
#define PcZoneClient__GetModCap_x                                  0x4EE680
#define PcZoneClient__CanEquipItem_x                               0x683500
#define PcZoneClient__GetItemByID_x                                0x686600
#define PcZoneClient__GetItemByItemClass_x                         0x686740
#define PcZoneClient__RemoveBuffEffect_x                           0x689A00
#define PcZoneClient__BandolierSwap_x                              0x6842A0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6860D0

//Doors
#define EQSwitch__UseSwitch_x                                      0x610D20

//IconCache
#define IconCache__GetIcon_x                                       0x74C540

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7430F0
#define CContainerMgr__CloseContainer_x                            0x7433D0
#define CContainerMgr__OpenExperimentContainer_x                   0x743F30

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81B6B0

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x652EB0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1510
#define CLootWnd__RequestLootSlot_x                                0x7B0750

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A6320
#define EQ_Spell__SpellAffects_x                                   0x5A6820
#define EQ_Spell__SpellAffectBase_x                                0x5A6540
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0EF0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0EA0
#define EQ_Spell__IsSPAStacking_x                                  0x5A75D0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A6A20
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A75E0
#define EQ_Spell__IsLullSpell_x                                    0x5A6E10
#define __IsResEffectSpell_x                                       0x4D06A0

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1560

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x920480
#define EQ_Affect__SetAffectData_x                                 0x920A50

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868140
#define CTargetWnd__WndNotification_x                              0x8678E0
#define CTargetWnd__RefreshTargetBuffs_x                           0x867C40
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x8666E0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86CCC0
#define CTaskWnd__ConfirmAbandonTask_x                             0x86FD90

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x554AE0
#define CTaskManager__HandleMessage_x                              0x5529B0
#define CTaskManager__GetTaskStatus_x                              0x554B90
#define CTaskManager__GetElementDescription_x                      0x554C10

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0F50
#define EqSoundManager__PlayScriptMp3_x                            0x5A1150
#define EqSoundManager__SoundAssistPlay_x                          0x6C6580
#define EqSoundManager__WaveInstancePlay_x                         0x6C5A70

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544900

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A5B90
#define CTextureAnimation__Draw_x                                  0x9A5DD0
#define CTextureAnimation__AddBlankFrame_x                         0x9A59B0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A18B0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x584390
#define CAltAbilityData__GetMercMaxRank_x                          0x584320
#define CAltAbilityData__GetMaxRank_x                              0x578710

//CTargetRing
#define CTargetRing__Cast_x                                        0x6506C0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x659770
#define CharacterBase__CreateItemGlobalIndex_x                     0x646DD0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x659750
#define CharacterBase__GetItemByGlobalIndex_x                      0x927FE0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x928030
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x727F90
#define CCastSpellWnd__IsBardSongPlaying_x                         0x728850
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728900

//messages
#define msg_spell_worn_off_x                                       0x5CBC90
#define msg_new_text_x                                             0x5BF970
#define __msgTokenTextParam_x                                      0x5CE0F0
#define msgTokenText_x                                             0x5CE500

//SpellManager
#define SpellManager__vftable_x                                    0xB3A518
#define SpellManager__SpellManager_x                               0x6CA1B0
#define Spellmanager__LoadTextSpells_x                             0x6CAAB0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CA380

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F0DE0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D43F0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D27F0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x673440
#define ItemGlobalIndex__IsValidIndex_x                            0x5D4580

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x920E80
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9211D0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9650

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x747DD0
#define CCursorAttachment__AttachToCursor1_x                       0x747E10
#define CCursorAttachment__Deactivate_x                            0x7493C0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x997480
#define CSidlManagerBase__CreatePageWnd_x                          0x996C80
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x992170
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x992100

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B72A0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B6F20

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5249D0
#define CFindItemWnd__WndNotification_x                            0x525890
#define CFindItemWnd__Update_x                                     0x526450
#define CFindItemWnd__PickupSelectedItem_x                         0x5240E0

//IString
#define IString__Append_x                                          0x55A8E0

//Camera
#define CDisplay__cameraType_x                                     0xEE2E18
#define EverQuest__Cameras_x                                       0xDB203C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F680
#define LootFiltersManager__GetItemFilterData_x                    0x52EFC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52EFF0
#define LootFiltersManager__SetItemLootFilter_x                    0x52F200

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8081A0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F6AA0
#define CResolutionHandler__GetWindowedStyle_x                     0x6C0A00

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73FA70

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92C370
#define CDistillerInfo__Instance_x                                 0x92C2B0

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7626B0
#define CGroupWnd__UpdateDisplay_x                                 0x761900

//ItemBase
#define ItemBase__IsLore_x                                         0x8F4DC0
#define ItemBase__IsLoreEquipped_x                                 0x8F4E40

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60ABE0
#define EQPlacedItemManager__GetItemByGuid_x                       0x60AD20
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60AD80

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5140
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B9A30

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A450

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5050C0
#define FactionManagerClient__HandleFactionMessage_x               0x5058E0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5060D0
#define FactionManagerClient__GetMaxFaction_x                      0x5060EF
#define FactionManagerClient__GetMinFaction_x                      0x5060A0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511D50

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x9784D0

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E2D0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511FD0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x583550

//CTargetManager
#define CTargetManager__Get_x                                      0x6CE130

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5140

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC630

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DAC10

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4F6D0

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EB810
#define CAAWnd__UpdateSelected_x                                   0x6E7EC0
#define CAAWnd__Update_x                                           0x6EAB30

//CXRect
#define CXRect__operator_and_x                                     0x757BA0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D1F0

//
#define __eq_delete_x                                              0x9F7085
#define __eq_new_x                                                 0x9F75F4

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

