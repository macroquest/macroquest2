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
#define __ExpectedVersionDate                                     "Nov  5 2021"
#define __ExpectedVersionTime                                     "04:25:48"
#define __ActualVersionDate_x                                      0xB546CC
#define __ActualVersionTime_x                                      0xB546C0
#define __ActualVersionBuild_x                                     0xB448A4

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x663200
#define __MemChecker1_x                                            0x8F2750
#define __MemChecker2_x                                            0x6DE0E0
#define __MemChecker3_x                                            0x6DE050
#define __MemChecker4_x                                            0x8A3B00
#define __EncryptPad0_x                                            0xE53C10
#define __EncryptPad1_x                                            0xEA15D8
#define __EncryptPad2_x                                            0xE62E38
#define __EncryptPad3_x                                            0xE62A38
#define __EncryptPad4_x                                            0xE9F240
#define __EP1_Data_x                                               0x37A034

// Direct Input
#define DI8__Main_x                                                0xF9F8DC
#define DI8__Keyboard_x                                            0xF9F8E0
#define DI8__Mouse_x                                               0xF9F838
#define DI8__Mouse_Copy_x                                          0xDAEE54
#define DI8__Mouse_Check_x                                         0xFA0318
#define __AutoSkillArray_x                                         0xDAF970
#define __Attack_x                                                 0xE4D793
#define __Autofire_x                                               0xE4D794
#define __BindList_x                                               0xDA4508
#define g_eqCommandStates_x                                        0xDA5270
#define __Clicks_x                                                 0xDAEF0C
#define __CommandList_x                                            0xDA5DF8
#define __CurrentMapLabel_x                                        0xFB28F4
#define __CurrentSocial_x                                          0xC5F460
#define __DoAbilityList_x                                          0xDE52B4
#define __do_loot_x                                                0x5E0490
#define __DrawHandler_x                                            0x16241D0
#define __GroupCount_x                                             0xF94E8A
#define __Guilds_x                                                 0xF992F0
#define __gWorld_x                                                 0xF9509C
#define __HWnd_x                                                   0xF9F83C
#define __heqmain_x                                                0xFA27AC
#define __InChatMode_x                                             0xDAEE3C
#define __LastTell_x                                               0xDB09B0
#define __LMouseHeldTime_x                                         0xDAEF78
#define __Mouse_x                                                  0xF9F8C8
#define __MouseLook_x                                              0xDAEED2
#define __MouseEventTime_x                                         0xF9AD1C
#define __gpbCommandEvent_x                                        0xF951A8
#define __NetStatusToggle_x                                        0xDAEED5
#define __PCNames_x                                                0xDAFF60
#define __RangeAttackReady_x                                       0xDAFC54
#define __RMouseHeldTime_x                                         0xDAEF74
#define __RunWalkState_x                                           0xDAEE40
#define __ScreenMode_x                                             0xEE1184
#define __ScreenX_x                                                0xDAEDF4
#define __ScreenY_x                                                0xDAEDF0
#define __ScreenXMax_x                                             0xDAEDF8
#define __ScreenYMax_x                                             0xDAEDFC
#define __ServerHost_x                                             0xF95373
#define __ServerName_x                                             0xDE5274
#define __ShiftKeyDown_x                                           0xDAF4D0
#define __ShowNames_x                                              0xDAFE10
#define EverQuestInfo__bSocialChanged_x                            0xDE52FC
#define __Socials_x                                                0xDE5374
#define __SubscriptionType_x                                       0xFEA418
#define __TargetAggroHolder_x                                      0xFB52A8
#define __ZoneType_x                                               0xDAF2D0
#define __GroupAggro_x                                             0xFB52E8
#define __LoginName_x                                              0xF9FFAC
#define __Inviter_x                                                0xE4D710
#define __AttackOnAssist_x                                         0xDAFDCC
#define __UseTellWindows_x                                         0xDB00F8
#define __gfMaxZoomCameraDistance_x                                0xB4C544
#define __gfMaxCameraDistance_x                                    0xB74F10
#define __pulAutoRun_x                                             0xDAEEF0
#define __pulForward_x                                             0xDB0130
#define __pulBackward_x                                            0xDB0134
#define __pulTurnRight_x                                           0xDB0138
#define __pulTurnLeft_x                                            0xDB013C
#define __pulStrafeLeft_x                                          0xDB0140
#define __pulStrafeRight_x                                         0xDB0144

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF95688
#define instEQZoneInfo_x                                           0xDAF0C8
#define pinstActiveBanker_x                                        0xF92D88
#define pinstActiveCorpse_x                                        0xF92D80
#define pinstActiveGMaster_x                                       0xF92D84
#define pinstActiveMerchant_x                                      0xF92D7C
#define pinstAltAdvManager_x                                       0xEE1F98
#define pinstBandageTarget_x                                       0xF92D98
#define pinstCamActor_x                                            0xEE1178
#define pinstCDBStr_x                                              0xEE0D08
#define pinstCDisplay_x                                            0xF92E04
#define pinstCEverQuest_x                                          0xF9F844
#define pinstEverQuestInfo_x                                       0xDAEDE8
#define pinstCharData_x                                            0xF92DF4
#define pinstCharSpawn_x                                           0xF92DD0
#define pinstControlledMissile_x                                   0xF92DDC
#define pinstControlledPlayer_x                                    0xF92DD0
#define pinstCResolutionHandler_x                                  0x16243F8
#define pinstCSidlManager_x                                        0xFC3E34
#define pinstCXWndManager_x                                        0xFC3E2C
#define instDynamicZone_x                                          0xF991C8
#define pinstDZMember_x                                            0xF992D8
#define pinstDZTimerInfo_x                                         0xF992DC
#define pinstEqLogin_x                                             0xF9F8F8
#define instEQMisc_x                                               0xD988D8
#define pinstEQSoundManager_x                                      0xEE28A8
#define pinstEQSpellStrings_x                                      0xED19A8
#define instExpeditionLeader_x                                     0xF99212
#define instExpeditionName_x                                       0xF99252
#define pinstGroup_x                                               0xF94E86
#define pinstImeManager_x                                          0xFC3E30
#define pinstLocalPlayer_x                                         0xF92D78
#define pinstMercenaryData_x                                       0xF9C814
#define pinstMercenaryStats_x                                      0xFB5374
#define pinstModelPlayer_x                                         0xF92D90
#define pinstPCData_x                                              0xF92DF4
#define pinstSkillMgr_x                                            0xF9E900
#define pinstSpawnManager_x                                        0xF9D3D8
#define pinstSpellManager_x                                        0xF9EB40
#define pinstSpellSets_x                                           0xE463BC
#define pinstStringTable_x                                         0xF92E00
#define pinstSwitchManager_x                                       0xF92C28
#define pinstTarget_x                                              0xF92DCC
#define pinstTargetObject_x                                        0xF92DEC
#define pinstTargetSwitch_x                                        0xF92DF0
#define pinstTaskMember_x                                          0xD98420
#define pinstTrackTarget_x                                         0xF92DD4
#define pinstTradeTarget_x                                         0xF92D8C
#define instTributeActive_x                                        0xD988F9
#define pinstViewActor_x                                           0xEE1174
#define pinstWorldData_x                                           0xF92DF8
#define pinstZoneAddr_x                                            0xDAF368
#define pinstPlayerPath_x                                          0xF9D470
#define pinstTargetIndicator_x                                     0xF9EDA8
#define EQObject_Top_x                                             0xF92DE8

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE0DA8
#define pinstCAchievementsWnd_x                                    0xEE0EA0
#define pinstCActionsWnd_x                                         0xEE1170
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE119C
#define pinstCAdvancedLootWnd_x                                    0xEE1190
#define pinstCAdventureLeaderboardWnd_x                            0xFAC118
#define pinstCAdventureRequestWnd_x                                0xFAC1C8
#define pinstCAdventureStatsWnd_x                                  0xFAC278
#define pinstCAggroMeterWnd_x                                      0xEE0EFC
#define pinstCAlarmWnd_x                                           0xEE0DD0
#define pinstCAlertHistoryWnd_x                                    0xEE11C4
#define pinstCAlertStackWnd_x                                      0xEE11A0
#define pinstCAlertWnd_x                                           0xEE11A8
#define pinstCAltStorageWnd_x                                      0xFAC5D8
#define pinstCAudioTriggersWindow_x                                0xEC3CD8
#define pinstCAuraWnd_x                                            0xEE11C8
#define pinstCAvaZoneWnd_x                                         0xEE0E94
#define pinstCBandolierWnd_x                                       0xEE11D0
#define pinstCBankWnd_x                                            0xEE114C
#define pinstCBarterMerchantWnd_x                                  0xFAD818
#define pinstCBarterSearchWnd_x                                    0xFAD8C8
#define pinstCBarterWnd_x                                          0xFAD978
#define pinstCBazaarConfirmationWnd_x                              0xEE0DDC
#define pinstCBazaarSearchWnd_x                                    0xEE0E88
#define pinstCBazaarWnd_x                                          0xEE0E38
#define pinstCBlockedBuffWnd_x                                     0xEE0EC4
#define pinstCBlockedPetBuffWnd_x                                  0xEE0EC8
#define pinstCBodyTintWnd_x                                        0xEE0DFC
#define pinstCBookWnd_x                                            0xEE1154
#define pinstCBreathWnd_x                                          0xEE0DAC
#define pinstCBuffWindowNORMAL_x                                   0xEE0EBC
#define pinstCBuffWindowSHORT_x                                    0xEE0EC0
#define pinstCBugReportWnd_x                                       0xEE0E68
#define pinstCButtonWnd_x                                          0xFC4098
#define pinstCCastingWnd_x                                         0xEE0EF8
#define pinstCCastSpellWnd_x                                       0xEE0F0C
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE0E90
#define pinstCChatWindowManager_x                                  0xFAE420
#define pinstCClaimWnd_x                                           0xFAE578
#define pinstCColorPickerWnd_x                                     0xEE0EB0
#define pinstCCombatAbilityWnd_x                                   0xEE11B4
#define pinstCCombatSkillsSelectWnd_x                              0xEE11B0
#define pinstCCompassWnd_x                                         0xEE0DB8
#define pinstCConfirmationDialog_x                                 0xFB3440
#define pinstCContainerMgr_x                                       0xEE11DC
#define pinstCContextMenuManager_x                                 0xFC3DE8
#define pinstCCursorAttachment_x                                   0xEE0EF0
#define pinstCDragonHoardWnd_x                                     0xEE0E84
#define pinstCDynamicZoneWnd_x                                     0xFAEB40
#define pinstCEditLabelWnd_x                                       0xEE0E4C
#define pinstCEQMainWnd_x                                          0xFAED88
#define pinstCEventCalendarWnd_x                                   0xEE0DC0
#define pinstCExtendedTargetWnd_x                                  0xEE0EF4
#define pinstCFactionWnd_x                                         0xEE0F08
#define pinstCFellowshipWnd_x                                      0xFAEF88
#define pinstCFileSelectionWnd_x                                   0xEE0DB4
#define pinstCFindItemWnd_x                                        0xEE0DD4
#define pinstCFindLocationWnd_x                                    0xFAF0E0
#define pinstCFriendsWnd_x                                         0xEE11B8
#define pinstCGemsGameWnd_x                                        0xEE0DC8
#define pinstCGiveWnd_x                                            0xEE0E40
#define pinstCGroupSearchFiltersWnd_x                              0xEE0ECC
#define pinstCGroupSearchWnd_x                                     0xFAF4D8
#define pinstCGroupWnd_x                                           0xFAF588
#define pinstCGuildBankWnd_x                                       0xFAF638
#define pinstCGuildCreationWnd_x                                   0xFAF6E8
#define pinstCGuildMgmtWnd_x                                       0xFAF798
#define pinstCharacterCreation_x                                   0xEE0ED4
#define pinstCHelpWnd_x                                            0xEE1140
#define pinstCHeritageSelectionWnd_x                               0xEE0E9C
#define pinstCHotButtonWnd_x                                       0xFB18F0
#define pinstCHotButtonWnd1_x                                      0xFB18F0
#define pinstCHotButtonWnd2_x                                      0xFB18F4
#define pinstCHotButtonWnd3_x                                      0xFB18F8
#define pinstCHotButtonWnd4_x                                      0xFB18FC
#define pinstCIconSelectionWnd_x                                   0xEE0E64
#define pinstCInspectWnd_x                                         0xEE0E58
#define pinstCInventoryWnd_x                                       0xEE1144
#define pinstCInvSlotMgr_x                                         0xEE11D4
#define pinstCItemDisplayManager_x                                 0xFB1E48
#define pinstCItemExpTransferWnd_x                                 0xFB1F78
#define pinstCItemFuseWnd_x                                        0xEE0DF8
#define pinstCItemOverflowWnd_x                                    0xEE0E24
#define pinstCJournalCatWnd_x                                      0xEE0DEC
#define pinstCJournalNPCWnd_x                                      0xEE0DE0
#define pinstCJournalTextWnd_x                                     0xEE0DE0
#define pinstCKeyRingWnd_x                                         0xEE1148
#define pinstCLargeDialogWnd_x                                     0xFB40C0
#define pinstCLayoutCopyWnd_x                                      0xFB22C8
#define pinstCLFGuildWnd_x                                         0xFB2378
#define pinstCLoadskinWnd_x                                        0xEE0DCC
#define pinstCLootFiltersCopyWnd_x                                 0xEE0218
#define pinstCLootFiltersWnd_x                                     0xEE0DE4
#define pinstCLootSettingsWnd_x                                    0xEE0DE8
#define pinstCLootWnd_x                                            0xEE1158
#define pinstCMailAddressBookWnd_x                                 0xEE0E7C
#define pinstCMailCompositionWnd_x                                 0xEE0E74
#define pinstCMailIgnoreListWnd_x                                  0xEE0E80
#define pinstCMailWnd_x                                            0xEE0E6C
#define pinstCManageLootWnd_x                                      0xEE2418
#define pinstCMapToolbarWnd_x                                      0xEE0E44
#define pinstCMapViewWnd_x                                         0xEE0E3C
#define pinstCMarketplaceWnd_x                                     0xEE0E60
#define pinstCMerchantWnd_x                                        0xEE0E20
#define pinstCMIZoneSelectWnd_x                                    0xFB2BB0
#define pinstCMusicPlayerWnd_x                                     0xEE11D8
#define pinstCNameChangeMercWnd_x                                  0xEE1194
#define pinstCNameChangePetWnd_x                                   0xEE116C
#define pinstCNameChangeWnd_x                                      0xEE0EA4
#define pinstCNoteWnd_x                                            0xEE0F2C
#define pinstCObjectPreviewWnd_x                                   0xEE0EAC
#define pinstCOptionsWnd_x                                         0xEE0EB8
#define pinstCOverseerWnd_x                                        0xEE0E28
#define pinstCPetInfoWnd_x                                         0xEE1160
#define pinstCPetitionQWnd_x                                       0xEE0EDC
#define pinstCPlayerCustomizationWnd_x                             0xEE0E98
#define pinstCPlayerNotesWnd_x                                     0xEE0DBC
#define pinstCPlayerWnd_x                                          0xEE0DC4
#define pinstCPopupWndManager_x                                    0xFB3440
#define pinstCProgressionSelectionWnd_x                            0xFB34F0
#define pinstCPurchaseGroupWnd_x                                   0xEE0E78
#define pinstCPurchaseWnd_x                                        0xEE0E70
#define pinstCPvPLeaderboardWnd_x                                  0xFB35A0
#define pinstCPvPStatsWnd_x                                        0xFB3650
#define pinstCQuantityWnd_x                                        0xEE1150
#define pinstCRaceChangeWnd_x                                      0xEE0EA8
#define pinstCRaidOptionsWnd_x                                     0xEE0F00
#define pinstCRaidWnd_x                                            0xEE0F10
#define pinstCRealEstateItemsWnd_x                                 0xEE0EB4
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE0F04
#define pinstCRealEstateManageWnd_x                                0xEE0EE0
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE0EE4
#define pinstCRealEstatePlotSearchWnd_x                            0xEE0EE8
#define pinstCRealEstatePurchaseWnd_x                              0xEE0EEC
#define pinstCRespawnWnd_x                                         0xEE11CC
#define pinstCRewardSelectionWnd_x                                 0xFB3D98
#define pinstCSelectorWnd_x                                        0xEE0E30
#define pinstCSendMoneyWnd_x                                       0xEE0E48
#define pinstCServerListWnd_x                                      0xEE0DB0
#define pinstCSkillsSelectWnd_x                                    0xEE11AC
#define pinstCSkillsWnd_x                                          0xEE1198
#define pinstCSocialEditWnd_x                                      0xEE0E5C
#define pinstCSocialWnd_x                                          0xEE0DD8
#define pinstCSpellBookWnd_x                                       0xEE0F28
#define pinstCStoryWnd_x                                           0xEE0DF4
#define pinstCTargetOfTargetWnd_x                                  0xFB53F8
#define pinstCTargetWnd_x                                          0xEE0E54
#define pinstCTaskOverlayWnd_x                                     0xEE0DF0
#define pinstCTaskSelectWnd_x                                      0xFB5550
#define pinstCTaskManager_x                                        0xC6A268
#define pinstCTaskTemplateSelectWnd_x                              0xFB5600
#define pinstCTaskWnd_x                                            0xFB56B0
#define pinstCTextEntryWnd_x                                       0xEE11A4
#define pinstCTimeLeftWnd_x                                        0xEE0ED8
#define pinstCTipWndCONTEXT_x                                      0xFB58B4
#define pinstCTipWndOFDAY_x                                        0xFB58B0
#define pinstCTitleWnd_x                                           0xFB5960
#define pinstCTrackingWnd_x                                        0xEE0E50
#define pinstCTradeskillWnd_x                                      0xFB5AC8
#define pinstCTradeWnd_x                                           0xEE0E2C
#define pinstCTrainWnd_x                                           0xEE1168
#define pinstCTributeBenefitWnd_x                                  0xFB5CC8
#define pinstCTributeMasterWnd_x                                   0xFB5D78
#define pinstCTributeTrophyWnd_x                                   0xFB5E28
#define pinstCVideoModesWnd_x                                      0xEE0E34
#define pinstCVoiceMacroWnd_x                                      0xF9F1C0
#define pinstCVoteResultsWnd_x                                     0xEE1164
#define pinstCVoteWnd_x                                            0xEE115C
#define pinstCZoneGuideWnd_x                                       0xEE11BC
#define pinstCZonePathWnd_x                                        0xEE11C0

#define pinstEQSuiteTextureLoader_x                                0xEA1B98
#define pinstItemIconCache_x                                       0xFAED40
#define pinstLootFiltersManager_x                                  0xEE02C8
#define pinstRewardSelectionWnd_x                                  0xFB3D98

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB760
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB9F0
#define __ConvertItemTags_x                                        0x5F8C00
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F56E0
#define __EQGetTime_x                                              0x8F23C0
#define __ExecuteCmd_x                                             0x5D3C20
#define __FixHeading_x                                             0x9EECC0
#define __FlushDxKeyboard_x                                        0x6D93B0
#define __GameLoop_x                                               0x6DCCE0
#define __get_bearing_x                                            0x5DB380
#define __get_melee_range_x                                        0x5DBC30
#define __GetAnimationCache_x                                      0x74C340
#define __GetGaugeValueFromEQ_x                                    0x85C900
#define __GetLabelFromEQ_x                                         0x85E310
#define __GetXTargetType_x                                         0x9F1030
#define __HandleMouseWheel_x                                       0x6DE170
#define __HeadingDiff_x                                            0x9EED20
#define __HelpPath_x                                               0xF9A9DC
#define __ExecuteFrontEnd_x                                        0x6D9B90
#define __NewUIINI_x                                               0x85C5E0
#define __ProcessGameEvents_x                                      0x642350
#define __ProcessMouseEvent_x                                      0x641A50
#define __SaveColors_x                                             0x56F7D0
#define __STMLToText_x                                             0x92E0E0
#define __ToggleKeyRingItem_x                                      0x528CC0
#define CMemoryMappedFile__SetFile_x                               0xADFF70
#define CrashDetected_x                                            0x6DB8E0
#define DrawNetStatus_x                                            0x6718F0
#define Expansion_HoT_x                                            0xDAFDB8
#define Teleport_Table_Size_x                                      0xF95230
#define Teleport_Table_x                                           0xF92E08
#define Util__FastTime_x                                           0x8F1F70
#define __CopyLayout_x                                             0x65E490
#define __WndProc_x                                                0x6DBDE0
#define __ProcessKeyboardEvent_x                                   0x6DB320

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
#define AltAdvManager__GetCalculatedTimer_x                        0x578840
#define AltAdvManager__IsAbilityReady_x                            0x577440
#define AltAdvManager__GetAAById_x                                 0x5777E0
#define AltAdvManager__CanTrainAbility_x                           0x577850
#define AltAdvManager__CanSeeAbility_x                             0x577C00

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1800
#define CharacterZoneClient__HasSkill_x                            0x4DCFB0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE730
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8C80
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1450
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFC30
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFD30
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE70
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAF70
#define CharacterZoneClient__BardCastBard_x                        0x4CDEC0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C53F0
#define CharacterZoneClient__GetEffect_x                           0x4C1390
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC4A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC550
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC5F0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC7B0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC990
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8C00
#define CharacterZoneClient__FindItemByGuid_x                      0x684D80
#define CharacterZoneClient__FindItemByRecord_x                    0x4DED10

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x707220
#define CBankWnd__WndNotification_x                                0x706FD0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711D50

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C990
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A960

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716490

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92B680
#define CButtonWnd__CButtonWnd_x                                   0x929FE0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x739840
#define CChatManager__InitContextMenu_x                            0x731D30
#define CChatManager__FreeChatWindow_x                             0x738400
#define CChatManager__SetLockedActiveChatWindow_x                  0x739520
#define CChatManager__CreateChatWindow_x                           0x738A20

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD60

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x941560
#define CContextMenu__dCContextMenu_x                              0x941790
#define CContextMenu__AddMenuItem_x                                0x9417A0
#define CContextMenu__AddChildMenuItem_x                           0x9418E0
#define CContextMenu__RemoveMenuItem_x                             0x941B90
#define CContextMenu__RemoveAllMenuItems_x                         0x941BB0
#define CContextMenu__CheckMenuItem_x                              0x941C10
#define CContextMenu__SetMenuItem_x                                0x941AB0
#define CContextMenu__AddSeparator_x                               0x941A90
#define CContextMenu__AddColorSeparator_x                          0x916550

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9421A0
#define CContextMenuManager__RemoveMenu_x                          0x942210
#define CContextMenuManager__PopupMenu_x                           0x9422D0
#define CContextMenuManager__Flush_x                               0x942140
#define CContextMenuManager__GetMenu_x                             0x49DA70
#define CContextMenuManager__CreateDefaultMenu_x                   0x7461C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9C86C0
#define CChatService__GetFriendName_x                              0x9C86D0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73A1C0
#define CChatWindow__Clear_x                                       0x73B650
#define CChatWindow__WndNotification_x                             0x73BDE0
#define CChatWindow__AddHistory_x                                  0x73AE90

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x93E560
#define CComboWnd__Draw_x                                          0x93DA00
#define CComboWnd__GetCurChoice_x                                  0x93E330
#define CComboWnd__GetListRect_x                                   0x93DEB0
#define CComboWnd__GetTextRect_x                                   0x93E5D0
#define CComboWnd__InsertChoice_x                                  0x93E040
#define CComboWnd__SetColors_x                                     0x93E010
#define CComboWnd__SetChoice_x                                     0x93E310
#define CComboWnd__GetItemCount_x                                  0x93E340
#define CComboWnd__GetCurChoiceText_x                              0x93E370
#define CComboWnd__GetChoiceText_x                                 0x93E350
#define CComboWnd__InsertChoiceAtIndex_x                           0x93E0D0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x7437E0
#define CContainerWnd__vftable_x                                   0xB5D96C
#define CContainerWnd__SetContainer_x                              0x745060

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56A010
#define CDisplay__PreZoneMainUI_x                                  0x56A020
#define CDisplay__CleanGameUI_x                                    0x56F5B0
#define CDisplay__GetClickedActor_x                                0x561E00
#define CDisplay__GetUserDefinedColor_x                            0x559B80
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x563910
#define CDisplay__is3dON_x                                         0x55E690
#define CDisplay__ReloadUI_x                                       0x569330
#define CDisplay__WriteTextHD2_x                                   0x55E480
#define CDisplay__TrueDistance_x                                   0x5658F0
#define CDisplay__SetViewActor_x                                   0x561720
#define CDisplay__GetFloorHeight_x                                 0x55E750
#define CDisplay__SetRenderWindow_x                                0x55D100
#define CDisplay__ToggleScreenshotMode_x                           0x5611F0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x963EF0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x945160
#define CEditWnd__EnsureCaretVisible_x                             0x9474E0
#define CEditWnd__GetCaretPt_x                                     0x946340
#define CEditWnd__GetCharIndexPt_x                                 0x9460F0
#define CEditWnd__GetDisplayString_x                               0x945F90
#define CEditWnd__GetHorzOffset_x                                  0x9446B0
#define CEditWnd__GetLineForPrintableChar_x                        0x9473F0
#define CEditWnd__GetSelStartPt_x                                  0x9463A0
#define CEditWnd__GetSTMLSafeText_x                                0x945DA0
#define CEditWnd__PointFromPrintableChar_x                         0x947030
#define CEditWnd__SelectableCharFromPoint_x                        0x947190
#define CEditWnd__SetEditable_x                                    0x946470
#define CEditWnd__SetWindowTextA_x                                 0x945AF0
#define CEditWnd__ReplaceSelection_x                               0x946BF0
#define CEditWnd__ReplaceSelection1_x                              0x946B70

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D960
#define CEverQuest__ClickedPlayer_x                                0x61EE70
#define CEverQuest__CreateTargetIndicator_x                        0x63F2C0
#define CEverQuest__DeleteTargetIndicator_x                        0x63F350
#define CEverQuest__DoTellWindow_x                                 0x4EFE60
#define CEverQuest__OutputTextToLog_x                              0x4F0130
#define CEverQuest__DropHeldItemOnGround_x                         0x613F40
#define CEverQuest__dsp_chat_x                                     0x4F0500
#define CEverQuest__trimName_x                                     0x63A8B0
#define CEverQuest__Emote_x                                        0x62E020
#define CEverQuest__EnterZone_x                                    0x627CC0
#define CEverQuest__GetBodyTypeDesc_x                              0x633570
#define CEverQuest__GetClassDesc_x                                 0x633BB0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6341B0
#define CEverQuest__GetDeityDesc_x                                 0x63DA70
#define CEverQuest__GetLangDesc_x                                  0x634370
#define CEverQuest__GetRaceDesc_x                                  0x633B90
#define CEverQuest__InterpretCmd_x                                 0x63E0E0
#define CEverQuest__LeftClickedOnPlayer_x                          0x618430
#define CEverQuest__LMouseUp_x                                     0x6164F0
#define CEverQuest__RightClickedOnPlayer_x                         0x619020
#define CEverQuest__RMouseUp_x                                     0x6177B0
#define CEverQuest__SetGameState_x                                 0x613CC0
#define CEverQuest__UPCNotificationFlush_x                         0x63A7D0
#define CEverQuest__IssuePetCommand_x                              0x635970
#define CEverQuest__ReportSuccessfulHit_x                          0x62F8F0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x7572E0
#define CGaugeWnd__CalcLinesFillRect_x                             0x757340
#define CGaugeWnd__Draw_x                                          0x7568F0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4A30
#define CGuild__GetGuildName_x                                     0x4B3250
#define CGuild__GetGuildIndex_x                                    0x4B3970

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774830

//CHotButton
#define CHotButton__SetCheck_x                                     0x652900
#define CHotButton__SetButtonSize_x                                0x652CC0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781BB0
#define CInvSlotMgr__MoveItem_x                                    0x7807A0
#define CInvSlotMgr__SelectSlot_x                                  0x781C70

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77EE70
#define CInvSlot__SliderComplete_x                                 0x77C190
#define CInvSlot__GetItemBase_x                                    0x77BA30
#define CInvSlot__UpdateItem_x                                     0x77BC20

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782A80
#define CInvSlotWnd__HandleLButtonUp_x                             0x7834B0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856D70
#define CItemDisplayWnd__UpdateStrings_x                           0x79B2D0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x7902E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790810
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B9E0
#define CItemDisplayWnd__AboutToShow_x                             0x79AEC0
#define CItemDisplayWnd__WndNotification_x                         0x79D140
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C800
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799D90
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79ACB0

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88C0A0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A28A0
#define CItemDisplayManager__ShowItem_x                            0x7A1D10

// CLabel 
#define CLabel__UpdateText_x                                       0x7A93F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x910F70
#define CListWnd__dCListWnd_x                                      0x911270
#define CListWnd__AddColumn_x                                      0x915EB0
#define CListWnd__AddColumn1_x                                     0x915FD0
#define CListWnd__AddLine_x                                        0x916350
#define CListWnd__AddString_x                                      0x916140
#define CListWnd__CalculateFirstVisibleLine_x                      0x915C60
#define CListWnd__CalculateVSBRange_x                              0x915A50
#define CListWnd__ClearSel_x                                       0x916D20
#define CListWnd__ClearAllSel_x                                    0x916D70
#define CListWnd__CloseAndUpdateEditWindow_x                       0x917860
#define CListWnd__Compare_x                                        0x9151D0
#define CListWnd__Draw_x                                           0x911430
#define CListWnd__DrawColumnSeparators_x                           0x913FC0
#define CListWnd__DrawHeader_x                                     0x914420
#define CListWnd__DrawItem_x                                       0x914A70
#define CListWnd__DrawLine_x                                       0x914130
#define CListWnd__DrawSeparator_x                                  0x914060
#define CListWnd__EnableLine_x                                     0x913870
#define CListWnd__EnsureVisible_x                                  0x917780
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x916C60
#define CListWnd__GetColumnTooltip_x                               0x9133F0
#define CListWnd__GetColumnMinWidth_x                              0x913460
#define CListWnd__GetColumnWidth_x                                 0x913370
#define CListWnd__GetCurSel_x                                      0x912CD0
#define CListWnd__GetItemAtPoint_x                                 0x913AF0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x913B60
#define CListWnd__GetItemColor_x                                   0x913050
#define CListWnd__GetItemData_x                                    0x912D50
#define CListWnd__GetItemHeight_x                                  0x913140
#define CListWnd__GetItemIcon_x                                    0x912ED0
#define CListWnd__GetItemRect_x                                    0x913960
#define CListWnd__GetItemText_x                                    0x912D90
#define CListWnd__GetSelList_x                                     0x916DC0
#define CListWnd__GetSeparatorRect_x                               0x913DD0
#define CListWnd__InsertLine_x                                     0x916890
#define CListWnd__RemoveLine_x                                     0x916AB0
#define CListWnd__SetColors_x                                      0x915A20
#define CListWnd__SetColumnJustification_x                         0x915750
#define CListWnd__SetColumnLabel_x                                 0x9160E0
#define CListWnd__SetItemOnlyDrawTexture_x                         0x917470
#define CListWnd__SetColumnWidth_x                                 0x915660
#define CListWnd__SetCurSel_x                                      0x916BB0
#define CListWnd__SetItemColor_x                                   0x917400
#define CListWnd__SetItemData_x                                    0x9173C0
#define CListWnd__SetItemText_x                                    0x916FE0
#define CListWnd__ShiftColumnSeparator_x                           0x915810
#define CListWnd__Sort_x                                           0x9154C0
#define CListWnd__ToggleSel_x                                      0x916BE0
#define CListWnd__SetColumnsSizable_x                              0x9158B0
#define CListWnd__SetItemWnd_x                                     0x917280
#define CListWnd__GetItemWnd_x                                     0x912F20
#define CListWnd__SetItemIcon_x                                    0x917060
#define CListWnd__CalculateCustomWindowPositions_x                 0x915D60
#define CListWnd__SetVScrollPos_x                                  0x915640

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0910
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BEF50
#define CMapViewWnd__HandleLButtonDown_x                           0x7BBD70
#define CMapViewWnd__WndNotification_x                             0x7C3240

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3EE0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4840
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4ED0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E81B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2950
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE390
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3B30

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x995170
#define CPacketScrambler__hton_x                                   0x995160

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x934760
#define CSidlManager__FindScreenPieceTemplate_x                    0x934B30
#define CSidlManager__FindScreenPieceTemplate1_x                   0x934960
#define CSidlManager__CreateXWndFromTemplate_x                     0x937FE0
#define CSidlManager__CreateXWndFromTemplate1_x                    0x938270
#define CSidlManagerbase__CreateXWnd_x                             0x9382B0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CDC0
#define CSidlManager__CreateLabel_x                                0x84C990

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C410

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x930490
#define CSidlScreenWnd__CalculateVSBRange_x                        0x930390
#define CSidlScreenWnd__ConvertToRes_x                             0x95E160
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x92FD10
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92FA00
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92FAD0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x92FBA0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x930D30
#define CSidlScreenWnd__EnableIniStorage_x                         0x931210
#define CSidlScreenWnd__GetSidlPiece_x                             0x930F20
#define CSidlScreenWnd__Init1_x                                    0x92F4B0
#define CSidlScreenWnd__LoadIniInfo_x                              0x931260
#define CSidlScreenWnd__LoadIniListWnd_x                           0x931E50
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92E8B0
#define CSidlScreenWnd__StoreIniInfo_x                             0x9319C0
#define CSidlScreenWnd__StoreIniVis_x                              0x931D40
#define CSidlScreenWnd__WndNotification_x                          0x930C00
#define CSidlScreenWnd__GetChildItem_x                             0x931190
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91F7B0
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC3CB8

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0FC0
#define CSkillMgr__GetSkillCap_x                                   0x6C1190
#define CSkillMgr__GetNameToken_x                                  0x6C07B0
#define CSkillMgr__IsActivatedSkill_x                              0x6C08A0
#define CSkillMgr__IsCombatSkill_x                                 0x6C0810

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x943290
#define CSliderWnd__SetValue_x                                     0x9430C0
#define CSliderWnd__SetNumTicks_x                                  0x943120

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x8536C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94C7D0
#define CStmlWnd__ParseSTML_x                                      0x94D980
#define CStmlWnd__CalculateHSBRange_x                              0x94D750
#define CStmlWnd__CalculateVSBRange_x                              0x94D6C0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9525B0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x953250
#define CStmlWnd__ForceParseNow_x                                  0x94CD40
#define CStmlWnd__GetNextTagPiece_x                                0x952510
#define CStmlWnd__GetVisibleText_x                                 0x94CD60
#define CStmlWnd__InitializeWindowVariables_x                      0x9530A0
#define CStmlWnd__MakeStmlColorTag_x                               0x94BE70
#define CStmlWnd__MakeWndNotificationTag_x                         0x94BEE0
#define CStmlWnd__SetSTMLText_x                                    0x94AC50
#define CStmlWnd__StripFirstSTMLLines_x                            0x954470
#define CStmlWnd__UpdateHistoryString_x                            0x953450

// CTabWnd 
#define CTabWnd__Draw_x                                            0x949B00
#define CTabWnd__DrawCurrentPage_x                                 0x94A490
#define CTabWnd__DrawTab_x                                         0x94A080
#define CTabWnd__GetCurrentPage_x                                  0x949270
#define CTabWnd__GetPageInnerRect_x                                0x9494A0
#define CTabWnd__GetTabInnerRect_x                                 0x9493E0
#define CTabWnd__GetTabRect_x                                      0x9492A0
#define CTabWnd__InsertPage_x                                      0x949690
#define CTabWnd__RemovePage_x                                      0x9497D0
#define CTabWnd__SetPage_x                                         0x949520
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x949A00
#define CTabWnd__UpdatePage_x                                      0x949E70
#define CTabWnd__GetPageFromTabIndex_x                             0x949FC0
#define CTabWnd__GetCurrentTabIndex_x                              0x949260

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x948C00
#define CPageWnd__FlashTab_x                                       0x948C60

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACAA0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91BC70
#define CTextureFont__GetTextExtent_x                              0x91BF70

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x95AC10

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x906A20

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x541A80
#define CXStr__CXStr1_x                                            0x4827A0
#define CXStr__CXStr3_x                                            0x8EE300
#define CXStr__dCXStr_x                                            0x478FA0
#define CXStr__operator_equal_x                                    0x8EE540
#define CXStr__operator_equal1_x                                   0x8EE580
#define CXStr__operator_plus_equal1_x                              0x8EEFE0
#define CXStr__SetString_x                                         0x8F0E80
#define CXStr__operator_char_p_x                                   0x8EEA30
#define CXStr__GetChar_x                                           0x8F07E0
#define CXStr__Delete_x                                            0x8F00B0
#define CXStr__GetUnicode_x                                        0x8F0850
#define CXStr__Insert_x                                            0x8F08B0
#define CXStr__FindNext_x                                          0x8F0500
#define CXStr__Copy_x                                              0x8EFEC0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9411C0
#define CXWnd__BringToTop_x                                        0x923210
#define CXWnd__ClrFocus_x                                          0x922B90
#define CXWnd__Destroy_x                                           0x922C40
#define CXWnd__DoAllDrawing_x                                      0x91EE10
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x91EDE0
#define CXWnd__DrawColoredRect_x                                   0x91F390
#define CXWnd__DrawTooltip_x                                       0x91D350
#define CXWnd__DrawTooltipAtPoint_x                                0x91D410
#define CXWnd__GetBorderFrame_x                                    0x91F030
#define CXWnd__GetChildWndAt_x                                     0x9232B0
#define CXWnd__GetClientClipRect_x                                 0x921400
#define CXWnd__GetScreenClipRect_x                                 0x9214D0
#define CXWnd__GetScreenRect_x                                     0x921670
#define CXWnd__GetRelativeRect_x                                   0x921730
#define CXWnd__GetTooltipRect_x                                    0x91F3E0
#define CXWnd__GetWindowTextA_x                                    0x4EFD00
#define CXWnd__IsActive_x                                          0x91FB20
#define CXWnd__IsDescendantOf_x                                    0x9220F0
#define CXWnd__IsReallyVisible_x                                   0x922120
#define CXWnd__IsType_x                                            0x923A40
#define CXWnd__Move_x                                              0x922190
#define CXWnd__Move1_x                                             0x922290
#define CXWnd__ProcessTransition_x                                 0x922D20
#define CXWnd__Refade_x                                            0x922550
#define CXWnd__Resize_x                                            0x9227E0
#define CXWnd__Right_x                                             0x923000
#define CXWnd__SetFocus_x                                          0x922B50
#define CXWnd__SetFont_x                                           0x922BC0
#define CXWnd__SetKeyTooltip_x                                     0x923800
#define CXWnd__SetMouseOver_x                                      0x9204E0
#define CXWnd__StartFade_x                                         0x921FD0
#define CXWnd__GetChildItem_x                                      0x923430
#define CXWnd__SetParent_x                                         0x921E00
#define CXWnd__Minimize_x                                          0x922840

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95F1B0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x926260
#define CXWndManager__DrawWindows_x                                0x9263B0
#define CXWndManager__GetKeyboardFlags_x                           0x928C30
#define CXWndManager__HandleKeyboardMsg_x                          0x928820
#define CXWndManager__RemoveWnd_x                                  0x928EF0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x9293A0

// CDBStr
#define CDBStr__GetString_x                                        0x558680

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5D40
#define EQ_Character__Cur_HP_x                                     0x4D9C00
#define EQ_Character__Cur_Mana_x                                   0x4E0E50
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9370
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8810
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8960
#define EQ_Character__GetHPRegen_x                                 0x4E6940
#define EQ_Character__GetEnduranceRegen_x                          0x4E6F00
#define EQ_Character__GetManaRegen_x                               0x4E7340
#define EQ_Character__Max_Endurance_x                              0x681600
#define EQ_Character__Max_HP_x                                     0x4D9A30
#define EQ_Character__Max_Mana_x                                   0x6813E0
#define EQ_Character__doCombatAbility_x                            0x6841B0
#define EQ_Character__UseSkill_x                                   0x4E8510
#define EQ_Character__GetConLevel_x                                0x6796F0
#define EQ_Character__IsExpansionFlag_x                            0x5D23E0
#define EQ_Character__TotalEffect_x                                0x4CD7B0
#define EQ_Character__GetPCSpellAffect_x                           0x4CA1D0
#define EQ_Character__SpellDuration_x                              0x4C9C10
#define EQ_Character__MySpellDuration_x                            0x4B6EE0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD70
#define EQ_Character__GetBaseSkill_x                               0x4DDD20
#define EQ_Character__CanUseItem_x                                 0x4E1180
#define EQ_Character__CanMedOnHorse_x                              0x4E8050

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B5C40

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699A50

//PcClient
#define PcClient__vftable_x                                        0xB5143C
#define PcClient__PcClient_x                                       0x6767B0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0320
#define CCharacterListWnd__EnterWorld_x                            0x4BFCF0
#define CCharacterListWnd__Quit_x                                  0x4BFA10
#define CCharacterListWnd__UpdateList_x                            0x4BFEE0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658B50
#define EQ_Item__CreateItemTagString_x                             0x98DDD0
#define EQ_Item__IsStackable_x                                     0x9930F0
#define EQ_Item__GetImageNum_x                                     0x98FB20
#define EQ_Item__CreateItemClient_x                                0x657AE0
#define EQ_Item__GetItemValue_x                                    0x990D90
#define EQ_Item__ValueSellMerchant_x                               0x994E80
#define EQ_Item__IsKeyRingItem_x                                   0x992870
#define EQ_Item__CanGoInBag_x                                      0x658C70
#define EQ_Item__IsEmpty_x                                         0x992230
#define EQ_Item__GetMaxItemCount_x                                 0x9911B0
#define EQ_Item__GetHeldItem_x                                     0x98F9D0
#define EQ_Item__CanGemFitInSlot_x                                 0x98D5B0

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x5797E0
#define EQ_LoadingS__Array_x                                       0xD9CD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x682350
#define EQ_PC__GetAlternateAbilityId_x                             0x99F050
#define EQ_PC__GetCombatAbility_x                                  0x99F5E0
#define EQ_PC__GetCombatAbilityTimer_x                             0x99F650
#define EQ_PC__GetItemRecastTimer_x                                0x6847B0
#define EQ_PC__HasLoreItem_x                                       0x67A040
#define EQ_PC__AlertInventoryChanged_x                             0x678EC0
#define EQ_PC__GetPcZoneClient_x                                   0x6AA1C0
#define EQ_PC__RemoveMyAffect_x                                    0x688020
#define EQ_PC__GetKeyRingItems_x                                   0x9A01A0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x99FC80
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9A03B0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8800
#define EQItemList__add_object_x                                   0x608E00
#define EQItemList__add_item_x                                     0x5D8DE0
#define EQItemList__delete_item_x                                  0x5D8E30
#define EQItemList__FreeItemList_x                                 0x5D8D40

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554A00

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B480
#define EQPlayer__dEQPlayer_x                                      0x68DB80
#define EQPlayer__DoAttack_x                                       0x6A3E80
#define EQPlayer__EQPlayer_x                                       0x68E3D0
#define EQPlayer__SetNameSpriteState_x                             0x692990
#define EQPlayer__SetNameSpriteTint_x                              0x693860
#define PlayerBase__HasProperty_j_x                                0x9ED080
#define EQPlayer__IsTargetable_x                                   0x9ED5E0
#define EQPlayer__CanSee_x                                         0x9ED3D0
#define EQPlayer__CanSee1_x                                        0x9ED4A0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ED140

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7CA0
#define PlayerZoneClient__GetLevel_x                               0x6AA200
#define PlayerZoneClient__IsValidTeleport_x                        0x60A2D0
#define PlayerZoneClient__LegalPlayerRace_x                        0x571610

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E630
#define EQPlayerManager__GetSpawnByName_x                          0x69E6E0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E770

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C450
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C520
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C560
#define KeypressHandler__ClearCommandStateArray_x                  0x65DA20
#define KeypressHandler__HandleKeyDown_x                           0x65DA40
#define KeypressHandler__HandleKeyUp_x                             0x65DAE0
#define KeypressHandler__SaveKeymapping_x                          0x65E090

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC570
#define MapViewMap__SaveEx_x                                       0x7BFB1F
#define MapViewMap__SetZoom_x                                      0x7C5800

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B3AC0

// StringTable 
#define StringTable__getString_x                                   0x9AE810

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687C60
#define PcZoneClient__RemovePetEffect_x                            0x6882D0
#define PcZoneClient__HasAlternateAbility_x                        0x681230
#define PcZoneClient__GetCurrentMod_x                              0x4EBED0
#define PcZoneClient__GetModCap_x                                  0x4EBDD0
#define PcZoneClient__CanEquipItem_x                               0x681910
#define PcZoneClient__GetItemByID_x                                0x684CE0
#define PcZoneClient__RemoveBuffEffect_x                           0x688380
#define PcZoneClient__BandolierSwap_x                              0x682910
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x684750

//Doors
#define EQSwitch__UseSwitch_x                                      0x60EEF0

//IconCache
#define IconCache__GetIcon_x                                       0x74BCE0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7426B0
#define CContainerMgr__CloseContainer_x                            0x7429D0
#define CContainerMgr__OpenExperimentContainer_x                   0x743530

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BE20

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651080

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1780
#define CLootWnd__RequestLootSlot_x                                0x7B09A0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3960
#define EQ_Spell__SpellAffects_x                                   0x5A3E70
#define EQ_Spell__SpellAffectBase_x                                0x5A3B90
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D11B0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1160
#define EQ_Spell__IsSPAStacking_x                                  0x5A4DF0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4080
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4E20
#define EQ_Spell__IsLullSpell_x                                    0x5A4550
#define __IsResEffectSpell_x                                       0x4D0960

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B17F0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9BE6E0
#define EQ_Affect__SetAffectData_x                                 0x9BECB0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868A30
#define CTargetWnd__WndNotification_x                              0x8681D0
#define CTargetWnd__RefreshTargetBuffs_x                           0x868530
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866FB0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D470
#define CTaskWnd__ConfirmAbandonTask_x                             0x870530

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5525C0
#define CTaskManager__HandleMessage_x                              0x550490
#define CTaskManager__GetTaskStatus_x                              0x552670
#define CTaskManager__GetElementDescription_x                      0x5526F0

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E550
#define EqSoundManager__PlayScriptMp3_x                            0x59E750
#define EqSoundManager__SoundAssistPlay_x                          0x6C5480
#define EqSoundManager__WaveInstancePlay_x                         0x6C4970

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541730

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x948070
#define CTextureAnimation__Draw_x                                  0x9482B0
#define CTextureAnimation__AddBlankFrame_x                         0x947E90

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x943D90

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581DC0
#define CAltAbilityData__GetMercMaxRank_x                          0x581D50
#define CAltAbilityData__GetMaxRank_x                              0x575FC0

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E890

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657930
#define CharacterBase__CreateItemGlobalIndex_x                     0x644FF0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x780620
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C6370
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C63C0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726AA0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x727370
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x727420

//messages
#define msg_spell_worn_off_x                                       0x5C9B40
#define msg_new_text_x                                             0x5BD4C0
#define __msgTokenTextParam_x                                      0x5CBFA0
#define msgTokenText_x                                             0x5CC3B0

//SpellManager
#define SpellManager__vftable_x                                    0xB3B540
#define SpellManager__SpellManager_x                               0x6C90B0
#define Spellmanager__LoadTextSpells_x                             0x6C99B0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C9280

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F18E0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D2430
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D06D0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x671690
#define ItemGlobalIndex__IsValidIndex_x                            0x5D25D0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9BF160
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9BF4B0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9870

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x747470
#define CCursorAttachment__AttachToCursor1_x                       0x7474B0
#define CCursorAttachment__Deactivate_x                            0x748B70

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x939800
#define CSidlManagerBase__CreatePageWnd_x                          0x939000
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x9344E0
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x934470

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9597E0
#define CEQSuiteTextureLoader__GetTexture_x                        0x959460

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522240
#define CFindItemWnd__WndNotification_x                            0x523100
#define CFindItemWnd__Update_x                                     0x523D50
#define CFindItemWnd__PickupSelectedItem_x                         0x521920

//IString
#define IString__Append_x                                          0x558100

//Camera
#define CDisplay__cameraType_x                                     0xEE0F24
#define EverQuest__Cameras_x                                       0xDB0104

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D200
#define LootFiltersManager__GetItemFilterData_x                    0x52CB30
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CB60
#define LootFiltersManager__SetItemLootFilter_x                    0x52CD70

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808820

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F75B0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF8B0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73F030

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9CA090
#define CDistillerInfo__Instance_x                                 0x9C9FD0

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761F70
#define CGroupWnd__UpdateDisplay_x                                 0x7611D0

//ItemBase
#define ItemBase__IsLore_x                                         0x992930
#define ItemBase__IsLoreEquipped_x                                 0x9929B0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608D60
#define EQPlacedItemManager__GetItemByGuid_x                       0x608EA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608F00

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4020
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B88D0

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517C90

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5027F0
#define FactionManagerClient__HandleFactionMessage_x               0x503010
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503800
#define FactionManagerClient__GetMaxFaction_x                      0x50381F
#define FactionManagerClient__GetMinFaction_x                      0x5037D0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F5A0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x91A8E0

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E490

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F810

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580F90

//CTargetManager
#define CTargetManager__Get_x                                      0x6CD030

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4020

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC860

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8CE0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4D798

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA9D0
#define CAAWnd__UpdateSelected_x                                   0x6E6F70
#define CAAWnd__Update_x                                           0x6E9D10

//CXRect
#define CXRect__operator_and_x                                     0x7573A0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F7B93
#define __eq_new_x                                                 0x9F8104

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
