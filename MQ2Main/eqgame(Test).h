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
#define __ExpectedVersionDate                                     "Oct 26 2021"
#define __ExpectedVersionTime                                     "09:50:50"
#define __ActualVersionDate_x                                      0xB52194
#define __ActualVersionTime_x                                      0xB52188
#define __ActualVersionBuild_x                                     0xB4236C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x6638F0
#define __MemChecker1_x                                            0x94FCB0
#define __MemChecker2_x                                            0x6DE160
#define __MemChecker3_x                                            0x6DE0D0
#define __MemChecker4_x                                            0x8A2D00
#define __EncryptPad0_x                                            0xE51B88
#define __EncryptPad1_x                                            0xEAC398
#define __EncryptPad2_x                                            0xE60DB0
#define __EncryptPad3_x                                            0xE609B0
#define __EncryptPad4_x                                            0xE9D1B0
#define __EP1_Data_x                                               0x37E05C

// Direct Input
#define DI8__Main_x                                                0xF9FCE4
#define DI8__Keyboard_x                                            0xF9FCE8
#define DI8__Mouse_x                                               0xF9FC44
#define DI8__Mouse_Copy_x                                          0xDACDCC
#define DI8__Mouse_Check_x                                         0xF9D7A4
#define __AutoSkillArray_x                                         0xDAD8E8
#define __Attack_x                                                 0xE4B70B
#define __Autofire_x                                               0xE4B70C
#define __BindList_x                                               0xDA2478
#define g_eqCommandStates_x                                        0xDA31E0
#define __Clicks_x                                                 0xDACE84
#define __CommandList_x                                            0xDA3D68
#define __CurrentMapLabel_x                                        0xFB06E4
#define __CurrentSocial_x                                          0xC5D460
#define __DoAbilityList_x                                          0xDE322C
#define __do_loot_x                                                0x5E0E30
#define __DrawHandler_x                                            0x161F478
#define __GroupCount_x                                             0xF92DDA
#define __Guilds_x                                                 0xF97240
#define __gWorld_x                                                 0xF92FEC
#define __HWnd_x                                                   0xF9FC48
#define __heqmain_x                                                0xF9FC38
#define __InChatMode_x                                             0xDACDB4
#define __LastTell_x                                               0xDAE928
#define __LMouseHeldTime_x                                         0xDACEF0
#define __Mouse_x                                                  0xF9FCD0
#define __MouseLook_x                                              0xDACE4A
#define __MouseEventTime_x                                         0xF98C6C
#define __gpbCommandEvent_x                                        0xF930F8
#define __NetStatusToggle_x                                        0xDACE4D
#define __PCNames_x                                                0xDADED8
#define __RangeAttackReady_x                                       0xDADBCC
#define __RMouseHeldTime_x                                         0xDACEEC
#define __RunWalkState_x                                           0xDACDB8
#define __ScreenMode_x                                             0xEDF0B8
#define __ScreenX_x                                                0xDACD6C
#define __ScreenY_x                                                0xDACD68
#define __ScreenXMax_x                                             0xDACD70
#define __ScreenYMax_x                                             0xDACD74
#define __ServerHost_x                                             0xF932C3
#define __ServerName_x                                             0xDE31EC
#define __ShiftKeyDown_x                                           0xDAD448
#define __ShowNames_x                                              0xDADD88
#define EverQuestInfo__bSocialChanged_x                            0xDE3274
#define __Socials_x                                                0xDE32EC
#define __SubscriptionType_x                                       0xFE47D0
#define __TargetAggroHolder_x                                      0xFB3098
#define __ZoneType_x                                               0xDAD248
#define __GroupAggro_x                                             0xFB30D8
#define __LoginName_x                                              0xFA03B4
#define __Inviter_x                                                0xE4B688
#define __AttackOnAssist_x                                         0xDADD44
#define __UseTellWindows_x                                         0xDAE070
#define __gfMaxZoomCameraDistance_x                                0xB4A00C
#define __gfMaxCameraDistance_x                                    0xB729E8
#define __pulAutoRun_x                                             0xDACE68
#define __pulForward_x                                             0xDAE0A8
#define __pulBackward_x                                            0xDAE0AC
#define __pulTurnRight_x                                           0xDAE0B0
#define __pulTurnLeft_x                                            0xDAE0B4
#define __pulStrafeLeft_x                                          0xDAE0B8
#define __pulStrafeRight_x                                         0xDAE0BC

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF935D8
#define instEQZoneInfo_x                                           0xDAD040
#define pinstActiveBanker_x                                        0xF90CD8
#define pinstActiveCorpse_x                                        0xF90CD0
#define pinstActiveGMaster_x                                       0xF90CD4
#define pinstActiveMerchant_x                                      0xF90CCC
#define pinstAltAdvManager_x                                       0xEDFEE8
#define pinstBandageTarget_x                                       0xF90CE8
#define pinstCamActor_x                                            0xEDF0AC
#define pinstCDBStr_x                                              0xEDEC58
#define pinstCDisplay_x                                            0xF90D54
#define pinstCEverQuest_x                                          0xF9FC4C
#define pinstEverQuestInfo_x                                       0xDACD60
#define pinstCharData_x                                            0xF90D44
#define pinstCharSpawn_x                                           0xF90D20
#define pinstControlledMissile_x                                   0xF90D2C
#define pinstControlledPlayer_x                                    0xF90D20
#define pinstCResolutionHandler_x                                  0x161F6A0
#define pinstCSidlManager_x                                        0x161E63C
#define pinstCXWndManager_x                                        0x161E634
#define instDynamicZone_x                                          0xF97118
#define pinstDZMember_x                                            0xF97228
#define pinstDZTimerInfo_x                                         0xF9722C
#define pinstEqLogin_x                                             0xF9FD00
#define instEQMisc_x                                               0xD968D8
#define pinstEQSoundManager_x                                      0xEE07F8
#define pinstEQSpellStrings_x                                      0xECF8F8
#define instExpeditionLeader_x                                     0xF97162
#define instExpeditionName_x                                       0xF971A2
#define pinstGroup_x                                               0xF92DD6
#define pinstImeManager_x                                          0x161E638
#define pinstLocalPlayer_x                                         0xF90CC8
#define pinstMercenaryData_x                                       0xF9A764
#define pinstMercenaryStats_x                                      0xFB3164
#define pinstModelPlayer_x                                         0xF90CE0
#define pinstPCData_x                                              0xF90D44
#define pinstSkillMgr_x                                            0xF9C850
#define pinstSpawnManager_x                                        0xF9B328
#define pinstSpellManager_x                                        0xF9CA90
#define pinstSpellSets_x                                           0xE44334
#define pinstStringTable_x                                         0xF90D50
#define pinstSwitchManager_x                                       0xF90B78
#define pinstTarget_x                                              0xF90D1C
#define pinstTargetObject_x                                        0xF90D3C
#define pinstTargetSwitch_x                                        0xF90D40
#define pinstTaskMember_x                                          0xD96420
#define pinstTrackTarget_x                                         0xF90D24
#define pinstTradeTarget_x                                         0xF90CDC
#define instTributeActive_x                                        0xD968F9
#define pinstViewActor_x                                           0xEDF0A8
#define pinstWorldData_x                                           0xF90D4C
#define pinstZoneAddr_x                                            0xDAD2E0
#define pinstPlayerPath_x                                          0xF9B3C0
#define pinstTargetIndicator_x                                     0xF9CCF8
#define EQObject_Top_x                                             0xF90D38

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEDF118
#define pinstCAchievementsWnd_x                                    0xEDED80
#define pinstCActionsWnd_x                                         0xEDF0A0
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDF0C4
#define pinstCAdvancedLootWnd_x                                    0xEDF0A4
#define pinstCAdventureLeaderboardWnd_x                            0xFA9F08
#define pinstCAdventureRequestWnd_x                                0xFA9FB8
#define pinstCAdventureStatsWnd_x                                  0xFAA068
#define pinstCAggroMeterWnd_x                                      0xEDEE18
#define pinstCAlarmWnd_x                                           0xEDF110
#define pinstCAlertHistoryWnd_x                                    0xEDF084
#define pinstCAlertStackWnd_x                                      0xEDEE50
#define pinstCAlertWnd_x                                           0xEDEE54
#define pinstCAltStorageWnd_x                                      0xFAA3C8
#define pinstCAudioTriggersWindow_x                                0xEC1C28
#define pinstCAuraWnd_x                                            0xEDF0EC
#define pinstCAvaZoneWnd_x                                         0xEDED60
#define pinstCBandolierWnd_x                                       0xEDF0F8
#define pinstCBankWnd_x                                            0xEDF088
#define pinstCBarterMerchantWnd_x                                  0xFAB608
#define pinstCBarterSearchWnd_x                                    0xFAB6B8
#define pinstCBarterWnd_x                                          0xFAB768
#define pinstCBazaarConfirmationWnd_x                              0xEDF124
#define pinstCBazaarSearchWnd_x                                    0xEDEDB4
#define pinstCBazaarWnd_x                                          0xEDED5C
#define pinstCBlockedBuffWnd_x                                     0xEDEDE4
#define pinstCBlockedPetBuffWnd_x                                  0xEDEDEC
#define pinstCBodyTintWnd_x                                        0xEDED0C
#define pinstCBookWnd_x                                            0xEDF090
#define pinstCBreathWnd_x                                          0xEDF11C
#define pinstCBuffWindowNORMAL_x                                   0xEDEDD8
#define pinstCBuffWindowSHORT_x                                    0xEDEDDC
#define pinstCBugReportWnd_x                                       0xEDED98
#define pinstCButtonWnd_x                                          0x161E8A0
#define pinstCCastingWnd_x                                         0xEDEE14
#define pinstCCastSpellWnd_x                                       0xEDEE24
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEDEDB8
#define pinstCChatWindowManager_x                                  0xFAC210
#define pinstCClaimWnd_x                                           0xFAC368
#define pinstCColorPickerWnd_x                                     0xEDEDCC
#define pinstCCombatAbilityWnd_x                                   0xEDF0D8
#define pinstCCombatSkillsSelectWnd_x                              0xEDF0DC
#define pinstCCompassWnd_x                                         0xEDF0E8
#define pinstCConfirmationDialog_x                                 0xFB1230
#define pinstCContainerMgr_x                                       0xEDF114
#define pinstCContextMenuManager_x                                 0x161E5F0
#define pinstCCursorAttachment_x                                   0xEDEE0C
#define pinstCDynamicZoneWnd_x                                     0xFAC930
#define pinstCEditLabelWnd_x                                       0xEDED78
#define pinstCEQMainWnd_x                                          0xFACB78
#define pinstCEventCalendarWnd_x                                   0xEDF0FC
#define pinstCExtendedTargetWnd_x                                  0xEDEE10
#define pinstCPlayerCustomizationWnd_x                             0xEDEDC0
#define pinstCFactionWnd_x                                         0xEDEE20
#define pinstCFellowshipWnd_x                                      0xFACD78
#define pinstCFileSelectionWnd_x                                   0xEDF0E4
#define pinstCFindItemWnd_x                                        0xEDED14
#define pinstCFindLocationWnd_x                                    0xFACED0
#define pinstCFriendsWnd_x                                         0xEDF0E0
#define pinstCGemsGameWnd_x                                        0xEDF104
#define pinstCGiveWnd_x                                            0xEDED6C
#define pinstCGroupSearchFiltersWnd_x                              0xEDEDFC
#define pinstCGroupSearchWnd_x                                     0xFAD2C8
#define pinstCGroupWnd_x                                           0xFAD378
#define pinstCGuildBankWnd_x                                       0xFAD428
#define pinstCGuildCreationWnd_x                                   0xFAD4D8
#define pinstCGuildMgmtWnd_x                                       0xFAD588
#define pinstCharacterCreation_x                                   0xEDEE08
#define pinstCHelpWnd_x                                            0xEDF070
#define pinstCHeritageSelectionWnd_x                               0xEDEDC4
#define pinstCHotButtonWnd_x                                       0xFAF6E0
#define pinstCHotButtonWnd1_x                                      0xFAF6E0
#define pinstCHotButtonWnd2_x                                      0xFAF6E4
#define pinstCHotButtonWnd3_x                                      0xFAF6E8
#define pinstCHotButtonWnd4_x                                      0xFAF6EC
#define pinstCIconSelectionWnd_x                                   0xEDED94
#define pinstCInspectWnd_x                                         0xEDED88
#define pinstCInventoryWnd_x                                       0xEDF074
#define pinstCInvSlotMgr_x                                         0xEDF100
#define pinstCItemDisplayManager_x                                 0xFAFC38
#define pinstCItemExpTransferWnd_x                                 0xFAFD68
#define pinstCItemOverflowWnd_x                                    0xEDED4C
#define pinstCJournalCatWnd_x                                      0xEDECFC
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEDF128
#define pinstCJournalTextWnd_x                                     0xEDF128
#define pinstCKeyRingWnd_x                                         0xEDF080
#define pinstCLargeDialogWnd_x                                     0xFB1EB0
#define pinstCLayoutCopyWnd_x                                      0xFB00B8
#define pinstCLFGuildWnd_x                                         0xFB0168
#define pinstCLoadskinWnd_x                                        0xEDF10C
#define pinstCLootFiltersCopyWnd_x                                 0xEDE168
#define pinstCLootFiltersWnd_x                                     0xEDF12C
#define pinstCLootSettingsWnd_x                                    0xEDECF8
#define pinstCLootWnd_x                                            0xEDF094
#define pinstCMailAddressBookWnd_x                                 0xEDEDAC
#define pinstCMailCompositionWnd_x                                 0xEDEDA4
#define pinstCMailIgnoreListWnd_x                                  0xEDEDB0
#define pinstCMailWnd_x                                            0xEDED9C
#define pinstCManageLootWnd_x                                      0xEE0368
#define pinstCMapToolbarWnd_x                                      0xEDED70
#define pinstCMapViewWnd_x                                         0xEDED64
#define pinstCMarketplaceWnd_x                                     0xEDED3C
#define pinstCMerchantWnd_x                                        0xEDED44
#define pinstCMIZoneSelectWnd_x                                    0xFB09A0
#define pinstCMusicPlayerWnd_x                                     0xEDF108
#define pinstCNameChangeMercWnd_x                                  0xEDEE38
#define pinstCNameChangePetWnd_x                                   0xEDEE34
#define pinstCNameChangeWnd_x                                      0xEDED90
#define pinstCNoteWnd_x                                            0xEDEE5C
#define pinstCObjectPreviewWnd_x                                   0xEDEDA8
#define pinstCOptionsWnd_x                                         0xEDEDD4
#define pinstCOverseerWnd_x                                        0xEDED38
#define pinstCPetInfoWnd_x                                         0xEDF098
#define pinstCPetitionQWnd_x                                       0xEDEDF0
#define pinstCPlayerNotesWnd_x                                     0xEDF0F0
#define pinstCPlayerWnd_x                                          0xEDED10
#define pinstCPopupWndManager_x                                    0xFB1230
#define pinstCProgressionSelectionWnd_x                            0xFB12E0
#define pinstCPurchaseGroupWnd_x                                   0xEDED48
#define pinstCPurchaseWnd_x                                        0xEDED40
#define pinstCPvPLeaderboardWnd_x                                  0xFB1390
#define pinstCPvPStatsWnd_x                                        0xFB1440
#define pinstCQuantityWnd_x                                        0xEDF08C
#define pinstCRaceChangeWnd_x                                      0xEDEDA0
#define pinstCRaidOptionsWnd_x                                     0xEDEE1C
#define pinstCRaidWnd_x                                            0xEDEE28
#define pinstCRealEstateItemsWnd_x                                 0xEDEDC8
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDEE04
#define pinstCRealEstateManageWnd_x                                0xEDEDE8
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDEDF4
#define pinstCRealEstatePlotSearchWnd_x                            0xEDEDF8
#define pinstCRealEstatePurchaseWnd_x                              0xEDEE00
#define pinstCRespawnWnd_x                                         0xEDF0F4
#define pinstCRewardSelectionWnd_x                                 0xFB1B88
#define pinstCSelectorWnd_x                                        0xEDED54
#define pinstCSendMoneyWnd_x                                       0xEDED74
#define pinstCServerListWnd_x                                      0xEDF0D4
#define pinstCSkillsSelectWnd_x                                    0xEDF0D0
#define pinstCSkillsWnd_x                                          0xEDF0C8
#define pinstCSocialEditWnd_x                                      0xEDED8C
#define pinstCSocialWnd_x                                          0xEDF120
#define pinstCSpellBookWnd_x                                       0xEDEE48
#define pinstCStoryWnd_x                                           0xEDED04
#define pinstCTargetOfTargetWnd_x                                  0xFB31E8
#define pinstCTargetWnd_x                                          0xEDED84
#define pinstCTaskOverlayWnd_x                                     0xEDED00
#define pinstCTaskSelectWnd_x                                      0xFB3340
#define pinstCTaskManager_x                                        0xC68268
#define pinstCTaskTemplateSelectWnd_x                              0xFB33F0
#define pinstCTaskWnd_x                                            0xFB34A0
#define pinstCTextEntryWnd_x                                       0xEDF0CC
#define pinstCTimeLeftWnd_x                                        0xEDEDE0
#define pinstCTipWndCONTEXT_x                                      0xFB36A4
#define pinstCTipWndOFDAY_x                                        0xFB36A0
#define pinstCTitleWnd_x                                           0xFB3750
#define pinstCTrackingWnd_x                                        0xEDED7C
#define pinstCTradeskillWnd_x                                      0xFB38B8
#define pinstCTradeWnd_x                                           0xEDED50
#define pinstCTrainWnd_x                                           0xEDF09C
#define pinstCTributeBenefitWnd_x                                  0xFB3AB8
#define pinstCTributeMasterWnd_x                                   0xFB3B68
#define pinstCTributeTrophyWnd_x                                   0xFB3C18
#define pinstCVideoModesWnd_x                                      0xEDED68
#define pinstCVoiceMacroWnd_x                                      0xF9D110
#define pinstCVoteResultsWnd_x                                     0xEDEE30
#define pinstCVoteWnd_x                                            0xEDEE2C
#define pinstCZoneGuideWnd_x                                       0xEDF078
#define pinstCZonePathWnd_x                                        0xEDF07C

#define pinstEQSuiteTextureLoader_x                                0xEAC958
#define pinstItemIconCache_x                                       0xFACB30
#define pinstLootFiltersManager_x                                  0xEDE218
#define pinstRewardSelectionWnd_x                                  0xFB1B88

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DC110
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DC3A0
#define __ConvertItemTags_x                                        0x5F9580
#define __CleanItemTags_x                                          0x47DA60
#define __DoesFileExist_x                                          0x952C50
#define __EQGetTime_x                                              0x94F920
#define __ExecuteCmd_x                                             0x5D4540
#define __FixHeading_x                                             0x9EEBB0
#define __FlushDxKeyboard_x                                        0x6D9450
#define __GameLoop_x                                               0x6DCD60
#define __get_bearing_x                                            0x5DBCB0
#define __get_melee_range_x                                        0x5DC5E0
#define __GetAnimationCache_x                                      0x74B510
#define __GetGaugeValueFromEQ_x                                    0x85B870
#define __GetLabelFromEQ_x                                         0x85D280
#define __GetXTargetType_x                                         0x9F0F20
#define __HandleMouseWheel_x                                       0x6DE1F0
#define __HeadingDiff_x                                            0x9EEC10
#define __HelpPath_x                                               0xF9892C
#define __ExecuteFrontEnd_x                                        0x6D9C30
#define __NewUIINI_x                                               0x85B540
#define __ProcessGameEvents_x                                      0x642AF0
#define __ProcessMouseEvent_x                                      0x6421F0
#define __SaveColors_x                                             0x56F760
#define __STMLToText_x                                             0x98C680
#define __ToggleKeyRingItem_x                                      0x5289F0
#define CMemoryMappedFile__SetFile_x                               0xADE600
#define CrashDetected_x                                            0x6DB960
#define DrawNetStatus_x                                            0x671E30
#define Expansion_HoT_x                                            0xDADD30
#define Teleport_Table_Size_x                                      0xF93180
#define Teleport_Table_x                                           0xF90D58
#define Util__FastTime_x                                           0x94F4E0
#define __CopyLayout_x                                             0x65EB70
#define __WndProc_x                                                0x6DBE60
#define __ProcessKeyboardEvent_x                                   0x6DB3A0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919A0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B500
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B380
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495680
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948B8

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x5787C0
#define AltAdvManager__IsAbilityReady_x                            0x5773A0
#define AltAdvManager__GetAAById_x                                 0x577740
#define AltAdvManager__CanTrainAbility_x                           0x5777B0
#define AltAdvManager__CanSeeAbility_x                             0x577B60

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D17E0
#define CharacterZoneClient__HasSkill_x                            0x4DCF50
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE6C0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8B90
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1370
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFBC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFCC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE00
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAE60
#define CharacterZoneClient__BardCastBard_x                        0x4CDE90
#define CharacterZoneClient__GetMaxEffects_x                       0x4C52E0
#define CharacterZoneClient__GetEffect_x                           0x4C12B0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC470
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC520
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC5C0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC780
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC960
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8B80
#define CharacterZoneClient__FindItemByGuid_x                      0x685090
#define CharacterZoneClient__FindItemByRecord_x                    0x4DECA0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x7070F0
#define CBankWnd__WndNotification_x                                0x706E90

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711AE0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C760
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A730

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716200

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x989C20
#define CButtonWnd__CButtonWnd_x                                   0x9885C0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x738BE0
#define CChatManager__InitContextMenu_x                            0x731B10
#define CChatManager__FreeChatWindow_x                             0x7377A0
#define CChatManager__SetLockedActiveChatWindow_x                  0x7388C0
#define CChatManager__CreateChatWindow_x                           0x737DD0

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD60

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99FA70
#define CContextMenu__dCContextMenu_x                              0x99FCB0
#define CContextMenu__AddMenuItem_x                                0x99FCC0
#define CContextMenu__RemoveMenuItem_x                             0x99FFD0
#define CContextMenu__RemoveAllMenuItems_x                         0x99FFF0
#define CContextMenu__CheckMenuItem_x                              0x9A0050
#define CContextMenu__SetMenuItem_x                                0x99FEF0
#define CContextMenu__AddSeparator_x                               0x99FE50

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A05E0
#define CContextMenuManager__RemoveMenu_x                          0x9A0650
#define CContextMenuManager__PopupMenu_x                           0x9A0710
#define CContextMenuManager__Flush_x                               0x9A0580
#define CContextMenuManager__GetMenu_x                             0x49D9F0
#define CContextMenuManager__CreateDefaultMenu_x                   0x7454C0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92A0B0
#define CChatService__GetFriendName_x                              0x92A0C0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x739540
#define CChatWindow__Clear_x                                       0x73A990
#define CChatWindow__WndNotification_x                             0x73B120
#define CChatWindow__AddHistory_x                                  0x73A1F0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99CB40
#define CComboWnd__Draw_x                                          0x99BFD0
#define CComboWnd__GetCurChoice_x                                  0x99C910
#define CComboWnd__GetListRect_x                                   0x99C480
#define CComboWnd__GetTextRect_x                                   0x99CBB0
#define CComboWnd__InsertChoice_x                                  0x99C610
#define CComboWnd__SetColors_x                                     0x99C5E0
#define CComboWnd__SetChoice_x                                     0x99C8F0
#define CComboWnd__GetItemCount_x                                  0x99C920
#define CComboWnd__GetCurChoiceText_x                              0x99C950
#define CComboWnd__GetChoiceText_x                                 0x99C930
#define CComboWnd__InsertChoiceAtIndex_x                           0x99C6B0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x742B00
#define CContainerWnd__vftable_x                                   0xB5B424
#define CContainerWnd__SetContainer_x                              0x744360

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569FA0
#define CDisplay__PreZoneMainUI_x                                  0x569FB0
#define CDisplay__CleanGameUI_x                                    0x56F540
#define CDisplay__GetClickedActor_x                                0x561D70
#define CDisplay__GetUserDefinedColor_x                            0x559B00
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x563880
#define CDisplay__is3dON_x                                         0x55E600
#define CDisplay__ReloadUI_x                                       0x5692C0
#define CDisplay__WriteTextHD2_x                                   0x55E3F0
#define CDisplay__TrueDistance_x                                   0x565860
#define CDisplay__SetViewActor_x                                   0x561690
#define CDisplay__GetFloorHeight_x                                 0x55E6C0
#define CDisplay__SetRenderWindow_x                                0x55D070
#define CDisplay__ToggleScreenshotMode_x                           0x561160

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C2350

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A35A0
#define CEditWnd__EnsureCaretVisible_x                             0x9A5910
#define CEditWnd__GetCaretPt_x                                     0x9A4780
#define CEditWnd__GetCharIndexPt_x                                 0x9A4530
#define CEditWnd__GetDisplayString_x                               0x9A43D0
#define CEditWnd__GetHorzOffset_x                                  0x9A2AF0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A5820
#define CEditWnd__GetSelStartPt_x                                  0x9A47E0
#define CEditWnd__GetSTMLSafeText_x                                0x9A41E0
#define CEditWnd__PointFromPrintableChar_x                         0x9A5470
#define CEditWnd__SelectableCharFromPoint_x                        0x9A55D0
#define CEditWnd__SetEditable_x                                    0x9A48B0
#define CEditWnd__SetWindowTextA_x                                 0x9A3F30
#define CEditWnd__ReplaceSelection_x                               0x9A5030
#define CEditWnd__ReplaceSelection1_x                              0x9A4FB0

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62E200
#define CEverQuest__ClickedPlayer_x                                0x61F720
#define CEverQuest__CreateTargetIndicator_x                        0x63FA60
#define CEverQuest__DeleteTargetIndicator_x                        0x63FAF0
#define CEverQuest__DoTellWindow_x                                 0x4EFE60
#define CEverQuest__OutputTextToLog_x                              0x4F0130
#define CEverQuest__DropHeldItemOnGround_x                         0x6147F0
#define CEverQuest__dsp_chat_x                                     0x4F0500
#define CEverQuest__trimName_x                                     0x63B050
#define CEverQuest__Emote_x                                        0x62E8C0
#define CEverQuest__EnterZone_x                                    0x628560
#define CEverQuest__GetBodyTypeDesc_x                              0x633E20
#define CEverQuest__GetClassDesc_x                                 0x634460
#define CEverQuest__GetClassThreeLetterCode_x                      0x634A60
#define CEverQuest__GetDeityDesc_x                                 0x63E210
#define CEverQuest__GetLangDesc_x                                  0x634C20
#define CEverQuest__GetRaceDesc_x                                  0x634440
#define CEverQuest__InterpretCmd_x                                 0x63E880
#define CEverQuest__LeftClickedOnPlayer_x                          0x618CE0
#define CEverQuest__LMouseUp_x                                     0x616DA0
#define CEverQuest__RightClickedOnPlayer_x                         0x6198D0
#define CEverQuest__RMouseUp_x                                     0x618060
#define CEverQuest__SetGameState_x                                 0x614570
#define CEverQuest__UPCNotificationFlush_x                         0x63AF70
#define CEverQuest__IssuePetCommand_x                              0x636220
#define CEverQuest__ReportSuccessfulHit_x                          0x6301A0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x7564B0
#define CGaugeWnd__CalcLinesFillRect_x                             0x756510
#define CGaugeWnd__Draw_x                                          0x755AC0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4990
#define CGuild__GetGuildName_x                                     0x4B31B0
#define CGuild__GetGuildIndex_x                                    0x4B38D0

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x7739E0

//CHotButton
#define CHotButton__SetCheck_x                                     0x6530C0
#define CHotButton__SetButtonSize_x                                0x653480

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x780B10
#define CInvSlotMgr__MoveItem_x                                    0x77F760
#define CInvSlotMgr__SelectSlot_x                                  0x780BD0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77DFA0
#define CInvSlot__SliderComplete_x                                 0x77B2F0
#define CInvSlot__GetItemBase_x                                    0x77AB90
#define CInvSlot__UpdateItem_x                                     0x77AD80

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7819F0
#define CInvSlotWnd__HandleLButtonUp_x                             0x782410

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x855CB0
#define CItemDisplayWnd__UpdateStrings_x                           0x79A1A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78F1F0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78F720
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79A8B0
#define CItemDisplayWnd__AboutToShow_x                             0x799D90
#define CItemDisplayWnd__WndNotification_x                         0x79C020
#define CItemDisplayWnd__RequestConvertItem_x                      0x79B6D0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x798C60
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x799B80

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88B290

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A1790
#define CItemDisplayManager__ShowItem_x                            0x7A0BC0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A82D0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96F0C0
#define CListWnd__dCListWnd_x                                      0x96F3C0
#define CListWnd__AddColumn_x                                      0x973FA0
#define CListWnd__AddColumn1_x                                     0x9740C0
#define CListWnd__AddLine_x                                        0x974430
#define CListWnd__AddString_x                                      0x974230
#define CListWnd__CalculateFirstVisibleLine_x                      0x973D50
#define CListWnd__CalculateVSBRange_x                              0x973B40
#define CListWnd__ClearSel_x                                       0x974D20
#define CListWnd__ClearAllSel_x                                    0x974D70
#define CListWnd__CloseAndUpdateEditWindow_x                       0x975810
#define CListWnd__Compare_x                                        0x9732C0
#define CListWnd__Draw_x                                           0x96F580
#define CListWnd__DrawColumnSeparators_x                           0x9720B0
#define CListWnd__DrawHeader_x                                     0x972510
#define CListWnd__DrawItem_x                                       0x972B60
#define CListWnd__DrawLine_x                                       0x972220
#define CListWnd__DrawSeparator_x                                  0x972150
#define CListWnd__EnableLine_x                                     0x971970
#define CListWnd__EnsureVisible_x                                  0x975740
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x974C60
#define CListWnd__GetColumnTooltip_x                               0x9714F0
#define CListWnd__GetColumnMinWidth_x                              0x971560
#define CListWnd__GetColumnWidth_x                                 0x971470
#define CListWnd__GetCurSel_x                                      0x970E20
#define CListWnd__GetItemAtPoint_x                                 0x971BE0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x971C50
#define CListWnd__GetItemColor_x                                   0x9711A0
#define CListWnd__GetItemData_x                                    0x970EA0
#define CListWnd__GetItemHeight_x                                  0x971240
#define CListWnd__GetItemIcon_x                                    0x971020
#define CListWnd__GetItemRect_x                                    0x971A60
#define CListWnd__GetItemText_x                                    0x970EE0
#define CListWnd__GetSelList_x                                     0x974DC0
#define CListWnd__GetSeparatorRect_x                               0x971EC0
#define CListWnd__InsertLine_x                                     0x974890
#define CListWnd__RemoveLine_x                                     0x974AB0
#define CListWnd__SetColors_x                                      0x973B10
#define CListWnd__SetColumnJustification_x                         0x973840
#define CListWnd__SetColumnLabel_x                                 0x9741D0
#define CListWnd__SetItemOnlyDrawTexture_x                         0x975470
#define CListWnd__SetColumnWidth_x                                 0x973750
#define CListWnd__SetCurSel_x                                      0x974BB0
#define CListWnd__SetItemColor_x                                   0x975400
#define CListWnd__SetItemData_x                                    0x9753C0
#define CListWnd__SetItemText_x                                    0x974FE0
#define CListWnd__ShiftColumnSeparator_x                           0x973900
#define CListWnd__Sort_x                                           0x9735B0
#define CListWnd__ToggleSel_x                                      0x974BE0
#define CListWnd__SetColumnsSizable_x                              0x9739A0
#define CListWnd__SetItemWnd_x                                     0x975280
#define CListWnd__GetItemWnd_x                                     0x971070
#define CListWnd__SetItemIcon_x                                    0x975060
#define CListWnd__CalculateCustomWindowPositions_x                 0x973E50
#define CListWnd__SetVScrollPos_x                                  0x973730

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7BF700
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BDD40
#define CMapViewWnd__HandleLButtonDown_x                           0x7BABD0
#define CMapViewWnd__WndNotification_x                             0x7C2030

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E2D20
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E3680
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E3D10
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E6FD0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E17B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7ED1D0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E2980

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F6E40
#define CPacketScrambler__hton_x                                   0x8F6E30

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x992CF0
#define CSidlManager__FindScreenPieceTemplate_x                    0x9930C0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x992EF0
#define CSidlManager__CreateXWndFromTemplate_x                     0x996570
#define CSidlManager__CreateXWndFromTemplate1_x                    0x996800
#define CSidlManagerbase__CreateXWnd_x                             0x996840

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84BDF0
#define CSidlManager__CreateLabel_x                                0x84B9B0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84B420

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98EA20
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98E930
#define CSidlScreenWnd__ConvertToRes_x                             0x9BC5A0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98E2B0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98DFA0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98E070
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98E140
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98F2C0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98F7A0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98F4B0
#define CSidlScreenWnd__Init1_x                                    0x98DA50
#define CSidlScreenWnd__LoadIniInfo_x                              0x98F7F0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x9903E0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98CE50
#define CSidlScreenWnd__StoreIniInfo_x                             0x98FF50
#define CSidlScreenWnd__StoreIniVis_x                              0x9902D0
#define CSidlScreenWnd__WndNotification_x                          0x98F190
#define CSidlScreenWnd__GetChildItem_x                             0x98F720
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97DCE0
#define CSidlScreenWnd__m_layoutCopy_x                             0x161E4C0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C11F0
#define CSkillMgr__GetSkillCap_x                                   0x6C13C0
#define CSkillMgr__GetNameToken_x                                  0x6C0A00
#define CSkillMgr__IsActivatedSkill_x                              0x6C0AF0
#define CSkillMgr__IsCombatSkill_x                                 0x6C0A60

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A16F0
#define CSliderWnd__SetValue_x                                     0x9A1520
#define CSliderWnd__SetNumTicks_x                                  0x9A1580

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x852680

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AABE0
#define CStmlWnd__ParseSTML_x                                      0x9ABDD0
#define CStmlWnd__CalculateHSBRange_x                              0x9ABB90
#define CStmlWnd__CalculateVSBRange_x                              0x9ABB10
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B0A00
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B16A0
#define CStmlWnd__ForceParseNow_x                                  0x9AB1A0
#define CStmlWnd__GetNextTagPiece_x                                0x9B0960
#define CStmlWnd__GetVisibleText_x                                 0x9AB1C0
#define CStmlWnd__InitializeWindowVariables_x                      0x9B14F0
#define CStmlWnd__MakeStmlColorTag_x                               0x9AA280
#define CStmlWnd__MakeWndNotificationTag_x                         0x9AA2F0
#define CStmlWnd__SetSTMLText_x                                    0x9A9060
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B28C0
#define CStmlWnd__UpdateHistoryString_x                            0x9B18A0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A7F10
#define CTabWnd__DrawCurrentPage_x                                 0x9A88A0
#define CTabWnd__DrawTab_x                                         0x9A8490
#define CTabWnd__GetCurrentPage_x                                  0x9A7670
#define CTabWnd__GetPageInnerRect_x                                0x9A78A0
#define CTabWnd__GetTabInnerRect_x                                 0x9A77E0
#define CTabWnd__GetTabRect_x                                      0x9A76A0
#define CTabWnd__InsertPage_x                                      0x9A7A90
#define CTabWnd__RemovePage_x                                      0x9A7BE0
#define CTabWnd__SetPage_x                                         0x9A7920
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A7E10
#define CTabWnd__UpdatePage_x                                      0x9A8280
#define CTabWnd__GetPageFromTabIndex_x                             0x9A83D0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A7660

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x9A7000
#define CPageWnd__FlashTab_x                                       0x9A7060

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACA00

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x97A190
#define CTextureFont__GetTextExtent_x                              0x97A490

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B9050

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x964B70

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x541730
#define CXStr__CXStr1_x                                            0x482730
#define CXStr__CXStr3_x                                            0x94B870
#define CXStr__dCXStr_x                                            0x478F40
#define CXStr__operator_equal_x                                    0x94BAB0
#define CXStr__operator_equal1_x                                   0x94BAF0
#define CXStr__operator_plus_equal1_x                              0x94C550
#define CXStr__SetString_x                                         0x94E3F0
#define CXStr__operator_char_p_x                                   0x94BFA0
#define CXStr__GetChar_x                                           0x94DD50
#define CXStr__Delete_x                                            0x94D620
#define CXStr__GetUnicode_x                                        0x94DDC0
#define CXStr__Insert_x                                            0x94DE20
#define CXStr__FindNext_x                                          0x94DA70
#define CXStr__Copy_x                                              0x94D430

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99F6D0
#define CXWnd__BringToTop_x                                        0x981760
#define CXWnd__ClrFocus_x                                          0x9810F0
#define CXWnd__Destroy_x                                           0x981190
#define CXWnd__DoAllDrawing_x                                      0x97D350
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97D320
#define CXWnd__DrawColoredRect_x                                   0x97D8E0
#define CXWnd__DrawTooltip_x                                       0x97B870
#define CXWnd__DrawTooltipAtPoint_x                                0x97B930
#define CXWnd__GetBorderFrame_x                                    0x97D580
#define CXWnd__GetChildWndAt_x                                     0x981800
#define CXWnd__GetClientClipRect_x                                 0x97F8F0
#define CXWnd__GetScreenClipRect_x                                 0x97F9C0
#define CXWnd__GetScreenRect_x                                     0x97FB90
#define CXWnd__GetRelativeRect_x                                   0x97FC50
#define CXWnd__GetTooltipRect_x                                    0x97D930
#define CXWnd__GetWindowTextA_x                                    0x4EFD00
#define CXWnd__IsActive_x                                          0x97E050
#define CXWnd__IsDescendantOf_x                                    0x980610
#define CXWnd__IsReallyVisible_x                                   0x980640
#define CXWnd__IsType_x                                            0x981F70
#define CXWnd__Move_x                                              0x9806B0
#define CXWnd__Move1_x                                             0x9807B0
#define CXWnd__ProcessTransition_x                                 0x981270
#define CXWnd__Refade_x                                            0x980A80
#define CXWnd__Resize_x                                            0x980D20
#define CXWnd__Right_x                                             0x981550
#define CXWnd__SetFocus_x                                          0x9810B0
#define CXWnd__SetFont_x                                           0x981120
#define CXWnd__SetKeyTooltip_x                                     0x981D40
#define CXWnd__SetMouseOver_x                                      0x97E9B0
#define CXWnd__StartFade_x                                         0x9804F0
#define CXWnd__GetChildItem_x                                      0x981980
#define CXWnd__SetParent_x                                         0x980320
#define CXWnd__Minimize_x                                          0x980D90

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BD5F0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x9847F0
#define CXWndManager__DrawWindows_x                                0x984940
#define CXWndManager__GetKeyboardFlags_x                           0x9871E0
#define CXWndManager__HandleKeyboardMsg_x                          0x986DC0
#define CXWndManager__RemoveWnd_x                                  0x9874B0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x987970

// CDBStr
#define CDBStr__GetString_x                                        0x5585F0

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5C60
#define EQ_Character__Cur_HP_x                                     0x4D9BA0
#define EQ_Character__Cur_Mana_x                                   0x4E0DE0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9280
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8790
#define EQ_Character__GetFocusRangeModifier_x                      0x4B88E0
#define EQ_Character__GetHPRegen_x                                 0x4E68B0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6E70
#define EQ_Character__GetManaRegen_x                               0x4E72B0
#define EQ_Character__Max_Endurance_x                              0x681950
#define EQ_Character__Max_HP_x                                     0x4D99D0
#define EQ_Character__Max_Mana_x                                   0x681730
#define EQ_Character__doCombatAbility_x                            0x6844C0
#define EQ_Character__UseSkill_x                                   0x4E8480
#define EQ_Character__GetConLevel_x                                0x679A80
#define EQ_Character__IsExpansionFlag_x                            0x5D2D90
#define EQ_Character__TotalEffect_x                                0x4CD780
#define EQ_Character__GetPCSpellAffect_x                           0x4CA0B0
#define EQ_Character__SpellDuration_x                              0x4C9AF0
#define EQ_Character__MySpellDuration_x                            0x4B6E60
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD10
#define EQ_Character__GetBaseSkill_x                               0x4DDCB0
#define EQ_Character__CanUseItem_x                                 0x4E1110
#define EQ_Character__CanMedOnHorse_x                              0x4E7FC0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9178E0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699D20

//PcClient
#define PcClient__vftable_x                                        0xB4EF04
#define PcClient__PcClient_x                                       0x676CF0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0240
#define CCharacterListWnd__EnterWorld_x                            0x4BFC10
#define CCharacterListWnd__Quit_x                                  0x4BF930
#define CCharacterListWnd__UpdateList_x                            0x4BFE00

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x6591F0
#define EQ_Item__CreateItemTagString_x                             0x8EFC30
#define EQ_Item__IsStackable_x                                     0x8F4DD0
#define EQ_Item__GetImageNum_x                                     0x8F1900
#define EQ_Item__CreateItemClient_x                                0x658190
#define EQ_Item__GetItemValue_x                                    0x8F2B60
#define EQ_Item__ValueSellMerchant_x                               0x8F6B00
#define EQ_Item__IsKeyRingItem_x                                   0x8F45A0
#define EQ_Item__CanGoInBag_x                                      0x659310
#define EQ_Item__IsEmpty_x                                         0x8F3F70
#define EQ_Item__GetMaxItemCount_x                                 0x8F2F60
#define EQ_Item__GetHeldItem_x                                     0x8F17C0
#define EQ_Item__CanGemFitInSlot_x                                 0x8EF440

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x5795D0
#define EQ_LoadingS__Array_x                                       0xD9AD30

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x682680
#define EQ_PC__GetAlternateAbilityId_x                             0x900CF0
#define EQ_PC__GetCombatAbility_x                                  0x901270
#define EQ_PC__GetCombatAbilityTimer_x                             0x9012E0
#define EQ_PC__GetItemRecastTimer_x                                0x684AC0
#define EQ_PC__HasLoreItem_x                                       0x67A3D0
#define EQ_PC__AlertInventoryChanged_x                             0x679330
#define EQ_PC__GetPcZoneClient_x                                   0x6AA420
#define EQ_PC__RemoveMyAffect_x                                    0x688320
#define EQ_PC__GetKeyRingItems_x                                   0x901DD0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x901930
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x901FB0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D9120
#define EQItemList__add_object_x                                   0x6096E0
#define EQItemList__add_item_x                                     0x5D9700
#define EQItemList__delete_item_x                                  0x5D9750
#define EQItemList__FreeItemList_x                                 0x5D9660

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554680

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B750
#define EQPlayer__dEQPlayer_x                                      0x68DE80
#define EQPlayer__DoAttack_x                                       0x6A4150
#define EQPlayer__EQPlayer_x                                       0x68E6D0
#define EQPlayer__SetNameSpriteState_x                             0x692C90
#define EQPlayer__SetNameSpriteTint_x                              0x693B60
#define PlayerBase__HasProperty_j_x                                0x9ECF60
#define EQPlayer__IsTargetable_x                                   0x9ED4C0
#define EQPlayer__CanSee_x                                         0x9ED2B0
#define EQPlayer__CanSee1_x                                        0x9ED380
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ED020

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7F10
#define PlayerZoneClient__GetLevel_x                               0x6AA460
#define PlayerZoneClient__IsValidTeleport_x                        0x60AB90
#define PlayerZoneClient__LegalPlayerRace_x                        0x571560

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E900
#define EQPlayerManager__GetSpawnByName_x                          0x69E9B0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69EA40

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65CB30
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65CC00
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65CC40
#define KeypressHandler__ClearCommandStateArray_x                  0x65E100
#define KeypressHandler__HandleKeyDown_x                           0x65E120
#define KeypressHandler__HandleKeyUp_x                             0x65E1C0
#define KeypressHandler__SaveKeymapping_x                          0x65E770

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BB3D0
#define MapViewMap__SaveEx_x                                       0x7BE90F
#define MapViewMap__SetZoom_x                                      0x7C45F0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x915770

// StringTable 
#define StringTable__getString_x                                   0x9104C0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687F70
#define PcZoneClient__RemovePetEffect_x                            0x6885D0
#define PcZoneClient__HasAlternateAbility_x                        0x681590
#define PcZoneClient__GetCurrentMod_x                              0x4EBE40
#define PcZoneClient__GetModCap_x                                  0x4EBD40
#define PcZoneClient__CanEquipItem_x                               0x681C50
#define PcZoneClient__GetItemByID_x                                0x684FF0
#define PcZoneClient__RemoveBuffEffect_x                           0x688680
#define PcZoneClient__BandolierSwap_x                              0x682C30
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x684A60

//Doors
#define EQSwitch__UseSwitch_x                                      0x60F7B0

//IconCache
#define IconCache__GetIcon_x                                       0x74AEB0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7419D0
#define CContainerMgr__CloseContainer_x                            0x741CF0
#define CContainerMgr__OpenExperimentContainer_x                   0x742850

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81AC10

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651860

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B0640
#define CLootWnd__RequestLootSlot_x                                0x7AF860

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A37F0
#define EQ_Spell__SpellAffects_x                                   0x5A3D00
#define EQ_Spell__SpellAffectBase_x                                0x5A3A20
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1190
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1140
#define EQ_Spell__IsSPAStacking_x                                  0x5A4C80
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A3F10
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4CB0
#define EQ_Spell__IsLullSpell_x                                    0x5A43E0
#define __IsResEffectSpell_x                                       0x4D0940

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1740

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x920250
#define EQ_Affect__SetAffectData_x                                 0x920820

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x867A30
#define CTargetWnd__WndNotification_x                              0x8671D0
#define CTargetWnd__RefreshTargetBuffs_x                           0x867530
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x865FB0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86C5B0
#define CTaskWnd__ConfirmAbandonTask_x                             0x86F680

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552250
#define CTaskManager__HandleMessage_x                              0x550120
#define CTaskManager__GetTaskStatus_x                              0x552300
#define CTaskManager__GetElementDescription_x                      0x552380

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E400
#define EqSoundManager__PlayScriptMp3_x                            0x59E600
#define EqSoundManager__SoundAssistPlay_x                          0x6C5660
#define EqSoundManager__WaveInstancePlay_x                         0x6C4B50

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5413E0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A6480
#define CTextureAnimation__Draw_x                                  0x9A66C0
#define CTextureAnimation__AddBlankFrame_x                         0x9A62A0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A21D0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581BC0
#define CAltAbilityData__GetMercMaxRank_x                          0x581B50
#define CAltAbilityData__GetMaxRank_x                              0x575F20

//CTargetRing
#define CTargetRing__Cast_x                                        0x64F070

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657FE0
#define CharacterBase__CreateItemGlobalIndex_x                     0x6457B0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x77F5E0
#define CharacterBase__GetItemByGlobalIndex_x                      0x927DC0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x927E10
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726850
#define CCastSpellWnd__IsBardSongPlaying_x                         0x727110
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x7271C0

//messages
#define msg_spell_worn_off_x                                       0x5CA610
#define msg_new_text_x                                             0x5BE080
#define __msgTokenTextParam_x                                      0x5CCA70
#define msgTokenText_x                                             0x5CCE80

//SpellManager
#define SpellManager__vftable_x                                    0xB39520
#define SpellManager__SpellManager_x                               0x6C9280
#define Spellmanager__LoadTextSpells_x                             0x6C9B90
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C9450

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F17D0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x7817E0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D11B0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x671BD0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D2F50

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x920CD0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x921020

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A8750

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746760
#define CCursorAttachment__AttachToCursor1_x                       0x7467A0
#define CCursorAttachment__Deactivate_x                            0x747D30

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x997DC0
#define CSidlManagerBase__CreatePageWnd_x                          0x9975A0
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x992A70
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x992A00

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B7C20
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B78A0

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5221C0
#define CFindItemWnd__WndNotification_x                            0x523090
#define CFindItemWnd__Update_x                                     0x523CE0
#define CFindItemWnd__PickupSelectedItem_x                         0x521860

//IString
#define IString__Append_x                                          0x558070

//Camera
#define CDisplay__cameraType_x                                     0xEDEE58
#define EverQuest__Cameras_x                                       0xDAE07C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CEB0
#define LootFiltersManager__GetItemFilterData_x                    0x52C7E0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C810
#define LootFiltersManager__SetItemLootFilter_x                    0x52CA20

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8075F0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F74A0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BFB00

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73E350

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92BA80
#define CDistillerInfo__Instance_x                                 0x92B9C0

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x761100
#define CGroupWnd__UpdateDisplay_x                                 0x760350

//ItemBase
#define ItemBase__IsLore_x                                         0x8F4640
#define ItemBase__IsLoreEquipped_x                                 0x8F46B0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x609640
#define EQPlacedItemManager__GetItemByGuid_x                       0x609780
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x6097E0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4270
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8B30

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517BD0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502830
#define FactionManagerClient__HandleFactionMessage_x               0x503050
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503870
#define FactionManagerClient__GetMaxFaction_x                      0x50388F
#define FactionManagerClient__GetMinFaction_x                      0x503840

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F4F0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x978E20

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E410

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F760

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580DA0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CD210

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4270

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC7C0

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D9600

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4B710

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA8F0
#define CAAWnd__UpdateSelected_x                                   0x6E6F90
#define CAAWnd__Update_x                                           0x6E9C20

//CXRect
#define CXRect__operator_and_x                                     0x756570

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D220

//
#define __eq_delete_x                                              0x9F7A83
#define __eq_new_x                                                 0x9F7FF4

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
