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
#define __ExpectedVersionDate                                     "Dec 14 2021"
#define __ExpectedVersionTime                                     "11:52:57"
#define __ActualVersionDate_x                                      0xB506A4
#define __ActualVersionTime_x                                      0xB50698
#define __ActualVersionBuild_x                                     0xB4087C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x662A40
#define __MemChecker1_x                                            0x94F5E0
#define __MemChecker2_x                                            0x6DD420
#define __MemChecker3_x                                            0x6DD390
#define __MemChecker4_x                                            0x8A2350
#define __EncryptPad0_x                                            0xE50BF0
#define __EncryptPad1_x                                            0xEAB418
#define __EncryptPad2_x                                            0xE5FE18
#define __EncryptPad3_x                                            0xE5FA18
#define __EncryptPad4_x                                            0xE9C220
#define __EP1_Data_x                                               0x37E074

// Direct Input
#define DI8__Main_x                                                0xF9ED84
#define DI8__Keyboard_x                                            0xF9ED88
#define DI8__Mouse_x                                               0xF9ECE4
#define DI8__Mouse_Copy_x                                          0xDABE34
#define DI8__Mouse_Check_x                                         0xF9C844
#define __AutoSkillArray_x                                         0xDAC950
#define __Attack_x                                                 0xE4A773
#define __Autofire_x                                               0xE4A774
#define __BindList_x                                               0xDA14E8
#define g_eqCommandStates_x                                        0xDA2250
#define __Clicks_x                                                 0xDABEEC
#define __CommandList_x                                            0xDA2DD8
#define __CurrentMapLabel_x                                        0xFAF8E4
#define __CurrentSocial_x                                          0xC5C460
#define __DoAbilityList_x                                          0xDE2294
#define __do_loot_x                                                0x5DFDB0
#define __DrawHandler_x                                            0x16211E0
#define __GroupCount_x                                             0xF91E7A
#define __Guilds_x                                                 0xF962E0
#define __gWorld_x                                                 0xF9208C
#define __HWnd_x                                                   0xF9ECE8
#define __heqmain_x                                                0xF9ECD8
#define __InChatMode_x                                             0xDABE1C
#define __LastTell_x                                               0xDAD990
#define __LMouseHeldTime_x                                         0xDABF58
#define __Mouse_x                                                  0xF9ED70
#define __MouseLook_x                                              0xDABEB2
#define __MouseEventTime_x                                         0xF97D0C
#define __gpbCommandEvent_x                                        0xF92198
#define __NetStatusToggle_x                                        0xDABEB5
#define __PCNames_x                                                0xDACF40
#define __RangeAttackReady_x                                       0xDACC34
#define __RMouseHeldTime_x                                         0xDABF54
#define __RunWalkState_x                                           0xDABE20
#define __ScreenMode_x                                             0xEDE184
#define __ScreenX_x                                                0xDABDD4
#define __ScreenY_x                                                0xDABDD0
#define __ScreenXMax_x                                             0xDABDD8
#define __ScreenYMax_x                                             0xDABDDC
#define __ServerHost_x                                             0xF92363
#define __ServerName_x                                             0xDE2254
#define __ShiftKeyDown_x                                           0xDAC4B0
#define __ShowNames_x                                              0xDACDF0
#define EverQuestInfo__bSocialChanged_x                            0xDE22DC
#define __Socials_x                                                0xDE2354
#define __SubscriptionType_x                                       0xFE6538
#define __TargetAggroHolder_x                                      0xFB2298
#define __ZoneType_x                                               0xDAC2B0
#define __GroupAggro_x                                             0xFB22D8
#define __LoginName_x                                              0xF9F454
#define __Inviter_x                                                0xE4A6F0
#define __AttackOnAssist_x                                         0xDACDAC
#define __UseTellWindows_x                                         0xDAD0D8
#define __gfMaxZoomCameraDistance_x                                0xB4851C
#define __gfMaxCameraDistance_x                                    0xB70EE0
#define __pulAutoRun_x                                             0xDABED0
#define __pulForward_x                                             0xDAD110
#define __pulBackward_x                                            0xDAD114
#define __pulTurnRight_x                                           0xDAD118
#define __pulTurnLeft_x                                            0xDAD11C
#define __pulStrafeLeft_x                                          0xDAD120
#define __pulStrafeRight_x                                         0xDAD124

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF92678
#define instEQZoneInfo_x                                           0xDAC0A8
#define pinstActiveBanker_x                                        0xF8FD78
#define pinstActiveCorpse_x                                        0xF8FD70
#define pinstActiveGMaster_x                                       0xF8FD74
#define pinstActiveMerchant_x                                      0xF8FD6C
#define pinstAltAdvManager_x                                       0xEDEF88
#define pinstBandageTarget_x                                       0xF8FD88
#define pinstCamActor_x                                            0xEDE178
#define pinstCDBStr_x                                              0xEDDCF8
#define pinstCDisplay_x                                            0xF8FDF4
#define pinstCEverQuest_x                                          0xF9ECEC
#define pinstEverQuestInfo_x                                       0xDABDC8
#define pinstCharData_x                                            0xF8FDE4
#define pinstCharSpawn_x                                           0xF8FDC0
#define pinstControlledMissile_x                                   0xF8FDCC
#define pinstControlledPlayer_x                                    0xF8FDC0
#define pinstCResolutionHandler_x                                  0x1621408
#define pinstCSidlManager_x                                        0x16203A4
#define pinstCXWndManager_x                                        0x162039C
#define instDynamicZone_x                                          0xF961B8
#define pinstDZMember_x                                            0xF962C8
#define pinstDZTimerInfo_x                                         0xF962CC
#define pinstEqLogin_x                                             0xF9EDA0
#define instEQMisc_x                                               0xD958D8
#define pinstEQSoundManager_x                                      0xEDF898
#define pinstEQSpellStrings_x                                      0xECE998
#define instExpeditionLeader_x                                     0xF96202
#define instExpeditionName_x                                       0xF96242
#define pinstGroup_x                                               0xF91E76
#define pinstImeManager_x                                          0x16203A0
#define pinstLocalPlayer_x                                         0xF8FD68
#define pinstMercenaryData_x                                       0xF997FC
#define pinstMercenaryStats_x                                      0xFB2364
#define pinstModelPlayer_x                                         0xF8FD80
#define pinstPCData_x                                              0xF8FDE4
#define pinstSkillMgr_x                                            0xF9B8F0
#define pinstSpawnManager_x                                        0xF9A3C8
#define pinstSpellManager_x                                        0xF9BB30
#define pinstSpellSets_x                                           0xE4339C
#define pinstStringTable_x                                         0xF8FDF0
#define pinstSwitchManager_x                                       0xF8FC18
#define pinstTarget_x                                              0xF8FDBC
#define pinstTargetObject_x                                        0xF8FDDC
#define pinstTargetSwitch_x                                        0xF8FDE0
#define pinstTaskMember_x                                          0xD95420
#define pinstTrackTarget_x                                         0xF8FDC4
#define pinstTradeTarget_x                                         0xF8FD7C
#define instTributeActive_x                                        0xD958F9
#define pinstViewActor_x                                           0xEDE174
#define pinstWorldData_x                                           0xF8FDEC
#define pinstZoneAddr_x                                            0xDAC348
#define pinstPlayerPath_x                                          0xF9A460
#define pinstTargetIndicator_x                                     0xF9BD98
#define EQObject_Top_x                                             0xF8FDD8

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEDDDAC
#define pinstCAchievementsWnd_x                                    0xEDDE54
#define pinstCActionsWnd_x                                         0xEDE16C
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDE194
#define pinstCAdvancedLootWnd_x                                    0xEDE170
#define pinstCAdventureLeaderboardWnd_x                            0xFA9108
#define pinstCAdventureRequestWnd_x                                0xFA91B8
#define pinstCAdventureStatsWnd_x                                  0xFA9268
#define pinstCAggroMeterWnd_x                                      0xEDDEE4
#define pinstCAlarmWnd_x                                           0xEDDDA4
#define pinstCAlertHistoryWnd_x                                    0xEDE150
#define pinstCAlertStackWnd_x                                      0xEDE130
#define pinstCAlertWnd_x                                           0xEDE138
#define pinstCAltStorageWnd_x                                      0xFA95C8
#define pinstCAudioTriggersWindow_x                                0xEC0CC8
#define pinstCAuraWnd_x                                            0xEDE1B4
#define pinstCAvaZoneWnd_x                                         0xEDDE3C
#define pinstCBandolierWnd_x                                       0xEDE1C4
#define pinstCBankWnd_x                                            0xEDE154
#define pinstCBarterMerchantWnd_x                                  0xFAA808
#define pinstCBarterSearchWnd_x                                    0xFAA8B8
#define pinstCBarterWnd_x                                          0xFAA968
#define pinstCBazaarConfirmationWnd_x                              0xEDDDB8
#define pinstCBazaarSearchWnd_x                                    0xEDDE80
#define pinstCBazaarWnd_x                                          0xEDDE28
#define pinstCBlockedBuffWnd_x                                     0xEDDEAC
#define pinstCBlockedPetBuffWnd_x                                  0xEDDEB4
#define pinstCBodyTintWnd_x                                        0xEDDDD8
#define pinstCBookWnd_x                                            0xEDE15C
#define pinstCBreathWnd_x                                          0xEDDDB0
#define pinstCBuffWindowNORMAL_x                                   0xEDDEA4
#define pinstCBuffWindowSHORT_x                                    0xEDDEA8
#define pinstCBugReportWnd_x                                       0xEDDE60
#define pinstCButtonWnd_x                                          0x1620608
#define pinstCCastingWnd_x                                         0xEDDEE0
#define pinstCCastSpellWnd_x                                       0xEDDEF0
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEDDE84
#define pinstCChatWindowManager_x                                  0xFAB410
#define pinstCClaimWnd_x                                           0xFAB568
#define pinstCColorPickerWnd_x                                     0xEDDE98
#define pinstCCombatAbilityWnd_x                                   0xEDE1A8
#define pinstCCombatSkillsSelectWnd_x                              0xEDE1A4
#define pinstCCompassWnd_x                                         0xEDE1B8
#define pinstCConfirmationDialog_x                                 0xFB0430
#define pinstCContainerMgr_x                                       0xEDDDA8
#define pinstCContextMenuManager_x                                 0x1620358
#define pinstCCursorAttachment_x                                   0xEDDED8
#define pinstCDynamicZoneWnd_x                                     0xFABB30
#define pinstCEditLabelWnd_x                                       0xEDDE44
#define pinstCEQMainWnd_x                                          0xFABD78
#define pinstCEventCalendarWnd_x                                   0xEDDD9C
#define pinstCExtendedTargetWnd_x                                  0xEDDEDC
#define pinstCPlayerCustomizationWnd_x                             0xEDDE8C
#define pinstCFactionWnd_x                                         0xEDDEEC
#define pinstCFellowshipWnd_x                                      0xFABF78
#define pinstCFileSelectionWnd_x                                   0xEDE1B0
#define pinstCFindItemWnd_x                                        0xEDDDE0
#define pinstCFindLocationWnd_x                                    0xFAC0D0
#define pinstCFriendsWnd_x                                         0xEDE1AC
#define pinstCGemsGameWnd_x                                        0xEDDD98
#define pinstCGiveWnd_x                                            0xEDDE34
#define pinstCGroupSearchFiltersWnd_x                              0xEDDEC4
#define pinstCGroupSearchWnd_x                                     0xFAC4C8
#define pinstCGroupWnd_x                                           0xFAC578
#define pinstCGuildBankWnd_x                                       0xFAC628
#define pinstCGuildCreationWnd_x                                   0xFAC6D8
#define pinstCGuildMgmtWnd_x                                       0xFAC788
#define pinstCharacterCreation_x                                   0xEDDED4
#define pinstCHelpWnd_x                                            0xEDE13C
#define pinstCHeritageSelectionWnd_x                               0xEDDE90
#define pinstCHotButtonWnd_x                                       0xFAE8E0
#define pinstCHotButtonWnd1_x                                      0xFAE8E0
#define pinstCHotButtonWnd2_x                                      0xFAE8E4
#define pinstCHotButtonWnd3_x                                      0xFAE8E8
#define pinstCHotButtonWnd4_x                                      0xFAE8EC
#define pinstCIconSelectionWnd_x                                   0xEDDE5C
#define pinstCInspectWnd_x                                         0xEDDE50
#define pinstCInventoryWnd_x                                       0xEDE140
#define pinstCInvSlotMgr_x                                         0xEDE1C8
#define pinstCItemDisplayManager_x                                 0xFAEE38
#define pinstCItemExpTransferWnd_x                                 0xFAEF68
#define pinstCItemOverflowWnd_x                                    0xEDDE14
#define pinstCJournalCatWnd_x                                      0xEDDDC8
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEDDDBC
#define pinstCJournalTextWnd_x                                     0xEDDDBC
#define pinstCKeyRingWnd_x                                         0xEDE148
#define pinstCLargeDialogWnd_x                                     0xFB10B0
#define pinstCLayoutCopyWnd_x                                      0xFAF2B8
#define pinstCLFGuildWnd_x                                         0xFAF368
#define pinstCLoadskinWnd_x                                        0xEDDDA0
#define pinstCLootFiltersCopyWnd_x                                 0xEDD208
#define pinstCLootFiltersWnd_x                                     0xEDDDC0
#define pinstCLootSettingsWnd_x                                    0xEDDDC4
#define pinstCLootWnd_x                                            0xEDE160
#define pinstCMailAddressBookWnd_x                                 0xEDDE74
#define pinstCMailCompositionWnd_x                                 0xEDDE6C
#define pinstCMailIgnoreListWnd_x                                  0xEDDE78
#define pinstCMailWnd_x                                            0xEDDE64
#define pinstCManageLootWnd_x                                      0xEDF408
#define pinstCMapToolbarWnd_x                                      0xEDDE38
#define pinstCMapViewWnd_x                                         0xEDDE2C
#define pinstCMarketplaceWnd_x                                     0xEDDE08
#define pinstCMerchantWnd_x                                        0xEDDE0C
#define pinstCMIZoneSelectWnd_x                                    0xFAFBA0
#define pinstCMusicPlayerWnd_x                                     0xEDE1CC
#define pinstCNameChangeMercWnd_x                                  0xEDDF10
#define pinstCNameChangePetWnd_x                                   0xEDDF00
#define pinstCNameChangeWnd_x                                      0xEDDE68
#define pinstCNoteWnd_x                                            0xEDE134
#define pinstCObjectPreviewWnd_x                                   0xEDDE7C
#define pinstCOptionsWnd_x                                         0xEDDE9C
#define pinstCOverseerWnd_x                                        0xEDDE04
#define pinstCPetInfoWnd_x                                         0xEDE164
#define pinstCPetitionQWnd_x                                       0xEDDEB8
#define pinstCPlayerNotesWnd_x                                     0xEDE1BC
#define pinstCPlayerWnd_x                                          0xEDDDDC
#define pinstCPopupWndManager_x                                    0xFB0430
#define pinstCProgressionSelectionWnd_x                            0xFB04E0
#define pinstCPurchaseGroupWnd_x                                   0xEDDE18
#define pinstCPurchaseWnd_x                                        0xEDDE10
#define pinstCPvPLeaderboardWnd_x                                  0xFB0590
#define pinstCPvPStatsWnd_x                                        0xFB0640
#define pinstCQuantityWnd_x                                        0xEDE158
#define pinstCRaceChangeWnd_x                                      0xEDDE70
#define pinstCRaidOptionsWnd_x                                     0xEDDEE8
#define pinstCRaidWnd_x                                            0xEDDEF4
#define pinstCRealEstateItemsWnd_x                                 0xEDDE94
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDDED0
#define pinstCRealEstateManageWnd_x                                0xEDDEBC
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDDEC0
#define pinstCRealEstatePlotSearchWnd_x                            0xEDDEC8
#define pinstCRealEstatePurchaseWnd_x                              0xEDDECC
#define pinstCRespawnWnd_x                                         0xEDE1C0
#define pinstCRewardSelectionWnd_x                                 0xFB0D88
#define pinstCSelectorWnd_x                                        0xEDDE20
#define pinstCSendMoneyWnd_x                                       0xEDDE40
#define pinstCServerListWnd_x                                      0xEDE1A0
#define pinstCSkillsSelectWnd_x                                    0xEDE19C
#define pinstCSkillsWnd_x                                          0xEDE190
#define pinstCSocialEditWnd_x                                      0xEDDE58
#define pinstCSocialWnd_x                                          0xEDDDB4
#define pinstCSpellBookWnd_x                                       0xEDDF18
#define pinstCStoryWnd_x                                           0xEDDDD0
#define pinstCTargetOfTargetWnd_x                                  0xFB23E8
#define pinstCTargetWnd_x                                          0xEDDE4C
#define pinstCTaskOverlayWnd_x                                     0xEDDDCC
#define pinstCTaskSelectWnd_x                                      0xFB2540
#define pinstCTaskManager_x                                        0xC67268
#define pinstCTaskTemplateSelectWnd_x                              0xFB25F0
#define pinstCTaskWnd_x                                            0xFB26A0
#define pinstCTextEntryWnd_x                                       0xEDE198
#define pinstCTimeLeftWnd_x                                        0xEDDEB0
#define pinstCTipWndCONTEXT_x                                      0xFB28A4
#define pinstCTipWndOFDAY_x                                        0xFB28A0
#define pinstCTitleWnd_x                                           0xFB2950
#define pinstCTrackingWnd_x                                        0xEDDE48
#define pinstCTradeskillWnd_x                                      0xFB2AB8
#define pinstCTradeWnd_x                                           0xEDDE1C
#define pinstCTrainWnd_x                                           0xEDE168
#define pinstCTributeBenefitWnd_x                                  0xFB2CB8
#define pinstCTributeMasterWnd_x                                   0xFB2D68
#define pinstCTributeTrophyWnd_x                                   0xFB2E18
#define pinstCVideoModesWnd_x                                      0xEDDE24
#define pinstCVoiceMacroWnd_x                                      0xF9C1B0
#define pinstCVoteResultsWnd_x                                     0xEDDEFC
#define pinstCVoteWnd_x                                            0xEDDEF8
#define pinstCZoneGuideWnd_x                                       0xEDE144
#define pinstCZonePathWnd_x                                        0xEDE14C

#define pinstEQSuiteTextureLoader_x                                0xEAB9D8
#define pinstItemIconCache_x                                       0xFABD30
#define pinstLootFiltersManager_x                                  0xEDD2B8
#define pinstRewardSelectionWnd_x                                  0xFB0D88

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB090
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB320
#define __ConvertItemTags_x                                        0x5F8540
#define __CleanItemTags_x                                          0x47DA70
#define __DoesFileExist_x                                          0x952570
#define __EQGetTime_x                                              0x94F250
#define __ExecuteCmd_x                                             0x5D34B0
#define __FixHeading_x                                             0x9ECF20
#define __FlushDxKeyboard_x                                        0x6D8710
#define __GameLoop_x                                               0x6DC020
#define __get_bearing_x                                            0x5DAC30
#define __get_melee_range_x                                        0x5DB560
#define __GetAnimationCache_x                                      0x74AA90
#define __GetGaugeValueFromEQ_x                                    0x85AF60
#define __GetLabelFromEQ_x                                         0x85C970
#define __GetXTargetType_x                                         0x9EF290
#define __HandleMouseWheel_x                                       0x6DD4B0
#define __HeadingDiff_x                                            0x9ECF80
#define __HelpPath_x                                               0xF979CC
#define __ExecuteFrontEnd_x                                        0x6D8EF0
#define __NewUIINI_x                                               0x85AC40
#define __ProcessGameEvents_x                                      0x641C00
#define __ProcessMouseEvent_x                                      0x641300
#define __SaveColors_x                                             0x56F860
#define __STMLToText_x                                             0x98A9F0
#define __ToggleKeyRingItem_x                                      0x528D20
#define CMemoryMappedFile__SetFile_x                               0xADC960
#define CrashDetected_x                                            0x6DAC20
#define DrawNetStatus_x                                            0x6710A0
#define Expansion_HoT_x                                            0xDACD98
#define Teleport_Table_Size_x                                      0xF92220
#define Teleport_Table_x                                           0xF8FDF8
#define Util__FastTime_x                                           0x94EE10
#define __CopyLayout_x                                             0x65DD30
#define __WndProc_x                                                0x6DB120
#define __ProcessKeyboardEvent_x                                   0x6DA660

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4F0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B370
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495690
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x4948C4

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x578900
#define AltAdvManager__IsAbilityReady_x                            0x5774E0
#define AltAdvManager__GetAAById_x                                 0x577880
#define AltAdvManager__CanTrainAbility_x                           0x5778F0
#define AltAdvManager__CanSeeAbility_x                             0x577CA0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D17C0
#define CharacterZoneClient__HasSkill_x                            0x4DCF50
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE6C0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8B80
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1360
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFBC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFCC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE00
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAE50
#define CharacterZoneClient__BardCastBard_x                        0x4CDE80
#define CharacterZoneClient__GetMaxEffects_x                       0x4C52D0
#define CharacterZoneClient__GetEffect_x                           0x4C12A0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC460
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC510
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC5B0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC770
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC950
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8B00
#define CharacterZoneClient__FindItemByGuid_x                      0x6842F0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DECA0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x7063E0
#define CBankWnd__WndNotification_x                                0x706180

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x710ED0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70BB10
#define CBarterSearchWnd__UpdateInventoryList_x                    0x709AE0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715600

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x987F90
#define CButtonWnd__CButtonWnd_x                                   0x986900

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x737FE0
#define CChatManager__InitContextMenu_x                            0x730F10
#define CChatManager__FreeChatWindow_x                             0x736BB0
#define CChatManager__SetLockedActiveChatWindow_x                  0x737CC0
#define CChatManager__CreateChatWindow_x                           0x7371D0

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFCD0

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99DE50
#define CContextMenu__dCContextMenu_x                              0x99E080
#define CContextMenu__AddMenuItem_x                                0x99E090
#define CContextMenu__RemoveMenuItem_x                             0x99E3A0
#define CContextMenu__RemoveAllMenuItems_x                         0x99E3C0
#define CContextMenu__CheckMenuItem_x                              0x99E420
#define CContextMenu__SetMenuItem_x                                0x99E2C0
#define CContextMenu__AddSeparator_x                               0x99E220

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99E9B0
#define CContextMenuManager__RemoveMenu_x                          0x99EA20
#define CContextMenuManager__PopupMenu_x                           0x99EAE0
#define CContextMenuManager__Flush_x                               0x99E950
#define CContextMenuManager__GetMenu_x                             0x49D9E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x744910

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x929C70
#define CChatService__GetFriendName_x                              0x929C80

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x738960
#define CChatWindow__Clear_x                                       0x739DE0
#define CChatWindow__WndNotification_x                             0x73A570
#define CChatWindow__AddHistory_x                                  0x739620

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99AE60
#define CComboWnd__Draw_x                                          0x99A300
#define CComboWnd__GetCurChoice_x                                  0x99AC30
#define CComboWnd__GetListRect_x                                   0x99A7B0
#define CComboWnd__GetTextRect_x                                   0x99AED0
#define CComboWnd__InsertChoice_x                                  0x99A940
#define CComboWnd__SetColors_x                                     0x99A910
#define CComboWnd__SetChoice_x                                     0x99AC10
#define CComboWnd__GetItemCount_x                                  0x99AC40
#define CComboWnd__GetCurChoiceText_x                              0x99AC70
#define CComboWnd__GetChoiceText_x                                 0x99AC50
#define CComboWnd__InsertChoiceAtIndex_x                           0x99A9D0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x741F50
#define CContainerWnd__vftable_x                                   0xB59944
#define CContainerWnd__SetContainer_x                              0x7437C0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56A0A0
#define CDisplay__PreZoneMainUI_x                                  0x56A0B0
#define CDisplay__CleanGameUI_x                                    0x56F640
#define CDisplay__GetClickedActor_x                                0x561E70
#define CDisplay__GetUserDefinedColor_x                            0x559BF0
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x563980
#define CDisplay__is3dON_x                                         0x55E700
#define CDisplay__ReloadUI_x                                       0x5693C0
#define CDisplay__WriteTextHD2_x                                   0x55E4F0
#define CDisplay__TrueDistance_x                                   0x565960
#define CDisplay__SetViewActor_x                                   0x561790
#define CDisplay__GetFloorHeight_x                                 0x55E7C0
#define CDisplay__SetRenderWindow_x                                0x55D170
#define CDisplay__ToggleScreenshotMode_x                           0x561260

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C0710

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A1970
#define CEditWnd__EnsureCaretVisible_x                             0x9A3CF0
#define CEditWnd__GetCaretPt_x                                     0x9A2B50
#define CEditWnd__GetCharIndexPt_x                                 0x9A2900
#define CEditWnd__GetDisplayString_x                               0x9A27A0
#define CEditWnd__GetHorzOffset_x                                  0x9A0EC0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A3C00
#define CEditWnd__GetSelStartPt_x                                  0x9A2BB0
#define CEditWnd__GetSTMLSafeText_x                                0x9A25B0
#define CEditWnd__PointFromPrintableChar_x                         0x9A3840
#define CEditWnd__SelectableCharFromPoint_x                        0x9A39A0
#define CEditWnd__SetEditable_x                                    0x9A2C80
#define CEditWnd__SetWindowTextA_x                                 0x9A2300
#define CEditWnd__ReplaceSelection_x                               0x9A3400
#define CEditWnd__ReplaceSelection1_x                              0x9A3380

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D200
#define CEverQuest__ClickedPlayer_x                                0x61E720
#define CEverQuest__CreateTargetIndicator_x                        0x63EB70
#define CEverQuest__DeleteTargetIndicator_x                        0x63EC00
#define CEverQuest__DoTellWindow_x                                 0x4EFDD0
#define CEverQuest__OutputTextToLog_x                              0x4F00A0
#define CEverQuest__DropHeldItemOnGround_x                         0x6137F0
#define CEverQuest__dsp_chat_x                                     0x4F0470
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
#define CGaugeWnd__CalcFillRect_x                                  0x755A30
#define CGaugeWnd__CalcLinesFillRect_x                             0x755A90
#define CGaugeWnd__Draw_x                                          0x755040

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4930
#define CGuild__GetGuildName_x                                     0x4B3150
#define CGuild__GetGuildIndex_x                                    0x4B3870

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x772EF0

//CHotButton
#define CHotButton__SetCheck_x                                     0x652210
#define CHotButton__SetButtonSize_x                                0x6525D0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x7801E0
#define CInvSlotMgr__MoveItem_x                                    0x77EDF0
#define CInvSlotMgr__SelectSlot_x                                  0x7802A0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77D600
#define CInvSlot__SliderComplete_x                                 0x77A830
#define CInvSlot__GetItemBase_x                                    0x77A0D0
#define CInvSlot__UpdateItem_x                                     0x77A2C0

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7810D0
#define CInvSlotWnd__HandleLButtonUp_x                             0x781AE0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x8553D0
#define CItemDisplayWnd__UpdateStrings_x                           0x7998A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78E8E0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78EE10
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x799FB0
#define CItemDisplayWnd__AboutToShow_x                             0x799490
#define CItemDisplayWnd__WndNotification_x                         0x79B720
#define CItemDisplayWnd__RequestConvertItem_x                      0x79ADD0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x798360
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x799280

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88A8F0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A0EB0
#define CItemDisplayManager__ShowItem_x                            0x7A02E0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A79E0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96D4A0
#define CListWnd__dCListWnd_x                                      0x96D7A0
#define CListWnd__AddColumn_x                                      0x972390
#define CListWnd__AddColumn1_x                                     0x9724B0
#define CListWnd__AddLine_x                                        0x972820
#define CListWnd__AddString_x                                      0x972620
#define CListWnd__CalculateFirstVisibleLine_x                      0x972140
#define CListWnd__CalculateVSBRange_x                              0x971F30
#define CListWnd__ClearSel_x                                       0x973110
#define CListWnd__ClearAllSel_x                                    0x973160
#define CListWnd__CloseAndUpdateEditWindow_x                       0x973C10
#define CListWnd__Compare_x                                        0x9716B0
#define CListWnd__Draw_x                                           0x96D960
#define CListWnd__DrawColumnSeparators_x                           0x9704A0
#define CListWnd__DrawHeader_x                                     0x970900
#define CListWnd__DrawItem_x                                       0x970F50
#define CListWnd__DrawLine_x                                       0x970610
#define CListWnd__DrawSeparator_x                                  0x970540
#define CListWnd__EnableLine_x                                     0x96FD50
#define CListWnd__EnsureVisible_x                                  0x973B30
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x973050
#define CListWnd__GetColumnTooltip_x                               0x96F8D0
#define CListWnd__GetColumnMinWidth_x                              0x96F940
#define CListWnd__GetColumnWidth_x                                 0x96F850
#define CListWnd__GetCurSel_x                                      0x96F1F0
#define CListWnd__GetItemAtPoint_x                                 0x96FFD0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x970040
#define CListWnd__GetItemColor_x                                   0x96F570
#define CListWnd__GetItemData_x                                    0x96F270
#define CListWnd__GetItemHeight_x                                  0x96F620
#define CListWnd__GetItemIcon_x                                    0x96F3F0
#define CListWnd__GetItemRect_x                                    0x96FE40
#define CListWnd__GetItemText_x                                    0x96F2B0
#define CListWnd__GetSelList_x                                     0x9731B0
#define CListWnd__GetSeparatorRect_x                               0x9702B0
#define CListWnd__InsertLine_x                                     0x972C80
#define CListWnd__RemoveLine_x                                     0x972EA0
#define CListWnd__SetColors_x                                      0x971F00
#define CListWnd__SetColumnJustification_x                         0x971C30
#define CListWnd__SetColumnLabel_x                                 0x9725C0
#define CListWnd__SetItemOnlyDrawTexture_x                         0x973860
#define CListWnd__SetColumnWidth_x                                 0x971B40
#define CListWnd__SetCurSel_x                                      0x972FA0
#define CListWnd__SetItemColor_x                                   0x9737F0
#define CListWnd__SetItemData_x                                    0x9737B0
#define CListWnd__SetItemText_x                                    0x9733D0
#define CListWnd__ShiftColumnSeparator_x                           0x971CF0
#define CListWnd__Sort_x                                           0x9719A0
#define CListWnd__ToggleSel_x                                      0x972FD0
#define CListWnd__SetColumnsSizable_x                              0x971D90
#define CListWnd__SetItemWnd_x                                     0x973670
#define CListWnd__GetItemWnd_x                                     0x96F440
#define CListWnd__SetItemIcon_x                                    0x973450
#define CListWnd__CalculateCustomWindowPositions_x                 0x972240
#define CListWnd__SetVScrollPos_x                                  0x971B20

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7BEE00
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BD440
#define CMapViewWnd__HandleLButtonDown_x                           0x7BA2D0
#define CMapViewWnd__WndNotification_x                             0x7C1730

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E23F0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E2D50
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E33E0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E66B0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E0E70
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EC8B0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E2040

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F65E0
#define CPacketScrambler__hton_x                                   0x8F65D0

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x991060
#define CSidlManager__FindScreenPieceTemplate_x                    0x991430
#define CSidlManager__FindScreenPieceTemplate1_x                   0x991260
#define CSidlManager__CreateXWndFromTemplate_x                     0x9948E0
#define CSidlManager__CreateXWndFromTemplate1_x                    0x994B70
#define CSidlManagerbase__CreateXWnd_x                             0x994BB0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84B510
#define CSidlManager__CreateLabel_x                                0x84B0E0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84AB60

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98CD90
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98CC90
#define CSidlScreenWnd__ConvertToRes_x                             0x9BA960
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98C610
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98C300
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98C3D0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98C4A0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98D630
#define CSidlScreenWnd__EnableIniStorage_x                         0x98DB10
#define CSidlScreenWnd__GetSidlPiece_x                             0x98D820
#define CSidlScreenWnd__Init1_x                                    0x98BDD0
#define CSidlScreenWnd__LoadIniInfo_x                              0x98DB60
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98E750
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98B1D0
#define CSidlScreenWnd__StoreIniInfo_x                             0x98E2C0
#define CSidlScreenWnd__StoreIniVis_x                              0x98E640
#define CSidlScreenWnd__WndNotification_x                          0x98D500
#define CSidlScreenWnd__GetChildItem_x                             0x98DA90
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97C0D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x1620228

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0430
#define CSkillMgr__GetSkillCap_x                                   0x6C0600
#define CSkillMgr__GetNameToken_x                                  0x6BFC40
#define CSkillMgr__IsActivatedSkill_x                              0x6BFD30
#define CSkillMgr__IsCombatSkill_x                                 0x6BFCA0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x99FAA0
#define CSliderWnd__SetValue_x                                     0x99F8D0
#define CSliderWnd__SetNumTicks_x                                  0x99F930

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x851DA0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A8FE0
#define CStmlWnd__ParseSTML_x                                      0x9AA190
#define CStmlWnd__CalculateHSBRange_x                              0x9A9F60
#define CStmlWnd__CalculateVSBRange_x                              0x9A9ED0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AEDC0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9AFA60
#define CStmlWnd__ForceParseNow_x                                  0x9A9550
#define CStmlWnd__GetNextTagPiece_x                                0x9AED20
#define CStmlWnd__GetVisibleText_x                                 0x9A9570
#define CStmlWnd__InitializeWindowVariables_x                      0x9AF8B0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A8680
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A86F0
#define CStmlWnd__SetSTMLText_x                                    0x9A7460
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B0C80
#define CStmlWnd__UpdateHistoryString_x                            0x9AFC60

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A6300
#define CTabWnd__DrawCurrentPage_x                                 0x9A6C90
#define CTabWnd__DrawTab_x                                         0x9A6880
#define CTabWnd__GetCurrentPage_x                                  0x9A5A70
#define CTabWnd__GetPageInnerRect_x                                0x9A5CA0
#define CTabWnd__GetTabInnerRect_x                                 0x9A5BE0
#define CTabWnd__GetTabRect_x                                      0x9A5AA0
#define CTabWnd__InsertPage_x                                      0x9A5E90
#define CTabWnd__RemovePage_x                                      0x9A5FD0
#define CTabWnd__SetPage_x                                         0x9A5D20
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A6200
#define CTabWnd__UpdatePage_x                                      0x9A6670
#define CTabWnd__GetPageFromTabIndex_x                             0x9A67C0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A5A60

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x9A5400
#define CPageWnd__FlashTab_x                                       0x9A5460

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC9D0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x9785B0
#define CTextureFont__GetTextExtent_x                              0x9788B0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B7410

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x962F50

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x541AC0
#define CXStr__CXStr1_x                                            0x482740
#define CXStr__CXStr3_x                                            0x94B1A0
#define CXStr__dCXStr_x                                            0x478F40
#define CXStr__operator_equal_x                                    0x94B3E0
#define CXStr__operator_equal1_x                                   0x94B420
#define CXStr__operator_plus_equal1_x                              0x94BE80
#define CXStr__SetString_x                                         0x94DD20
#define CXStr__operator_char_p_x                                   0x94B8D0
#define CXStr__GetChar_x                                           0x94D680
#define CXStr__Delete_x                                            0x94CF50
#define CXStr__GetUnicode_x                                        0x94D6F0
#define CXStr__Insert_x                                            0x94D750
#define CXStr__FindNext_x                                          0x94D3A0
#define CXStr__Copy_x                                              0x94CD60

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99DAB0
#define CXWnd__BringToTop_x                                        0x97FB30
#define CXWnd__ClrFocus_x                                          0x97F4C0
#define CXWnd__Destroy_x                                           0x97F560
#define CXWnd__DoAllDrawing_x                                      0x97B760
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97B730
#define CXWnd__DrawColoredRect_x                                   0x97BCD0
#define CXWnd__DrawTooltip_x                                       0x979CA0
#define CXWnd__DrawTooltipAtPoint_x                                0x979D60
#define CXWnd__GetBorderFrame_x                                    0x97B970
#define CXWnd__GetChildWndAt_x                                     0x97FBD0
#define CXWnd__GetClientClipRect_x                                 0x97DD20
#define CXWnd__GetScreenClipRect_x                                 0x97DDF0
#define CXWnd__GetScreenRect_x                                     0x97DF90
#define CXWnd__GetRelativeRect_x                                   0x97E050
#define CXWnd__GetTooltipRect_x                                    0x97BD20
#define CXWnd__GetWindowTextA_x                                    0x4EFC70
#define CXWnd__IsActive_x                                          0x97C440
#define CXWnd__IsDescendantOf_x                                    0x97EA00
#define CXWnd__IsReallyVisible_x                                   0x97EA30
#define CXWnd__IsType_x                                            0x980350
#define CXWnd__Move_x                                              0x97EAA0
#define CXWnd__Move1_x                                             0x97EBA0
#define CXWnd__ProcessTransition_x                                 0x97F640
#define CXWnd__Refade_x                                            0x97EE70
#define CXWnd__Resize_x                                            0x97F110
#define CXWnd__Right_x                                             0x97F920
#define CXWnd__SetFocus_x                                          0x97F480
#define CXWnd__SetFont_x                                           0x97F4F0
#define CXWnd__SetKeyTooltip_x                                     0x980110
#define CXWnd__SetMouseOver_x                                      0x97CE00
#define CXWnd__StartFade_x                                         0x97E8E0
#define CXWnd__GetChildItem_x                                      0x97FD50
#define CXWnd__SetParent_x                                         0x97E720
#define CXWnd__Minimize_x                                          0x97F170

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BB9B0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x982B70
#define CXWndManager__DrawWindows_x                                0x982CC0
#define CXWndManager__GetKeyboardFlags_x                           0x985550
#define CXWndManager__HandleKeyboardMsg_x                          0x985140
#define CXWndManager__RemoveWnd_x                                  0x985810
#define CXWndManager__RemovePendingDeletionWnd_x                   0x985CC0

// CDBStr
#define CDBStr__GetString_x                                        0x5586D0

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5C50
#define EQ_Character__Cur_HP_x                                     0x4D9BA0
#define EQ_Character__Cur_Mana_x                                   0x4E0DE0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9270
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8710
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8860
#define EQ_Character__GetHPRegen_x                                 0x4E68B0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6E70
#define EQ_Character__GetManaRegen_x                               0x4E72B0
#define EQ_Character__Max_Endurance_x                              0x680BA0
#define EQ_Character__Max_HP_x                                     0x4D99D0
#define EQ_Character__Max_Mana_x                                   0x680980
#define EQ_Character__doCombatAbility_x                            0x683720
#define EQ_Character__UseSkill_x                                   0x4E8480
#define EQ_Character__GetConLevel_x                                0x678CE0
#define EQ_Character__IsExpansionFlag_x                            0x5D1CE0
#define EQ_Character__TotalEffect_x                                0x4CD770
#define EQ_Character__GetPCSpellAffect_x                           0x4CA0A0
#define EQ_Character__SpellDuration_x                              0x4C9AE0
#define EQ_Character__MySpellDuration_x                            0x4B6DE0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD10
#define EQ_Character__GetBaseSkill_x                               0x4DDCB0
#define EQ_Character__CanUseItem_x                                 0x4E1110
#define EQ_Character__CanMedOnHorse_x                              0x4E7FC0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917310

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x698F70

//PcClient
#define PcClient__vftable_x                                        0xB4D414
#define PcClient__PcClient_x                                       0x675F60

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0210
#define CCharacterListWnd__EnterWorld_x                            0x4BFBE0
#define CCharacterListWnd__Quit_x                                  0x4BF900
#define CCharacterListWnd__UpdateList_x                            0x4BFDD0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658400
#define EQ_Item__CreateItemTagString_x                             0x8EF2E0
#define EQ_Item__IsStackable_x                                     0x8F45A0
#define EQ_Item__GetImageNum_x                                     0x8F1040
#define EQ_Item__CreateItemClient_x                                0x6573B0
#define EQ_Item__GetItemValue_x                                    0x8F2290
#define EQ_Item__ValueSellMerchant_x                               0x8F62F0
#define EQ_Item__IsKeyRingItem_x                                   0x8F3D30
#define EQ_Item__CanGoInBag_x                                      0x658520
#define EQ_Item__IsEmpty_x                                         0x8F36F0
#define EQ_Item__GetMaxItemCount_x                                 0x8F26B0
#define EQ_Item__GetHeldItem_x                                     0x8F0EF0
#define EQ_Item__CanGemFitInSlot_x                                 0x8EEAA0

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x579710
#define EQ_LoadingS__Array_x                                       0xD99D30

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x6818E0
#define EQ_PC__GetAlternateAbilityId_x                             0x900590
#define EQ_PC__GetCombatAbility_x                                  0x900B10
#define EQ_PC__GetCombatAbilityTimer_x                             0x900B80
#define EQ_PC__GetItemRecastTimer_x                                0x683D20
#define EQ_PC__HasLoreItem_x                                       0x679640
#define EQ_PC__AlertInventoryChanged_x                             0x6785A0
#define EQ_PC__GetPcZoneClient_x                                   0x6A9680
#define EQ_PC__RemoveMyAffect_x                                    0x687580
#define EQ_PC__GetKeyRingItems_x                                   0x9016F0
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9011D0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x901940

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8090
#define EQItemList__add_object_x                                   0x6086B0
#define EQItemList__add_item_x                                     0x5D8670
#define EQItemList__delete_item_x                                  0x5D86C0
#define EQItemList__FreeItemList_x                                 0x5D85D0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554A50

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69A9A0
#define EQPlayer__dEQPlayer_x                                      0x68D0E0
#define EQPlayer__DoAttack_x                                       0x6A33B0
#define EQPlayer__EQPlayer_x                                       0x68D930
#define EQPlayer__SetNameSpriteState_x                             0x691EE0
#define EQPlayer__SetNameSpriteTint_x                              0x692DB0
#define PlayerBase__HasProperty_j_x                                0x9EB2E0
#define EQPlayer__IsTargetable_x                                   0x9EB840
#define EQPlayer__CanSee_x                                         0x9EB630
#define EQPlayer__CanSee1_x                                        0x9EB700
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EB3A0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7170
#define PlayerZoneClient__GetLevel_x                               0x6A96C0
#define PlayerZoneClient__IsValidTeleport_x                        0x609B60
#define PlayerZoneClient__LegalPlayerRace_x                        0x5716A0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69DB40
#define EQPlayerManager__GetSpawnByName_x                          0x69DBF0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69DC80

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65BCF0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65BDC0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65BE00
#define KeypressHandler__ClearCommandStateArray_x                  0x65D2C0
#define KeypressHandler__HandleKeyDown_x                           0x65D2E0
#define KeypressHandler__HandleKeyUp_x                             0x65D380
#define KeypressHandler__SaveKeymapping_x                          0x65D930

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BAAD0
#define MapViewMap__SaveEx_x                                       0x7BE00F
#define MapViewMap__SetZoom_x                                      0x7C3CF0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9151A0

// StringTable 
#define StringTable__getString_x                                   0x90FEE0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6871D0
#define PcZoneClient__RemovePetEffect_x                            0x687830
#define PcZoneClient__HasAlternateAbility_x                        0x6807E0
#define PcZoneClient__GetCurrentMod_x                              0x4EBE40
#define PcZoneClient__GetModCap_x                                  0x4EBD40
#define PcZoneClient__CanEquipItem_x                               0x680EB0
#define PcZoneClient__GetItemByID_x                                0x684250
#define PcZoneClient__RemoveBuffEffect_x                           0x6878E0
#define PcZoneClient__BandolierSwap_x                              0x681E90
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x683CC0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60E790

//IconCache
#define IconCache__GetIcon_x                                       0x74A430

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x740E20
#define CContainerMgr__CloseContainer_x                            0x741140
#define CContainerMgr__OpenExperimentContainer_x                   0x741CA0

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81A330

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650970

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7AFD20
#define CLootWnd__RequestLootSlot_x                                0x7AEF40

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3950
#define EQ_Spell__SpellAffects_x                                   0x5A3E60
#define EQ_Spell__SpellAffectBase_x                                0x5A3B80
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1180
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1130
#define EQ_Spell__IsSPAStacking_x                                  0x5A4DE0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4070
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4E10
#define EQ_Spell__IsLullSpell_x                                    0x5A4540
#define __IsResEffectSpell_x                                       0x4D0930

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1700

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x91FD70
#define EQ_Affect__SetAffectData_x                                 0x920340

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8670D0
#define CTargetWnd__WndNotification_x                              0x866870
#define CTargetWnd__RefreshTargetBuffs_x                           0x866BD0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x865650

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86BC50
#define CTaskWnd__ConfirmAbandonTask_x                             0x86ED20

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5525D0
#define CTaskManager__HandleMessage_x                              0x5504B0
#define CTaskManager__GetTaskStatus_x                              0x552680
#define CTaskManager__GetElementDescription_x                      0x552700

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E560
#define EqSoundManager__PlayScriptMp3_x                            0x59E760
#define EqSoundManager__SoundAssistPlay_x                          0x6C4910
#define EqSoundManager__WaveInstancePlay_x                         0x6C3E00

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541770

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A4880
#define CTextureAnimation__Draw_x                                  0x9A4AC0
#define CTextureAnimation__AddBlankFrame_x                         0x9A46A0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A05A0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581CE0
#define CAltAbilityData__GetMercMaxRank_x                          0x581C70
#define CAltAbilityData__GetMaxRank_x                              0x576060

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E180

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657200
#define CharacterBase__CreateItemGlobalIndex_x                     0x6448C0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x77EC70
#define CharacterBase__GetItemByGlobalIndex_x                      0x927960
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9279B0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x725C20
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7264E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726590

//messages
#define msg_spell_worn_off_x                                       0x5C9490
#define msg_new_text_x                                             0x5BCE30
#define __msgTokenTextParam_x                                      0x5CB8F0
#define msgTokenText_x                                             0x5CBD00

//SpellManager
#define SpellManager__vftable_x                                    0xB37574
#define SpellManager__SpellManager_x                               0x6C8530
#define Spellmanager__LoadTextSpells_x                             0x6C8E30
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8700

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9EFB40

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D1D30
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0020
#define ItemGlobalIndex__IsEquippedLocation_x                      0x670E40
#define ItemGlobalIndex__IsValidIndex_x                            0x5D1ED0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9207F0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x920B40

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A7E50

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x745BB0
#define CCursorAttachment__AttachToCursor1_x                       0x745BF0
#define CCursorAttachment__Deactivate_x                            0x7472B0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x996100
#define CSidlManagerBase__CreatePageWnd_x                          0x995900
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x990DE0
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x990D70

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B5FE0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B5C60

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522230
#define CFindItemWnd__WndNotification_x                            0x5230F0
#define CFindItemWnd__Update_x                                     0x523D40
#define CFindItemWnd__PickupSelectedItem_x                         0x521910

//IString
#define IString__Append_x                                          0x558150

//Camera
#define CDisplay__cameraType_x                                     0xEDDF1C
#define EverQuest__Cameras_x                                       0xDAD0E4

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D250
#define LootFiltersManager__GetItemFilterData_x                    0x52CB80
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CBB0
#define LootFiltersManager__SetItemLootFilter_x                    0x52CDC0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x806D20

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F5800
#define CResolutionHandler__GetWindowedStyle_x                     0x6BED40

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73D7A0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92B640
#define CDistillerInfo__Instance_x                                 0x92B580

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x760660
#define CGroupWnd__UpdateDisplay_x                                 0x75F8C0

//ItemBase
#define ItemBase__IsLore_x                                         0x8F3DF0
#define ItemBase__IsLoreEquipped_x                                 0x8F3E70

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608610
#define EQPlacedItemManager__GetItemByGuid_x                       0x608750
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x6087B0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B34D0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B7D70

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517C70

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5026E0
#define FactionManagerClient__HandleFactionMessage_x               0x502F00
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5036F0
#define FactionManagerClient__GetMaxFaction_x                      0x50370F
#define FactionManagerClient__GetMinFaction_x                      0x5036C0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F560

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x977220

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E400

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F7D0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580EC0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CC4B0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B34D0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC790

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8570

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4A778

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6E9BF0
#define CAAWnd__UpdateSelected_x                                   0x6E6280
#define CAAWnd__Update_x                                           0x6E8F10

//CXRect
#define CXRect__operator_and_x                                     0x755AF0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D230

//
#define __eq_delete_x                                              0x9F5DE3
#define __eq_new_x                                                 0x9F6354

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
