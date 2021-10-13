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
#define __ExpectedVersionDate                                     "Oct 12 2021"
#define __ExpectedVersionTime                                     "11:49:52"
#define __ActualVersionDate_x                                      0xB52184
#define __ActualVersionTime_x                                      0xB52178
#define __ActualVersionBuild_x                                     0xB42374

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x664300
#define __MemChecker1_x                                            0x950130
#define __MemChecker2_x                                            0x6DEA80
#define __MemChecker3_x                                            0x6DE9F0
#define __MemChecker4_x                                            0x8A3240
#define __EncryptPad0_x                                            0xE54B80
#define __EncryptPad1_x                                            0xEAF390
#define __EncryptPad2_x                                            0xE63DA8
#define __EncryptPad3_x                                            0xE639A8
#define __EncryptPad4_x                                            0xEA01A8
#define __EP1_Data_x                                               0x34604C

// Direct Input
#define DI8__Main_x                                                0xFA2D04
#define DI8__Keyboard_x                                            0xFA2D08
#define DI8__Mouse_x                                               0xFA2C64
#define DI8__Mouse_Copy_x                                          0xDAFDC4
#define DI8__Mouse_Check_x                                         0xFA07C4
#define __AutoSkillArray_x                                         0xDB08E0
#define __Attack_x                                                 0xE4E703
#define __Autofire_x                                               0xE4E704
#define __BindList_x                                               0xDA5478
#define g_eqCommandStates_x                                        0xDA61E0
#define __Clicks_x                                                 0xDAFE7C
#define __CommandList_x                                            0xDA6D68
#define __CurrentMapLabel_x                                        0xFB3704
#define __CurrentSocial_x                                          0xC60460
#define __DoAbilityList_x                                          0xDE6224
#define __do_loot_x                                                0x5E1960
#define __DrawHandler_x                                            0x1622498
#define __GroupCount_x                                             0xF95DFA
#define __Guilds_x                                                 0xF9A260
#define __gWorld_x                                                 0xF9600C
#define __HWnd_x                                                   0xFA2C68
#define __heqmain_x                                                0xFA2C58
#define __InChatMode_x                                             0xDAFDAC
#define __LastTell_x                                               0xDB1920
#define __LMouseHeldTime_x                                         0xDAFEE8
#define __Mouse_x                                                  0xFA2CF0
#define __MouseLook_x                                              0xDAFE42
#define __MouseEventTime_x                                         0xF9BC8C
#define __gpbCommandEvent_x                                        0xF96118
#define __NetStatusToggle_x                                        0xDAFE45
#define __PCNames_x                                                0xDB0ED0
#define __RangeAttackReady_x                                       0xDB0BC4
#define __RMouseHeldTime_x                                         0xDAFEE4
#define __RunWalkState_x                                           0xDAFDB0
#define __ScreenMode_x                                             0xEE20CC
#define __ScreenX_x                                                0xDAFD64
#define __ScreenY_x                                                0xDAFD60
#define __ScreenXMax_x                                             0xDAFD68
#define __ScreenYMax_x                                             0xDAFD6C
#define __ServerHost_x                                             0xF962E3
#define __ServerName_x                                             0xDE61E4
#define __ShiftKeyDown_x                                           0xDB0440
#define __ShowNames_x                                              0xDB0D80
#define EverQuestInfo__bSocialChanged_x                            0xDE626C
#define __Socials_x                                                0xDE62E4
#define __SubscriptionType_x                                       0xFE77F0
#define __TargetAggroHolder_x                                      0xFB60B8
#define __ZoneType_x                                               0xDB0240
#define __GroupAggro_x                                             0xFB60F8
#define __LoginName_x                                              0xFA33D4
#define __Inviter_x                                                0xE4E680
#define __AttackOnAssist_x                                         0xDB0D3C
#define __UseTellWindows_x                                         0xDB1068
#define __gfMaxZoomCameraDistance_x                                0xB4A00C
#define __gfMaxCameraDistance_x                                    0xB72944
#define __pulAutoRun_x                                             0xDAFE60
#define __pulForward_x                                             0xDB10A0
#define __pulBackward_x                                            0xDB10A4
#define __pulTurnRight_x                                           0xDB10A8
#define __pulTurnLeft_x                                            0xDB10AC
#define __pulStrafeLeft_x                                          0xDB10B0
#define __pulStrafeRight_x                                         0xDB10B4

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF965F8
#define instEQZoneInfo_x                                           0xDB0038
#define pinstActiveBanker_x                                        0xF93CF8
#define pinstActiveCorpse_x                                        0xF93CF0
#define pinstActiveGMaster_x                                       0xF93CF4
#define pinstActiveMerchant_x                                      0xF93CEC
#define pinstAltAdvManager_x                                       0xEE2F08
#define pinstBandageTarget_x                                       0xF93D08
#define pinstCamActor_x                                            0xEE20C0
#define pinstCDBStr_x                                              0xEE1C78
#define pinstCDisplay_x                                            0xF93D74
#define pinstCEverQuest_x                                          0xFA2C6C
#define pinstEverQuestInfo_x                                       0xDAFD58
#define pinstCharData_x                                            0xF93D64
#define pinstCharSpawn_x                                           0xF93D40
#define pinstControlledMissile_x                                   0xF93D4C
#define pinstControlledPlayer_x                                    0xF93D40
#define pinstCResolutionHandler_x                                  0x16226C0
#define pinstCSidlManager_x                                        0x162165C
#define pinstCXWndManager_x                                        0x1621654
#define instDynamicZone_x                                          0xF9A138
#define pinstDZMember_x                                            0xF9A248
#define pinstDZTimerInfo_x                                         0xF9A24C
#define pinstEqLogin_x                                             0xFA2D20
#define instEQMisc_x                                               0xD998D8
#define pinstEQSoundManager_x                                      0xEE3818
#define pinstEQSpellStrings_x                                      0xED2918
#define instExpeditionLeader_x                                     0xF9A182
#define instExpeditionName_x                                       0xF9A1C2
#define pinstGroup_x                                               0xF95DF6
#define pinstImeManager_x                                          0x1621658
#define pinstLocalPlayer_x                                         0xF93CE8
#define pinstMercenaryData_x                                       0xF9D784
#define pinstMercenaryStats_x                                      0xFB6184
#define pinstModelPlayer_x                                         0xF93D00
#define pinstPCData_x                                              0xF93D64
#define pinstSkillMgr_x                                            0xF9F870
#define pinstSpawnManager_x                                        0xF9E348
#define pinstSpellManager_x                                        0xF9FAB0
#define pinstSpellSets_x                                           0xE4732C
#define pinstStringTable_x                                         0xF93D70
#define pinstSwitchManager_x                                       0xF93B98
#define pinstTarget_x                                              0xF93D3C
#define pinstTargetObject_x                                        0xF93D5C
#define pinstTargetSwitch_x                                        0xF93D60
#define pinstTaskMember_x                                          0xD99420
#define pinstTrackTarget_x                                         0xF93D44
#define pinstTradeTarget_x                                         0xF93CFC
#define instTributeActive_x                                        0xD998F9
#define pinstViewActor_x                                           0xEE20BC
#define pinstWorldData_x                                           0xF93D6C
#define pinstZoneAddr_x                                            0xDB02D8
#define pinstPlayerPath_x                                          0xF9E3E0
#define pinstTargetIndicator_x                                     0xF9FD18
#define EQObject_Top_x                                             0xF93D58

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE212C
#define pinstCAchievementsWnd_x                                    0xEE1D9C
#define pinstCActionsWnd_x                                         0xEE20B4
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE20DC
#define pinstCAdvancedLootWnd_x                                    0xEE20B8
#define pinstCAdventureLeaderboardWnd_x                            0xFACF28
#define pinstCAdventureRequestWnd_x                                0xFACFD8
#define pinstCAdventureStatsWnd_x                                  0xFAD088
#define pinstCAggroMeterWnd_x                                      0xEE1E2C
#define pinstCAlarmWnd_x                                           0xEE2124
#define pinstCAlertHistoryWnd_x                                    0xEE209C
#define pinstCAlertStackWnd_x                                      0xEE2078
#define pinstCAlertWnd_x                                           0xEE2080
#define pinstCAltStorageWnd_x                                      0xFAD3E8
#define pinstCAudioTriggersWindow_x                                0xEC4C48
#define pinstCAuraWnd_x                                            0xEE20FC
#define pinstCAvaZoneWnd_x                                         0xEE1D88
#define pinstCBandolierWnd_x                                       0xEE210C
#define pinstCBankWnd_x                                            0xEE2098
#define pinstCBarterMerchantWnd_x                                  0xFAE628
#define pinstCBarterSearchWnd_x                                    0xFAE6D8
#define pinstCBarterWnd_x                                          0xFAE788
#define pinstCBazaarConfirmationWnd_x                              0xEE2138
#define pinstCBazaarSearchWnd_x                                    0xEE1DC8
#define pinstCBazaarWnd_x                                          0xEE1D6C
#define pinstCBlockedBuffWnd_x                                     0xEE1DF4
#define pinstCBlockedPetBuffWnd_x                                  0xEE1DFC
#define pinstCBodyTintWnd_x                                        0xEE1D24
#define pinstCBookWnd_x                                            0xEE20A4
#define pinstCBreathWnd_x                                          0xEE2130
#define pinstCBuffWindowNORMAL_x                                   0xEE1DEC
#define pinstCBuffWindowSHORT_x                                    0xEE1DF0
#define pinstCBugReportWnd_x                                       0xEE1DA8
#define pinstCButtonWnd_x                                          0x16218C0
#define pinstCCastingWnd_x                                         0xEE1E28
#define pinstCCastSpellWnd_x                                       0xEE1E38
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE1DCC
#define pinstCChatWindowManager_x                                  0xFAF230
#define pinstCClaimWnd_x                                           0xFAF388
#define pinstCColorPickerWnd_x                                     0xEE1DE0
#define pinstCCombatAbilityWnd_x                                   0xEE20E8
#define pinstCCombatSkillsSelectWnd_x                              0xEE20EC
#define pinstCCompassWnd_x                                         0xEE2104
#define pinstCConfirmationDialog_x                                 0xFB4250
#define pinstCContainerMgr_x                                       0xEE2128
#define pinstCContextMenuManager_x                                 0x1621610
#define pinstCCursorAttachment_x                                   0xEE1E20
#define pinstCDynamicZoneWnd_x                                     0xFAF950
#define pinstCEditLabelWnd_x                                       0xEE1D8C
#define pinstCEQMainWnd_x                                          0xFAFB98
#define pinstCEventCalendarWnd_x                                   0xEE2118
#define pinstCExtendedTargetWnd_x                                  0xEE1E24
#define pinstCPlayerCustomizationWnd_x                             0xEE1DD4
#define pinstCFactionWnd_x                                         0xEE1E34
#define pinstCFellowshipWnd_x                                      0xFAFD98
#define pinstCFileSelectionWnd_x                                   0xEE20F8
#define pinstCFindItemWnd_x                                        0xEE1D28
#define pinstCFindLocationWnd_x                                    0xFAFEF0
#define pinstCFriendsWnd_x                                         0xEE20F4
#define pinstCGemsGameWnd_x                                        0xEE211C
#define pinstCGiveWnd_x                                            0xEE1D78
#define pinstCGroupSearchFiltersWnd_x                              0xEE1E0C
#define pinstCGroupSearchWnd_x                                     0xFB02E8
#define pinstCGroupWnd_x                                           0xFB0398
#define pinstCGuildBankWnd_x                                       0xFB0448
#define pinstCGuildCreationWnd_x                                   0xFB04F8
#define pinstCGuildMgmtWnd_x                                       0xFB05A8
#define pinstCharacterCreation_x                                   0xEE1E1C
#define pinstCHelpWnd_x                                            0xEE2084
#define pinstCHeritageSelectionWnd_x                               0xEE1DD8
#define pinstCHotButtonWnd_x                                       0xFB2700
#define pinstCHotButtonWnd1_x                                      0xFB2700
#define pinstCHotButtonWnd2_x                                      0xFB2704
#define pinstCHotButtonWnd3_x                                      0xFB2708
#define pinstCHotButtonWnd4_x                                      0xFB270C
#define pinstCIconSelectionWnd_x                                   0xEE1DA4
#define pinstCInspectWnd_x                                         0xEE1D98
#define pinstCInventoryWnd_x                                       0xEE2088
#define pinstCInvSlotMgr_x                                         0xEE2110
#define pinstCItemDisplayManager_x                                 0xFB2C58
#define pinstCItemExpTransferWnd_x                                 0xFB2D88
#define pinstCItemOverflowWnd_x                                    0xEE1D5C
#define pinstCJournalCatWnd_x                                      0xEE2148
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE213C
#define pinstCJournalTextWnd_x                                     0xEE213C
#define pinstCKeyRingWnd_x                                         0xEE2090
#define pinstCLargeDialogWnd_x                                     0xFB4ED0
#define pinstCLayoutCopyWnd_x                                      0xFB30D8
#define pinstCLFGuildWnd_x                                         0xFB3188
#define pinstCLoadskinWnd_x                                        0xEE2120
#define pinstCLootFiltersCopyWnd_x                                 0xEE1188
#define pinstCLootFiltersWnd_x                                     0xEE2140
#define pinstCLootSettingsWnd_x                                    0xEE2144
#define pinstCLootWnd_x                                            0xEE20A8
#define pinstCMailAddressBookWnd_x                                 0xEE1DBC
#define pinstCMailCompositionWnd_x                                 0xEE1DB4
#define pinstCMailIgnoreListWnd_x                                  0xEE1DC0
#define pinstCMailWnd_x                                            0xEE1DAC
#define pinstCManageLootWnd_x                                      0xEE3388
#define pinstCMapToolbarWnd_x                                      0xEE1D80
#define pinstCMapViewWnd_x                                         0xEE1D70
#define pinstCMarketplaceWnd_x                                     0xEE1D50
#define pinstCMerchantWnd_x                                        0xEE1D54
#define pinstCMIZoneSelectWnd_x                                    0xFB39C0
#define pinstCMusicPlayerWnd_x                                     0xEE2114
#define pinstCNameChangeMercWnd_x                                  0xEE1E4C
#define pinstCNameChangePetWnd_x                                   0xEE1E48
#define pinstCNameChangeWnd_x                                      0xEE1DB0
#define pinstCNoteWnd_x                                            0xEE207C
#define pinstCObjectPreviewWnd_x                                   0xEE1DC4
#define pinstCOptionsWnd_x                                         0xEE1DE4
#define pinstCOverseerWnd_x                                        0xEE1D4C
#define pinstCPetInfoWnd_x                                         0xEE20AC
#define pinstCPetitionQWnd_x                                       0xEE1E04
#define pinstCPlayerNotesWnd_x                                     0xEE2108
#define pinstCPlayerWnd_x                                          0xEE1D20
#define pinstCPopupWndManager_x                                    0xFB4250
#define pinstCProgressionSelectionWnd_x                            0xFB4300
#define pinstCPurchaseGroupWnd_x                                   0xEE1D60
#define pinstCPurchaseWnd_x                                        0xEE1D58
#define pinstCPvPLeaderboardWnd_x                                  0xFB43B0
#define pinstCPvPStatsWnd_x                                        0xFB4460
#define pinstCQuantityWnd_x                                        0xEE20A0
#define pinstCRaceChangeWnd_x                                      0xEE1DB8
#define pinstCRaidOptionsWnd_x                                     0xEE1E30
#define pinstCRaidWnd_x                                            0xEE1E3C
#define pinstCRealEstateItemsWnd_x                                 0xEE1DDC
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE1E18
#define pinstCRealEstateManageWnd_x                                0xEE1E00
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE1E08
#define pinstCRealEstatePlotSearchWnd_x                            0xEE1E10
#define pinstCRealEstatePurchaseWnd_x                              0xEE1E14
#define pinstCRespawnWnd_x                                         0xEE2100
#define pinstCRewardSelectionWnd_x                                 0xFB4BA8
#define pinstCSelectorWnd_x                                        0xEE1D68
#define pinstCSendMoneyWnd_x                                       0xEE1D84
#define pinstCServerListWnd_x                                      0xEE20F0
#define pinstCSkillsSelectWnd_x                                    0xEE20E0
#define pinstCSkillsWnd_x                                          0xEE20D8
#define pinstCSocialEditWnd_x                                      0xEE1DA0
#define pinstCSocialWnd_x                                          0xEE2134
#define pinstCSpellBookWnd_x                                       0xEE1E5C
#define pinstCStoryWnd_x                                           0xEE1D18 
#define pinstCTargetOfTargetWnd_x                                  0xFB6208
#define pinstCTargetWnd_x                                          0xEE1D94
#define pinstCTaskOverlayWnd_x                                     0xEE214C
#define pinstCTaskSelectWnd_x                                      0xFB6360
#define pinstCTaskManager_x                                        0xC6B268
#define pinstCTaskTemplateSelectWnd_x                              0xFB6410
#define pinstCTaskWnd_x                                            0xFB64C0
#define pinstCTextEntryWnd_x                                       0xEE20E4
#define pinstCTimeLeftWnd_x                                        0xEE1DF8
#define pinstCTipWndCONTEXT_x                                      0xFB66C4
#define pinstCTipWndOFDAY_x                                        0xFB66C0
#define pinstCTitleWnd_x                                           0xFB6770
#define pinstCTrackingWnd_x                                        0xEE1D90
#define pinstCTradeskillWnd_x                                      0xFB68D8
#define pinstCTradeWnd_x                                           0xEE1D64
#define pinstCTrainWnd_x                                           0xEE20B0
#define pinstCTributeBenefitWnd_x                                  0xFB6AD8
#define pinstCTributeMasterWnd_x                                   0xFB6B88
#define pinstCTributeTrophyWnd_x                                   0xFB6C38
#define pinstCVideoModesWnd_x                                      0xEE1D74
#define pinstCVoiceMacroWnd_x                                      0xFA0130
#define pinstCVoteResultsWnd_x                                     0xEE1E44
#define pinstCVoteWnd_x                                            0xEE1E40
#define pinstCZoneGuideWnd_x                                       0xEE208C
#define pinstCZonePathWnd_x                                        0xEE2094

#define pinstEQSuiteTextureLoader_x                                0xEAF950
#define pinstItemIconCache_x                                       0xFAFB50
#define pinstLootFiltersManager_x                                  0xEE1238
#define pinstRewardSelectionWnd_x                                  0xFB4BA8

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DCC40
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DCED0
#define __ConvertItemTags_x                                        0x5FA0B0
#define __CleanItemTags_x                                          0x47DA40
#define __DoesFileExist_x                                          0x9530C0
#define __EQGetTime_x                                              0x94FDA0
#define __ExecuteCmd_x                                             0x5D5070
#define __FixHeading_x                                             0x9EE3D0
#define __FlushDxKeyboard_x                                        0x6D9D80
#define __GameLoop_x                                               0x6DD680
#define __get_bearing_x                                            0x5DC7E0
#define __get_melee_range_x                                        0x5DD110
#define __GetAnimationCache_x                                      0x74BDA0
#define __GetGaugeValueFromEQ_x                                    0x85BFB0
#define __GetLabelFromEQ_x                                         0x85D9C0
#define __GetXTargetType_x                                         0x9F0740
#define __HandleMouseWheel_x                                       0x6DEB10
#define __HeadingDiff_x                                            0x9EE430
#define __HelpPath_x                                               0xF9B94C
#define __ExecuteFrontEnd_x                                        0x6DA560
#define __NewUIINI_x                                               0x85BC80
#define __ProcessGameEvents_x                                      0x6435E0
#define __ProcessMouseEvent_x                                      0x642CE0
#define __SaveColors_x                                             0x5703D0
#define __STMLToText_x                                             0x98BF20
#define __ToggleKeyRingItem_x                                      0x5288C0
#define CMemoryMappedFile__SetFile_x                               0xADEB50
#define CrashDetected_x                                            0x6DC290
#define DrawNetStatus_x                                            0x672880
#define Expansion_HoT_x                                            0xDB0D28
#define Teleport_Table_Size_x                                      0xF961A0
#define Teleport_Table_x                                           0xF93D78
#define Util__FastTime_x                                           0x94F960
#define __CopyLayout_x                                             0x65F5E0
#define __WndProc_x                                                0x6DC790
#define __ProcessKeyboardEvent_x                                   0x6DBCD0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491980
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4C0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B340
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495660
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494894

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x579410
#define AltAdvManager__IsAbilityReady_x                            0x577FF0
#define AltAdvManager__GetAAById_x                                 0x578390
#define AltAdvManager__CanTrainAbility_x                           0x578400
#define AltAdvManager__CanSeeAbility_x                             0x5787B0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D16E0
#define CharacterZoneClient__HasSkill_x                            0x4DCE30
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE580
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8B30
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C12E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFA80
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFB80
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFCC0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAD70
#define CharacterZoneClient__BardCastBard_x                        0x4CDD90
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5220
#define CharacterZoneClient__GetEffect_x                           0x4C1220
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC380
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC430
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC4D0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC690
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC870
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8AB0
#define CharacterZoneClient__FindItemByGuid_x                      0x685AC0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEB60

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x7079B0
#define CBankWnd__WndNotification_x                                0x707750

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x7123C0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70D020
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70AFF0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716AF0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x9894C0
#define CButtonWnd__CButtonWnd_x                                   0x987E10

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x739480
#define CChatManager__InitContextMenu_x                            0x7323B0
#define CChatManager__FreeChatWindow_x                             0x738040
#define CChatManager__SetLockedActiveChatWindow_x                  0x739160
#define CChatManager__CreateChatWindow_x                           0x738670

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFC30

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99F320
#define CContextMenu__dCContextMenu_x                              0x99F560
#define CContextMenu__AddMenuItem_x                                0x99F570
#define CContextMenu__RemoveMenuItem_x                             0x99F880
#define CContextMenu__RemoveAllMenuItems_x                         0x99F8A0
#define CContextMenu__CheckMenuItem_x                              0x99F900
#define CContextMenu__SetMenuItem_x                                0x99F7A0
#define CContextMenu__AddSeparator_x                               0x99F700

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99FE90
#define CContextMenuManager__RemoveMenu_x                          0x99FF00
#define CContextMenuManager__PopupMenu_x                           0x99FFC0
#define CContextMenuManager__Flush_x                               0x99FE30
#define CContextMenuManager__GetMenu_x                             0x49D9B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x745D70

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x92A700
#define CChatService__GetFriendName_x                              0x92A710

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x739DE0
#define CChatWindow__Clear_x                                       0x73B240
#define CChatWindow__WndNotification_x                             0x73B9D0
#define CChatWindow__AddHistory_x                                  0x73AAA0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99C3F0
#define CComboWnd__Draw_x                                          0x99B880
#define CComboWnd__GetCurChoice_x                                  0x99C1C0
#define CComboWnd__GetListRect_x                                   0x99BD30
#define CComboWnd__GetTextRect_x                                   0x99C460
#define CComboWnd__InsertChoice_x                                  0x99BEC0
#define CComboWnd__SetColors_x                                     0x99BE90
#define CComboWnd__SetChoice_x                                     0x99C1A0
#define CComboWnd__GetItemCount_x                                  0x99C1D0
#define CComboWnd__GetCurChoiceText_x                              0x99C200
#define CComboWnd__GetChoiceText_x                                 0x99C1E0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99BF60

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x7433B0
#define CContainerWnd__vftable_x                                   0xB5B3DC
#define CContainerWnd__SetContainer_x                              0x744C20

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56AC10
#define CDisplay__PreZoneMainUI_x                                  0x56AC20
#define CDisplay__CleanGameUI_x                                    0x5701B0
#define CDisplay__GetClickedActor_x                                0x5629E0
#define CDisplay__GetUserDefinedColor_x                            0x55A740
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5644F0
#define CDisplay__is3dON_x                                         0x55F270
#define CDisplay__ReloadUI_x                                       0x569F30
#define CDisplay__WriteTextHD2_x                                   0x55F060
#define CDisplay__TrueDistance_x                                   0x5664D0
#define CDisplay__SetViewActor_x                                   0x562300
#define CDisplay__GetFloorHeight_x                                 0x55F330
#define CDisplay__SetRenderWindow_x                                0x55DCB0
#define CDisplay__ToggleScreenshotMode_x                           0x561DD0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C1BC0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A2E60
#define CEditWnd__EnsureCaretVisible_x                             0x9A51E0
#define CEditWnd__GetCaretPt_x                                     0x9A4040
#define CEditWnd__GetCharIndexPt_x                                 0x9A3DF0
#define CEditWnd__GetDisplayString_x                               0x9A3C90
#define CEditWnd__GetHorzOffset_x                                  0x9A23B0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A50F0
#define CEditWnd__GetSelStartPt_x                                  0x9A40A0
#define CEditWnd__GetSTMLSafeText_x                                0x9A3AA0
#define CEditWnd__PointFromPrintableChar_x                         0x9A4D30
#define CEditWnd__SelectableCharFromPoint_x                        0x9A4E90
#define CEditWnd__SetEditable_x                                    0x9A4170
#define CEditWnd__SetWindowTextA_x                                 0x9A37F0
#define CEditWnd__ReplaceSelection_x                               0x9A48F0
#define CEditWnd__ReplaceSelection1_x                              0x9A4870

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62ECC0
#define CEverQuest__ClickedPlayer_x                                0x620200
#define CEverQuest__CreateTargetIndicator_x                        0x640550
#define CEverQuest__DeleteTargetIndicator_x                        0x6405E0
#define CEverQuest__DoTellWindow_x                                 0x4EFD30
#define CEverQuest__OutputTextToLog_x                              0x4F0000
#define CEverQuest__DropHeldItemOnGround_x                         0x6152D0
#define CEverQuest__dsp_chat_x                                     0x4F03D0
#define CEverQuest__trimName_x                                     0x63BB40
#define CEverQuest__Emote_x                                        0x62F380
#define CEverQuest__EnterZone_x                                    0x629040
#define CEverQuest__GetBodyTypeDesc_x                              0x6348E0
#define CEverQuest__GetClassDesc_x                                 0x634F20
#define CEverQuest__GetClassThreeLetterCode_x                      0x635520
#define CEverQuest__GetDeityDesc_x                                 0x63ED00
#define CEverQuest__GetLangDesc_x                                  0x6356E0
#define CEverQuest__GetRaceDesc_x                                  0x634F00
#define CEverQuest__InterpretCmd_x                                 0x63F370
#define CEverQuest__LeftClickedOnPlayer_x                          0x6197C0
#define CEverQuest__LMouseUp_x                                     0x617880
#define CEverQuest__RightClickedOnPlayer_x                         0x61A3B0
#define CEverQuest__RMouseUp_x                                     0x618B40
#define CEverQuest__SetGameState_x                                 0x615050
#define CEverQuest__UPCNotificationFlush_x                         0x63BA60
#define CEverQuest__IssuePetCommand_x                              0x636CE0
#define CEverQuest__ReportSuccessfulHit_x                          0x630C60

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756D50
#define CGaugeWnd__CalcLinesFillRect_x                             0x756DB0
#define CGaugeWnd__Draw_x                                          0x756360

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B48E0
#define CGuild__GetGuildName_x                                     0x4B3100
#define CGuild__GetGuildIndex_x                                    0x4B3820

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774280

//CHotButton
#define CHotButton__SetCheck_x                                     0x653B70
#define CHotButton__SetButtonSize_x                                0x653F30

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781440
#define CInvSlotMgr__MoveItem_x                                    0x780050
#define CInvSlotMgr__SelectSlot_x                                  0x781500

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77E880
#define CInvSlot__SliderComplete_x                                 0x77BBE0
#define CInvSlot__GetItemBase_x                                    0x77B460
#define CInvSlot__UpdateItem_x                                     0x77B650

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782310
#define CInvSlotWnd__HandleLButtonUp_x                             0x782D20

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856410
#define CItemDisplayWnd__UpdateStrings_x                           0x79AC60
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78FB80
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x7900F0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B370
#define CItemDisplayWnd__AboutToShow_x                             0x79A850
#define CItemDisplayWnd__WndNotification_x                         0x79CB10
#define CItemDisplayWnd__RequestConvertItem_x                      0x79C1A0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799720
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79A640

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88B7E0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2280
#define CItemDisplayManager__ShowItem_x                            0x7A16E0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A8DC0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96E6C0
#define CListWnd__dCListWnd_x                                      0x96E9C0
#define CListWnd__AddColumn_x                                      0x9735C0
#define CListWnd__AddColumn1_x                                     0x9736E0
#define CListWnd__AddLine_x                                        0x973A50
#define CListWnd__AddString_x                                      0x973850
#define CListWnd__CalculateFirstVisibleLine_x                      0x973370
#define CListWnd__CalculateVSBRange_x                              0x973150
#define CListWnd__ClearSel_x                                       0x974340
#define CListWnd__ClearAllSel_x                                    0x974390
#define CListWnd__CloseAndUpdateEditWindow_x                       0x974E40
#define CListWnd__Compare_x                                        0x9728D0
#define CListWnd__Draw_x                                           0x96EB80
#define CListWnd__DrawColumnSeparators_x                           0x9716C0
#define CListWnd__DrawHeader_x                                     0x971B20
#define CListWnd__DrawItem_x                                       0x972170
#define CListWnd__DrawLine_x                                       0x971830
#define CListWnd__DrawSeparator_x                                  0x971760
#define CListWnd__EnableLine_x                                     0x970F70
#define CListWnd__EnsureVisible_x                                  0x974D60
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x974280
#define CListWnd__GetColumnTooltip_x                               0x970AF0
#define CListWnd__GetColumnMinWidth_x                              0x970B60
#define CListWnd__GetColumnWidth_x                                 0x970A70
#define CListWnd__GetCurSel_x                                      0x970410
#define CListWnd__GetItemAtPoint_x                                 0x9711F0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x971260
#define CListWnd__GetItemColor_x                                   0x970790
#define CListWnd__GetItemData_x                                    0x970490
#define CListWnd__GetItemHeight_x                                  0x970840
#define CListWnd__GetItemIcon_x                                    0x970610
#define CListWnd__GetItemRect_x                                    0x971060
#define CListWnd__GetItemText_x                                    0x9704D0
#define CListWnd__GetSelList_x                                     0x9743E0
#define CListWnd__GetSeparatorRect_x                               0x9714D0
#define CListWnd__InsertLine_x                                     0x973EB0
#define CListWnd__RemoveLine_x                                     0x9740D0
#define CListWnd__SetColors_x                                      0x973120
#define CListWnd__SetColumnJustification_x                         0x972E50
#define CListWnd__SetColumnLabel_x                                 0x9737F0
#define CListWnd__SetItemOnlyDrawTexture_x                         0x974A90
#define CListWnd__SetColumnWidth_x                                 0x972D60
#define CListWnd__SetCurSel_x                                      0x9741D0
#define CListWnd__SetItemColor_x                                   0x974A20
#define CListWnd__SetItemData_x                                    0x9749E0
#define CListWnd__SetItemText_x                                    0x974600
#define CListWnd__ShiftColumnSeparator_x                           0x972F10
#define CListWnd__Sort_x                                           0x972BC0
#define CListWnd__ToggleSel_x                                      0x974200
#define CListWnd__SetColumnsSizable_x                              0x972FB0
#define CListWnd__SetItemWnd_x                                     0x9748A0
#define CListWnd__GetItemWnd_x                                     0x970660
#define CListWnd__SetItemIcon_x                                    0x974680
#define CListWnd__CalculateCustomWindowPositions_x                 0x973470
#define CListWnd__SetVScrollPos_x                                  0x972D40

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0240
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BE860
#define CMapViewWnd__HandleLButtonDown_x                           0x7BB6F0
#define CMapViewWnd__WndNotification_x                             0x7C2B80

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3630
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E3F90
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4620
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7900
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E20B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EDB00
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3280

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F7570
#define CPacketScrambler__hton_x                                   0x8F7560

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x992590
#define CSidlManager__FindScreenPieceTemplate_x                    0x992960
#define CSidlManager__FindScreenPieceTemplate1_x                   0x992790
#define CSidlManager__CreateXWndFromTemplate_x                     0x995E10
#define CSidlManager__CreateXWndFromTemplate1_x                    0x9960B0
#define CSidlManagerbase__CreateXWnd_x                             0x9960F0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84C570
#define CSidlManager__CreateLabel_x                                0x84C130

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84BBA0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98E2A0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98E1A0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BBE10
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98DB20
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98D810
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98D8E0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98D9B0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98EB60
#define CSidlScreenWnd__EnableIniStorage_x                         0x98F040
#define CSidlScreenWnd__GetSidlPiece_x                             0x98ED50
#define CSidlScreenWnd__Init1_x                                    0x98D2E0
#define CSidlScreenWnd__LoadIniInfo_x                              0x98F090
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98FC80
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98C6F0
#define CSidlScreenWnd__StoreIniInfo_x                             0x98F7F0
#define CSidlScreenWnd__StoreIniVis_x                              0x98FB70
#define CSidlScreenWnd__WndNotification_x                          0x98EA30
#define CSidlScreenWnd__GetChildItem_x                             0x98EFC0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97D3D0
#define CSidlScreenWnd__m_layoutCopy_x                             0x16214E0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C1AF0
#define CSkillMgr__GetSkillCap_x                                   0x6C1CC0
#define CSkillMgr__GetNameToken_x                                  0x6C1330
#define CSkillMgr__IsActivatedSkill_x                              0x6C1420
#define CSkillMgr__IsCombatSkill_x                                 0x6C1390

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A0F90
#define CSliderWnd__SetValue_x                                     0x9A0DC0
#define CSliderWnd__SetNumTicks_x                                  0x9A0E20

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x852DF0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AA4E0
#define CStmlWnd__ParseSTML_x                                      0x9AB6A0
#define CStmlWnd__CalculateHSBRange_x                              0x9AB460
#define CStmlWnd__CalculateVSBRange_x                              0x9AB3D0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B02D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B0F70
#define CStmlWnd__ForceParseNow_x                                  0x9AAA50
#define CStmlWnd__GetNextTagPiece_x                                0x9B0230
#define CStmlWnd__GetVisibleText_x                                 0x9AAA70
#define CStmlWnd__InitializeWindowVariables_x                      0x9B0DC0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A9B80
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A9BF0
#define CStmlWnd__SetSTMLText_x                                    0x9A8960
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B2190
#define CStmlWnd__UpdateHistoryString_x                            0x9B1170

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A7800
#define CTabWnd__DrawCurrentPage_x                                 0x9A8190
#define CTabWnd__DrawTab_x                                         0x9A7D80
#define CTabWnd__GetCurrentPage_x                                  0x9A6F60
#define CTabWnd__GetPageInnerRect_x                                0x9A7190
#define CTabWnd__GetTabInnerRect_x                                 0x9A70D0
#define CTabWnd__GetTabRect_x                                      0x9A6F90
#define CTabWnd__InsertPage_x                                      0x9A7380
#define CTabWnd__RemovePage_x                                      0x9A74D0
#define CTabWnd__SetPage_x                                         0x9A7210
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A7700
#define CTabWnd__UpdatePage_x                                      0x9A7B70
#define CTabWnd__GetPageFromTabIndex_x                             0x9A7CC0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A6F50

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x9A68F0
#define CPageWnd__FlashTab_x                                       0x9A6950

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC990

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x9797E0
#define CTextureFont__GetTextExtent_x                              0x979AE0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B88C0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x964170

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x542330
#define CXStr__CXStr1_x                                            0x482710
#define CXStr__CXStr3_x                                            0x94BCF0
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x94BF30
#define CXStr__operator_equal1_x                                   0x94BF70
#define CXStr__operator_plus_equal1_x                              0x94C9D0
#define CXStr__SetString_x                                         0x94E870
#define CXStr__operator_char_p_x                                   0x94C420
#define CXStr__GetChar_x                                           0x94E1D0
#define CXStr__Delete_x                                            0x94DAA0
#define CXStr__GetUnicode_x                                        0x94E240
#define CXStr__Insert_x                                            0x94E2A0
#define CXStr__FindNext_x                                          0x94DEF0
#define CXStr__Copy_x                                              0x94D8B0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99EF80
#define CXWnd__BringToTop_x                                        0x980EC0
#define CXWnd__ClrFocus_x                                          0x980840
#define CXWnd__Destroy_x                                           0x9808F0
#define CXWnd__DoAllDrawing_x                                      0x97CA10
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97C9E0
#define CXWnd__DrawColoredRect_x                                   0x97CFB0
#define CXWnd__DrawTooltip_x                                       0x97AF50
#define CXWnd__DrawTooltipAtPoint_x                                0x97B010
#define CXWnd__GetBorderFrame_x                                    0x97CC50
#define CXWnd__GetChildWndAt_x                                     0x980F60
#define CXWnd__GetClientClipRect_x                                 0x97F050
#define CXWnd__GetScreenClipRect_x                                 0x97F120
#define CXWnd__GetScreenRect_x                                     0x97F2E0
#define CXWnd__GetRelativeRect_x                                   0x97F3B0
#define CXWnd__GetTooltipRect_x                                    0x97D000
#define CXWnd__GetWindowTextA_x                                    0x4EFBD0
#define CXWnd__IsActive_x                                          0x97D750
#define CXWnd__IsDescendantOf_x                                    0x97FD70
#define CXWnd__IsReallyVisible_x                                   0x97FDA0
#define CXWnd__IsType_x                                            0x9816E0
#define CXWnd__Move_x                                              0x97FE10
#define CXWnd__Move1_x                                             0x97FF10
#define CXWnd__ProcessTransition_x                                 0x9809D0
#define CXWnd__Refade_x                                            0x9801E0
#define CXWnd__Resize_x                                            0x980470
#define CXWnd__Right_x                                             0x980CB0
#define CXWnd__SetFocus_x                                          0x980800
#define CXWnd__SetFont_x                                           0x980870
#define CXWnd__SetKeyTooltip_x                                     0x9814A0
#define CXWnd__SetMouseOver_x                                      0x97E100
#define CXWnd__StartFade_x                                         0x97FC50
#define CXWnd__GetChildItem_x                                      0x9810E0
#define CXWnd__SetParent_x                                         0x97FA80
#define CXWnd__Minimize_x                                          0x9804E0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BCE60

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x983F50
#define CXWndManager__DrawWindows_x                                0x9840A0
#define CXWndManager__GetKeyboardFlags_x                           0x986A30
#define CXWndManager__HandleKeyboardMsg_x                          0x986610
#define CXWndManager__RemoveWnd_x                                  0x986D00
#define CXWndManager__RemovePendingDeletionWnd_x                   0x9871C0

// CDBStr
#define CDBStr__GetString_x                                        0x559270

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5BA0
#define EQ_Character__Cur_HP_x                                     0x4D9AA0
#define EQ_Character__Cur_Mana_x                                   0x4E0CB0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9220
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B86C0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8810
#define EQ_Character__GetHPRegen_x                                 0x4E6780
#define EQ_Character__GetEnduranceRegen_x                          0x4E6D40
#define EQ_Character__GetManaRegen_x                               0x4E7180
#define EQ_Character__Max_Endurance_x                              0x682380
#define EQ_Character__Max_HP_x                                     0x4D98D0
#define EQ_Character__Max_Mana_x                                   0x682160
#define EQ_Character__doCombatAbility_x                            0x684EF0
#define EQ_Character__UseSkill_x                                   0x4E8350
#define EQ_Character__GetConLevel_x                                0x67A4C0
#define EQ_Character__IsExpansionFlag_x                            0x5D38C0
#define EQ_Character__TotalEffect_x                                0x4CD6A0
#define EQ_Character__GetPCSpellAffect_x                           0x4CA050
#define EQ_Character__SpellDuration_x                              0x4C9A90
#define EQ_Character__MySpellDuration_x                            0x4B6D90
#define EQ_Character__GetAdjustedSkill_x                           0x4DCBF0
#define EQ_Character__GetBaseSkill_x                               0x4DDB90
#define EQ_Character__CanUseItem_x                                 0x4E0FE0
#define EQ_Character__CanMedOnHorse_x                              0x4E7E90

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917F00

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69A630

//PcClient
#define PcClient__vftable_x                                        0xB4EF00
#define PcClient__PcClient_x                                       0x677740

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0180
#define CCharacterListWnd__EnterWorld_x                            0x4BFB50
#define CCharacterListWnd__Quit_x                                  0x4BF870
#define CCharacterListWnd__UpdateList_x                            0x4BFD40

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x659C80
#define EQ_Item__CreateItemTagString_x                             0x8F0260
#define EQ_Item__IsStackable_x                                     0x8F5500
#define EQ_Item__GetImageNum_x                                     0x8F1FC0
#define EQ_Item__CreateItemClient_x                                0x658C20
#define EQ_Item__GetItemValue_x                                    0x8F3200
#define EQ_Item__ValueSellMerchant_x                               0x8F7280
#define EQ_Item__IsKeyRingItem_x                                   0x8F4CA0
#define EQ_Item__CanGoInBag_x                                      0x659DA0
#define EQ_Item__IsEmpty_x                                         0x8F4670
#define EQ_Item__GetMaxItemCount_x                                 0x8F3620
#define EQ_Item__GetHeldItem_x                                     0x8F1E70
#define EQ_Item__CanGemFitInSlot_x                                 0x8EFA30

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57A220
#define EQ_LoadingS__Array_x                                       0xD9DD30

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x6830B0
#define EQ_PC__GetAlternateAbilityId_x                             0x901330
#define EQ_PC__GetCombatAbility_x                                  0x9018B0
#define EQ_PC__GetCombatAbilityTimer_x                             0x901920
#define EQ_PC__GetItemRecastTimer_x                                0x6854F0
#define EQ_PC__HasLoreItem_x                                       0x67AE20
#define EQ_PC__AlertInventoryChanged_x                             0x679D80
#define EQ_PC__GetPcZoneClient_x                                   0x6AAD40
#define EQ_PC__RemoveMyAffect_x                                    0x688D60
#define EQ_PC__GetKeyRingItems_x                                   0x902410
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x901F70
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9025F0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D9C50
#define EQItemList__add_object_x                                   0x60A1C0
#define EQItemList__add_item_x                                     0x5DA230
#define EQItemList__delete_item_x                                  0x5DA280
#define EQItemList__FreeItemList_x                                 0x5DA190

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x555320

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69C060
#define EQPlayer__dEQPlayer_x                                      0x68E8B0
#define EQPlayer__DoAttack_x                                       0x6A4A70
#define EQPlayer__EQPlayer_x                                       0x68F100
#define EQPlayer__SetNameSpriteState_x                             0x6936C0
#define EQPlayer__SetNameSpriteTint_x                              0x694590
#define PlayerBase__HasProperty_j_x                                0x9EC7A0
#define EQPlayer__IsTargetable_x                                   0x9ECD00
#define EQPlayer__CanSee_x                                         0x9ECAF0
#define EQPlayer__CanSee1_x                                        0x9ECBC0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EC860

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A8830
#define PlayerZoneClient__GetLevel_x                               0x6AAD80
#define PlayerZoneClient__IsValidTeleport_x                        0x60B670
#define PlayerZoneClient__LegalPlayerRace_x                        0x5721D0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69F210
#define EQPlayerManager__GetSpawnByName_x                          0x69F2C0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69F350

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65D590
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65D660
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65D6A0
#define KeypressHandler__ClearCommandStateArray_x                  0x65EB60
#define KeypressHandler__HandleKeyDown_x                           0x65EB80
#define KeypressHandler__HandleKeyUp_x                             0x65EC20
#define KeypressHandler__SaveKeymapping_x                          0x65F1D0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BBEF0
#define MapViewMap__SaveEx_x                                       0x7BF42F
#define MapViewMap__SetZoom_x                                      0x7C5150

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x915D90

// StringTable 
#define StringTable__getString_x                                   0x910AE0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6889B0
#define PcZoneClient__RemovePetEffect_x                            0x689010
#define PcZoneClient__HasAlternateAbility_x                        0x681FC0
#define PcZoneClient__GetCurrentMod_x                              0x4EBD00
#define PcZoneClient__GetModCap_x                                  0x4EBC00
#define PcZoneClient__CanEquipItem_x                               0x682680
#define PcZoneClient__GetItemByID_x                                0x685A20
#define PcZoneClient__RemoveBuffEffect_x                           0x6890C0
#define PcZoneClient__BandolierSwap_x                              0x683660
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x685490

//Doors
#define EQSwitch__UseSwitch_x                                      0x610270

//IconCache
#define IconCache__GetIcon_x                                       0x74B740

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742280
#define CContainerMgr__CloseContainer_x                            0x7425A0
#define CContainerMgr__OpenExperimentContainer_x                   0x743100

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81B460

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x652330

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1140
#define CLootWnd__RequestLootSlot_x                                0x7B0360

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A4660
#define EQ_Spell__SpellAffects_x                                   0x5A4B60
#define EQ_Spell__SpellAffectBase_x                                0x5A4880
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D10A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1050
#define EQ_Spell__IsSPAStacking_x                                  0x5A5910
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4D60
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A5920
#define EQ_Spell__IsLullSpell_x                                    0x5A5150
#define __IsResEffectSpell_x                                       0x4D0850

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B16B0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x920880
#define EQ_Affect__SetAffectData_x                                 0x920E50

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x867F90
#define CTargetWnd__WndNotification_x                              0x867730
#define CTargetWnd__RefreshTargetBuffs_x                           0x867A90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866510

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86CB20
#define CTaskWnd__ConfirmAbandonTask_x                             0x86FBF0

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552EF0
#define CTaskManager__HandleMessage_x                              0x550DB0
#define CTaskManager__GetTaskStatus_x                              0x552FA0
#define CTaskManager__GetElementDescription_x                      0x553020

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59F290
#define EqSoundManager__PlayScriptMp3_x                            0x59F490
#define EqSoundManager__SoundAssistPlay_x                          0x6C5FB0
#define EqSoundManager__WaveInstancePlay_x                         0x6C54A0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541FE0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A5D70
#define CTextureAnimation__Draw_x                                  0x9A5FB0
#define CTextureAnimation__AddBlankFrame_x                         0x9A5B90

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A1A90

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x582810
#define CAltAbilityData__GetMercMaxRank_x                          0x5827A0
#define CAltAbilityData__GetMaxRank_x                              0x576B70

//CTargetRing
#define CTargetRing__Cast_x                                        0x64FB30

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x658A60
#define CharacterBase__CreateItemGlobalIndex_x                     0x6462A0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x77FEC0
#define CharacterBase__GetItemByGlobalIndex_x                      0x928410
#define CharacterBase__GetItemByGlobalIndex1_x                     0x928460
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x727120
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7279E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x727A90

//messages
#define msg_spell_worn_off_x                                       0x5CB110
#define msg_new_text_x                                             0x5BEB60
#define __msgTokenTextParam_x                                      0x5CD570
#define msgTokenText_x                                             0x5CD980

//SpellManager
#define SpellManager__vftable_x                                    0xB39538
#define SpellManager__SpellManager_x                               0x6C9BE0
#define Spellmanager__LoadTextSpells_x                             0x6CA4E0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C9DB0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F0FF0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x782110
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D1CD0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x672620
#define ItemGlobalIndex__IsValidIndex_x                            0x5D3A80

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x921310
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x921660

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9240

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746FF0
#define CCursorAttachment__AttachToCursor1_x                       0x747030
#define CCursorAttachment__Deactivate_x                            0x7485C0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x997670
#define CSidlManagerBase__CreatePageWnd_x                          0x996E50
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x992310
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9922A0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B7490
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B7110

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5220A0
#define CFindItemWnd__WndNotification_x                            0x522F70
#define CFindItemWnd__Update_x                                     0x523BC0
#define CFindItemWnd__PickupSelectedItem_x                         0x521770

//IString
#define IString__Append_x                                          0x558CF0

//Camera
#define CDisplay__cameraType_x                                     0xEE1E64
#define EverQuest__Cameras_x                                       0xDB1074

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CD70
#define LootFiltersManager__GetItemFilterData_x                    0x52C6A0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C6D0
#define LootFiltersManager__SetItemLootFilter_x                    0x52C8E0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x807F70

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F6CC0
#define CResolutionHandler__GetWindowedStyle_x                     0x6C0430

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73EC00

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92C0D0
#define CDistillerInfo__Instance_x                                 0x92C010

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7619F0
#define CGroupWnd__UpdateDisplay_x                                 0x760C40

//ItemBase
#define ItemBase__IsLore_x                                         0x8F4D40
#define ItemBase__IsLoreEquipped_x                                 0x8F4DC0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60A120
#define EQPlacedItemManager__GetItemByGuid_x                       0x60A260
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60A2C0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4B60
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B9480

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517AA0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502750
#define FactionManagerClient__HandleFactionMessage_x               0x502F70
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503760
#define FactionManagerClient__GetMaxFaction_x                      0x50377F
#define FactionManagerClient__GetMinFaction_x                      0x503730

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F3E0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x978450

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E3D0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F650

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5819D0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CDB60

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4B60

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC750

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DA130

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4E708

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EB230
#define CAAWnd__UpdateSelected_x                                   0x6E78C0
#define CAAWnd__Update_x                                           0x6EA550

//CXRect
#define CXRect__operator_and_x                                     0x756E10

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D200

//
#define __eq_delete_x                                              0x9F72A5
#define __eq_new_x                                                 0x9F7814

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