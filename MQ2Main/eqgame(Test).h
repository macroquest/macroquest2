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
#define __ExpectedVersionDate                                     "Jun  8 2021"
#define __ExpectedVersionTime                                     "10:50:06"
#define __ActualVersionDate_x                                      0xB54124
#define __ActualVersionTime_x                                      0xB54118
#define __ActualVersionBuild_x                                     0xB442D4

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x665AD0
#define __MemChecker1_x                                            0x951180
#define __MemChecker2_x                                            0x6DFD20
#define __MemChecker3_x                                            0x6DFC90
#define __MemChecker4_x                                            0x8A40F0
#define __EncryptPad0_x                                            0xE56B50
#define __EncryptPad1_x                                            0xEB1360
#define __EncryptPad2_x                                            0xE65D78
#define __EncryptPad3_x                                            0xE65978
#define __EncryptPad4_x                                            0xEA2170
#define __EncryptPad5_x                                            0xFA4C28
#define __AC1_x                                                    0x85EBE0
#define __AC2_x                                                    0x61A57F
#define __AC3_x                                                    0x621941
#define __AC4_x                                                    0x625AB0
#define __AC5_x                                                    0x62C42F
#define __AC6_x                                                    0x630B76
#define __AC7_x                                                    0x619FE0
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x24CD90

// Direct Input
#define DI8__Main_x                                                0xFA4CD4
#define DI8__Keyboard_x                                            0xFA4CD8
#define DI8__Mouse_x                                               0xFA4C34
#define DI8__Mouse_Copy_x                                          0xDB1D8C
#define DI8__Mouse_Check_x                                         0xFA277C
#define __AutoSkillArray_x                                         0xDB28A8
#define __Attack_x                                                 0xE506D7
#define __Autofire_x                                               0xE506D8
#define __BindList_x                                               0xDA7458
#define g_eqCommandStates_x                                        0xDA81C0
#define __Clicks_x                                                 0xDB1E44
#define __CommandList_x                                            0xDA8D48
#define __CurrentMapLabel_x                                        0xFB56D4
#define __CurrentSocial_x                                          0xC6246C
#define __DoAbilityList_x                                          0xDE81F8
#define __do_loot_x                                                0x5E2CD0
#define __DrawHandler_x                                            0x1624448
#define __GroupCount_x                                             0xF97D42
#define __Guilds_x                                                 0xF9C218
#define __gWorld_x                                                 0xF97F54
#define __HWnd_x                                                   0xFA4C38
#define __heqmain_x                                                0xFA4C10
#define __InChatMode_x                                             0xDB1D74
#define __LastTell_x                                               0xDB38F4
#define __LMouseHeldTime_x                                         0xDB1EB0
#define __Mouse_x                                                  0xFA4CC0
#define __MouseLook_x                                              0xDB1E0A
#define __MouseEventTime_x                                         0xF9DC44
#define __gpbCommandEvent_x                                        0xF98060
#define __NetStatusToggle_x                                        0xDB1E0D
#define __PCNames_x                                                0xDB2EA4
#define __RangeAttackReady_x                                       0xDB2B8C
#define __RMouseHeldTime_x                                         0xDB1EAC
#define __RunWalkState_x                                           0xDB1D78
#define __ScreenMode_x                                             0xEE407C
#define __ScreenX_x                                                0xDB1D2C
#define __ScreenY_x                                                0xDB1D28
#define __ScreenXMax_x                                             0xDB1D30
#define __ScreenYMax_x                                             0xDB1D34
#define __ServerHost_x                                             0xF9822B
#define __ServerName_x                                             0xDE81B8
#define __ShiftKeyDown_x                                           0xDB2408
#define __ShowNames_x                                              0xDB2D48
#define EverQuestInfo__bSocialChanged_x                            0xDE8240
#define __Socials_x                                                0xDE82B8
#define __SubscriptionType_x                                       0xFE97C0
#define __TargetAggroHolder_x                                      0xFB8088
#define __ZoneType_x                                               0xDB2208
#define __GroupAggro_x                                             0xFB80C8
#define __LoginName_x                                              0xFA53A4
#define __Inviter_x                                                0xE50654
#define __AttackOnAssist_x                                         0xDB2D04
#define __UseTellWindows_x                                         0xDB303C
#define __gfMaxZoomCameraDistance_x                                0xB4BFAC
#define __gfMaxCameraDistance_x                                    0xB748BC
#define __pulAutoRun_x                                             0xDB1E28
#define __pulForward_x                                             0xDB3074
#define __pulBackward_x                                            0xDB3078
#define __pulTurnRight_x                                           0xDB307C
#define __pulTurnLeft_x                                            0xDB3080
#define __pulStrafeLeft_x                                          0xDB3084
#define __pulStrafeRight_x                                         0xDB3088

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF985B0
#define instEQZoneInfo_x                                           0xDB2000
#define pinstActiveBanker_x                                        0xF9854C
#define pinstActiveCorpse_x                                        0xF98544
#define pinstActiveGMaster_x                                       0xF98548
#define pinstActiveMerchant_x                                      0xF98540
#define pinstAltAdvManager_x                                       0xEE4EC0
#define pinstBandageTarget_x                                       0xF9855C
#define pinstCamActor_x                                            0xEE406C
#define pinstCDBStr_x                                              0xEE3C40
#define pinstCDisplay_x                                            0xF95CBC
#define pinstCEverQuest_x                                          0xFA4C3C
#define pinstEverQuestInfo_x                                       0xDB1D20
#define pinstCharData_x                                            0xF95CAC
#define pinstCharSpawn_x                                           0xF98594
#define pinstControlledMissile_x                                   0xF985A0
#define pinstControlledPlayer_x                                    0xF98594
#define pinstCResolutionHandler_x                                  0x1624670
#define pinstCSidlManager_x                                        0x162360C
#define pinstCXWndManager_x                                        0x1623604
#define instDynamicZone_x                                          0xF9C0F0
#define pinstDZMember_x                                            0xF9C200
#define pinstDZTimerInfo_x                                         0xF9C204
#define pinstEqLogin_x                                             0xFA4CF0
#define instEQMisc_x                                               0xD9B8D8
#define pinstEQSoundManager_x                                      0xEE57D0
#define pinstEQSpellStrings_x                                      0xED48E0
#define instExpeditionLeader_x                                     0xF9C13A
#define instExpeditionName_x                                       0xF9C17A
#define pinstGroup_x                                               0xF97D3E
#define pinstImeManager_x                                          0x1623608
#define pinstLocalPlayer_x                                         0xF9853C
#define pinstMercenaryData_x                                       0xF9F73C
#define pinstMercenaryStats_x                                      0xFB8154
#define pinstModelPlayer_x                                         0xF98554
#define pinstPCData_x                                              0xF95CAC
#define pinstSkillMgr_x                                            0xFA1828
#define pinstSpawnManager_x                                        0xFA0300
#define pinstSpellManager_x                                        0xFA1A68
#define pinstSpellSets_x                                           0xE49300
#define pinstStringTable_x                                         0xF95CB4
#define pinstSwitchManager_x                                       0xF95B50
#define pinstTarget_x                                              0xF98590
#define pinstTargetObject_x                                        0xF95CA4
#define pinstTargetSwitch_x                                        0xF95CA8
#define pinstTaskMember_x                                          0xD9B420
#define pinstTrackTarget_x                                         0xF98598
#define pinstTradeTarget_x                                         0xF98550
#define instTributeActive_x                                        0xD9B8F9
#define pinstViewActor_x                                           0xEE4068
#define pinstWorldData_x                                           0xF95CB8
#define pinstZoneAddr_x                                            0xDB22A0
#define pinstPlayerPath_x                                          0xFA0398
#define pinstTargetIndicator_x                                     0xFA1CD0
#define EQObject_Top_x                                             0xF95CA0
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE40D0
#define pinstCAchievementsWnd_x                                    0xEE3D50
#define pinstCActionsWnd_x                                         0xEE4058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE4064
#define pinstCAdvancedLootWnd_x                                    0xEE405C
#define pinstCAdventureLeaderboardWnd_x                            0xFAEEF8
#define pinstCAdventureRequestWnd_x                                0xFAEFA8
#define pinstCAdventureStatsWnd_x                                  0xFAF058
#define pinstCAggroMeterWnd_x                                      0xEE3DE0
#define pinstCAlarmWnd_x                                           0xEE40C8
#define pinstCAlertHistoryWnd_x                                    0xEE403C
#define pinstCAlertStackWnd_x                                      0xEE3E08
#define pinstCAlertWnd_x                                           0xEE3E0C
#define pinstCAltStorageWnd_x                                      0xFAF3B8
#define pinstCAudioTriggersWindow_x                                0xEC6C10
#define pinstCAuraWnd_x                                            0xEE40A0
#define pinstCAvaZoneWnd_x                                         0xEE3D30
#define pinstCBandolierWnd_x                                       0xEE40B0
#define pinstCBankWnd_x                                            0xEE4040
#define pinstCBarterMerchantWnd_x                                  0xFB05F8
#define pinstCBarterSearchWnd_x                                    0xFB06A8
#define pinstCBarterWnd_x                                          0xFB0758
#define pinstCBazaarConfirmationWnd_x                              0xEE40DC
#define pinstCBazaarSearchWnd_x                                    0xEE3D7C
#define pinstCBazaarWnd_x                                          0xEE3D20
#define pinstCBlockedBuffWnd_x                                     0xEE3DA8
#define pinstCBlockedPetBuffWnd_x                                  0xEE3DB0
#define pinstCBodyTintWnd_x                                        0xEE4100
#define pinstCBookWnd_x                                            0xEE4048
#define pinstCBreathWnd_x                                          0xEE40D4
#define pinstCBuffWindowNORMAL_x                                   0xEE3DA0
#define pinstCBuffWindowSHORT_x                                    0xEE3DA4
#define pinstCBugReportWnd_x                                       0xEE3D5C
#define pinstCButtonWnd_x                                          0x1623870
#define pinstCCastingWnd_x                                         0xEE3DDC
#define pinstCCastSpellWnd_x                                       0xEE3DEC
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE3D80
#define pinstCChatWindowManager_x                                  0xFB1200
#define pinstCClaimWnd_x                                           0xFB1358
#define pinstCColorPickerWnd_x                                     0xEE3D94
#define pinstCCombatAbilityWnd_x                                   0xEE408C
#define pinstCCombatSkillsSelectWnd_x                              0xEE4094
#define pinstCCompassWnd_x                                         0xEE40A8
#define pinstCConfirmationDialog_x                                 0xFB6220
#define pinstCContainerMgr_x                                       0xEE40CC
#define pinstCContextMenuManager_x                                 0x16235C0
#define pinstCCursorAttachment_x                                   0xEE3DD4
#define pinstCDynamicZoneWnd_x                                     0xFB1920
#define pinstCEditLabelWnd_x                                       0xEE3D3C
#define pinstCEQMainWnd_x                                          0xFB1B68
#define pinstCEventCalendarWnd_x                                   0xEE40B8
#define pinstCExtendedTargetWnd_x                                  0xEE3DD8
#define pinstCPlayerCustomizationWnd_x                             0xEE3D84
#define pinstCFactionWnd_x                                         0xEE3DE8
#define pinstCFellowshipWnd_x                                      0xFB1D68
#define pinstCFileSelectionWnd_x                                   0xEE409C
#define pinstCFindItemWnd_x                                        0xEE4104
#define pinstCFindLocationWnd_x                                    0xFB1EC0
#define pinstCFriendsWnd_x                                         0xEE4098
#define pinstCGemsGameWnd_x                                        0xEE40C0
#define pinstCGiveWnd_x                                            0xEE3D2C
#define pinstCGroupSearchFiltersWnd_x                              0xEE3DC4
#define pinstCGroupSearchWnd_x                                     0xFB22B8
#define pinstCGroupWnd_x                                           0xFB2368
#define pinstCGuildBankWnd_x                                       0xFB2418
#define pinstCGuildCreationWnd_x                                   0xFB24C8
#define pinstCGuildMgmtWnd_x                                       0xFB2578
#define pinstCharacterCreation_x                                   0xEE3DD0
#define pinstCHelpWnd_x                                            0xEE3E24
#define pinstCHeritageSelectionWnd_x                               0xEE3D88
#define pinstCHotButtonWnd_x                                       0xFB46D0
#define pinstCHotButtonWnd1_x                                      0xFB46D0
#define pinstCHotButtonWnd2_x                                      0xFB46D4
#define pinstCHotButtonWnd3_x                                      0xFB46D8
#define pinstCHotButtonWnd4_x                                      0xFB46DC
#define pinstCIconSelectionWnd_x                                   0xEE3D58
#define pinstCInspectWnd_x                                         0xEE3D4C
#define pinstCInventoryWnd_x                                       0xEE3E20
#define pinstCInvSlotMgr_x                                         0xEE40B4
#define pinstCItemDisplayManager_x                                 0xFB4C28
#define pinstCItemExpTransferWnd_x                                 0xFB4D5C
#define pinstCItemOverflowWnd_x                                    0xEE3D10
#define pinstCJournalCatWnd_x                                      0xEE40EC
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE40E4
#define pinstCJournalTextWnd_x                                     0xEE40E4
#define pinstCKeyRingWnd_x                                         0xEE4034
#define pinstCLargeDialogWnd_x                                     0xFB6EA0
#define pinstCLayoutCopyWnd_x                                      0xFB50A8
#define pinstCLFGuildWnd_x                                         0xFB5158
#define pinstCLoadskinWnd_x                                        0xEE40C4
#define pinstCLootFiltersCopyWnd_x                                 0xEE3150
#define pinstCLootFiltersWnd_x                                     0xEE40E0
#define pinstCLootSettingsWnd_x                                    0xEE40E8
#define pinstCLootWnd_x                                            0xEE404C
#define pinstCMailAddressBookWnd_x                                 0xEE3D70
#define pinstCMailCompositionWnd_x                                 0xEE3D6C
#define pinstCMailIgnoreListWnd_x                                  0xEE3D74
#define pinstCMailWnd_x                                            0xEE3D64
#define pinstCManageLootWnd_x                                      0xEE5340
#define pinstCMapToolbarWnd_x                                      0xEE3D34
#define pinstCMapViewWnd_x                                         0xEE3D24
#define pinstCMarketplaceWnd_x                                     0xEE3D04
#define pinstCMerchantWnd_x                                        0xEE3D08
#define pinstCMIZoneSelectWnd_x                                    0xFB5990
#define pinstCMusicPlayerWnd_x                                     0xEE40BC
#define pinstCNameChangeMercWnd_x                                  0xEE3E00
#define pinstCNameChangePetWnd_x                                   0xEE3DFC
#define pinstCNameChangeWnd_x                                      0xEE3D60
#define pinstCNoteWnd_x                                            0xEE3E1C
#define pinstCObjectPreviewWnd_x                                   0xEE3D78
#define pinstCOptionsWnd_x                                         0xEE3D98
#define pinstCOverseerWnd_x                                        0xEE3D00
#define pinstCPetInfoWnd_x                                         0xEE4050
#define pinstCPetitionQWnd_x                                       0xEE3DB8
#define pinstCPlayerNotesWnd_x                                     0xEE40AC
#define pinstCPlayerWnd_x                                          0xEE40FC
#define pinstCPopupWndManager_x                                    0xFB6220
#define pinstCProgressionSelectionWnd_x                            0xFB62D0
#define pinstCPurchaseGroupWnd_x                                   0xEE3D14
#define pinstCPurchaseWnd_x                                        0xEE3D0C
#define pinstCPvPLeaderboardWnd_x                                  0xFB6380
#define pinstCPvPStatsWnd_x                                        0xFB6430
#define pinstCQuantityWnd_x                                        0xEE4044
#define pinstCRaceChangeWnd_x                                      0xEE3D68
#define pinstCRaidOptionsWnd_x                                     0xEE3DE4
#define pinstCRaidWnd_x                                            0xEE3DF0
#define pinstCRealEstateItemsWnd_x                                 0xEE3D90
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE3DCC
#define pinstCRealEstateManageWnd_x                                0xEE3DB4
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE3DBC
#define pinstCRealEstatePlotSearchWnd_x                            0xEE3DC0
#define pinstCRealEstatePurchaseWnd_x                              0xEE3DC8
#define pinstCRespawnWnd_x                                         0xEE40A4
#define pinstCRewardSelectionWnd_x                                 0xFB6B78
#define pinstCSelectorWnd_x                                        0xEE3D1C
#define pinstCSendMoneyWnd_x                                       0xEE3D38
#define pinstCServerListWnd_x                                      0xEE4090
#define pinstCSkillsSelectWnd_x                                    0xEE4070
#define pinstCSkillsWnd_x                                          0xEE4060
#define pinstCSocialEditWnd_x                                      0xEE3D54
#define pinstCSocialWnd_x                                          0xEE40D8
#define pinstCSpellBookWnd_x                                       0xEE3E04
#define pinstCStoryWnd_x                                           0xEE40F8
#define pinstCTargetOfTargetWnd_x                                  0xFB81D8
#define pinstCTargetWnd_x                                          0xEE3D48
#define pinstCTaskOverlayWnd_x                                     0xEE40F0
#define pinstCTaskSelectWnd_x                                      0xFB8330
#define pinstCTaskManager_x                                        0xC6D268
#define pinstCTaskTemplateSelectWnd_x                              0xFB83E0
#define pinstCTaskWnd_x                                            0xFB8490
#define pinstCTextEntryWnd_x                                       0xEE4088
#define pinstCTimeLeftWnd_x                                        0xEE3DAC
#define pinstCTipWndCONTEXT_x                                      0xFB8694
#define pinstCTipWndOFDAY_x                                        0xFB8690
#define pinstCTitleWnd_x                                           0xFB8740
#define pinstCTrackingWnd_x                                        0xEE3D40
#define pinstCTradeskillWnd_x                                      0xFB88A8
#define pinstCTradeWnd_x                                           0xEE3D18
#define pinstCTrainWnd_x                                           0xEE4054
#define pinstCTributeBenefitWnd_x                                  0xFB8AA8
#define pinstCTributeMasterWnd_x                                   0xFB8B58
#define pinstCTributeTrophyWnd_x                                   0xFB8C08
#define pinstCVideoModesWnd_x                                      0xEE3D44
#define pinstCVoiceMacroWnd_x                                      0xFA20E8
#define pinstCVoteResultsWnd_x                                     0xEE3DF8
#define pinstCVoteWnd_x                                            0xEE3DF4
#define pinstCZoneGuideWnd_x                                       0xEE4030
#define pinstCZonePathWnd_x                                        0xEE4038

#define pinstEQSuiteTextureLoader_x                                0xEB1920
#define pinstItemIconCache_x                                       0xFB1B20
#define pinstLootFiltersManager_x                                  0xEE3200
#define pinstRewardSelectionWnd_x                                  0xFB6B78

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DDF90
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DE220
#define __ConvertItemTags_x                                        0x5FB390
#define __CleanItemTags_x                                          0x47DA80
#define __DoesFileExist_x                                          0x954110
#define __EQGetTime_x                                              0x950DF0
#define __ExecuteCmd_x                                             0x5D6380
#define __FixHeading_x                                             0x9EF680
#define __FlushDxKeyboard_x                                        0x6DB020
#define __GameLoop_x                                               0x6DE920
#define __get_bearing_x                                            0x5DDB30
#define __get_melee_range_x                                        0x5DE460
#define __GetAnimationCache_x                                      0x74D840
#define __GetGaugeValueFromEQ_x                                    0x85D020
#define __GetLabelFromEQ_x                                         0x85EB60
#define __GetXTargetType_x                                         0x9F19F0
#define __HandleMouseWheel_x                                       0x6DFDB0
#define __HeadingDiff_x                                            0x9EF6E0
#define __HelpPath_x                                               0xF9D904
#define __ExecuteFrontEnd_x                                        0x6DB800
#define __NewUIINI_x                                               0x85CCF0
#define __ProcessGameEvents_x                                      0x644B90
#define __ProcessMouseEvent_x                                      0x644290
#define __SaveColors_x                                             0x571F20
#define __STMLToText_x                                             0x98D2A0
#define __ToggleKeyRingItem_x                                      0x52B120
#define CMemoryMappedFile__SetFile_x                               0xADFDF0
#define CrashDetected_x                                            0x6DD530
#define DrawNetStatus_x                                            0x674070
#define Expansion_HoT_x                                            0xDB2CF0
#define Teleport_Table_Size_x                                      0xF980E8
#define Teleport_Table_x                                           0xF95CC0
#define Util__FastTime_x                                           0x9509B0
#define __CopyLayout_x                                             0x660D10
#define __WndProc_x                                                0x6DDA30
#define __ProcessKeyboardEvent_x                                   0x6DCF70

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
#define AltAdvManager__GetCalculatedTimer_x                        0x57AF30
#define AltAdvManager__IsAbilityReady_x                            0x579B10
#define AltAdvManager__GetAAById_x                                 0x579EB0
#define AltAdvManager__CanTrainAbility_x                           0x579F20
#define AltAdvManager__CanSeeAbility_x                             0x57A2D0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1620
#define CharacterZoneClient__HasSkill_x                            0x4DCD50
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE490
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8A50
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1210
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E13B0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E14B0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E15B0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAC90
#define CharacterZoneClient__BardCastBard_x                        0x4CDCB0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5150
#define CharacterZoneClient__GetEffect_x                           0x4C1150
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC2A0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC350
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC3F0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC5B0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC790
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8A10
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF630
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEF80

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x708C00
#define CBankWnd__WndNotification_x                                0x7089A0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x713630

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70E280
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70C250

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x717D10

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x98A840
#define CButtonWnd__CButtonWnd_x                                   0x9891E0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x73AFA0
#define CChatManager__InitContextMenu_x                            0x733EE0
#define CChatManager__FreeChatWindow_x                             0x739B70
#define CChatManager__SetLockedActiveChatWindow_x                  0x73AC80
#define CChatManager__CreateChatWindow_x                           0x73A190

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F26B0

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x9A06B0
#define CContextMenu__dCContextMenu_x                              0x9A08E0
#define CContextMenu__AddMenuItem_x                                0x9A08F0
#define CContextMenu__RemoveMenuItem_x                             0x9A0C00
#define CContextMenu__RemoveAllMenuItems_x                         0x9A0C20
#define CContextMenu__CheckMenuItem_x                              0x9A0C80
#define CContextMenu__SetMenuItem_x                                0x9A0B20
#define CContextMenu__AddSeparator_x                               0x9A0A80

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A1200
#define CContextMenuManager__RemoveMenu_x                          0x9A1270
#define CContextMenuManager__PopupMenu_x                           0x9A1330
#define CContextMenuManager__Flush_x                               0x9A11A0
#define CContextMenuManager__GetMenu_x                             0x49D910
#define CContextMenuManager__CreateDefaultMenu_x                   0x7477F0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92B540
#define CChatService__GetFriendName_x                              0x92B550

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73B900
#define CChatWindow__Clear_x                                       0x73CD50
#define CChatWindow__WndNotification_x                             0x73D4D0
#define CChatWindow__AddHistory_x                                  0x73C5B0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99D6C0
#define CComboWnd__Draw_x                                          0x99CB70
#define CComboWnd__GetCurChoice_x                                  0x99D490
#define CComboWnd__GetListRect_x                                   0x99D010
#define CComboWnd__GetTextRect_x                                   0x99D730
#define CComboWnd__InsertChoice_x                                  0x99D1A0
#define CComboWnd__SetColors_x                                     0x99D170
#define CComboWnd__SetChoice_x                                     0x99D470
#define CComboWnd__GetItemCount_x                                  0x99D4A0
#define CComboWnd__GetCurChoiceText_x                              0x99D4D0
#define CComboWnd__GetChoiceText_x                                 0x99D4B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99D230

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x744E70
#define CContainerWnd__vftable_x                                   0xB5D374
#define CContainerWnd__SetContainer_x                              0x7466B0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56C720
#define CDisplay__PreZoneMainUI_x                                  0x56C730
#define CDisplay__CleanGameUI_x                                    0x571D00
#define CDisplay__GetClickedActor_x                                0x5644F0
#define CDisplay__GetUserDefinedColor_x                            0x55C260
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x566000
#define CDisplay__is3dON_x                                         0x560D80
#define CDisplay__ReloadUI_x                                       0x56BA40
#define CDisplay__WriteTextHD2_x                                   0x560B70
#define CDisplay__TrueDistance_x                                   0x567FE0
#define CDisplay__SetViewActor_x                                   0x563E10
#define CDisplay__GetFloorHeight_x                                 0x560E40
#define CDisplay__SetRenderWindow_x                                0x55F7C0
#define CDisplay__ToggleScreenshotMode_x                           0x5638E0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C2EF0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A4180
#define CEditWnd__EnsureCaretVisible_x                             0x9A6500
#define CEditWnd__GetCaretPt_x                                     0x9A5360
#define CEditWnd__GetCharIndexPt_x                                 0x9A5110
#define CEditWnd__GetDisplayString_x                               0x9A4FB0
#define CEditWnd__GetHorzOffset_x                                  0x9A36D0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A6410
#define CEditWnd__GetSelStartPt_x                                  0x9A53C0
#define CEditWnd__GetSTMLSafeText_x                                0x9A4DC0
#define CEditWnd__PointFromPrintableChar_x                         0x9A6050
#define CEditWnd__SelectableCharFromPoint_x                        0x9A61B0
#define CEditWnd__SetEditable_x                                    0x9A5490
#define CEditWnd__SetWindowTextA_x                                 0x9A4B10
#define CEditWnd__ReplaceSelection_x                               0x9A5C10
#define CEditWnd__ReplaceSelection1_x                              0x9A5B90

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x6301F0
#define CEverQuest__ClickedPlayer_x                                0x621720
#define CEverQuest__CreateTargetIndicator_x                        0x641B00
#define CEverQuest__DeleteTargetIndicator_x                        0x641B90
#define CEverQuest__DoTellWindow_x                                 0x4F27B0
#define CEverQuest__OutputTextToLog_x                              0x4F2A80
#define CEverQuest__DropHeldItemOnGround_x                         0x616730
#define CEverQuest__dsp_chat_x                                     0x4F2E50
#define CEverQuest__trimName_x                                     0x63D0F0
#define CEverQuest__Emote_x                                        0x6308B0
#define CEverQuest__EnterZone_x                                    0x62A530
#define CEverQuest__GetBodyTypeDesc_x                              0x635E40
#define CEverQuest__GetClassDesc_x                                 0x636480
#define CEverQuest__GetClassThreeLetterCode_x                      0x636A80
#define CEverQuest__GetDeityDesc_x                                 0x6402B0
#define CEverQuest__GetLangDesc_x                                  0x636C40
#define CEverQuest__GetRaceDesc_x                                  0x636460
#define CEverQuest__InterpretCmd_x                                 0x640920
#define CEverQuest__LeftClickedOnPlayer_x                          0x61ACB0
#define CEverQuest__LMouseUp_x                                     0x618CE0
#define CEverQuest__RightClickedOnPlayer_x                         0x61B8A0
#define CEverQuest__RMouseUp_x                                     0x619FA0
#define CEverQuest__SetGameState_x                                 0x6164B0
#define CEverQuest__UPCNotificationFlush_x                         0x63D010
#define CEverQuest__IssuePetCommand_x                              0x638230
#define CEverQuest__ReportSuccessfulHit_x                          0x6321C0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x758780
#define CGaugeWnd__CalcLinesFillRect_x                             0x7587E0
#define CGaugeWnd__Draw_x                                          0x757D90

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4850
#define CGuild__GetGuildName_x                                     0x4B3070
#define CGuild__GetGuildIndex_x                                    0x4B3790

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x775BA0

//CHotButton
#define CHotButton__SetCheck_x                                     0x655170
#define CHotButton__SetButtonSize_x                                0x655530

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x782BE0
#define CInvSlotMgr__MoveItem_x                                    0x781780
#define CInvSlotMgr__SelectSlot_x                                  0x782CA0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77FFD0
#define CInvSlot__SliderComplete_x                                 0x77D4B0
#define CInvSlot__GetItemBase_x                                    0x77CD70
#define CInvSlot__UpdateItem_x                                     0x77CF60

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x784920
#define CInvSlotWnd__CInvSlotWnd_x                                 0x783B00
#define CInvSlotWnd__HandleLButtonUp_x                             0x7844A0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x857480
#define CItemDisplayWnd__UpdateStrings_x                           0x79BF40
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x791240
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x7917B0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79C5E0
#define CItemDisplayWnd__AboutToShow_x                             0x79BB40
#define CItemDisplayWnd__WndNotification_x                         0x79DD20
#define CItemDisplayWnd__RequestConvertItem_x                      0x79D410
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79AA10
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79B930

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88C680

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A3430
#define CItemDisplayManager__ShowItem_x                            0x7A2880

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9F50

// CListWnd
#define CListWnd__CListWnd_x                                       0x96FF70
#define CListWnd__dCListWnd_x                                      0x970270
#define CListWnd__AddColumn_x                                      0x974E10
#define CListWnd__AddColumn1_x                                     0x974F30
#define CListWnd__AddLine_x                                        0x9752A0
#define CListWnd__AddString_x                                      0x9750A0
#define CListWnd__CalculateFirstVisibleLine_x                      0x974BC0
#define CListWnd__CalculateVSBRange_x                              0x9749C0
#define CListWnd__ClearSel_x                                       0x975B90
#define CListWnd__ClearAllSel_x                                    0x975BE0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x976690
#define CListWnd__Compare_x                                        0x974140
#define CListWnd__Draw_x                                           0x970430
#define CListWnd__DrawColumnSeparators_x                           0x972F40
#define CListWnd__DrawHeader_x                                     0x973390
#define CListWnd__DrawItem_x                                       0x9739E0
#define CListWnd__DrawLine_x                                       0x9730A0
#define CListWnd__DrawSeparator_x                                  0x972FE0
#define CListWnd__EnableLine_x                                     0x972810
#define CListWnd__EnsureVisible_x                                  0x9765B0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x975AD0
#define CListWnd__GetColumnTooltip_x                               0x972390
#define CListWnd__GetColumnMinWidth_x                              0x972400
#define CListWnd__GetColumnWidth_x                                 0x972310
#define CListWnd__GetCurSel_x                                      0x971CC0
#define CListWnd__GetItemAtPoint_x                                 0x972A80
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x972AF0
#define CListWnd__GetItemColor_x                                   0x972040
#define CListWnd__GetItemData_x                                    0x971D40
#define CListWnd__GetItemHeight_x                                  0x9720E0
#define CListWnd__GetItemIcon_x                                    0x971EC0
#define CListWnd__GetItemRect_x                                    0x972900
#define CListWnd__GetItemText_x                                    0x971D80
#define CListWnd__GetSelList_x                                     0x975C30
#define CListWnd__GetSeparatorRect_x                               0x972D60
#define CListWnd__InsertLine_x                                     0x975700
#define CListWnd__RemoveLine_x                                     0x975920
#define CListWnd__SetColors_x                                      0x974990
#define CListWnd__SetColumnJustification_x                         0x9746C0
#define CListWnd__SetColumnLabel_x                                 0x975040
#define CListWnd__SetColumnWidth_x                                 0x9745D0
#define CListWnd__SetCurSel_x                                      0x975A20
#define CListWnd__SetItemColor_x                                   0x976270
#define CListWnd__SetItemData_x                                    0x976230
#define CListWnd__SetItemText_x                                    0x975E50
#define CListWnd__ShiftColumnSeparator_x                           0x974780
#define CListWnd__Sort_x                                           0x974430
#define CListWnd__ToggleSel_x                                      0x975A50
#define CListWnd__SetColumnsSizable_x                              0x974820
#define CListWnd__SetItemWnd_x                                     0x9760F0
#define CListWnd__GetItemWnd_x                                     0x971F10
#define CListWnd__SetItemIcon_x                                    0x975ED0
#define CListWnd__CalculateCustomWindowPositions_x                 0x974CC0
#define CListWnd__SetVScrollPos_x                                  0x9745B0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C1350
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BF970
#define CMapViewWnd__HandleLButtonDown_x                           0x7BC800
#define CMapViewWnd__WndNotification_x                             0x7C3C30

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E4580
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4EE0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E5520
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E8740
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E3010
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE8C0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E41D0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F8400
#define CPacketScrambler__hton_x                                   0x8F83F0

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x9938D0
#define CSidlManager__FindScreenPieceTemplate_x                    0x993CA0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x993AD0
#define CSidlManager__CreateXWndFromTemplate_x                     0x997150
#define CSidlManager__CreateXWndFromTemplate1_x                    0x9973E0
#define CSidlManagerbase__CreateXWnd_x                             0x997420

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84D5F0
#define CSidlManager__CreateLabel_x                                0x84D1C0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84CC40

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98F640
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98F540
#define CSidlScreenWnd__ConvertToRes_x                             0x9BD140
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98EEC0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98EBB0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98EC80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98ED50
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98FEC0
#define CSidlScreenWnd__EnableIniStorage_x                         0x9903A0
#define CSidlScreenWnd__GetSidlPiece_x                             0x9900B0
#define CSidlScreenWnd__Init1_x                                    0x98E660
#define CSidlScreenWnd__LoadIniInfo_x                              0x9903F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x990FB0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98DA70
#define CSidlScreenWnd__StoreIniInfo_x                             0x990B30
#define CSidlScreenWnd__StoreIniVis_x                              0x990EA0
#define CSidlScreenWnd__WndNotification_x                          0x98FD90
#define CSidlScreenWnd__GetChildItem_x                             0x990320
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97EAE0
#define CSidlScreenWnd__m_layoutCopy_x                             0x1623490

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C2A60
#define CSkillMgr__GetSkillCap_x                                   0x6C2C30
#define CSkillMgr__GetNameToken_x                                  0x6C22A0
#define CSkillMgr__IsActivatedSkill_x                              0x6C2390
#define CSkillMgr__IsCombatSkill_x                                 0x6C2300

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A22D0
#define CSliderWnd__SetValue_x                                     0x9A2100
#define CSliderWnd__SetNumTicks_x                                  0x9A2160

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853E60

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AB7F0
#define CStmlWnd__ParseSTML_x                                      0x9AC9E0
#define CStmlWnd__CalculateHSBRange_x                              0x9AC7B0
#define CStmlWnd__CalculateVSBRange_x                              0x9AC720
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B1600
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B22A0
#define CStmlWnd__ForceParseNow_x                                  0x9ABDB0
#define CStmlWnd__GetNextTagPiece_x                                0x9B1560
#define CStmlWnd__GetVisibleText_x                                 0x9ABDD0
#define CStmlWnd__InitializeWindowVariables_x                      0x9B20F0
#define CStmlWnd__MakeStmlColorTag_x                               0x9AAE90
#define CStmlWnd__MakeWndNotificationTag_x                         0x9AAF00
#define CStmlWnd__SetSTMLText_x                                    0x9A9C70
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B34B0
#define CStmlWnd__UpdateHistoryString_x                            0x9B24A0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A8B10
#define CTabWnd__DrawCurrentPage_x                                 0x9A94A0
#define CTabWnd__DrawTab_x                                         0x9A9090
#define CTabWnd__GetCurrentPage_x                                  0x9A8280
#define CTabWnd__GetPageInnerRect_x                                0x9A84B0
#define CTabWnd__GetTabInnerRect_x                                 0x9A83F0
#define CTabWnd__GetTabRect_x                                      0x9A82B0
#define CTabWnd__InsertPage_x                                      0x9A86A0
#define CTabWnd__RemovePage_x                                      0x9A87E0
#define CTabWnd__SetPage_x                                         0x9A8530
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A8A10
#define CTabWnd__UpdatePage_x                                      0x9A8E80
#define CTabWnd__GetPageFromTabIndex_x                             0x9A8FD0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A8270

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A7C10
#define CPageWnd__FlashTab_x                                       0x9A7C70

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC8D0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x97B030
#define CTextureFont__GetTextExtent_x                              0x97B330

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B9BF0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x965A20

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x544B50
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x94CD40
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x94CF80
#define CXStr__operator_equal1_x                                   0x94CFC0
#define CXStr__operator_plus_equal1_x                              0x94DA20
#define CXStr__SetString_x                                         0x94F8C0
#define CXStr__operator_char_p_x                                   0x94D470
#define CXStr__GetChar_x                                           0x94F220
#define CXStr__Delete_x                                            0x94EAF0
#define CXStr__GetUnicode_x                                        0x94F290
#define CXStr__Insert_x                                            0x94F2F0
#define CXStr__FindNext_x                                          0x94EF40
#define CXStr__Copy_x                                              0x94E900

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9A0310
#define CXWnd__BringToTop_x                                        0x982400
#define CXWnd__ClrFocus_x                                          0x981D80
#define CXWnd__Destroy_x                                           0x981E30
#define CXWnd__DoAllDrawing_x                                      0x97E180
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97E150
#define CXWnd__DrawColoredRect_x                                   0x97E6D0
#define CXWnd__DrawTooltip_x                                       0x97C780
#define CXWnd__DrawTooltipAtPoint_x                                0x97C840
#define CXWnd__GetBorderFrame_x                                    0x97E390
#define CXWnd__GetChildWndAt_x                                     0x9824A0
#define CXWnd__GetClientClipRect_x                                 0x980650
#define CXWnd__GetScreenClipRect_x                                 0x980720
#define CXWnd__GetScreenRect_x                                     0x980890
#define CXWnd__GetRelativeRect_x                                   0x980940
#define CXWnd__GetTooltipRect_x                                    0x97E720
#define CXWnd__GetWindowTextA_x                                    0x4F2650
#define CXWnd__IsActive_x                                          0x97EE50
#define CXWnd__IsDescendantOf_x                                    0x9812E0
#define CXWnd__IsReallyVisible_x                                   0x981310
#define CXWnd__IsType_x                                            0x982C10
#define CXWnd__Move_x                                              0x981370
#define CXWnd__Move1_x                                             0x981460
#define CXWnd__ProcessTransition_x                                 0x981F10
#define CXWnd__Refade_x                                            0x981720
#define CXWnd__Resize_x                                            0x9819B0
#define CXWnd__Right_x                                             0x9821F0
#define CXWnd__SetFocus_x                                          0x981D40
#define CXWnd__SetFont_x                                           0x981DB0
#define CXWnd__SetKeyTooltip_x                                     0x9829D0
#define CXWnd__SetMouseOver_x                                      0x97F7C0
#define CXWnd__StartFade_x                                         0x9811D0
#define CXWnd__GetChildItem_x                                      0x982610
#define CXWnd__SetParent_x                                         0x981010
#define CXWnd__Minimize_x                                          0x981A20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BE190

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x985440
#define CXWndManager__DrawWindows_x                                0x985590
#define CXWndManager__GetKeyboardFlags_x                           0x987E00
#define CXWndManager__HandleKeyboardMsg_x                          0x9879F0
#define CXWndManager__RemoveWnd_x                                  0x9880D0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x988590

// CDBStr
#define CDBStr__GetString_x                                        0x55AD50

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5AD0
#define EQ_Character__Cur_HP_x                                     0x4D99C0
#define EQ_Character__Cur_Mana_x                                   0x4E1AE0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9140
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8620
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8770
#define EQ_Character__GetHPRegen_x                                 0x4E84F0
#define EQ_Character__GetEnduranceRegen_x                          0x4E8AB0
#define EQ_Character__GetManaRegen_x                               0x4E8EF0
#define EQ_Character__Max_Endurance_x                              0x683BC0
#define EQ_Character__Max_HP_x                                     0x4D97F0
#define EQ_Character__Max_Mana_x                                   0x6839A0
#define EQ_Character__doCombatAbility_x                            0x686500
#define EQ_Character__UseSkill_x                                   0x4EAF30
#define EQ_Character__GetConLevel_x                                0x67BCC0
#define EQ_Character__IsExpansionFlag_x                            0x5D4BD0
#define EQ_Character__TotalEffect_x                                0x4CD5C0
#define EQ_Character__GetPCSpellAffect_x                           0x4C9F70
#define EQ_Character__SpellDuration_x                              0x4C99B0
#define EQ_Character__MySpellDuration_x                            0x4B6CE0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCB10
#define EQ_Character__GetBaseSkill_x                               0x4DDAB0
#define EQ_Character__CanUseItem_x                                 0x4E1E10
#define EQ_Character__CanMedOnHorse_x                              0x4EAA70

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9189A0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69B5E0

//PcClient
#define PcClient__vftable_x                                        0xB50EA4
#define PcClient__PcClient_x                                       0x678F30

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C00E0
#define CCharacterListWnd__EnterWorld_x                            0x4BFAB0
#define CCharacterListWnd__Quit_x                                  0x4BF7D0
#define CCharacterListWnd__UpdateList_x                            0x4BFCA0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65B3A0
#define EQ_Item__CreateItemTagString_x                             0x8F10A0
#define EQ_Item__IsStackable_x                                     0x8F6400
#define EQ_Item__GetImageNum_x                                     0x8F2DF0
#define EQ_Item__CreateItemClient_x                                0x65A340
#define EQ_Item__GetItemValue_x                                    0x8F40D0
#define EQ_Item__ValueSellMerchant_x                               0x8F8130
#define EQ_Item__IsKeyRingItem_x                                   0x8F5BD0
#define EQ_Item__CanGoInBag_x                                      0x65B4C0
#define EQ_Item__IsEmpty_x                                         0x8F5590
#define EQ_Item__GetMaxItemCount_x                                 0x8F44E0
#define EQ_Item__GetHeldItem_x                                     0x8F2CB0
#define EQ_Item__CanGemFitInSlot_x                                 0x8F0880

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57BD30
#define EQ_LoadingS__Array_x                                       0xD9FD10

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x6846B0
#define EQ_PC__GetAlternateAbilityId_x                             0x9021A0
#define EQ_PC__GetCombatAbility_x                                  0x902720
#define EQ_PC__GetCombatAbilityTimer_x                             0x902790
#define EQ_PC__GetItemRecastTimer_x                                0x686B00
#define EQ_PC__HasLoreItem_x                                       0x67C680
#define EQ_PC__AlertInventoryChanged_x                             0x67B580
#define EQ_PC__GetPcZoneClient_x                                   0x6ABCF0
#define EQ_PC__RemoveMyAffect_x                                    0x68A020
#define EQ_PC__GetKeyRingItems_x                                   0x903220
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x902D80
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x903370

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5DAF60
#define EQItemList__add_object_x                                   0x60B4B0
#define EQItemList__add_item_x                                     0x5DB540
#define EQItemList__delete_item_x                                  0x5DB590
#define EQItemList__FreeItemList_x                                 0x5DB4A0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556E10

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69D010
#define EQPlayer__dEQPlayer_x                                      0x68F8C0
#define EQPlayer__DoAttack_x                                       0x6A5A20
#define EQPlayer__EQPlayer_x                                       0x690110
#define EQPlayer__SetNameSpriteState_x                             0x6946C0
#define EQPlayer__SetNameSpriteTint_x                              0x695590
#define PlayerBase__HasProperty_j_x                                0x9EDA50
#define EQPlayer__IsTargetable_x                                   0x9EDFB0
#define EQPlayer__CanSee_x                                         0x9EDDA0
#define EQPlayer__CanSee1_x                                        0x9EDE70
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EDB10

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A97E0
#define PlayerZoneClient__GetLevel_x                               0x6ABD30
#define PlayerZoneClient__IsValidTeleport_x                        0x60C950
#define PlayerZoneClient__LegalPlayerRace_x                        0x573CE0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x6A01C0
#define EQPlayerManager__GetSpawnByName_x                          0x6A0270
#define EQPlayerManager__GetPlayerFromPartialName_x                0x6A0300

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65ECD0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65EDA0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65EDE0
#define KeypressHandler__ClearCommandStateArray_x                  0x6602A0
#define KeypressHandler__HandleKeyDown_x                           0x6602C0
#define KeypressHandler__HandleKeyUp_x                             0x660360
#define KeypressHandler__SaveKeymapping_x                          0x660910

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BD000
#define MapViewMap__SaveEx_x                                       0x7C053F
#define MapViewMap__SetZoom_x                                      0x7C6180

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x916830

// StringTable 
#define StringTable__getString_x                                   0x911650

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x689C70
#define PcZoneClient__RemovePetEffect_x                            0x68A2D0
#define PcZoneClient__HasAlternateAbility_x                        0x683800
#define PcZoneClient__GetCurrentMod_x                              0x4EE7E0
#define PcZoneClient__GetModCap_x                                  0x4EE6E0
#define PcZoneClient__CanEquipItem_x                               0x683EC0
#define PcZoneClient__GetItemByID_x                                0x686FD0
#define PcZoneClient__GetItemByItemClass_x                         0x687110
#define PcZoneClient__RemoveBuffEffect_x                           0x68A380
#define PcZoneClient__BandolierSwap_x                              0x684C70
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x686AA0

//Doors
#define EQSwitch__UseSwitch_x                                      0x611550

//IconCache
#define IconCache__GetIcon_x                                       0x74D1E0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x743D80
#define CContainerMgr__CloseContainer_x                            0x744060
#define CContainerMgr__OpenExperimentContainer_x                   0x744BC0

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81C530

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x6538C0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B2270
#define CLootWnd__RequestLootSlot_x                                0x7B14A0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A62D0
#define EQ_Spell__SpellAffects_x                                   0x5A67D0
#define EQ_Spell__SpellAffectBase_x                                0x5A64F0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0FC0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0F70
#define EQ_Spell__IsSPAStacking_x                                  0x5A7580
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A69D0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A7590
#define EQ_Spell__IsLullSpell_x                                    0x5A6DC0
#define __IsResEffectSpell_x                                       0x4D0770

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1610

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9212D0
#define EQ_Affect__SetAffectData_x                                 0x9218A0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x869020
#define CTargetWnd__WndNotification_x                              0x8687B0
#define CTargetWnd__RefreshTargetBuffs_x                           0x868B10
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x867590

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86DBC0
#define CTaskWnd__ConfirmAbandonTask_x                             0x870C90

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5549D0
#define CTaskManager__HandleMessage_x                              0x5528A0
#define CTaskManager__GetTaskStatus_x                              0x554A80
#define CTaskManager__GetElementDescription_x                      0x554B00

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0EB0
#define EqSoundManager__PlayScriptMp3_x                            0x5A10B0
#define EqSoundManager__SoundAssistPlay_x                          0x6C6EF0
#define EqSoundManager__WaveInstancePlay_x                         0x6C63E0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544800

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A7090
#define CTextureAnimation__Draw_x                                  0x9A72D0
#define CTextureAnimation__AddBlankFrame_x                         0x9A6EB0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A2DB0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x584310
#define CAltAbilityData__GetMercMaxRank_x                          0x5842A0
#define CAltAbilityData__GetMaxRank_x                              0x578690

//CTargetRing
#define CTargetRing__Cast_x                                        0x6510D0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x65A190
#define CharacterBase__CreateItemGlobalIndex_x                     0x6477E0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x65A170
#define CharacterBase__GetItemByGlobalIndex_x                      0x928E50
#define CharacterBase__GetItemByGlobalIndex1_x                     0x928EA0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x728C50
#define CCastSpellWnd__IsBardSongPlaying_x                         0x729510
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x7295C0

//messages
#define msg_spell_worn_off_x                                       0x5CC590
#define msg_new_text_x                                             0x5C0350
#define __msgTokenTextParam_x                                      0x5CE9F0
#define msgTokenText_x                                             0x5CEE00

//SpellManager
#define SpellManager__vftable_x                                    0xB3B4BC
#define SpellManager__SpellManager_x                               0x6CAB20
#define Spellmanager__LoadTextSpells_x                             0x6CB420
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CACF0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F22A0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D4C20
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D3100
#define ItemGlobalIndex__IsEquippedLocation_x                      0x673E10
#define ItemGlobalIndex__IsValidIndex_x                            0x5D4DB0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x921CD0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x922020

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7AA3C0

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x748A70
#define CCursorAttachment__AttachToCursor1_x                       0x748AB0
#define CCursorAttachment__Deactivate_x                            0x74A060

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x998970
#define CSidlManagerBase__CreatePageWnd_x                          0x998170
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x993650
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9935E0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B87B0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B8430

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524970
#define CFindItemWnd__WndNotification_x                            0x525830
#define CFindItemWnd__Update_x                                     0x526410
#define CFindItemWnd__PickupSelectedItem_x                         0x524070

//IString
#define IString__Append_x                                          0x55A7D0

//Camera
#define CDisplay__cameraType_x                                     0xEE3E2C
#define EverQuest__Cameras_x                                       0xDB3048

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F660
#define LootFiltersManager__GetItemFilterData_x                    0x52EF90
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52EFC0
#define LootFiltersManager__SetItemLootFilter_x                    0x52F1D0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x809000

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F7F60
#define CResolutionHandler__GetWindowedStyle_x                     0x6C13A0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x740700

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92D1F0
#define CDistillerInfo__Instance_x                                 0x92D130

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x763330
#define CGroupWnd__UpdateDisplay_x                                 0x762590

//ItemBase
#define ItemBase__IsLore_x                                         0x8F5C70
#define ItemBase__IsLoreEquipped_x                                 0x8F5CE0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60B410
#define EQPlacedItemManager__GetItemByGuid_x                       0x60B550
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60B5B0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5AD0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6BA3C0

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A3D0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x505180
#define FactionManagerClient__HandleFactionMessage_x               0x5059A0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x506190
#define FactionManagerClient__GetMaxFaction_x                      0x5061AF
#define FactionManagerClient__GetMinFaction_x                      0x506160

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511D80

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x979CA0

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E330

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511FF0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5834E0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CEAA0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B5AD0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC690

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DB440

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE506DC

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EC4C0
#define CAAWnd__UpdateSelected_x                                   0x6E8B50
#define CAAWnd__Update_x                                           0x6EB7E0

//CXRect
#define CXRect__operator_and_x                                     0x758840

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240

//
#define __eq_delete_x                                              0x9F8545
#define __eq_new_x                                                 0x9F8AB4

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

