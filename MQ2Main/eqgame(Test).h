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
#define __ExpectedVersionDate                                     "May 11 2021"
#define __ExpectedVersionTime                                     "12:18:34"
#define __ActualVersionDate_x                                      0xB52114
#define __ActualVersionTime_x                                      0xB52108
#define __ActualVersionBuild_x                                     0xB422CC

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x664E50
#define __MemChecker1_x                                            0x94FDA0
#define __MemChecker2_x                                            0x6DEE60
#define __MemChecker3_x                                            0x6DEDD0
#define __MemChecker4_x                                            0x8A30F0
#define __EncryptPad0_x                                            0xE53B50
#define __EncryptPad1_x                                            0xEAE360
#define __EncryptPad2_x                                            0xE62D78
#define __EncryptPad3_x                                            0xE62978
#define __EncryptPad4_x                                            0xE9F170
#define __EncryptPad5_x                                            0xFA1C28
#define __AC1_x                                                    0x85DCB0
#define __AC2_x                                                    0x619A3F
#define __AC3_x                                                    0x620E01
#define __AC4_x                                                    0x624F70
#define __AC5_x                                                    0x62B8EF
#define __AC6_x                                                    0x630036
#define __AC7_x                                                    0x6194A0
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x244D90

// Direct Input
#define DI8__Main_x                                                0xFA1CD4
#define DI8__Keyboard_x                                            0xFA1CD8
#define DI8__Mouse_x                                               0xFA1C34
#define DI8__Mouse_Copy_x                                          0xDAED8C
#define DI8__Mouse_Check_x                                         0xF9F77C
#define __AutoSkillArray_x                                         0xDAF8A8
#define __Attack_x                                                 0xE4D6D7
#define __Autofire_x                                               0xE4D6D8
#define __BindList_x                                               0xDA4458
#define g_eqCommandStates_x                                        0xDA51C0
#define __Clicks_x                                                 0xDAEE44
#define __CommandList_x                                            0xDA5D48
#define __CurrentMapLabel_x                                        0xFB26D4
#define __CurrentSocial_x                                          0xC5F46C
#define __DoAbilityList_x                                          0xDE51F8
#define __do_loot_x                                                0x5E22D0
#define __DrawHandler_x                                            0x1621428
#define __GroupCount_x                                             0xF94D42
#define __Guilds_x                                                 0xF99218
#define __gWorld_x                                                 0xF94F54
#define __HWnd_x                                                   0xFA1C38
#define __heqmain_x                                                0xFA1C10
#define __InChatMode_x                                             0xDAED74
#define __LastTell_x                                               0xDB08F4
#define __LMouseHeldTime_x                                         0xDAEEB0
#define __Mouse_x                                                  0xFA1CC0
#define __MouseLook_x                                              0xDAEE0A
#define __MouseEventTime_x                                         0xF9AC44
#define __gpbCommandEvent_x                                        0xF95060
#define __NetStatusToggle_x                                        0xDAEE0D
#define __PCNames_x                                                0xDAFEA4
#define __RangeAttackReady_x                                       0xDAFB8C
#define __RMouseHeldTime_x                                         0xDAEEAC
#define __RunWalkState_x                                           0xDAED78
#define __ScreenMode_x                                             0xEE107C
#define __ScreenX_x                                                0xDAED2C
#define __ScreenY_x                                                0xDAED28
#define __ScreenXMax_x                                             0xDAED30
#define __ScreenYMax_x                                             0xDAED34
#define __ServerHost_x                                             0xF9522B
#define __ServerName_x                                             0xDE51B8
#define __ShiftKeyDown_x                                           0xDAF408
#define __ShowNames_x                                              0xDAFD48
#define EverQuestInfo__bSocialChanged_x                            0xDE5240
#define __Socials_x                                                0xDE52B8
#define __SubscriptionType_x                                       0xFE67B0
#define __TargetAggroHolder_x                                      0xFB5088
#define __ZoneType_x                                               0xDAF208
#define __GroupAggro_x                                             0xFB50C8
#define __LoginName_x                                              0xFA23A4
#define __Inviter_x                                                0xE4D654
#define __AttackOnAssist_x                                         0xDAFD04
#define __UseTellWindows_x                                         0xDB003C
#define __gfMaxZoomCameraDistance_x                                0xB49F9C
#define __gfMaxCameraDistance_x                                    0xB7287C
#define __pulAutoRun_x                                             0xDAEE28
#define __pulForward_x                                             0xDB0074
#define __pulBackward_x                                            0xDB0078
#define __pulTurnRight_x                                           0xDB007C
#define __pulTurnLeft_x                                            0xDB0080
#define __pulStrafeLeft_x                                          0xDB0084
#define __pulStrafeRight_x                                         0xDB0088

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF955B0
#define instEQZoneInfo_x                                           0xDAF000
#define pinstActiveBanker_x                                        0xF9554C
#define pinstActiveCorpse_x                                        0xF95544
#define pinstActiveGMaster_x                                       0xF95548
#define pinstActiveMerchant_x                                      0xF95540
#define pinstAltAdvManager_x                                       0xEE1EC0
#define pinstBandageTarget_x                                       0xF9555C
#define pinstCamActor_x                                            0xEE1070
#define pinstCDBStr_x                                              0xEE0C40
#define pinstCDisplay_x                                            0xF92CBC
#define pinstCEverQuest_x                                          0xFA1C3C
#define pinstEverQuestInfo_x                                       0xDAED20
#define pinstCharData_x                                            0xF92CAC
#define pinstCharSpawn_x                                           0xF95594
#define pinstControlledMissile_x                                   0xF955A0
#define pinstControlledPlayer_x                                    0xF95594
#define pinstCResolutionHandler_x                                  0x1621650
#define pinstCSidlManager_x                                        0x16205EC
#define pinstCXWndManager_x                                        0x16205E4
#define instDynamicZone_x                                          0xF990F0
#define pinstDZMember_x                                            0xF99200
#define pinstDZTimerInfo_x                                         0xF99204
#define pinstEqLogin_x                                             0xFA1CF0
#define instEQMisc_x                                               0xD988D8
#define pinstEQSoundManager_x                                      0xEE27D0
#define pinstEQSpellStrings_x                                      0xED18E0
#define instExpeditionLeader_x                                     0xF9913A
#define instExpeditionName_x                                       0xF9917A
#define pinstGroup_x                                               0xF94D3E
#define pinstImeManager_x                                          0x16205E8
#define pinstLocalPlayer_x                                         0xF9553C
#define pinstMercenaryData_x                                       0xF9C73C
#define pinstMercenaryStats_x                                      0xFB5154
#define pinstModelPlayer_x                                         0xF95554
#define pinstPCData_x                                              0xF92CAC
#define pinstSkillMgr_x                                            0xF9E828
#define pinstSpawnManager_x                                        0xF9D300
#define pinstSpellManager_x                                        0xF9EA68
#define pinstSpellSets_x                                           0xE46300
#define pinstStringTable_x                                         0xF92CB4
#define pinstSwitchManager_x                                       0xF92B50
#define pinstTarget_x                                              0xF95590
#define pinstTargetObject_x                                        0xF92CA4
#define pinstTargetSwitch_x                                        0xF92CA8
#define pinstTaskMember_x                                          0xD98420
#define pinstTrackTarget_x                                         0xF95598
#define pinstTradeTarget_x                                         0xF95550
#define instTributeActive_x                                        0xD988F9
#define pinstViewActor_x                                           0xEE106C
#define pinstWorldData_x                                           0xF92CB8
#define pinstZoneAddr_x                                            0xDAF2A0
#define pinstPlayerPath_x                                          0xF9D398
#define pinstTargetIndicator_x                                     0xF9ECD0
#define EQObject_Top_x                                             0xF92CA0
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE10D0
#define pinstCAchievementsWnd_x                                    0xEE0D50
#define pinstCActionsWnd_x                                         0xEE1058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE1064
#define pinstCAdvancedLootWnd_x                                    0xEE105C
#define pinstCAdventureLeaderboardWnd_x                            0xFABEF8
#define pinstCAdventureRequestWnd_x                                0xFABFA8
#define pinstCAdventureStatsWnd_x                                  0xFAC058
#define pinstCAggroMeterWnd_x                                      0xEE0DE0
#define pinstCAlarmWnd_x                                           0xEE10C8
#define pinstCAlertHistoryWnd_x                                    0xEE103C
#define pinstCAlertStackWnd_x                                      0xEE0E08
#define pinstCAlertWnd_x                                           0xEE0E0C
#define pinstCAltStorageWnd_x                                      0xFAC3B8
#define pinstCAudioTriggersWindow_x                                0xEC3C10
#define pinstCAuraWnd_x                                            0xEE10A0
#define pinstCAvaZoneWnd_x                                         0xEE0D30
#define pinstCBandolierWnd_x                                       0xEE10B0
#define pinstCBankWnd_x                                            0xEE1040
#define pinstCBarterMerchantWnd_x                                  0xFAD5F8
#define pinstCBarterSearchWnd_x                                    0xFAD6A8
#define pinstCBarterWnd_x                                          0xFAD758
#define pinstCBazaarConfirmationWnd_x                              0xEE10DC
#define pinstCBazaarSearchWnd_x                                    0xEE0D7C
#define pinstCBazaarWnd_x                                          0xEE0D20
#define pinstCBlockedBuffWnd_x                                     0xEE0DA8
#define pinstCBlockedPetBuffWnd_x                                  0xEE0DB0
#define pinstCBodyTintWnd_x                                        0xEE1100
#define pinstCBookWnd_x                                            0xEE1048
#define pinstCBreathWnd_x                                          0xEE10D4
#define pinstCBuffWindowNORMAL_x                                   0xEE0DA0
#define pinstCBuffWindowSHORT_x                                    0xEE0DA4
#define pinstCBugReportWnd_x                                       0xEE0D5C
#define pinstCButtonWnd_x                                          0x1620850
#define pinstCCastingWnd_x                                         0xEE0DDC
#define pinstCCastSpellWnd_x                                       0xEE0DEC
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE0D80
#define pinstCChatWindowManager_x                                  0xFAE200
#define pinstCClaimWnd_x                                           0xFAE358
#define pinstCColorPickerWnd_x                                     0xEE0D94
#define pinstCCombatAbilityWnd_x                                   0xEE108C
#define pinstCCombatSkillsSelectWnd_x                              0xEE1094
#define pinstCCompassWnd_x                                         0xEE10A8
#define pinstCConfirmationDialog_x                                 0xFB3220
#define pinstCContainerMgr_x                                       0xEE10CC
#define pinstCContextMenuManager_x                                 0x16205A0
#define pinstCCursorAttachment_x                                   0xEE0DD4
#define pinstCDynamicZoneWnd_x                                     0xFAE920
#define pinstCEditLabelWnd_x                                       0xEE0D3C
#define pinstCEQMainWnd_x                                          0xFAEB68
#define pinstCEventCalendarWnd_x                                   0xEE10B8
#define pinstCExtendedTargetWnd_x                                  0xEE0DD8
#define pinstCPlayerCustomizationWnd_x                             0xEE0D84
#define pinstCFactionWnd_x                                         0xEE0DE8
#define pinstCFellowshipWnd_x                                      0xFAED68
#define pinstCFileSelectionWnd_x                                   0xEE109C
#define pinstCFindItemWnd_x                                        0xEE1104
#define pinstCFindLocationWnd_x                                    0xFAEEC0
#define pinstCFriendsWnd_x                                         0xEE1098
#define pinstCGemsGameWnd_x                                        0xEE10C0
#define pinstCGiveWnd_x                                            0xEE0D2C
#define pinstCGroupSearchFiltersWnd_x                              0xEE0DC4
#define pinstCGroupSearchWnd_x                                     0xFAF2B8
#define pinstCGroupWnd_x                                           0xFAF368
#define pinstCGuildBankWnd_x                                       0xFAF418
#define pinstCGuildCreationWnd_x                                   0xFAF4C8
#define pinstCGuildMgmtWnd_x                                       0xFAF578
#define pinstCharacterCreation_x                                   0xEE0DD0
#define pinstCHelpWnd_x                                            0xEE0E24
#define pinstCHeritageSelectionWnd_x                               0xEE0D88
#define pinstCHotButtonWnd_x                                       0xFB16D0
#define pinstCHotButtonWnd1_x                                      0xFB16D0
#define pinstCHotButtonWnd2_x                                      0xFB16D4
#define pinstCHotButtonWnd3_x                                      0xFB16D8
#define pinstCHotButtonWnd4_x                                      0xFB16DC
#define pinstCIconSelectionWnd_x                                   0xEE0D58
#define pinstCInspectWnd_x                                         0xEE0D4C
#define pinstCInventoryWnd_x                                       0xEE0E20
#define pinstCInvSlotMgr_x                                         0xEE10B4
#define pinstCItemDisplayManager_x                                 0xFB1C28
#define pinstCItemExpTransferWnd_x                                 0xFB1D5C
#define pinstCItemOverflowWnd_x                                    0xEE0D10
#define pinstCJournalCatWnd_x                                      0xEE10EC
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE10E4
#define pinstCJournalTextWnd_x                                     0xEE10E4
#define pinstCKeyRingWnd_x                                         0xEE1034
#define pinstCLargeDialogWnd_x                                     0xFB3EA0
#define pinstCLayoutCopyWnd_x                                      0xFB20A8
#define pinstCLFGuildWnd_x                                         0xFB2158
#define pinstCLoadskinWnd_x                                        0xEE10C4
#define pinstCLootFiltersCopyWnd_x                                 0xEE0150
#define pinstCLootFiltersWnd_x                                     0xEE10E0
#define pinstCLootSettingsWnd_x                                    0xEE10E8
#define pinstCLootWnd_x                                            0xEE104C
#define pinstCMailAddressBookWnd_x                                 0xEE0D70
#define pinstCMailCompositionWnd_x                                 0xEE0D6C
#define pinstCMailIgnoreListWnd_x                                  0xEE0D74
#define pinstCMailWnd_x                                            0xEE0D64
#define pinstCManageLootWnd_x                                      0xEE2340
#define pinstCMapToolbarWnd_x                                      0xEE0D34
#define pinstCMapViewWnd_x                                         0xEE0D24
#define pinstCMarketplaceWnd_x                                     0xEE0D04
#define pinstCMerchantWnd_x                                        0xEE0D08
#define pinstCMIZoneSelectWnd_x                                    0xFB2990
#define pinstCMusicPlayerWnd_x                                     0xEE10BC
#define pinstCNameChangeMercWnd_x                                  0xEE0E00
#define pinstCNameChangePetWnd_x                                   0xEE0DFC
#define pinstCNameChangeWnd_x                                      0xEE0D60
#define pinstCNoteWnd_x                                            0xEE0E10
#define pinstCObjectPreviewWnd_x                                   0xEE0D78
#define pinstCOptionsWnd_x                                         0xEE0D98
#define pinstCOverseerWnd_x                                        0xEE0D00
#define pinstCPetInfoWnd_x                                         0xEE1050
#define pinstCPetitionQWnd_x                                       0xEE0DB8
#define pinstCPlayerNotesWnd_x                                     0xEE10AC
#define pinstCPlayerWnd_x                                          0xEE10FC
#define pinstCPopupWndManager_x                                    0xFB3220
#define pinstCProgressionSelectionWnd_x                            0xFB32D0
#define pinstCPurchaseGroupWnd_x                                   0xEE0D14
#define pinstCPurchaseWnd_x                                        0xEE0D0C
#define pinstCPvPLeaderboardWnd_x                                  0xFB3380
#define pinstCPvPStatsWnd_x                                        0xFB3430
#define pinstCQuantityWnd_x                                        0xEE1044
#define pinstCRaceChangeWnd_x                                      0xEE0D68
#define pinstCRaidOptionsWnd_x                                     0xEE0DE4
#define pinstCRaidWnd_x                                            0xEE0DF0
#define pinstCRealEstateItemsWnd_x                                 0xEE0D90
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE0DCC
#define pinstCRealEstateManageWnd_x                                0xEE0DB4
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE0DBC
#define pinstCRealEstatePlotSearchWnd_x                            0xEE0DC0
#define pinstCRealEstatePurchaseWnd_x                              0xEE0DC8
#define pinstCRespawnWnd_x                                         0xEE10A4
#define pinstCRewardSelectionWnd_x                                 0xFB3B78
#define pinstCSelectorWnd_x                                        0xEE0D1C
#define pinstCSendMoneyWnd_x                                       0xEE0D38
#define pinstCServerListWnd_x                                      0xEE1090
#define pinstCSkillsSelectWnd_x                                    0xEE1068
#define pinstCSkillsWnd_x                                          0xEE1060
#define pinstCSocialEditWnd_x                                      0xEE0D54
#define pinstCSocialWnd_x                                          0xEE10D8
#define pinstCSpellBookWnd_x                                       0xEE0E04
#define pinstCStoryWnd_x                                           0xEE10F8
#define pinstCTargetOfTargetWnd_x                                  0xFB51D8
#define pinstCTargetWnd_x                                          0xEE0D48
#define pinstCTaskOverlayWnd_x                                     0xEE10F0
#define pinstCTaskSelectWnd_x                                      0xFB5330
#define pinstCTaskManager_x                                        0xC6A268
#define pinstCTaskTemplateSelectWnd_x                              0xFB53E0
#define pinstCTaskWnd_x                                            0xFB5490
#define pinstCTextEntryWnd_x                                       0xEE1088
#define pinstCTimeLeftWnd_x                                        0xEE0DAC
#define pinstCTipWndCONTEXT_x                                      0xFB5694
#define pinstCTipWndOFDAY_x                                        0xFB5690
#define pinstCTitleWnd_x                                           0xFB5740
#define pinstCTrackingWnd_x                                        0xEE0D40
#define pinstCTradeskillWnd_x                                      0xFB58A8
#define pinstCTradeWnd_x                                           0xEE0D18
#define pinstCTrainWnd_x                                           0xEE1054
#define pinstCTributeBenefitWnd_x                                  0xFB5AA8
#define pinstCTributeMasterWnd_x                                   0xFB5B58
#define pinstCTributeTrophyWnd_x                                   0xFB5C08
#define pinstCVideoModesWnd_x                                      0xEE0D44
#define pinstCVoiceMacroWnd_x                                      0xF9F0E8
#define pinstCVoteResultsWnd_x                                     0xEE0DF8
#define pinstCVoteWnd_x                                            0xEE0DF4
#define pinstCZoneGuideWnd_x                                       0xEE1030
#define pinstCZonePathWnd_x                                        0xEE1038

#define pinstEQSuiteTextureLoader_x                                0xEAE920
#define pinstItemIconCache_x                                       0xFAEB20
#define pinstLootFiltersManager_x                                  0xEE0200
#define pinstRewardSelectionWnd_x                                  0xFB3B78

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DD590
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DD820
#define __ConvertItemTags_x                                        0x5FA990
#define __CleanItemTags_x                                          0x47DA80
#define __DoesFileExist_x                                          0x952D30
#define __EQGetTime_x                                              0x94FA10
#define __ExecuteCmd_x                                             0x5D59A0
#define __FixHeading_x                                             0x9EDDB0
#define __FlushDxKeyboard_x                                        0x6DA160
#define __GameLoop_x                                               0x6DDA60
#define __get_bearing_x                                            0x5DD130
#define __get_melee_range_x                                        0x5DDA60
#define __GetAnimationCache_x                                      0x74C990
#define __GetGaugeValueFromEQ_x                                    0x85C0F0
#define __GetLabelFromEQ_x                                         0x85DC30
#define __GetXTargetType_x                                         0x9F0120
#define __HandleMouseWheel_x                                       0x6DEEF0
#define __HeadingDiff_x                                            0x9EDE10
#define __HelpPath_x                                               0xF9A904
#define __ExecuteFrontEnd_x                                        0x6DA940
#define __NewUIINI_x                                               0x85BDC0
#define __ProcessGameEvents_x                                      0x644050
#define __ProcessMouseEvent_x                                      0x643750
#define __SaveColors_x                                             0x571B20
#define __STMLToText_x                                             0x98BA80
#define __ToggleKeyRingItem_x                                      0x52AE80
#define CMemoryMappedFile__SetFile_x                               0xADE550
#define CrashDetected_x                                            0x6DC670
#define DrawNetStatus_x                                            0x6734D0
#define Expansion_HoT_x                                            0xDAFCF0
#define Teleport_Table_Size_x                                      0xF950E8
#define Teleport_Table_x                                           0xF92CC0
#define Util__FastTime_x                                           0x94F5D0
#define __CopyLayout_x                                             0x660130
#define __WndProc_x                                                0x6DCB70
#define __ProcessKeyboardEvent_x                                   0x6DC0B0

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
#define AltAdvManager__GetCalculatedTimer_x                        0x57AB10
#define AltAdvManager__IsAbilityReady_x                            0x579710
#define AltAdvManager__GetAAById_x                                 0x579AB0
#define AltAdvManager__CanTrainAbility_x                           0x579B20
#define AltAdvManager__CanSeeAbility_x                             0x579EB0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D15F0
#define CharacterZoneClient__HasSkill_x                            0x4DCD60
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE4A0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8A20
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C11E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E1380
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E1480
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E1580
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
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF640
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEF90

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x707DC0
#define CBankWnd__WndNotification_x                                0x707B60

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7127E0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70D430
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70B400

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716EC0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x989030
#define CButtonWnd__CButtonWnd_x                                   0x987980

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x73A110
#define CChatManager__InitContextMenu_x                            0x733050
#define CChatManager__FreeChatWindow_x                             0x738CE0
#define CChatManager__SetLockedActiveChatWindow_x                  0x739DF0
#define CChatManager__CreateChatWindow_x                           0x739300

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F23E0

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99EE90
#define CContextMenu__dCContextMenu_x                              0x99F0C0
#define CContextMenu__AddMenuItem_x                                0x99F0D0
#define CContextMenu__RemoveMenuItem_x                             0x99F3E0
#define CContextMenu__RemoveAllMenuItems_x                         0x99F400
#define CContextMenu__CheckMenuItem_x                              0x99F460
#define CContextMenu__SetMenuItem_x                                0x99F300
#define CContextMenu__AddSeparator_x                               0x99F260

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99F9F0
#define CContextMenuManager__RemoveMenu_x                          0x99FA60
#define CContextMenuManager__PopupMenu_x                           0x99FB20
#define CContextMenuManager__Flush_x                               0x99F990
#define CContextMenuManager__GetMenu_x                             0x49D910
#define CContextMenuManager__CreateDefaultMenu_x                   0x746950

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92A160
#define CChatService__GetFriendName_x                              0x92A170

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73AA70
#define CChatWindow__Clear_x                                       0x73BEC0
#define CChatWindow__WndNotification_x                             0x73C640
#define CChatWindow__AddHistory_x                                  0x73B720

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99BEA0
#define CComboWnd__Draw_x                                          0x99B340
#define CComboWnd__GetCurChoice_x                                  0x99BC70
#define CComboWnd__GetListRect_x                                   0x99B7F0
#define CComboWnd__GetTextRect_x                                   0x99BF10
#define CComboWnd__InsertChoice_x                                  0x99B980
#define CComboWnd__SetColors_x                                     0x99B950
#define CComboWnd__SetChoice_x                                     0x99BC50
#define CComboWnd__GetItemCount_x                                  0x99BC80
#define CComboWnd__GetCurChoiceText_x                              0x99BCB0
#define CComboWnd__GetChoiceText_x                                 0x99BC90
#define CComboWnd__InsertChoiceAtIndex_x                           0x99BA10

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743FF0
#define CContainerWnd__vftable_x                                   0xB5B364
#define CContainerWnd__SetContainer_x                              0x745820

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56C320
#define CDisplay__PreZoneMainUI_x                                  0x56C330
#define CDisplay__CleanGameUI_x                                    0x571900
#define CDisplay__GetClickedActor_x                                0x564200
#define CDisplay__GetUserDefinedColor_x                            0x55BF70
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x565D10
#define CDisplay__is3dON_x                                         0x560A90
#define CDisplay__ReloadUI_x                                       0x56B640
#define CDisplay__WriteTextHD2_x                                   0x560880
#define CDisplay__TrueDistance_x                                   0x567BE0
#define CDisplay__SetViewActor_x                                   0x563B20
#define CDisplay__GetFloorHeight_x                                 0x560B50
#define CDisplay__SetRenderWindow_x                                0x55F4D0
#define CDisplay__ToggleScreenshotMode_x                           0x5635F0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C1600

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A2950
#define CEditWnd__EnsureCaretVisible_x                             0x9A4CD0
#define CEditWnd__GetCaretPt_x                                     0x9A3B30
#define CEditWnd__GetCharIndexPt_x                                 0x9A38E0
#define CEditWnd__GetDisplayString_x                               0x9A3780
#define CEditWnd__GetHorzOffset_x                                  0x9A1EC0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A4BE0
#define CEditWnd__GetSelStartPt_x                                  0x9A3B90
#define CEditWnd__GetSTMLSafeText_x                                0x9A3590
#define CEditWnd__PointFromPrintableChar_x                         0x9A4820
#define CEditWnd__SelectableCharFromPoint_x                        0x9A4980
#define CEditWnd__SetEditable_x                                    0x9A3C60
#define CEditWnd__SetWindowTextA_x                                 0x9A32E0
#define CEditWnd__ReplaceSelection_x                               0x9A43E0
#define CEditWnd__ReplaceSelection1_x                              0x9A4360

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62F6B0
#define CEverQuest__ClickedPlayer_x                                0x620BE0
#define CEverQuest__CreateTargetIndicator_x                        0x640FC0
#define CEverQuest__DeleteTargetIndicator_x                        0x641050
#define CEverQuest__DoTellWindow_x                                 0x4F24E0
#define CEverQuest__OutputTextToLog_x                              0x4F27B0
#define CEverQuest__DropHeldItemOnGround_x                         0x615BF0
#define CEverQuest__dsp_chat_x                                     0x4F2B80
#define CEverQuest__trimName_x                                     0x63C5B0
#define CEverQuest__Emote_x                                        0x62FD70
#define CEverQuest__EnterZone_x                                    0x6299F0
#define CEverQuest__GetBodyTypeDesc_x                              0x635300
#define CEverQuest__GetClassDesc_x                                 0x635940
#define CEverQuest__GetClassThreeLetterCode_x                      0x635F40
#define CEverQuest__GetDeityDesc_x                                 0x63F770
#define CEverQuest__GetLangDesc_x                                  0x636100
#define CEverQuest__GetRaceDesc_x                                  0x635920
#define CEverQuest__InterpretCmd_x                                 0x63FDE0
#define CEverQuest__LeftClickedOnPlayer_x                          0x61A170
#define CEverQuest__LMouseUp_x                                     0x6181A0
#define CEverQuest__RightClickedOnPlayer_x                         0x61AD60
#define CEverQuest__RMouseUp_x                                     0x619460
#define CEverQuest__SetGameState_x                                 0x615970
#define CEverQuest__UPCNotificationFlush_x                         0x63C4D0
#define CEverQuest__IssuePetCommand_x                              0x637700
#define CEverQuest__ReportSuccessfulHit_x                          0x631680

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x7578E0
#define CGaugeWnd__CalcLinesFillRect_x                             0x757940
#define CGaugeWnd__Draw_x                                          0x756F00

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4810
#define CGuild__GetGuildName_x                                     0x4B3030
#define CGuild__GetGuildIndex_x                                    0x4B3750

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774CF0

//CHotButton
#define CHotButton__SetCheck_x                                     0x6545F0
#define CHotButton__SetButtonSize_x                                0x6549B0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781D20
#define CInvSlotMgr__MoveItem_x                                    0x7808C0
#define CInvSlotMgr__SelectSlot_x                                  0x781DE0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F110
#define CInvSlot__SliderComplete_x                                 0x77C600
#define CInvSlot__GetItemBase_x                                    0x77BEC0
#define CInvSlot__UpdateItem_x                                     0x77C0B0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x783A60
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782C40
#define CInvSlotWnd__HandleLButtonUp_x                             0x7835E0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856550
#define CItemDisplayWnd__UpdateStrings_x                           0x79B080
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x790390
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790910
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B710
#define CItemDisplayWnd__AboutToShow_x                             0x79AC70
#define CItemDisplayWnd__WndNotification_x                         0x79CE50
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C540
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799BD0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79AA60

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88B680

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2530
#define CItemDisplayManager__ShowItem_x                            0x7A19B0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9060

// CListWnd
#define CListWnd__CListWnd_x                                       0x96E3B0
#define CListWnd__dCListWnd_x                                      0x96E6B0
#define CListWnd__AddColumn_x                                      0x9732B0
#define CListWnd__AddColumn1_x                                     0x9733D0
#define CListWnd__AddLine_x                                        0x973740
#define CListWnd__AddString_x                                      0x973540
#define CListWnd__CalculateFirstVisibleLine_x                      0x973060
#define CListWnd__CalculateVSBRange_x                              0x972E50
#define CListWnd__ClearSel_x                                       0x974030
#define CListWnd__ClearAllSel_x                                    0x974080
#define CListWnd__CloseAndUpdateEditWindow_x                       0x974B30
#define CListWnd__Compare_x                                        0x9725D0
#define CListWnd__Draw_x                                           0x96E870
#define CListWnd__DrawColumnSeparators_x                           0x9713C0
#define CListWnd__DrawHeader_x                                     0x971820
#define CListWnd__DrawItem_x                                       0x971E70
#define CListWnd__DrawLine_x                                       0x971530
#define CListWnd__DrawSeparator_x                                  0x971460
#define CListWnd__EnableLine_x                                     0x970C70
#define CListWnd__EnsureVisible_x                                  0x974A50
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x973F70
#define CListWnd__GetColumnTooltip_x                               0x9707F0
#define CListWnd__GetColumnMinWidth_x                              0x970860
#define CListWnd__GetColumnWidth_x                                 0x970770
#define CListWnd__GetCurSel_x                                      0x970110
#define CListWnd__GetItemAtPoint_x                                 0x970EF0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x970F60
#define CListWnd__GetItemColor_x                                   0x970490
#define CListWnd__GetItemData_x                                    0x970190
#define CListWnd__GetItemHeight_x                                  0x970540
#define CListWnd__GetItemIcon_x                                    0x970310
#define CListWnd__GetItemRect_x                                    0x970D60
#define CListWnd__GetItemText_x                                    0x9701D0
#define CListWnd__GetSelList_x                                     0x9740D0
#define CListWnd__GetSeparatorRect_x                               0x9711D0
#define CListWnd__InsertLine_x                                     0x973BA0
#define CListWnd__RemoveLine_x                                     0x973DC0
#define CListWnd__SetColors_x                                      0x972E20
#define CListWnd__SetColumnJustification_x                         0x972B50
#define CListWnd__SetColumnLabel_x                                 0x9734E0
#define CListWnd__SetColumnWidth_x                                 0x972A60
#define CListWnd__SetCurSel_x                                      0x973EC0
#define CListWnd__SetItemColor_x                                   0x974710
#define CListWnd__SetItemData_x                                    0x9746D0
#define CListWnd__SetItemText_x                                    0x9742F0
#define CListWnd__ShiftColumnSeparator_x                           0x972C10
#define CListWnd__Sort_x                                           0x9728C0
#define CListWnd__ToggleSel_x                                      0x973EF0
#define CListWnd__SetColumnsSizable_x                              0x972CB0
#define CListWnd__SetItemWnd_x                                     0x974590
#define CListWnd__GetItemWnd_x                                     0x970360
#define CListWnd__SetItemIcon_x                                    0x974370
#define CListWnd__CalculateCustomWindowPositions_x                 0x973160
#define CListWnd__SetVScrollPos_x                                  0x972A40

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0460
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BEA80
#define CMapViewWnd__HandleLButtonDown_x                           0x7BB910
#define CMapViewWnd__WndNotification_x                             0x7C2D40

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E36A0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4000
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4650
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7870
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2130
#define CMerchantWnd__SelectBuySellSlot_x                          0x7ED9F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E32F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F72A0
#define CPacketScrambler__hton_x                                   0x8F7290

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x9920C0
#define CSidlManager__FindScreenPieceTemplate_x                    0x992490
#define CSidlManager__FindScreenPieceTemplate1_x                   0x9922C0
#define CSidlManager__CreateXWndFromTemplate_x                     0x995940
#define CSidlManager__CreateXWndFromTemplate1_x                    0x995BD0
#define CSidlManagerbase__CreateXWnd_x                             0x995C10

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84C6A0
#define CSidlManager__CreateLabel_x                                0x84C270

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84BCF0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98DE00
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98DD00
#define CSidlScreenWnd__ConvertToRes_x                             0x9BB850
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98D680
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98D370
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98D440
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98D510
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98E6A0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98EB80
#define CSidlScreenWnd__GetSidlPiece_x                             0x98E890
#define CSidlScreenWnd__Init1_x                                    0x98CE50
#define CSidlScreenWnd__LoadIniInfo_x                              0x98EBD0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98F7B0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98C250
#define CSidlScreenWnd__StoreIniInfo_x                             0x98F320
#define CSidlScreenWnd__StoreIniVis_x                              0x98F6A0
#define CSidlScreenWnd__WndNotification_x                          0x98E570
#define CSidlScreenWnd__GetChildItem_x                             0x98EB00
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97D080
#define CSidlScreenWnd__m_layoutCopy_x                             0x1620470

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C1EA0
#define CSkillMgr__GetSkillCap_x                                   0x6C2070
#define CSkillMgr__GetNameToken_x                                  0x6C16E0
#define CSkillMgr__IsActivatedSkill_x                              0x6C17D0
#define CSkillMgr__IsCombatSkill_x                                 0x6C1740

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A0AA0
#define CSliderWnd__SetValue_x                                     0x9A08D0
#define CSliderWnd__SetNumTicks_x                                  0x9A0930

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x852F30

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A9F40
#define CStmlWnd__ParseSTML_x                                      0x9AB100
#define CStmlWnd__CalculateHSBRange_x                              0x9AAEC0
#define CStmlWnd__CalculateVSBRange_x                              0x9AAE30
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AFD30
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B09D0
#define CStmlWnd__ForceParseNow_x                                  0x9AA4B0
#define CStmlWnd__GetNextTagPiece_x                                0x9AFC90
#define CStmlWnd__GetVisibleText_x                                 0x9AA4D0
#define CStmlWnd__InitializeWindowVariables_x                      0x9B0820
#define CStmlWnd__MakeStmlColorTag_x                               0x9A95E0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A9650
#define CStmlWnd__SetSTMLText_x                                    0x9A83C0
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B1BF0
#define CStmlWnd__UpdateHistoryString_x                            0x9B0BD0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A7270
#define CTabWnd__DrawCurrentPage_x                                 0x9A7C00
#define CTabWnd__DrawTab_x                                         0x9A77F0
#define CTabWnd__GetCurrentPage_x                                  0x9A69E0
#define CTabWnd__GetPageInnerRect_x                                0x9A6C10
#define CTabWnd__GetTabInnerRect_x                                 0x9A6B50
#define CTabWnd__GetTabRect_x                                      0x9A6A10
#define CTabWnd__InsertPage_x                                      0x9A6E00
#define CTabWnd__RemovePage_x                                      0x9A6F40
#define CTabWnd__SetPage_x                                         0x9A6C90
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A7170
#define CTabWnd__UpdatePage_x                                      0x9A75E0
#define CTabWnd__GetPageFromTabIndex_x                             0x9A7730
#define CTabWnd__GetCurrentTabIndex_x                              0x9A69D0

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A63B0
#define CPageWnd__FlashTab_x                                       0x9A6410

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC8F0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x9794D0
#define CTextureFont__GetTextExtent_x                              0x9797D0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B82F0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x963E60

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x5448C0
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x94B960
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x94BBA0
#define CXStr__operator_equal1_x                                   0x94BBE0
#define CXStr__operator_plus_equal1_x                              0x94C640
#define CXStr__SetString_x                                         0x94E4E0
#define CXStr__operator_char_p_x                                   0x94C090
#define CXStr__GetChar_x                                           0x94DE40
#define CXStr__Delete_x                                            0x94D710
#define CXStr__GetUnicode_x                                        0x94DEB0
#define CXStr__Insert_x                                            0x94DF10
#define CXStr__FindNext_x                                          0x94DB60
#define CXStr__Copy_x                                              0x94D520

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99EAF0
#define CXWnd__BringToTop_x                                        0x980A70
#define CXWnd__ClrFocus_x                                          0x9803F0
#define CXWnd__Destroy_x                                           0x9804A0
#define CXWnd__DoAllDrawing_x                                      0x97C6E0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97C6B0
#define CXWnd__DrawColoredRect_x                                   0x97CC60
#define CXWnd__DrawTooltip_x                                       0x97AC30
#define CXWnd__DrawTooltipAtPoint_x                                0x97ACF0
#define CXWnd__GetBorderFrame_x                                    0x97C900
#define CXWnd__GetChildWndAt_x                                     0x980B10
#define CXWnd__GetClientClipRect_x                                 0x97ECC0
#define CXWnd__GetScreenClipRect_x                                 0x97ED90
#define CXWnd__GetScreenRect_x                                     0x97EF60
#define CXWnd__GetRelativeRect_x                                   0x97F010
#define CXWnd__GetTooltipRect_x                                    0x97CCB0
#define CXWnd__GetWindowTextA_x                                    0x4F2380
#define CXWnd__IsActive_x                                          0x97D3F0
#define CXWnd__IsDescendantOf_x                                    0x97F980
#define CXWnd__IsReallyVisible_x                                   0x97F9B0
#define CXWnd__IsType_x                                            0x9812A0
#define CXWnd__Move_x                                              0x97FA20
#define CXWnd__Move1_x                                             0x97FB10
#define CXWnd__ProcessTransition_x                                 0x980580
#define CXWnd__Refade_x                                            0x97FDB0
#define CXWnd__Resize_x                                            0x980040
#define CXWnd__Right_x                                             0x980860
#define CXWnd__SetFocus_x                                          0x9803B0
#define CXWnd__SetFont_x                                           0x980420
#define CXWnd__SetKeyTooltip_x                                     0x981060
#define CXWnd__SetMouseOver_x                                      0x97DD90
#define CXWnd__StartFade_x                                         0x97F860
#define CXWnd__GetChildItem_x                                      0x980C90
#define CXWnd__SetParent_x                                         0x97F6A0
#define CXWnd__Minimize_x                                          0x9800B0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BC8A0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x983AE0
#define CXWndManager__DrawWindows_x                                0x983C30
#define CXWndManager__GetKeyboardFlags_x                           0x9865A0
#define CXWndManager__HandleKeyboardMsg_x                          0x986190
#define CXWndManager__RemoveWnd_x                                  0x986870
#define CXWndManager__RemovePendingDeletionWnd_x                   0x986D30

// CDBStr
#define CDBStr__GetString_x                                        0x55AA70

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5AA0
#define EQ_Character__Cur_HP_x                                     0x4D99D0
#define EQ_Character__Cur_Mana_x                                   0x4E1AB0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9110
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B85E0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8730
#define EQ_Character__GetHPRegen_x                                 0x4E8490
#define EQ_Character__GetEnduranceRegen_x                          0x4E8A50
#define EQ_Character__GetManaRegen_x                               0x4E8E90
#define EQ_Character__Max_Endurance_x                              0x683000
#define EQ_Character__Max_HP_x                                     0x4D9800
#define EQ_Character__Max_Mana_x                                   0x682DF0
#define EQ_Character__doCombatAbility_x                            0x685930
#define EQ_Character__UseSkill_x                                   0x4EAE90
#define EQ_Character__GetConLevel_x                                0x67B120
#define EQ_Character__IsExpansionFlag_x                            0x5D41E0
#define EQ_Character__TotalEffect_x                                0x4CD590
#define EQ_Character__GetPCSpellAffect_x                           0x4C9F40
#define EQ_Character__SpellDuration_x                              0x4C9980
#define EQ_Character__MySpellDuration_x                            0x4B6CA0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCB20
#define EQ_Character__GetBaseSkill_x                               0x4DDAC0
#define EQ_Character__CanUseItem_x                                 0x4E1DE0
#define EQ_Character__CanMedOnHorse_x                              0x4EA9D0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917610

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69AA50

//PcClient
#define PcClient__vftable_x                                        0xB4EE94
#define PcClient__PcClient_x                                       0x678390

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C00B0
#define CCharacterListWnd__EnterWorld_x                            0x4BFA80
#define CCharacterListWnd__Quit_x                                  0x4BF7A0
#define CCharacterListWnd__UpdateList_x                            0x4BFC70

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65A7D0
#define EQ_Item__CreateItemTagString_x                             0x8F0040
#define EQ_Item__IsStackable_x                                     0x8F5290
#define EQ_Item__GetImageNum_x                                     0x8F1CD0
#define EQ_Item__CreateItemClient_x                                0x659780
#define EQ_Item__GetItemValue_x                                    0x8F2FD0
#define EQ_Item__ValueSellMerchant_x                               0x8F6FD0
#define EQ_Item__IsKeyRingItem_x                                   0x8F4A60
#define EQ_Item__CanGoInBag_x                                      0x65A8F0
#define EQ_Item__IsEmpty_x                                         0x8F4450
#define EQ_Item__GetMaxItemCount_x                                 0x8F33D0
#define EQ_Item__GetHeldItem_x                                     0x8F1B80
#define EQ_Item__CanGemFitInSlot_x                                 0x8EF860

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57B910
#define EQ_LoadingS__Array_x                                       0xD9CD10

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x683AF0
#define EQ_PC__GetAlternateAbilityId_x                             0x900F10
#define EQ_PC__GetCombatAbility_x                                  0x901490
#define EQ_PC__GetCombatAbilityTimer_x                             0x901500
#define EQ_PC__GetItemRecastTimer_x                                0x685F30
#define EQ_PC__HasLoreItem_x                                       0x67BAD0
#define EQ_PC__AlertInventoryChanged_x                             0x67A9E0
#define EQ_PC__GetPcZoneClient_x                                   0x6AB140
#define EQ_PC__RemoveMyAffect_x                                    0x689450
#define EQ_PC__GetKeyRingItems_x                                   0x901F90
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x901AF0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9020E0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5DA580
#define EQItemList__add_object_x                                   0x60AAA0
#define EQItemList__add_item_x                                     0x5DAB60
#define EQItemList__delete_item_x                                  0x5DABB0
#define EQItemList__FreeItemList_x                                 0x5DAAC0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556B70

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69C480
#define EQPlayer__dEQPlayer_x                                      0x68ED20
#define EQPlayer__DoAttack_x                                       0x6A4E80
#define EQPlayer__EQPlayer_x                                       0x68F570
#define EQPlayer__SetNameSpriteState_x                             0x693B30
#define EQPlayer__SetNameSpriteTint_x                              0x694A00
#define PlayerBase__HasProperty_j_x                                0x9EC170
#define EQPlayer__IsTargetable_x                                   0x9EC6D0
#define EQPlayer__CanSee_x                                         0x9EC4C0
#define EQPlayer__CanSee1_x                                        0x9EC590
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EC230

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A8C40
#define PlayerZoneClient__GetLevel_x                               0x6AB180
#define PlayerZoneClient__IsValidTeleport_x                        0x60BF40
#define PlayerZoneClient__LegalPlayerRace_x                        0x5738E0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69F620
#define EQPlayerManager__GetSpawnByName_x                          0x69F6D0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69F760

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65E0F0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65E1C0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65E200
#define KeypressHandler__ClearCommandStateArray_x                  0x65F6C0
#define KeypressHandler__HandleKeyDown_x                           0x65F6E0
#define KeypressHandler__HandleKeyUp_x                             0x65F780
#define KeypressHandler__SaveKeymapping_x                          0x65FD30

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC110
#define MapViewMap__SaveEx_x                                       0x7BF64F
#define MapViewMap__SetZoom_x                                      0x7C5290

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9154A0

// StringTable 
#define StringTable__getString_x                                   0x910370

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6890A0
#define PcZoneClient__RemovePetEffect_x                            0x689700
#define PcZoneClient__HasAlternateAbility_x                        0x682C50
#define PcZoneClient__GetCurrentMod_x                              0x4EE620
#define PcZoneClient__GetModCap_x                                  0x4EE520
#define PcZoneClient__CanEquipItem_x                               0x683300
#define PcZoneClient__GetItemByID_x                                0x686400
#define PcZoneClient__GetItemByItemClass_x                         0x686540
#define PcZoneClient__RemoveBuffEffect_x                           0x6897B0
#define PcZoneClient__BandolierSwap_x                              0x6840A0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x685ED0

//Doors
#define EQSwitch__UseSwitch_x                                      0x610A90

//IconCache
#define IconCache__GetIcon_x                                       0x74C330

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742F00
#define CContainerMgr__CloseContainer_x                            0x7431E0
#define CContainerMgr__OpenExperimentContainer_x                   0x743D40

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81B6C0

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x652D60

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1380
#define CLootWnd__RequestLootSlot_x                                0x7B05B0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A5F70
#define EQ_Spell__SpellAffects_x                                   0x5A6470
#define EQ_Spell__SpellAffectBase_x                                0x5A6190
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0F90
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0F40
#define EQ_Spell__IsSPAStacking_x                                  0x5A7220
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A6670
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A7230
#define EQ_Spell__IsLullSpell_x                                    0x5A6A60
#define __IsResEffectSpell_x                                       0x4D0740

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B15F0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x91FF20
#define EQ_Affect__SetAffectData_x                                 0x9204F0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868030
#define CTargetWnd__WndNotification_x                              0x8677C0
#define CTargetWnd__RefreshTargetBuffs_x                           0x867B20
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x8665A0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86CBC0
#define CTaskWnd__ConfirmAbandonTask_x                             0x86FC90

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x554740
#define CTaskManager__HandleMessage_x                              0x552610
#define CTaskManager__GetTaskStatus_x                              0x5547F0
#define CTaskManager__GetElementDescription_x                      0x554870

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0B50
#define EqSoundManager__PlayScriptMp3_x                            0x5A0D50
#define EqSoundManager__SoundAssistPlay_x                          0x6C6300
#define EqSoundManager__WaveInstancePlay_x                         0x6C57F0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544570

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A5860
#define CTextureAnimation__Draw_x                                  0x9A5AA0
#define CTextureAnimation__AddBlankFrame_x                         0x9A5680

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A15A0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x583F10
#define CAltAbilityData__GetMercMaxRank_x                          0x583EA0
#define CAltAbilityData__GetMaxRank_x                              0x578290

//CTargetRing
#define CTargetRing__Cast_x                                        0x650570

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x6595D0
#define CharacterBase__CreateItemGlobalIndex_x                     0x646CA0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x6595B0
#define CharacterBase__GetItemByGlobalIndex_x                      0x927A80
#define CharacterBase__GetItemByGlobalIndex1_x                     0x927AD0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x727DB0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x728670
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728720

//messages
#define msg_spell_worn_off_x                                       0x5CBB90
#define msg_new_text_x                                             0x5BF980
#define __msgTokenTextParam_x                                      0x5CE000
#define msgTokenText_x                                             0x5CE410

//SpellManager
#define SpellManager__vftable_x                                    0xB394B4
#define SpellManager__SpellManager_x                               0x6C9F40
#define Spellmanager__LoadTextSpells_x                             0x6CA840
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CA110

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F09D0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D4230
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D2710
#define ItemGlobalIndex__IsEquippedLocation_x                      0x673270
#define ItemGlobalIndex__IsValidIndex_x                            0x5D43C0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x920920
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x920C70

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A94D0

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x747BD0
#define CCursorAttachment__AttachToCursor1_x                       0x747C10
#define CCursorAttachment__Deactivate_x                            0x7491A0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x997160
#define CSidlManagerBase__CreatePageWnd_x                          0x996960
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x991E40
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x991DD0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B6EC0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B6B40

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524700
#define CFindItemWnd__WndNotification_x                            0x5255C0
#define CFindItemWnd__Update_x                                     0x5261A0
#define CFindItemWnd__PickupSelectedItem_x                         0x523E00

//IString
#define IString__Append_x                                          0x513970

//Camera
#define CDisplay__cameraType_x                                     0xEE0E2C
#define EverQuest__Cameras_x                                       0xDB0048

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F3C0
#define LootFiltersManager__GetItemFilterData_x                    0x52ECF0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52ED20
#define LootFiltersManager__SetItemLootFilter_x                    0x52EF30

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808190

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F6690
#define CResolutionHandler__GetWindowedStyle_x                     0x6C07E0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73F870

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92BE10
#define CDistillerInfo__Instance_x                                 0x92BD50

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762490
#define CGroupWnd__UpdateDisplay_x                                 0x7616F0

//ItemBase
#define ItemBase__IsLore_x                                         0x8F4B00
#define ItemBase__IsLoreEquipped_x                                 0x8F4B70

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60AA00
#define EQPlacedItemManager__GetItemByGuid_x                       0x60AB40
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60ABA0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4F20
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B9810

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A140

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x504EE0
#define FactionManagerClient__HandleFactionMessage_x               0x505700
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x505F20
#define FactionManagerClient__GetMaxFaction_x                      0x505F3F
#define FactionManagerClient__GetMinFaction_x                      0x505EF0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511B00

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x978140

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E320

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511D70

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5830D0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CDEC0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4F20

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC6B0

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DAA60

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4D6DC

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EB630
#define CAAWnd__UpdateSelected_x                                   0x6E7CC0
#define CAAWnd__Update_x                                           0x6EA950

//CXRect
#define CXRect__operator_and_x                                     0x7579A0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240

//
#define __eq_delete_x                                              0x9F6C75
#define __eq_new_x                                                 0x9F71E4

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

