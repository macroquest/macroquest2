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
#define __ExpectedVersionDate                                     "Nov 30 2021"
#define __ExpectedVersionTime                                     "11:27:46"
#define __ActualVersionDate_x                                      0xB516A4
#define __ActualVersionTime_x                                      0xB51698
#define __ActualVersionBuild_x                                     0xB4187C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x662CA0
#define __MemChecker1_x                                            0x94F690
#define __MemChecker2_x                                            0x6DD760
#define __MemChecker3_x                                            0x6DD6D0
#define __MemChecker4_x                                            0x8A2560
#define __EncryptPad0_x                                            0xE51BF0
#define __EncryptPad1_x                                            0xEAC418
#define __EncryptPad2_x                                            0xE60E18
#define __EncryptPad3_x                                            0xE60A18
#define __EncryptPad4_x                                            0xE9D220
#define __EP1_Data_x                                               0x37E074

// Direct Input
#define DI8__Main_x                                                0xF9FD84
#define DI8__Keyboard_x                                            0xF9FD88
#define DI8__Mouse_x                                               0xF9FCE4
#define DI8__Mouse_Copy_x                                          0xDACE34
#define DI8__Mouse_Check_x                                         0xF9D844
#define __AutoSkillArray_x                                         0xDAD950
#define __Attack_x                                                 0xE4B773
#define __Autofire_x                                               0xE4B774
#define __BindList_x                                               0xDA24E8
#define g_eqCommandStates_x                                        0xDA3250
#define __Clicks_x                                                 0xDACEEC
#define __CommandList_x                                            0xDA3DD8
#define __CurrentMapLabel_x                                        0xFB08E4
#define __CurrentSocial_x                                          0xC5D460
#define __DoAbilityList_x                                          0xDE3294
#define __do_loot_x                                                0x5E0030
#define __DrawHandler_x                                            0x16221E0
#define __GroupCount_x                                             0xF92E7A
#define __Guilds_x                                                 0xF972E0
#define __gWorld_x                                                 0xF9308C
#define __HWnd_x                                                   0xF9FCE8
#define __heqmain_x                                                0xF9FCD8
#define __InChatMode_x                                             0xDACE1C
#define __LastTell_x                                               0xDAE990
#define __LMouseHeldTime_x                                         0xDACF58
#define __Mouse_x                                                  0xF9FD70
#define __MouseLook_x                                              0xDACEB2
#define __MouseEventTime_x                                         0xF98D0C
#define __gpbCommandEvent_x                                        0xF93198
#define __NetStatusToggle_x                                        0xDACEB5
#define __PCNames_x                                                0xDADF40
#define __RangeAttackReady_x                                       0xDADC34
#define __RMouseHeldTime_x                                         0xDACF54
#define __RunWalkState_x                                           0xDACE20
#define __ScreenMode_x                                             0xEDF184
#define __ScreenX_x                                                0xDACDD4
#define __ScreenY_x                                                0xDACDD0
#define __ScreenXMax_x                                             0xDACDD8
#define __ScreenYMax_x                                             0xDACDDC
#define __ServerHost_x                                             0xF93363
#define __ServerName_x                                             0xDE3254
#define __ShiftKeyDown_x                                           0xDAD4B0
#define __ShowNames_x                                              0xDADDF0
#define EverQuestInfo__bSocialChanged_x                            0xDE32DC
#define __Socials_x                                                0xDE3354
#define __SubscriptionType_x                                       0xFE7538
#define __TargetAggroHolder_x                                      0xFB3298
#define __ZoneType_x                                               0xDAD2B0
#define __GroupAggro_x                                             0xFB32D8
#define __LoginName_x                                              0xFA0454
#define __Inviter_x                                                0xE4B6F0
#define __AttackOnAssist_x                                         0xDADDAC
#define __UseTellWindows_x                                         0xDAE0D8
#define __gfMaxZoomCameraDistance_x                                0xB4951C
#define __gfMaxCameraDistance_x                                    0xB71EE0
#define __pulAutoRun_x                                             0xDACED0
#define __pulForward_x                                             0xDAE110
#define __pulBackward_x                                            0xDAE114
#define __pulTurnRight_x                                           0xDAE118
#define __pulTurnLeft_x                                            0xDAE11C
#define __pulStrafeLeft_x                                          0xDAE120
#define __pulStrafeRight_x                                         0xDAE124

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF93678
#define instEQZoneInfo_x                                           0xDAD0A8
#define pinstActiveBanker_x                                        0xF90D78
#define pinstActiveCorpse_x                                        0xF90D70
#define pinstActiveGMaster_x                                       0xF90D74
#define pinstActiveMerchant_x                                      0xF90D6C
#define pinstAltAdvManager_x                                       0xEDFF88
#define pinstBandageTarget_x                                       0xF90D88
#define pinstCamActor_x                                            0xEDF178
#define pinstCDBStr_x                                              0xEDECF8
#define pinstCDisplay_x                                            0xF90DF4
#define pinstCEverQuest_x                                          0xF9FCEC
#define pinstEverQuestInfo_x                                       0xDACDC8
#define pinstCharData_x                                            0xF90DE4
#define pinstCharSpawn_x                                           0xF90DC0
#define pinstControlledMissile_x                                   0xF90DCC
#define pinstControlledPlayer_x                                    0xF90DC0
#define pinstCResolutionHandler_x                                  0x1622408
#define pinstCSidlManager_x                                        0x16213A4
#define pinstCXWndManager_x                                        0x162139C
#define instDynamicZone_x                                          0xF971B8
#define pinstDZMember_x                                            0xF972C8
#define pinstDZTimerInfo_x                                         0xF972CC
#define pinstEqLogin_x                                             0xF9FDA0
#define instEQMisc_x                                               0xD968D8
#define pinstEQSoundManager_x                                      0xEE0898
#define pinstEQSpellStrings_x                                      0xECF998
#define instExpeditionLeader_x                                     0xF97202
#define instExpeditionName_x                                       0xF97242
#define pinstGroup_x                                               0xF92E76
#define pinstImeManager_x                                          0x16213A0
#define pinstLocalPlayer_x                                         0xF90D68
#define pinstMercenaryData_x                                       0xF9A7FC
#define pinstMercenaryStats_x                                      0xFB3364
#define pinstModelPlayer_x                                         0xF90D80
#define pinstPCData_x                                              0xF90DE4
#define pinstSkillMgr_x                                            0xF9C8F0
#define pinstSpawnManager_x                                        0xF9B3C8
#define pinstSpellManager_x                                        0xF9CB30
#define pinstSpellSets_x                                           0xE4439C
#define pinstStringTable_x                                         0xF90DF0
#define pinstSwitchManager_x                                       0xF90C18
#define pinstTarget_x                                              0xF90DBC
#define pinstTargetObject_x                                        0xF90DDC
#define pinstTargetSwitch_x                                        0xF90DE0
#define pinstTaskMember_x                                          0xD96420
#define pinstTrackTarget_x                                         0xF90DC4
#define pinstTradeTarget_x                                         0xF90D7C
#define instTributeActive_x                                        0xD968F9
#define pinstViewActor_x                                           0xEDF174
#define pinstWorldData_x                                           0xF90DEC
#define pinstZoneAddr_x                                            0xDAD348
#define pinstPlayerPath_x                                          0xF9B460
#define pinstTargetIndicator_x                                     0xF9CD98
#define EQObject_Top_x                                             0xF90DD8

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEDEDAC
#define pinstCAchievementsWnd_x                                    0xEDEE54
#define pinstCActionsWnd_x                                         0xEDF16C
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDF194
#define pinstCAdvancedLootWnd_x                                    0xEDF170
#define pinstCAdventureLeaderboardWnd_x                            0xFAA108
#define pinstCAdventureRequestWnd_x                                0xFAA1B8
#define pinstCAdventureStatsWnd_x                                  0xFAA268
#define pinstCAggroMeterWnd_x                                      0xEDEEE4
#define pinstCAlarmWnd_x                                           0xEDEDA4
#define pinstCAlertHistoryWnd_x                                    0xEDF150
#define pinstCAlertStackWnd_x                                      0xEDF130
#define pinstCAlertWnd_x                                           0xEDF138
#define pinstCAltStorageWnd_x                                      0xFAA5C8
#define pinstCAudioTriggersWindow_x                                0xEC1CC8
#define pinstCAuraWnd_x                                            0xEDF1B4
#define pinstCAvaZoneWnd_x                                         0xEDEE3C
#define pinstCBandolierWnd_x                                       0xEDF1C4
#define pinstCBankWnd_x                                            0xEDF154
#define pinstCBarterMerchantWnd_x                                  0xFAB808
#define pinstCBarterSearchWnd_x                                    0xFAB8B8
#define pinstCBarterWnd_x                                          0xFAB968
#define pinstCBazaarConfirmationWnd_x                              0xEDEDB8
#define pinstCBazaarSearchWnd_x                                    0xEDEE80
#define pinstCBazaarWnd_x                                          0xEDEE28
#define pinstCBlockedBuffWnd_x                                     0xEDEEAC
#define pinstCBlockedPetBuffWnd_x                                  0xEDEEB4
#define pinstCBodyTintWnd_x                                        0xEDEDD8
#define pinstCBookWnd_x                                            0xEDF15C
#define pinstCBreathWnd_x                                          0xEDEDB0
#define pinstCBuffWindowNORMAL_x                                   0xEDEEA4
#define pinstCBuffWindowSHORT_x                                    0xEDEEA8
#define pinstCBugReportWnd_x                                       0xEDEE60
#define pinstCButtonWnd_x                                          0x1621608
#define pinstCCastingWnd_x                                         0xEDEEE0
#define pinstCCastSpellWnd_x                                       0xEDEEF0
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEDEE84
#define pinstCChatWindowManager_x                                  0xFAC410
#define pinstCClaimWnd_x                                           0xFAC568
#define pinstCColorPickerWnd_x                                     0xEDEE98
#define pinstCCombatAbilityWnd_x                                   0xEDF1A8
#define pinstCCombatSkillsSelectWnd_x                              0xEDF1A4
#define pinstCCompassWnd_x                                         0xEDF1B8
#define pinstCConfirmationDialog_x                                 0xFB1430
#define pinstCContainerMgr_x                                       0xEDEDA8
#define pinstCContextMenuManager_x                                 0x1621358
#define pinstCCursorAttachment_x                                   0xEDEED8
#define pinstCDynamicZoneWnd_x                                     0xFACB30
#define pinstCEditLabelWnd_x                                       0xEDEE44
#define pinstCEQMainWnd_x                                          0xFACD78
#define pinstCEventCalendarWnd_x                                   0xEDED9C
#define pinstCExtendedTargetWnd_x                                  0xEDEEDC
#define pinstCPlayerCustomizationWnd_x                             0xEDEE8C
#define pinstCFactionWnd_x                                         0xEDEEEC
#define pinstCFellowshipWnd_x                                      0xFACF78
#define pinstCFileSelectionWnd_x                                   0xEDF1B0
#define pinstCFindItemWnd_x                                        0xEDEDE0
#define pinstCFindLocationWnd_x                                    0xFAD0D0
#define pinstCFriendsWnd_x                                         0xEDF1AC
#define pinstCGemsGameWnd_x                                        0xEDED98
#define pinstCGiveWnd_x                                            0xEDEE34
#define pinstCGroupSearchFiltersWnd_x                              0xEDEEC4
#define pinstCGroupSearchWnd_x                                     0xFAD4C8
#define pinstCGroupWnd_x                                           0xFAD578
#define pinstCGuildBankWnd_x                                       0xFAD628
#define pinstCGuildCreationWnd_x                                   0xFAD6D8
#define pinstCGuildMgmtWnd_x                                       0xFAD788
#define pinstCharacterCreation_x                                   0xEDEED4
#define pinstCHelpWnd_x                                            0xEDF13C
#define pinstCHeritageSelectionWnd_x                               0xEDEE90
#define pinstCHotButtonWnd_x                                       0xFAF8E0
#define pinstCHotButtonWnd1_x                                      0xFAF8E0
#define pinstCHotButtonWnd2_x                                      0xFAF8E4
#define pinstCHotButtonWnd3_x                                      0xFAF8E8
#define pinstCHotButtonWnd4_x                                      0xFAF8EC
#define pinstCIconSelectionWnd_x                                   0xEDEE5C
#define pinstCInspectWnd_x                                         0xEDEE50
#define pinstCInventoryWnd_x                                       0xEDF140
#define pinstCInvSlotMgr_x                                         0xEDF1C8
#define pinstCItemDisplayManager_x                                 0xFAFE38
#define pinstCItemExpTransferWnd_x                                 0xFAFF68
#define pinstCItemOverflowWnd_x                                    0xEDEE14
#define pinstCJournalCatWnd_x                                      0xEDEDC8
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEDEDBC
#define pinstCJournalTextWnd_x                                     0xEDEDBC
#define pinstCKeyRingWnd_x                                         0xEDF148
#define pinstCLargeDialogWnd_x                                     0xFB20B0
#define pinstCLayoutCopyWnd_x                                      0xFB02B8
#define pinstCLFGuildWnd_x                                         0xFB0368
#define pinstCLoadskinWnd_x                                        0xEDEDA0
#define pinstCLootFiltersCopyWnd_x                                 0xEDE208
#define pinstCLootFiltersWnd_x                                     0xEDEDC0
#define pinstCLootSettingsWnd_x                                    0xEDEDC4
#define pinstCLootWnd_x                                            0xEDF160
#define pinstCMailAddressBookWnd_x                                 0xEDEE74
#define pinstCMailCompositionWnd_x                                 0xEDEE6C
#define pinstCMailIgnoreListWnd_x                                  0xEDEE78
#define pinstCMailWnd_x                                            0xEDEE64
#define pinstCManageLootWnd_x                                      0xEE0408
#define pinstCMapToolbarWnd_x                                      0xEDEE38
#define pinstCMapViewWnd_x                                         0xEDEE2C
#define pinstCMarketplaceWnd_x                                     0xEDEE08
#define pinstCMerchantWnd_x                                        0xEDEE0C
#define pinstCMIZoneSelectWnd_x                                    0xFB0BA0
#define pinstCMusicPlayerWnd_x                                     0xEDF1CC
#define pinstCNameChangeMercWnd_x                                  0xEDEF10
#define pinstCNameChangePetWnd_x                                   0xEDEF00
#define pinstCNameChangeWnd_x                                      0xEDEE68
#define pinstCNoteWnd_x                                            0xEDF134
#define pinstCObjectPreviewWnd_x                                   0xEDEE7C
#define pinstCOptionsWnd_x                                         0xEDEE9C
#define pinstCOverseerWnd_x                                        0xEDEE04
#define pinstCPetInfoWnd_x                                         0xEDF164
#define pinstCPetitionQWnd_x                                       0xEDEEB8
#define pinstCPlayerNotesWnd_x                                     0xEDF1BC
#define pinstCPlayerWnd_x                                          0xEDEDDC
#define pinstCPopupWndManager_x                                    0xFB1430
#define pinstCProgressionSelectionWnd_x                            0xFB14E0
#define pinstCPurchaseGroupWnd_x                                   0xEDEE18
#define pinstCPurchaseWnd_x                                        0xEDEE10
#define pinstCPvPLeaderboardWnd_x                                  0xFB1590
#define pinstCPvPStatsWnd_x                                        0xFB1640
#define pinstCQuantityWnd_x                                        0xEDF158
#define pinstCRaceChangeWnd_x                                      0xEDEE70
#define pinstCRaidOptionsWnd_x                                     0xEDEEE8
#define pinstCRaidWnd_x                                            0xEDEEF4
#define pinstCRealEstateItemsWnd_x                                 0xEDEE94
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDEED0
#define pinstCRealEstateManageWnd_x                                0xEDEEBC
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDEEC0
#define pinstCRealEstatePlotSearchWnd_x                            0xEDEEC8
#define pinstCRealEstatePurchaseWnd_x                              0xEDEECC
#define pinstCRespawnWnd_x                                         0xEDF1C0
#define pinstCRewardSelectionWnd_x                                 0xFB1D88
#define pinstCSelectorWnd_x                                        0xEDEE20
#define pinstCSendMoneyWnd_x                                       0xEDEE40
#define pinstCServerListWnd_x                                      0xEDF1A0
#define pinstCSkillsSelectWnd_x                                    0xEDF19C
#define pinstCSkillsWnd_x                                          0xEDF190
#define pinstCSocialEditWnd_x                                      0xEDEE58
#define pinstCSocialWnd_x                                          0xEDEDB4
#define pinstCSpellBookWnd_x                                       0xEDEF18
#define pinstCStoryWnd_x                                           0xEDEDD0
#define pinstCTargetOfTargetWnd_x                                  0xFB33E8
#define pinstCTargetWnd_x                                          0xEDEE4C
#define pinstCTaskOverlayWnd_x                                     0xEDEDCC
#define pinstCTaskSelectWnd_x                                      0xFB3540
#define pinstCTaskManager_x                                        0xC68268
#define pinstCTaskTemplateSelectWnd_x                              0xFB35F0
#define pinstCTaskWnd_x                                            0xFB36A0
#define pinstCTextEntryWnd_x                                       0xEDF198
#define pinstCTimeLeftWnd_x                                        0xEDEEB0
#define pinstCTipWndCONTEXT_x                                      0xFB38A4
#define pinstCTipWndOFDAY_x                                        0xFB38A0
#define pinstCTitleWnd_x                                           0xFB3950
#define pinstCTrackingWnd_x                                        0xEDEE48
#define pinstCTradeskillWnd_x                                      0xFB3AB8
#define pinstCTradeWnd_x                                           0xEDEE1C
#define pinstCTrainWnd_x                                           0xEDF168
#define pinstCTributeBenefitWnd_x                                  0xFB3CB8
#define pinstCTributeMasterWnd_x                                   0xFB3D68
#define pinstCTributeTrophyWnd_x                                   0xFB3E18
#define pinstCVideoModesWnd_x                                      0xEDEE24
#define pinstCVoiceMacroWnd_x                                      0xF9D1B0
#define pinstCVoteResultsWnd_x                                     0xEDEEFC
#define pinstCVoteWnd_x                                            0xEDEEF8
#define pinstCZoneGuideWnd_x                                       0xEDF144
#define pinstCZonePathWnd_x                                        0xEDF14C

#define pinstEQSuiteTextureLoader_x                                0xEAC9D8
#define pinstItemIconCache_x                                       0xFACD30
#define pinstLootFiltersManager_x                                  0xEDE2B8
#define pinstRewardSelectionWnd_x                                  0xFB1D88

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB310
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB5A0
#define __ConvertItemTags_x                                        0x5F87C0
#define __CleanItemTags_x                                          0x47DA60
#define __DoesFileExist_x                                          0x952620
#define __EQGetTime_x                                              0x94F300
#define __ExecuteCmd_x                                             0x5D3700
#define __FixHeading_x                                             0x9ED520
#define __FlushDxKeyboard_x                                        0x6D8A50
#define __GameLoop_x                                               0x6DC360
#define __get_bearing_x                                            0x5DAEB0
#define __get_melee_range_x                                        0x5DB7E0
#define __GetAnimationCache_x                                      0x74AD10
#define __GetGaugeValueFromEQ_x                                    0x85B180
#define __GetLabelFromEQ_x                                         0x85CB90
#define __GetXTargetType_x                                         0x9EF890
#define __HandleMouseWheel_x                                       0x6DD7F0
#define __HeadingDiff_x                                            0x9ED580
#define __HelpPath_x                                               0xF989CC
#define __ExecuteFrontEnd_x                                        0x6D9230
#define __NewUIINI_x                                               0x85AE60
#define __ProcessGameEvents_x                                      0x641E90
#define __ProcessMouseEvent_x                                      0x641590
#define __SaveColors_x                                             0x56F8D0
#define __STMLToText_x                                             0x98B0B0
#define __ToggleKeyRingItem_x                                      0x528D60
#define CMemoryMappedFile__SetFile_x                               0xADCF70
#define CrashDetected_x                                            0x6DAF60
#define DrawNetStatus_x                                            0x6711F0
#define Expansion_HoT_x                                            0xDADD98
#define Teleport_Table_Size_x                                      0xF93220
#define Teleport_Table_x                                           0xF90DF8
#define Util__FastTime_x                                           0x94EEC0
#define __CopyLayout_x                                             0x65DF60
#define __WndProc_x                                                0x6DB460
#define __ProcessKeyboardEvent_x                                   0x6DA9A0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919A0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B370
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495680
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948B4

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x578970
#define AltAdvManager__IsAbilityReady_x                            0x577550
#define AltAdvManager__GetAAById_x                                 0x5778F0
#define AltAdvManager__CanTrainAbility_x                           0x577960
#define AltAdvManager__CanSeeAbility_x                             0x577D10

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D17E0
#define CharacterZoneClient__HasSkill_x                            0x4DCF70
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE6E0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8B80
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1360
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFBE0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFCE0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE20
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAE50
#define CharacterZoneClient__BardCastBard_x                        0x4CDE90
#define CharacterZoneClient__GetMaxEffects_x                       0x4C52D0
#define CharacterZoneClient__GetEffect_x                           0x4C12A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC460
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC510
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC5B0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC770
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC950
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8B20
#define CharacterZoneClient__FindItemByGuid_x                      0x684440
#define CharacterZoneClient__FindItemByRecord_x                    0x4DECC0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x7066E0
#define CBankWnd__WndNotification_x                                0x706480

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7111C0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70BE10
#define CBarterSearchWnd__UpdateInventoryList_x                    0x709DE0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x7158F0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x988650
#define CButtonWnd__CButtonWnd_x                                   0x986FD0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x738280
#define CChatManager__InitContextMenu_x                            0x7311A0
#define CChatManager__FreeChatWindow_x                             0x736E40
#define CChatManager__SetLockedActiveChatWindow_x                  0x737F60
#define CChatManager__CreateChatWindow_x                           0x737470

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD20

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99E470
#define CContextMenu__dCContextMenu_x                              0x99E6B0
#define CContextMenu__AddMenuItem_x                                0x99E6C0
#define CContextMenu__RemoveMenuItem_x                             0x99E9D0
#define CContextMenu__RemoveAllMenuItems_x                         0x99E9F0
#define CContextMenu__CheckMenuItem_x                              0x99EA50
#define CContextMenu__SetMenuItem_x                                0x99E8F0
#define CContextMenu__AddSeparator_x                               0x99E850

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99EFE0
#define CContextMenuManager__RemoveMenu_x                          0x99F050
#define CContextMenuManager__PopupMenu_x                           0x99F110
#define CContextMenuManager__Flush_x                               0x99EF80
#define CContextMenuManager__GetMenu_x                             0x49D9E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x744B90

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x929D20
#define CChatService__GetFriendName_x                              0x929D30

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x738C00
#define CChatWindow__Clear_x                                       0x73A080
#define CChatWindow__WndNotification_x                             0x73A810
#define CChatWindow__AddHistory_x                                  0x7398C0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99B540
#define CComboWnd__Draw_x                                          0x99A9E0
#define CComboWnd__GetCurChoice_x                                  0x99B310
#define CComboWnd__GetListRect_x                                   0x99AE90
#define CComboWnd__GetTextRect_x                                   0x99B5B0
#define CComboWnd__InsertChoice_x                                  0x99B020
#define CComboWnd__SetColors_x                                     0x99AFF0
#define CComboWnd__SetChoice_x                                     0x99B2F0
#define CComboWnd__GetItemCount_x                                  0x99B320
#define CComboWnd__GetCurChoiceText_x                              0x99B350
#define CComboWnd__GetChoiceText_x                                 0x99B330
#define CComboWnd__InsertChoiceAtIndex_x                           0x99B0B0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x7421E0
#define CContainerWnd__vftable_x                                   0xB5A944
#define CContainerWnd__SetContainer_x                              0x743A40

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56A110
#define CDisplay__PreZoneMainUI_x                                  0x56A120
#define CDisplay__CleanGameUI_x                                    0x56F6B0
#define CDisplay__GetClickedActor_x                                0x561EE0
#define CDisplay__GetUserDefinedColor_x                            0x559C60
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5639F0
#define CDisplay__is3dON_x                                         0x55E770
#define CDisplay__ReloadUI_x                                       0x569430
#define CDisplay__WriteTextHD2_x                                   0x55E560
#define CDisplay__TrueDistance_x                                   0x5659D0
#define CDisplay__SetViewActor_x                                   0x561800
#define CDisplay__GetFloorHeight_x                                 0x55E830
#define CDisplay__SetRenderWindow_x                                0x55D1E0
#define CDisplay__ToggleScreenshotMode_x                           0x5612D0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C0D00

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A1FA0
#define CEditWnd__EnsureCaretVisible_x                             0x9A4310
#define CEditWnd__GetCaretPt_x                                     0x9A3180
#define CEditWnd__GetCharIndexPt_x                                 0x9A2F30
#define CEditWnd__GetDisplayString_x                               0x9A2DD0
#define CEditWnd__GetHorzOffset_x                                  0x9A1500
#define CEditWnd__GetLineForPrintableChar_x                        0x9A4220
#define CEditWnd__GetSelStartPt_x                                  0x9A31E0
#define CEditWnd__GetSTMLSafeText_x                                0x9A2BE0
#define CEditWnd__PointFromPrintableChar_x                         0x9A3E70
#define CEditWnd__SelectableCharFromPoint_x                        0x9A3FD0
#define CEditWnd__SetEditable_x                                    0x9A32B0
#define CEditWnd__SetWindowTextA_x                                 0x9A2930
#define CEditWnd__ReplaceSelection_x                               0x9A3A30
#define CEditWnd__ReplaceSelection1_x                              0x9A39B0

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D480
#define CEverQuest__ClickedPlayer_x                                0x61E9A0
#define CEverQuest__CreateTargetIndicator_x                        0x63EDF0
#define CEverQuest__DeleteTargetIndicator_x                        0x63EE80
#define CEverQuest__DoTellWindow_x                                 0x4EFE20
#define CEverQuest__OutputTextToLog_x                              0x4F00F0
#define CEverQuest__DropHeldItemOnGround_x                         0x613A70
#define CEverQuest__dsp_chat_x                                     0x4F04C0
#define CEverQuest__trimName_x                                     0x63A3E0
#define CEverQuest__Emote_x                                        0x62DB40
#define CEverQuest__EnterZone_x                                    0x6277E0
#define CEverQuest__GetBodyTypeDesc_x                              0x6330A0
#define CEverQuest__GetClassDesc_x                                 0x6336E0
#define CEverQuest__GetClassThreeLetterCode_x                      0x633CE0
#define CEverQuest__GetDeityDesc_x                                 0x63D5A0
#define CEverQuest__GetLangDesc_x                                  0x633EA0
#define CEverQuest__GetRaceDesc_x                                  0x6336C0
#define CEverQuest__InterpretCmd_x                                 0x63DC10
#define CEverQuest__LeftClickedOnPlayer_x                          0x617F60
#define CEverQuest__LMouseUp_x                                     0x616020
#define CEverQuest__RightClickedOnPlayer_x                         0x618B50
#define CEverQuest__RMouseUp_x                                     0x6172E0
#define CEverQuest__SetGameState_x                                 0x6137F0
#define CEverQuest__UPCNotificationFlush_x                         0x63A300
#define CEverQuest__IssuePetCommand_x                              0x6354A0
#define CEverQuest__ReportSuccessfulHit_x                          0x62F420

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x755CB0
#define CGaugeWnd__CalcLinesFillRect_x                             0x755D10
#define CGaugeWnd__Draw_x                                          0x7552C0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4950
#define CGuild__GetGuildName_x                                     0x4B3170
#define CGuild__GetGuildIndex_x                                    0x4B3890

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x773160

//CHotButton
#define CHotButton__SetCheck_x                                     0x652460
#define CHotButton__SetButtonSize_x                                0x652820

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x780470
#define CInvSlotMgr__MoveItem_x                                    0x77F070
#define CInvSlotMgr__SelectSlot_x                                  0x780530

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77D880
#define CInvSlot__SliderComplete_x                                 0x77AAC0
#define CInvSlot__GetItemBase_x                                    0x77A350
#define CInvSlot__UpdateItem_x                                     0x77A540

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x781360
#define CInvSlotWnd__HandleLButtonUp_x                             0x781D70

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x855600
#define CItemDisplayWnd__UpdateStrings_x                           0x799BC0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78EB90
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78F0E0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79A2D0
#define CItemDisplayWnd__AboutToShow_x                             0x7997B0
#define CItemDisplayWnd__WndNotification_x                         0x79BA60
#define CItemDisplayWnd__RequestConvertItem_x                      0x79B100
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x798680
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x7995A0

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88AB00

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A11A0
#define CItemDisplayManager__ShowItem_x                            0x7A0610

// CLabel 
#define CLabel__UpdateText_x                                       0x7A7CD0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96D9A0
#define CListWnd__dCListWnd_x                                      0x96DCA0
#define CListWnd__AddColumn_x                                      0x972880
#define CListWnd__AddColumn1_x                                     0x9729A0
#define CListWnd__AddLine_x                                        0x972D10
#define CListWnd__AddString_x                                      0x972B10
#define CListWnd__CalculateFirstVisibleLine_x                      0x972630
#define CListWnd__CalculateVSBRange_x                              0x972410
#define CListWnd__ClearSel_x                                       0x973600
#define CListWnd__ClearAllSel_x                                    0x973650
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9740F0
#define CListWnd__Compare_x                                        0x971BA0
#define CListWnd__Draw_x                                           0x96DE60
#define CListWnd__DrawColumnSeparators_x                           0x970990
#define CListWnd__DrawHeader_x                                     0x970DF0
#define CListWnd__DrawItem_x                                       0x971440
#define CListWnd__DrawLine_x                                       0x970B00
#define CListWnd__DrawSeparator_x                                  0x970A30
#define CListWnd__EnableLine_x                                     0x970250
#define CListWnd__EnsureVisible_x                                  0x974020
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x973540
#define CListWnd__GetColumnTooltip_x                               0x96FDD0
#define CListWnd__GetColumnMinWidth_x                              0x96FE40
#define CListWnd__GetColumnWidth_x                                 0x96FD50
#define CListWnd__GetCurSel_x                                      0x96F6F0
#define CListWnd__GetItemAtPoint_x                                 0x9704C0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x970530
#define CListWnd__GetItemColor_x                                   0x96FA70
#define CListWnd__GetItemData_x                                    0x96F770
#define CListWnd__GetItemHeight_x                                  0x96FB20
#define CListWnd__GetItemIcon_x                                    0x96F8F0
#define CListWnd__GetItemRect_x                                    0x970340
#define CListWnd__GetItemText_x                                    0x96F7B0
#define CListWnd__GetSelList_x                                     0x9736A0
#define CListWnd__GetSeparatorRect_x                               0x9707A0
#define CListWnd__InsertLine_x                                     0x973170
#define CListWnd__RemoveLine_x                                     0x973390
#define CListWnd__SetColors_x                                      0x9723F0
#define CListWnd__SetColumnJustification_x                         0x972120
#define CListWnd__SetColumnLabel_x                                 0x972AB0
#define CListWnd__SetItemOnlyDrawTexture_x                         0x973D50
#define CListWnd__SetColumnWidth_x                                 0x972030
#define CListWnd__SetCurSel_x                                      0x973490
#define CListWnd__SetItemColor_x                                   0x973CE0
#define CListWnd__SetItemData_x                                    0x973CA0
#define CListWnd__SetItemText_x                                    0x9738C0
#define CListWnd__ShiftColumnSeparator_x                           0x9721E0
#define CListWnd__Sort_x                                           0x971E90
#define CListWnd__ToggleSel_x                                      0x9734C0
#define CListWnd__SetColumnsSizable_x                              0x972280
#define CListWnd__SetItemWnd_x                                     0x973B60
#define CListWnd__GetItemWnd_x                                     0x96F940
#define CListWnd__SetItemIcon_x                                    0x973940
#define CListWnd__CalculateCustomWindowPositions_x                 0x972730
#define CListWnd__SetVScrollPos_x                                  0x972010

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7BF120
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BD760
#define CMapViewWnd__HandleLButtonDown_x                           0x7BA5F0
#define CMapViewWnd__WndNotification_x                             0x7C1A50

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E2730
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E3090
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E3710
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E69E0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E11C0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7ECBB0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E2390

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F6810
#define CPacketScrambler__hton_x                                   0x8F6800

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x991720
#define CSidlManager__FindScreenPieceTemplate_x                    0x991AF0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x991920
#define CSidlManager__CreateXWndFromTemplate_x                     0x994FA0
#define CSidlManager__CreateXWndFromTemplate1_x                    0x995230
#define CSidlManagerbase__CreateXWnd_x                             0x995270

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84B760
#define CSidlManager__CreateLabel_x                                0x84B330

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84ADB0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98D440
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98D340
#define CSidlScreenWnd__ConvertToRes_x                             0x9BAF50
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98CCC0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98C9B0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98CA80
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98CB50
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98DCE0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98E1C0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98DED0
#define CSidlScreenWnd__Init1_x                                    0x98C480
#define CSidlScreenWnd__LoadIniInfo_x                              0x98E210
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98EE10
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98B880
#define CSidlScreenWnd__StoreIniInfo_x                             0x98E980
#define CSidlScreenWnd__StoreIniVis_x                              0x98ED00
#define CSidlScreenWnd__WndNotification_x                          0x98DBB0
#define CSidlScreenWnd__GetChildItem_x                             0x98E140
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97C600
#define CSidlScreenWnd__m_layoutCopy_x                             0x1621228

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0560
#define CSkillMgr__GetSkillCap_x                                   0x6C0730
#define CSkillMgr__GetNameToken_x                                  0x6BFD70
#define CSkillMgr__IsActivatedSkill_x                              0x6BFE60
#define CSkillMgr__IsCombatSkill_x                                 0x6BFDD0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A00E0
#define CSliderWnd__SetValue_x                                     0x99FF10
#define CSliderWnd__SetNumTicks_x                                  0x99FF70

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x851FE0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A95E0
#define CStmlWnd__ParseSTML_x                                      0x9AA780
#define CStmlWnd__CalculateHSBRange_x                              0x9AA540
#define CStmlWnd__CalculateVSBRange_x                              0x9AA4C0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AF3B0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B0050
#define CStmlWnd__ForceParseNow_x                                  0x9A9B50
#define CStmlWnd__GetNextTagPiece_x                                0x9AF310
#define CStmlWnd__GetVisibleText_x                                 0x9A9B70
#define CStmlWnd__InitializeWindowVariables_x                      0x9AFEA0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A8C80
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A8CF0
#define CStmlWnd__SetSTMLText_x                                    0x9A7A60
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B1270
#define CStmlWnd__UpdateHistoryString_x                            0x9B0250

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A6910
#define CTabWnd__DrawCurrentPage_x                                 0x9A72A0
#define CTabWnd__DrawTab_x                                         0x9A6E90
#define CTabWnd__GetCurrentPage_x                                  0x9A6070
#define CTabWnd__GetPageInnerRect_x                                0x9A62A0
#define CTabWnd__GetTabInnerRect_x                                 0x9A61E0
#define CTabWnd__GetTabRect_x                                      0x9A60A0
#define CTabWnd__InsertPage_x                                      0x9A6490
#define CTabWnd__RemovePage_x                                      0x9A65E0
#define CTabWnd__SetPage_x                                         0x9A6320
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A6810
#define CTabWnd__UpdatePage_x                                      0x9A6C80
#define CTabWnd__GetPageFromTabIndex_x                             0x9A6DD0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A6060

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x9A5A00
#define CPageWnd__FlashTab_x                                       0x9A5A60

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC9E0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x978A70
#define CTextureFont__GetTextExtent_x                              0x978D70

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B7A00

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x963450

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x541B00
#define CXStr__CXStr1_x                                            0x482730
#define CXStr__CXStr3_x                                            0x94B250
#define CXStr__dCXStr_x                                            0x478F40
#define CXStr__operator_equal_x                                    0x94B490
#define CXStr__operator_equal1_x                                   0x94B4D0
#define CXStr__operator_plus_equal1_x                              0x94BF30
#define CXStr__SetString_x                                         0x94DDD0
#define CXStr__operator_char_p_x                                   0x94B980
#define CXStr__GetChar_x                                           0x94D730
#define CXStr__Delete_x                                            0x94D000
#define CXStr__GetUnicode_x                                        0x94D7A0
#define CXStr__Insert_x                                            0x94D800
#define CXStr__FindNext_x                                          0x94D450
#define CXStr__Copy_x                                              0x94CE10

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99E0D0
#define CXWnd__BringToTop_x                                        0x980060
#define CXWnd__ClrFocus_x                                          0x97F9E0
#define CXWnd__Destroy_x                                           0x97FA90
#define CXWnd__DoAllDrawing_x                                      0x97BC40
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97BC10
#define CXWnd__DrawColoredRect_x                                   0x97C1E0
#define CXWnd__DrawTooltip_x                                       0x97A170
#define CXWnd__DrawTooltipAtPoint_x                                0x97A230
#define CXWnd__GetBorderFrame_x                                    0x97BE80
#define CXWnd__GetChildWndAt_x                                     0x980100
#define CXWnd__GetClientClipRect_x                                 0x97E240
#define CXWnd__GetScreenClipRect_x                                 0x97E310
#define CXWnd__GetScreenRect_x                                     0x97E4B0
#define CXWnd__GetRelativeRect_x                                   0x97E570
#define CXWnd__GetTooltipRect_x                                    0x97C230
#define CXWnd__GetWindowTextA_x                                    0x4EFCC0
#define CXWnd__IsActive_x                                          0x97C980
#define CXWnd__IsDescendantOf_x                                    0x97EF30
#define CXWnd__IsReallyVisible_x                                   0x97EF60
#define CXWnd__IsType_x                                            0x980880
#define CXWnd__Move_x                                              0x97EFD0
#define CXWnd__Move1_x                                             0x97F0D0
#define CXWnd__ProcessTransition_x                                 0x97FB70
#define CXWnd__Refade_x                                            0x97F3A0
#define CXWnd__Resize_x                                            0x97F610
#define CXWnd__Right_x                                             0x97FE50
#define CXWnd__SetFocus_x                                          0x97F9A0
#define CXWnd__SetFont_x                                           0x97FA10
#define CXWnd__SetKeyTooltip_x                                     0x980640
#define CXWnd__SetMouseOver_x                                      0x97D300
#define CXWnd__StartFade_x                                         0x97EE10
#define CXWnd__GetChildItem_x                                      0x980280
#define CXWnd__SetParent_x                                         0x97EC40
#define CXWnd__Minimize_x                                          0x97F680

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BBFA0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x9830F0
#define CXWndManager__DrawWindows_x                                0x983240
#define CXWndManager__GetKeyboardFlags_x                           0x985BE0
#define CXWndManager__HandleKeyboardMsg_x                          0x9857C0
#define CXWndManager__RemoveWnd_x                                  0x985EB0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x986370

// CDBStr
#define CDBStr__GetString_x                                        0x558750

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5C50
#define EQ_Character__Cur_HP_x                                     0x4D9BC0
#define EQ_Character__Cur_Mana_x                                   0x4E0E10
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9270
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8730
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8880
#define EQ_Character__GetHPRegen_x                                 0x4E68E0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6EA0
#define EQ_Character__GetManaRegen_x                               0x4E72E0
#define EQ_Character__Max_Endurance_x                              0x680CF0
#define EQ_Character__Max_HP_x                                     0x4D99F0
#define EQ_Character__Max_Mana_x                                   0x680AD0
#define EQ_Character__doCombatAbility_x                            0x683870
#define EQ_Character__UseSkill_x                                   0x4E84B0
#define EQ_Character__GetConLevel_x                                0x678E50
#define EQ_Character__IsExpansionFlag_x                            0x5D1F20
#define EQ_Character__TotalEffect_x                                0x4CD780
#define EQ_Character__GetPCSpellAffect_x                           0x4CA0A0
#define EQ_Character__SpellDuration_x                              0x4C9AE0
#define EQ_Character__MySpellDuration_x                            0x4B6E00
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD30
#define EQ_Character__GetBaseSkill_x                               0x4DDCD0
#define EQ_Character__CanUseItem_x                                 0x4E1140
#define EQ_Character__CanMedOnHorse_x                              0x4E7FF0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917390

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x6990E0

//PcClient
#define PcClient__vftable_x                                        0xB4E414
#define PcClient__PcClient_x                                       0x6760D0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0230
#define CCharacterListWnd__EnterWorld_x                            0x4BFC00
#define CCharacterListWnd__Quit_x                                  0x4BF920
#define CCharacterListWnd__UpdateList_x                            0x4BFDF0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658620
#define EQ_Item__CreateItemTagString_x                             0x8EF500
#define EQ_Item__IsStackable_x                                     0x8F47A0
#define EQ_Item__GetImageNum_x                                     0x8F1260
#define EQ_Item__CreateItemClient_x                                0x6575C0
#define EQ_Item__GetItemValue_x                                    0x8F24A0
#define EQ_Item__ValueSellMerchant_x                               0x8F6520
#define EQ_Item__IsKeyRingItem_x                                   0x8F3F30
#define EQ_Item__CanGoInBag_x                                      0x658740
#define EQ_Item__IsEmpty_x                                         0x8F3900
#define EQ_Item__GetMaxItemCount_x                                 0x8F28B0
#define EQ_Item__GetHeldItem_x                                     0x8F1110
#define EQ_Item__CanGemFitInSlot_x                                 0x8EECC0

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x579780
#define EQ_LoadingS__Array_x                                       0xD9AD30

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x681A30
#define EQ_PC__GetAlternateAbilityId_x                             0x900670
#define EQ_PC__GetCombatAbility_x                                  0x900BF0
#define EQ_PC__GetCombatAbilityTimer_x                             0x900C60
#define EQ_PC__GetItemRecastTimer_x                                0x683E70
#define EQ_PC__HasLoreItem_x                                       0x6797A0
#define EQ_PC__AlertInventoryChanged_x                             0x678710
#define EQ_PC__GetPcZoneClient_x                                   0x6A97D0
#define EQ_PC__RemoveMyAffect_x                                    0x6876D0
#define EQ_PC__GetKeyRingItems_x                                   0x9017D0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9012B0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x901A20

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D82E0
#define EQItemList__add_object_x                                   0x608950
#define EQItemList__add_item_x                                     0x5D88C0
#define EQItemList__delete_item_x                                  0x5D8910
#define EQItemList__FreeItemList_x                                 0x5D8820

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554AC0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69AB10
#define EQPlayer__dEQPlayer_x                                      0x68D240
#define EQPlayer__DoAttack_x                                       0x6A3500
#define EQPlayer__EQPlayer_x                                       0x68DA90
#define EQPlayer__SetNameSpriteState_x                             0x692050
#define EQPlayer__SetNameSpriteTint_x                              0x692F20
#define PlayerBase__HasProperty_j_x                                0x9EB8E0
#define EQPlayer__IsTargetable_x                                   0x9EBE40
#define EQPlayer__CanSee_x                                         0x9EBC30
#define EQPlayer__CanSee1_x                                        0x9EBD00
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EB9A0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A72C0
#define PlayerZoneClient__GetLevel_x                               0x6A9810
#define PlayerZoneClient__IsValidTeleport_x                        0x609E00
#define PlayerZoneClient__LegalPlayerRace_x                        0x571710

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69DCB0
#define EQPlayerManager__GetSpawnByName_x                          0x69DD60
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69DDF0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65BF20
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65BFF0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C030
#define KeypressHandler__ClearCommandStateArray_x                  0x65D4F0
#define KeypressHandler__HandleKeyDown_x                           0x65D510
#define KeypressHandler__HandleKeyUp_x                             0x65D5B0
#define KeypressHandler__SaveKeymapping_x                          0x65DB60

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BADF0
#define MapViewMap__SaveEx_x                                       0x7BE32F
#define MapViewMap__SetZoom_x                                      0x7C4010

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x915220

// StringTable 
#define StringTable__getString_x                                   0x90FF70

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687320
#define PcZoneClient__RemovePetEffect_x                            0x687980
#define PcZoneClient__HasAlternateAbility_x                        0x680930
#define PcZoneClient__GetCurrentMod_x                              0x4EBE80
#define PcZoneClient__GetModCap_x                                  0x4EBD80
#define PcZoneClient__CanEquipItem_x                               0x681000
#define PcZoneClient__GetItemByID_x                                0x6843A0
#define PcZoneClient__RemoveBuffEffect_x                           0x687A30
#define PcZoneClient__BandolierSwap_x                              0x681FE0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x683E10

//Doors
#define EQSwitch__UseSwitch_x                                      0x60EA20

//IconCache
#define IconCache__GetIcon_x                                       0x74A6B0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7410B0
#define CContainerMgr__CloseContainer_x                            0x7413D0
#define CContainerMgr__OpenExperimentContainer_x                   0x741F30

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81A680

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650BF0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B0010
#define CLootWnd__RequestLootSlot_x                                0x7AF240

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A39D0
#define EQ_Spell__SpellAffects_x                                   0x5A3EE0
#define EQ_Spell__SpellAffectBase_x                                0x5A3C00
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D11A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1150
#define EQ_Spell__IsSPAStacking_x                                  0x5A4E60
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A40F0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4E90
#define EQ_Spell__IsLullSpell_x                                    0x5A45C0
#define __IsResEffectSpell_x                                       0x4D0950

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1700

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x91FDE0
#define EQ_Affect__SetAffectData_x                                 0x9203B0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8672E0
#define CTargetWnd__WndNotification_x                              0x866A80
#define CTargetWnd__RefreshTargetBuffs_x                           0x866DE0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x865860

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86BE60
#define CTaskWnd__ConfirmAbandonTask_x                             0x86EF30

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552640
#define CTaskManager__HandleMessage_x                              0x550520
#define CTaskManager__GetTaskStatus_x                              0x5526F0
#define CTaskManager__GetElementDescription_x                      0x552770

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E5E0
#define EqSoundManager__PlayScriptMp3_x                            0x59E7E0
#define EqSoundManager__SoundAssistPlay_x                          0x6C4A00
#define EqSoundManager__WaveInstancePlay_x                         0x6C3EF0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5417B0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A4E80
#define CTextureAnimation__Draw_x                                  0x9A50C0
#define CTextureAnimation__AddBlankFrame_x                         0x9A4CA0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A0BE0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581D90
#define CAltAbilityData__GetMercMaxRank_x                          0x581D20
#define CAltAbilityData__GetMaxRank_x                              0x5760D0

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E400

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657410
#define CharacterBase__CreateItemGlobalIndex_x                     0x644B50
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x77EEF0
#define CharacterBase__GetItemByGlobalIndex_x                      0x9279F0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x927A40
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x725EE0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7267A0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726850

//messages
#define msg_spell_worn_off_x                                       0x5C96D0
#define msg_new_text_x                                             0x5BD080
#define __msgTokenTextParam_x                                      0x5CBB30
#define msgTokenText_x                                             0x5CBF40

//SpellManager
#define SpellManager__vftable_x                                    0xB38574
#define SpellManager__SpellManager_x                               0x6C8620
#define Spellmanager__LoadTextSpells_x                             0x6C8F20
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C87F0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F0140

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D1F70
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0260
#define ItemGlobalIndex__IsEquippedLocation_x                      0x670F90
#define ItemGlobalIndex__IsValidIndex_x                            0x5D2110

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x920870
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x920BC0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A8140

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x745E30
#define CCursorAttachment__AttachToCursor1_x                       0x745E70
#define CCursorAttachment__Deactivate_x                            0x747530

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x9967E0
#define CSidlManagerBase__CreatePageWnd_x                          0x995FD0
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x9914A0
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x991430

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B65D0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B6250

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522260
#define CFindItemWnd__WndNotification_x                            0x523130
#define CFindItemWnd__Update_x                                     0x523D80
#define CFindItemWnd__PickupSelectedItem_x                         0x521940

//IString
#define IString__Append_x                                          0x5581D0

//Camera
#define CDisplay__cameraType_x                                     0xEDEF1C
#define EverQuest__Cameras_x                                       0xDAE0E4

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D280
#define LootFiltersManager__GetItemFilterData_x                    0x52CBC0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CBF0
#define LootFiltersManager__SetItemLootFilter_x                    0x52CE00

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x807050

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F5E10
#define CResolutionHandler__GetWindowedStyle_x                     0x6BEE70

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73DA40

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92B6F0
#define CDistillerInfo__Instance_x                                 0x92B630

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7608D0
#define CGroupWnd__UpdateDisplay_x                                 0x75FB20

//ItemBase
#define ItemBase__IsLore_x                                         0x8F3FF0
#define ItemBase__IsLoreEquipped_x                                 0x8F4070

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x6088B0
#define EQPlacedItemManager__GetItemByGuid_x                       0x6089F0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608A50

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3620
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B7EA0

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517CD0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502720
#define FactionManagerClient__HandleFactionMessage_x               0x502F40
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503760
#define FactionManagerClient__GetMaxFaction_x                      0x50377F
#define FactionManagerClient__GetMinFaction_x                      0x503730

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F5C0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x977700

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E400

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F830

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580F40

//CTargetManager
#define CTargetManager__Get_x                                      0x6CC5A0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3620

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC7A0

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D87C0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4B778

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6E9EF0
#define CAAWnd__UpdateSelected_x                                   0x6E6590
#define CAAWnd__Update_x                                           0x6E9220

//CXRect
#define CXRect__operator_and_x                                     0x755D70

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D220

//
#define __eq_delete_x                                              0x9F63F3
#define __eq_new_x                                                 0x9F6964

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
