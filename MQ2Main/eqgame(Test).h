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
#define __ExpectedVersionDate                                     "Apr 13 2021"
#define __ExpectedVersionTime                                     "12:25:55"
#define __ActualVersionDate_x                                      0xB48F44
#define __ActualVersionTime_x                                      0xB48F38
#define __ActualVersionBuild_x                                     0xB39114

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x664930
#define __MemChecker1_x                                            0x9460F0
#define __MemChecker2_x                                            0x6DE990
#define __MemChecker3_x                                            0x6DE900
#define __MemChecker4_x                                            0x899340
#define __EncryptPad0_x                                            0xE49B40
#define __EncryptPad1_x                                            0xEA4340
#define __EncryptPad2_x                                            0xE58D58
#define __EncryptPad3_x                                            0xE58958
#define __EncryptPad4_x                                            0xE95150
#define __EncryptPad5_x                                            0xF97C18
#define __AC1_x                                                    0x853F70
#define __AC2_x                                                    0x61943F
#define __AC3_x                                                    0x620821
#define __AC4_x                                                    0x624990
#define __AC5_x                                                    0x62B30F
#define __AC6_x                                                    0x62FA56
#define __AC7_x                                                    0x618EA0
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x24CDB0

// Direct Input
#define DI8__Main_x                                                0xF97CC4
#define DI8__Keyboard_x                                            0xF97CC8
#define DI8__Mouse_x                                               0xF97C24
#define DI8__Mouse_Copy_x                                          0xDA4D7C
#define DI8__Mouse_Check_x                                         0xF9576C
#define __AutoSkillArray_x                                         0xDA5898
#define __Attack_x                                                 0xE436C7
#define __Autofire_x                                               0xE436C8
#define __BindList_x                                               0xD9A448
#define g_eqCommandStates_x                                        0xD9B1B0
#define __Clicks_x                                                 0xDA4E34
#define __CommandList_x                                            0xD9BD38
#define __CurrentMapLabel_x                                        0xFA86C4
#define __CurrentSocial_x                                          0xC5546C
#define __DoAbilityList_x                                          0xDDB1E8
#define __do_loot_x                                                0x5E1C90
#define __DrawHandler_x                                            0x1617418
#define __GroupCount_x                                             0xF8AD32
#define __Guilds_x                                                 0xF8F208
#define __gWorld_x                                                 0xF8AF44
#define __HWnd_x                                                   0xF97C28
#define __heqmain_x                                                0xF97C00
#define __InChatMode_x                                             0xDA4D64
#define __LastTell_x                                               0xDA68E4
#define __LMouseHeldTime_x                                         0xDA4EA0
#define __Mouse_x                                                  0xF97CB0
#define __MouseLook_x                                              0xDA4DFA
#define __MouseEventTime_x                                         0xF90C34
#define __gpbCommandEvent_x                                        0xF8B050
#define __NetStatusToggle_x                                        0xDA4DFD
#define __PCNames_x                                                0xDA5E94
#define __RangeAttackReady_x                                       0xDA5B7C
#define __RMouseHeldTime_x                                         0xDA4E9C
#define __RunWalkState_x                                           0xDA4D68
#define __ScreenMode_x                                             0xED7054
#define __ScreenX_x                                                0xDA4D1C
#define __ScreenY_x                                                0xDA4D18
#define __ScreenXMax_x                                             0xDA4D20
#define __ScreenYMax_x                                             0xDA4D24
#define __ServerHost_x                                             0xF8B21B
#define __ServerName_x                                             0xDDB1A8
#define __ShiftKeyDown_x                                           0xDA53F8
#define __ShowNames_x                                              0xDA5D38
#define EverQuestInfo__bSocialChanged_x                            0xDDB230
#define __Socials_x                                                0xDDB2A8
#define __SubscriptionType_x                                       0xFDC7A0
#define __TargetAggroHolder_x                                      0xFAB078
#define __ZoneType_x                                               0xDA51F8
#define __GroupAggro_x                                             0xFAB0B8
#define __LoginName_x                                              0xF98394
#define __Inviter_x                                                0xE43644
#define __AttackOnAssist_x                                         0xDA5CF4
#define __UseTellWindows_x                                         0xDA602C
#define __gfMaxZoomCameraDistance_x                                0xB40E24
#define __gfMaxCameraDistance_x                                    0xB695AC
#define __pulAutoRun_x                                             0xDA4E18
#define __pulForward_x                                             0xDA6064
#define __pulBackward_x                                            0xDA6068
#define __pulTurnRight_x                                           0xDA606C
#define __pulTurnLeft_x                                            0xDA6070
#define __pulStrafeLeft_x                                          0xDA6074
#define __pulStrafeRight_x                                         0xDA6078

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF8B5A0
#define instEQZoneInfo_x                                           0xDA4FF0
#define pinstActiveBanker_x                                        0xF8B53C
#define pinstActiveCorpse_x                                        0xF8B534
#define pinstActiveGMaster_x                                       0xF8B538
#define pinstActiveMerchant_x                                      0xF8B530
#define pinstAltAdvManager_x                                       0xED7E98
#define pinstBandageTarget_x                                       0xF8B54C
#define pinstCamActor_x                                            0xED7048
#define pinstCDBStr_x                                              0xED6C20
#define pinstCDisplay_x                                            0xF88CAC
#define pinstCEverQuest_x                                          0xF97C2C
#define pinstEverQuestInfo_x                                       0xDA4D10
#define pinstCharData_x                                            0xF88C9C
#define pinstCharSpawn_x                                           0xF8B584
#define pinstControlledMissile_x                                   0xF8B590
#define pinstControlledPlayer_x                                    0xF8B584
#define pinstCResolutionHandler_x                                  0x1617640
#define pinstCSidlManager_x                                        0x16165DC
#define pinstCXWndManager_x                                        0x16165D4
#define instDynamicZone_x                                          0xF8F0E0
#define pinstDZMember_x                                            0xF8F1F0
#define pinstDZTimerInfo_x                                         0xF8F1F4
#define pinstEqLogin_x                                             0xF97CE0
#define instEQMisc_x                                               0xD8E8D8
#define pinstEQSoundManager_x                                      0xED87A8
#define pinstEQSpellStrings_x                                      0xEC78C0
#define instExpeditionLeader_x                                     0xF8F12A
#define instExpeditionName_x                                       0xF8F16A
#define pinstGroup_x                                               0xF8AD2E
#define pinstImeManager_x                                          0x16165D8
#define pinstLocalPlayer_x                                         0xF8B52C
#define pinstMercenaryData_x                                       0xF9272C
#define pinstMercenaryStats_x                                      0xFAB144
#define pinstModelPlayer_x                                         0xF8B544
#define pinstPCData_x                                              0xF88C9C
#define pinstSkillMgr_x                                            0xF94818
#define pinstSpawnManager_x                                        0xF932F0
#define pinstSpellManager_x                                        0xF94A58
#define pinstSpellSets_x                                           0xE3C2F0
#define pinstStringTable_x                                         0xF88CA4
#define pinstSwitchManager_x                                       0xF88B40
#define pinstTarget_x                                              0xF8B580
#define pinstTargetObject_x                                        0xF88C94
#define pinstTargetSwitch_x                                        0xF88C98
#define pinstTaskMember_x                                          0xD8E420
#define pinstTrackTarget_x                                         0xF8B588
#define pinstTradeTarget_x                                         0xF8B540
#define instTributeActive_x                                        0xD8E8F9
#define pinstViewActor_x                                           0xED7044
#define pinstWorldData_x                                           0xF88CA8
#define pinstZoneAddr_x                                            0xDA5290
#define pinstPlayerPath_x                                          0xF93388
#define pinstTargetIndicator_x                                     0xF94CC0
#define EQObject_Top_x                                             0xF88C90
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xED7088
#define pinstCAchievementsWnd_x                                    0xED6D18
#define pinstCActionsWnd_x                                         0xED7018
#define pinstCAdvancedDisplayOptionsWindow_x                       0xED7024
#define pinstCAdvancedLootWnd_x                                    0xED701C
#define pinstCAdventureLeaderboardWnd_x                            0xFA1EE8
#define pinstCAdventureRequestWnd_x                                0xFA1F98
#define pinstCAdventureStatsWnd_x                                  0xFA2048
#define pinstCAggroMeterWnd_x                                      0xED6DA0
#define pinstCAlarmWnd_x                                           0xED7080
#define pinstCAlertHistoryWnd_x                                    0xED6E00
#define pinstCAlertStackWnd_x                                      0xED6DD4
#define pinstCAlertWnd_x                                           0xED6DD8
#define pinstCAltStorageWnd_x                                      0xFA23A8
#define pinstCAudioTriggersWindow_x                                0xEB9BF0
#define pinstCAuraWnd_x                                            0xED7060
#define pinstCAvaZoneWnd_x                                         0xED6D00
#define pinstCBandolierWnd_x                                       0xED7070
#define pinstCBankWnd_x                                            0xED6DE0
#define pinstCBarterMerchantWnd_x                                  0xFA35E8
#define pinstCBarterSearchWnd_x                                    0xFA3698
#define pinstCBarterWnd_x                                          0xFA3748
#define pinstCBazaarConfirmationWnd_x                              0xED70A0
#define pinstCBazaarSearchWnd_x                                    0xED6D28
#define pinstCBazaarWnd_x                                          0xED6CE0
#define pinstCBlockedBuffWnd_x                                     0xED6D64
#define pinstCBlockedPetBuffWnd_x                                  0xED6D6C
#define pinstCBodyTintWnd_x                                        0xED70B4
#define pinstCBookWnd_x                                            0xED6DF8
#define pinstCBreathWnd_x                                          0xED708C
#define pinstCBuffWindowNORMAL_x                                   0xED6D5C
#define pinstCBuffWindowSHORT_x                                    0xED6D60
#define pinstCBugReportWnd_x                                       0xED6D14
#define pinstCButtonWnd_x                                          0x1616840
#define pinstCCastingWnd_x                                         0xED6D9C
#define pinstCCastSpellWnd_x                                       0xED6DAC
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xED6D40
#define pinstCChatWindowManager_x                                  0xFA41F0
#define pinstCClaimWnd_x                                           0xFA4348
#define pinstCColorPickerWnd_x                                     0xED6D54
#define pinstCCombatAbilityWnd_x                                   0xED7030
#define pinstCCombatSkillsSelectWnd_x                              0xED7034
#define pinstCCompassWnd_x                                         0xED7068
#define pinstCConfirmationDialog_x                                 0xFA9210
#define pinstCContainerMgr_x                                       0xED7094
#define pinstCContextMenuManager_x                                 0x1616590
#define pinstCCursorAttachment_x                                   0xED6D94
#define pinstCDynamicZoneWnd_x                                     0xFA4910
#define pinstCEditLabelWnd_x                                       0xED6CF4
#define pinstCEQMainWnd_x                                          0xFA4B58
#define pinstCEventCalendarWnd_x                                   0xED7084
#define pinstCExtendedTargetWnd_x                                  0xED6D98
#define pinstCPlayerCustomizationWnd_x                             0xED6D44
#define pinstCFactionWnd_x                                         0xED6DA8
#define pinstCFellowshipWnd_x                                      0xFA4D58
#define pinstCFileSelectionWnd_x                                   0xED703C
#define pinstCFindItemWnd_x                                        0xED70C0
#define pinstCFindLocationWnd_x                                    0xFA4EB0
#define pinstCFriendsWnd_x                                         0xED7038
#define pinstCGemsGameWnd_x                                        0xED7078
#define pinstCGiveWnd_x                                            0xED6CE8
#define pinstCGroupSearchFiltersWnd_x                              0xED6D74
#define pinstCGroupSearchWnd_x                                     0xFA52A8
#define pinstCGroupWnd_x                                           0xFA5358
#define pinstCGuildBankWnd_x                                       0xFA5408
#define pinstCGuildCreationWnd_x                                   0xFA54B8
#define pinstCGuildMgmtWnd_x                                       0xFA5568
#define pinstCharacterCreation_x                                   0xED6D90
#define pinstCHelpWnd_x                                            0xED6DD0
#define pinstCHeritageSelectionWnd_x                               0xED6D48
#define pinstCHotButtonWnd_x                                       0xFA76C0
#define pinstCHotButtonWnd1_x                                      0xFA76C0
#define pinstCHotButtonWnd2_x                                      0xFA76C4
#define pinstCHotButtonWnd3_x                                      0xFA76C8
#define pinstCHotButtonWnd4_x                                      0xFA76CC
#define pinstCIconSelectionWnd_x                                   0xED6D10
#define pinstCInspectWnd_x                                         0xED6D08
#define pinstCInventoryWnd_x                                       0xED6DCC
#define pinstCInvSlotMgr_x                                         0xED7090
#define pinstCItemDisplayManager_x                                 0xFA7C18
#define pinstCItemExpTransferWnd_x                                 0xFA7D4C
#define pinstCItemOverflowWnd_x                                    0xED6CC8
#define pinstCJournalCatWnd_x                                      0xED70A4
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xED709C
#define pinstCJournalTextWnd_x                                     0xED709C
#define pinstCKeyRingWnd_x                                         0xED6DDC
#define pinstCLargeDialogWnd_x                                     0xFA9E90
#define pinstCLayoutCopyWnd_x                                      0xFA8098
#define pinstCLFGuildWnd_x                                         0xFA8148
#define pinstCLoadskinWnd_x                                        0xED707C
#define pinstCLootFiltersCopyWnd_x                                 0xED6130
#define pinstCLootFiltersWnd_x                                     0xED70A8
#define pinstCLootSettingsWnd_x                                    0xED70AC
#define pinstCLootWnd_x                                            0xED6E0C
#define pinstCMailAddressBookWnd_x                                 0xED6D38
#define pinstCMailCompositionWnd_x                                 0xED6D34
#define pinstCMailIgnoreListWnd_x                                  0xED6D3C
#define pinstCMailWnd_x                                            0xED6D30
#define pinstCManageLootWnd_x                                      0xED8318
#define pinstCMapToolbarWnd_x                                      0xED6CEC
#define pinstCMapViewWnd_x                                         0xED6CE4
#define pinstCMarketplaceWnd_x                                     0xED6CCC
#define pinstCMerchantWnd_x                                        0xED6CC4
#define pinstCMIZoneSelectWnd_x                                    0xFA8980
#define pinstCMusicPlayerWnd_x                                     0xED7074
#define pinstCNameChangeMercWnd_x                                  0xED6DC4
#define pinstCNameChangePetWnd_x                                   0xED6DC0
#define pinstCNameChangeWnd_x                                      0xED6D20
#define pinstCNoteWnd_x                                            0xED6DC8
#define pinstCObjectPreviewWnd_x                                   0xED6D2C
#define pinstCOptionsWnd_x                                         0xED6D58
#define pinstCOverseerWnd_x                                        0xED6CC0
#define pinstCPetInfoWnd_x                                         0xED7010
#define pinstCPetitionQWnd_x                                       0xED6D7C
#define pinstCPlayerNotesWnd_x                                     0xED706C
#define pinstCPlayerWnd_x                                          0xED70C4
#define pinstCPopupWndManager_x                                    0xFA9210
#define pinstCProgressionSelectionWnd_x                            0xFA92C0
#define pinstCPurchaseGroupWnd_x                                   0xED6CD8
#define pinstCPurchaseWnd_x                                        0xED6CD4
#define pinstCPvPLeaderboardWnd_x                                  0xFA9370
#define pinstCPvPStatsWnd_x                                        0xFA9420
#define pinstCQuantityWnd_x                                        0xED6DE8
#define pinstCRaceChangeWnd_x                                      0xED6D24
#define pinstCRaidOptionsWnd_x                                     0xED6DA4
#define pinstCRaidWnd_x                                            0xED6DB0
#define pinstCRealEstateItemsWnd_x                                 0xED6D50
#define pinstCRealEstateLayoutDetailsWnd_x                         0xED6D8C
#define pinstCRealEstateManageWnd_x                                0xED6D78
#define pinstCRealEstateNeighborhoodWnd_x                          0xED6D80
#define pinstCRealEstatePlotSearchWnd_x                            0xED6D84
#define pinstCRealEstatePurchaseWnd_x                              0xED6D88
#define pinstCRespawnWnd_x                                         0xED7064
#define pinstCRewardSelectionWnd_x                                 0xFA9B68
#define pinstCSelectorWnd_x                                        0xED6CDC
#define pinstCSendMoneyWnd_x                                       0xED6CF0
#define pinstCServerListWnd_x                                      0xED7040
#define pinstCSkillsSelectWnd_x                                    0xED7028
#define pinstCSkillsWnd_x                                          0xED7020
#define pinstCSocialEditWnd_x                                      0xED6D0C
#define pinstCSocialWnd_x                                          0xED7098
#define pinstCSpellBookWnd_x                                       0xED6DBC
#define pinstCStoryWnd_x                                           0xED70B0
#define pinstCTargetOfTargetWnd_x                                  0xFAB1C8
#define pinstCTargetWnd_x                                          0xED6D04
#define pinstCTaskOverlayWnd_x                                     0xED70B8
#define pinstCTaskSelectWnd_x                                      0xFAB320
#define pinstCTaskManager_x                                        0xC60268
#define pinstCTaskTemplateSelectWnd_x                              0xFAB3D0
#define pinstCTaskWnd_x                                            0xFAB480
#define pinstCTextEntryWnd_x                                       0xED702C
#define pinstCTimeLeftWnd_x                                        0xED6D70
#define pinstCTipWndCONTEXT_x                                      0xFAB684
#define pinstCTipWndOFDAY_x                                        0xFAB680
#define pinstCTitleWnd_x                                           0xFAB730
#define pinstCTrackingWnd_x                                        0xED6CF8
#define pinstCTradeskillWnd_x                                      0xFAB898
#define pinstCTradeWnd_x                                           0xED6CD0
#define pinstCTrainWnd_x                                           0xED7014
#define pinstCTributeBenefitWnd_x                                  0xFABA98
#define pinstCTributeMasterWnd_x                                   0xFABB48
#define pinstCTributeTrophyWnd_x                                   0xFABBF8
#define pinstCVideoModesWnd_x                                      0xED6D1C
#define pinstCVoiceMacroWnd_x                                      0xF950D8
#define pinstCVoteResultsWnd_x                                     0xED6DB8
#define pinstCVoteWnd_x                                            0xED6DB4
#define pinstCZoneGuideWnd_x                                       0xED6DE4
#define pinstCZonePathWnd_x                                        0xED6DFC

#define pinstEQSuiteTextureLoader_x                                0xEA4900
#define pinstItemIconCache_x                                       0xFA4B10
#define pinstLootFiltersManager_x                                  0xED61E0
#define pinstRewardSelectionWnd_x                                  0xFA9B68

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DCF50
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DD1E0
#define __ConvertItemTags_x                                        0x5FA350
#define __CleanItemTags_x                                          0x47DA80
#define __DoesFileExist_x                                          0x949080
#define __EQGetTime_x                                              0x945D60
#define __ExecuteCmd_x                                             0x5D5380
#define __FixHeading_x                                             0x9E48A0
#define __FlushDxKeyboard_x                                        0x6D9C90
#define __GameLoop_x                                               0x6DD590
#define __get_bearing_x                                            0x5DCAF0
#define __get_melee_range_x                                        0x5DD420
#define __GetAnimationCache_x                                      0x74C530
#define __GetGaugeValueFromEQ_x                                    0x8523B0
#define __GetLabelFromEQ_x                                         0x853EF0
#define __GetXTargetType_x                                         0x9E6C10
#define __HandleMouseWheel_x                                       0x6DEA20
#define __HeadingDiff_x                                            0x9E4900
#define __HelpPath_x                                               0xF908F4
#define __ExecuteFrontEnd_x                                        0x6DA470
#define __NewUIINI_x                                               0x852080
#define __ProcessGameEvents_x                                      0x643A80
#define __ProcessMouseEvent_x                                      0x643180
#define __SaveColors_x                                             0x5716B0
#define __STMLToText_x                                             0x982630
#define __ToggleKeyRingItem_x                                      0x52AA60
#define CMemoryMappedFile__SetFile_x                               0xAD5040
#define CrashDetected_x                                            0x6DC1A0
#define DrawNetStatus_x                                            0x672FE0
#define Expansion_HoT_x                                            0xDA5CE0
#define Teleport_Table_Size_x                                      0xF8B0D8
#define Teleport_Table_x                                           0xF88CB0
#define Util__FastTime_x                                           0x945920
#define __CopyLayout_x                                             0x65FBA0
#define __WndProc_x                                                0x6DC6A0
#define __ProcessKeyboardEvent_x                                   0x6DBBE0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B1A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B020
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495700
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494940

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x57A6A0
#define AltAdvManager__IsAbilityReady_x                            0x579290
#define AltAdvManager__GetAAById_x                                 0x579630
#define AltAdvManager__CanTrainAbility_x                           0x5796A0
#define AltAdvManager__CanSeeAbility_x                             0x579A30

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1240
#define CharacterZoneClient__HasSkill_x                            0x4DC9B0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE0F0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8660
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C0E20
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E0FE0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E10E0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E11E0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CA8A0
#define CharacterZoneClient__BardCastBard_x                        0x4CD8C0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C4D60
#define CharacterZoneClient__GetEffect_x                           0x4C0D60
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CBEB0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CBF60
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC000
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC1C0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC3A0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8620
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF290
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEBE0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x7078F0
#define CBankWnd__WndNotification_x                                0x707690

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712310

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70CF70
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70AF40

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716A00

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x97FBE0
#define CButtonWnd__CButtonWnd_x                                   0x97E550

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x739C80
#define CChatManager__InitContextMenu_x                            0x732BB0
#define CChatManager__FreeChatWindow_x                             0x738840
#define CChatManager__SetLockedActiveChatWindow_x                  0x739960
#define CChatManager__CreateChatWindow_x                           0x738E70

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2060

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x9959B0
#define CContextMenu__dCContextMenu_x                              0x995BE0
#define CContextMenu__AddMenuItem_x                                0x995BF0
#define CContextMenu__RemoveMenuItem_x                             0x995EF0
#define CContextMenu__RemoveAllMenuItems_x                         0x995F10
#define CContextMenu__CheckMenuItem_x                              0x995F70
#define CContextMenu__SetMenuItem_x                                0x995E20
#define CContextMenu__AddSeparator_x                               0x995D80

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x996500
#define CContextMenuManager__RemoveMenu_x                          0x996570
#define CContextMenuManager__PopupMenu_x                           0x996630
#define CContextMenuManager__Flush_x                               0x9964A0
#define CContextMenuManager__GetMenu_x                             0x49D4D0
#define CContextMenuManager__CreateDefaultMenu_x                   0x746500

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8E7B30
#define CChatService__GetFriendName_x                              0x920420

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73A5F0
#define CChatWindow__Clear_x                                       0x73BA50
#define CChatWindow__WndNotification_x                             0x73C1E0
#define CChatWindow__AddHistory_x                                  0x73B2B0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x992A90
#define CComboWnd__Draw_x                                          0x991F30
#define CComboWnd__GetCurChoice_x                                  0x992860
#define CComboWnd__GetListRect_x                                   0x9923E0
#define CComboWnd__GetTextRect_x                                   0x992AF0
#define CComboWnd__InsertChoice_x                                  0x992570
#define CComboWnd__SetColors_x                                     0x992540
#define CComboWnd__SetChoice_x                                     0x992840
#define CComboWnd__GetItemCount_x                                  0x992870
#define CComboWnd__GetCurChoiceText_x                              0x9928A0
#define CComboWnd__GetChoiceText_x                                 0x992880
#define CComboWnd__InsertChoiceAtIndex_x                           0x992600

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743B90
#define CContainerWnd__vftable_x                                   0xB52194
#define CContainerWnd__SetContainer_x                              0x7453C0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56BEB0
#define CDisplay__PreZoneMainUI_x                                  0x56BEC0
#define CDisplay__CleanGameUI_x                                    0x571490
#define CDisplay__GetClickedActor_x                                0x563D90
#define CDisplay__GetUserDefinedColor_x                            0x55BB00
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5658A0
#define CDisplay__is3dON_x                                         0x560620
#define CDisplay__ReloadUI_x                                       0x56B1D0
#define CDisplay__WriteTextHD2_x                                   0x560410
#define CDisplay__TrueDistance_x                                   0x567770
#define CDisplay__SetViewActor_x                                   0x5636B0
#define CDisplay__GetFloorHeight_x                                 0x5606E0
#define CDisplay__SetRenderWindow_x                                0x55F060
#define CDisplay__ToggleScreenshotMode_x                           0x563180

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9B80B0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9994C0
#define CEditWnd__EnsureCaretVisible_x                             0x99B800
#define CEditWnd__GetCaretPt_x                                     0x99A680
#define CEditWnd__GetCharIndexPt_x                                 0x99A440
#define CEditWnd__GetDisplayString_x                               0x99A2E0
#define CEditWnd__GetHorzOffset_x                                  0x998A20
#define CEditWnd__GetLineForPrintableChar_x                        0x99B710
#define CEditWnd__GetSelStartPt_x                                  0x99A6E0
#define CEditWnd__GetSTMLSafeText_x                                0x99A0F0
#define CEditWnd__PointFromPrintableChar_x                         0x99B370
#define CEditWnd__SelectableCharFromPoint_x                        0x99B4C0
#define CEditWnd__SetEditable_x                                    0x99A7B0
#define CEditWnd__SetWindowTextA_x                                 0x999E40
#define CEditWnd__ReplaceSelection_x                               0x99AF30
#define CEditWnd__ReplaceSelection1_x                              0x99AEB0

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62F0D0
#define CEverQuest__ClickedPlayer_x                                0x620600
#define CEverQuest__CreateTargetIndicator_x                        0x6409F0
#define CEverQuest__DeleteTargetIndicator_x                        0x640A80
#define CEverQuest__DoTellWindow_x                                 0x4F2160
#define CEverQuest__OutputTextToLog_x                              0x4F2430
#define CEverQuest__DropHeldItemOnGround_x                         0x6155F0
#define CEverQuest__dsp_chat_x                                     0x4F2800
#define CEverQuest__trimName_x                                     0x63BFE0
#define CEverQuest__Emote_x                                        0x62F790
#define CEverQuest__EnterZone_x                                    0x629410
#define CEverQuest__GetBodyTypeDesc_x                              0x634D20
#define CEverQuest__GetClassDesc_x                                 0x635360
#define CEverQuest__GetClassThreeLetterCode_x                      0x635960
#define CEverQuest__GetDeityDesc_x                                 0x63F1A0
#define CEverQuest__GetLangDesc_x                                  0x635B20
#define CEverQuest__GetRaceDesc_x                                  0x635340
#define CEverQuest__InterpretCmd_x                                 0x63F810
#define CEverQuest__LeftClickedOnPlayer_x                          0x619B70
#define CEverQuest__LMouseUp_x                                     0x617BA0
#define CEverQuest__RightClickedOnPlayer_x                         0x61A760
#define CEverQuest__RMouseUp_x                                     0x618E60
#define CEverQuest__SetGameState_x                                 0x615370
#define CEverQuest__UPCNotificationFlush_x                         0x63BF00
#define CEverQuest__IssuePetCommand_x                              0x637120
#define CEverQuest__ReportSuccessfulHit_x                          0x6310A0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757470
#define CGaugeWnd__CalcLinesFillRect_x                             0x7574D0
#define CGaugeWnd__Draw_x                                          0x756A90

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4450
#define CGuild__GetGuildName_x                                     0x4B2C70
#define CGuild__GetGuildIndex_x                                    0x4B3390

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774930

//CHotButton
#define CHotButton__SetCheck_x                                     0x654050
#define CHotButton__SetButtonSize_x                                0x654410

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781960
#define CInvSlotMgr__MoveItem_x                                    0x780500
#define CInvSlotMgr__SelectSlot_x                                  0x781A20

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77ED50
#define CInvSlot__SliderComplete_x                                 0x77C240
#define CInvSlot__GetItemBase_x                                    0x77BAF0
#define CInvSlot__UpdateItem_x                                     0x77BCE0

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x783680
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782850
#define CInvSlotWnd__HandleLButtonUp_x                             0x783200

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x84C820
#define CItemDisplayWnd__UpdateStrings_x                           0x792890
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78C320
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78C880
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x792E90
#define CItemDisplayWnd__AboutToShow_x                             0x7924A0
#define CItemDisplayWnd__WndNotification_x                         0x7943F0
#define CItemDisplayWnd__RequestConvertItem_x                      0x793CB0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x791580
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x7922E0

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x8818E0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x798D00
#define CItemDisplayManager__ShowItem_x                            0x7982F0

// CLabel 
#define CLabel__UpdateText_x                                       0x79F420

// CListWnd
#define CListWnd__CListWnd_x                                       0x965020
#define CListWnd__dCListWnd_x                                      0x965320
#define CListWnd__AddColumn_x                                      0x969F00
#define CListWnd__AddColumn1_x                                     0x96A020
#define CListWnd__AddLine_x                                        0x96A390
#define CListWnd__AddString_x                                      0x96A190
#define CListWnd__CalculateFirstVisibleLine_x                      0x969CB0
#define CListWnd__CalculateVSBRange_x                              0x969A90
#define CListWnd__ClearSel_x                                       0x96AC80
#define CListWnd__ClearAllSel_x                                    0x96ACD0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x96B760
#define CListWnd__Compare_x                                        0x969210
#define CListWnd__Draw_x                                           0x9654E0
#define CListWnd__DrawColumnSeparators_x                           0x968000
#define CListWnd__DrawHeader_x                                     0x968460
#define CListWnd__DrawItem_x                                       0x968AB0
#define CListWnd__DrawLine_x                                       0x968170
#define CListWnd__DrawSeparator_x                                  0x9680A0
#define CListWnd__EnableLine_x                                     0x9678D0
#define CListWnd__EnsureVisible_x                                  0x96B690
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x96ABC0
#define CListWnd__GetColumnTooltip_x                               0x967450
#define CListWnd__GetColumnMinWidth_x                              0x9674C0
#define CListWnd__GetColumnWidth_x                                 0x9673D0
#define CListWnd__GetCurSel_x                                      0x966D70
#define CListWnd__GetItemAtPoint_x                                 0x967B40
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x967BB0
#define CListWnd__GetItemColor_x                                   0x9670F0
#define CListWnd__GetItemData_x                                    0x966DF0
#define CListWnd__GetItemHeight_x                                  0x9671A0
#define CListWnd__GetItemIcon_x                                    0x966F70
#define CListWnd__GetItemRect_x                                    0x9679C0
#define CListWnd__GetItemText_x                                    0x966E30
#define CListWnd__GetSelList_x                                     0x96AD20
#define CListWnd__GetSeparatorRect_x                               0x967E20
#define CListWnd__InsertLine_x                                     0x96A7F0
#define CListWnd__RemoveLine_x                                     0x96AA10
#define CListWnd__SetColors_x                                      0x969A60
#define CListWnd__SetColumnJustification_x                         0x969790
#define CListWnd__SetColumnLabel_x                                 0x96A130
#define CListWnd__SetColumnWidth_x                                 0x9696A0
#define CListWnd__SetCurSel_x                                      0x96AB10
#define CListWnd__SetItemColor_x                                   0x96B360
#define CListWnd__SetItemData_x                                    0x96B320
#define CListWnd__SetItemText_x                                    0x96AF40
#define CListWnd__ShiftColumnSeparator_x                           0x969850
#define CListWnd__Sort_x                                           0x969500
#define CListWnd__ToggleSel_x                                      0x96AB40
#define CListWnd__SetColumnsSizable_x                              0x9698F0
#define CListWnd__SetItemWnd_x                                     0x96B1E0
#define CListWnd__GetItemWnd_x                                     0x966FC0
#define CListWnd__SetItemIcon_x                                    0x96AFC0
#define CListWnd__CalculateCustomWindowPositions_x                 0x969DB0
#define CListWnd__SetVScrollPos_x                                  0x969680

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7B6860
#define CMapViewWnd__GetWorldCoordinates_x                         0x7B4E80
#define CMapViewWnd__HandleLButtonDown_x                           0x7B1D10
#define CMapViewWnd__WndNotification_x                             0x7B9140

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7D9AB0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7DA410
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7DAA50
#define CMerchantWnd__SelectRecoverySlot_x                         0x7DDC70
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7D8550
#define CMerchantWnd__SelectBuySellSlot_x                          0x7E3DD0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7D9710

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8ED530
#define CPacketScrambler__hton_x                                   0x8ED520

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x988C60
#define CSidlManager__FindScreenPieceTemplate_x                    0x989030
#define CSidlManager__FindScreenPieceTemplate1_x                   0x988E60
#define CSidlManager__CreateXWndFromTemplate_x                     0x98C4E0
#define CSidlManager__CreateXWndFromTemplate1_x                    0x98C770
#define CSidlManagerbase__CreateXWnd_x                             0x98C7B0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x842970
#define CSidlManager__CreateLabel_x                                0x842540

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x841FC0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x9849D0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x9848D0
#define CSidlScreenWnd__ConvertToRes_x                             0x9B2300
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x984250
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x983F40
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x984010
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x9840E0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x985270
#define CSidlScreenWnd__EnableIniStorage_x                         0x985750
#define CSidlScreenWnd__GetSidlPiece_x                             0x985460
#define CSidlScreenWnd__Init1_x                                    0x9839F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x9857A0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x986350
#define CSidlScreenWnd__LoadSidlScreen_x                           0x982E00
#define CSidlScreenWnd__StoreIniInfo_x                             0x985ED0
#define CSidlScreenWnd__StoreIniVis_x                              0x986240
#define CSidlScreenWnd__WndNotification_x                          0x985140
#define CSidlScreenWnd__GetChildItem_x                             0x9856D0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x973CA0
#define CSidlScreenWnd__m_layoutCopy_x                             0x1616460

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C19D0
#define CSkillMgr__GetSkillCap_x                                   0x6C1BA0
#define CSkillMgr__GetNameToken_x                                  0x6C1210
#define CSkillMgr__IsActivatedSkill_x                              0x6C1300
#define CSkillMgr__IsCombatSkill_x                                 0x6C1270

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x997600
#define CSliderWnd__SetValue_x                                     0x997430
#define CSliderWnd__SetNumTicks_x                                  0x997490

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x849200

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A0A30
#define CStmlWnd__ParseSTML_x                                      0x9A1BD0
#define CStmlWnd__CalculateHSBRange_x                              0x9A1990
#define CStmlWnd__CalculateVSBRange_x                              0x9A1910
#define CStmlWnd__CanBreakAtCharacter_x                            0x9A67D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9A7470
#define CStmlWnd__ForceParseNow_x                                  0x9A0FA0
#define CStmlWnd__GetNextTagPiece_x                                0x9A6730
#define CStmlWnd__GetVisibleText_x                                 0x9A0FC0
#define CStmlWnd__InitializeWindowVariables_x                      0x9A72C0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A00D0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A0140
#define CStmlWnd__SetSTMLText_x                                    0x99EEB0
#define CStmlWnd__StripFirstSTMLLines_x                            0x9A8690
#define CStmlWnd__UpdateHistoryString_x                            0x9A7670

// CTabWnd 
#define CTabWnd__Draw_x                                            0x99DE00
#define CTabWnd__DrawCurrentPage_x                                 0x99E790
#define CTabWnd__DrawTab_x                                         0x99E380
#define CTabWnd__GetCurrentPage_x                                  0x99D560
#define CTabWnd__GetPageInnerRect_x                                0x99D790
#define CTabWnd__GetTabInnerRect_x                                 0x99D6D0
#define CTabWnd__GetTabRect_x                                      0x99D590
#define CTabWnd__InsertPage_x                                      0x99D980
#define CTabWnd__RemovePage_x                                      0x99DAD0
#define CTabWnd__SetPage_x                                         0x99D810
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x99DD00
#define CTabWnd__UpdatePage_x                                      0x99E170
#define CTabWnd__GetPageFromTabIndex_x                             0x99E2C0
#define CTabWnd__GetCurrentTabIndex_x                              0x99D550

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x99CEF0
#define CPageWnd__FlashTab_x                                       0x99CF50

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC4B0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x9700E0
#define CTextureFont__GetTextExtent_x                              0x9703E0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9AEDB0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x95AAD0

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x544490
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x941CB0
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x941EF0
#define CXStr__operator_equal1_x                                   0x941F30
#define CXStr__operator_plus_equal1_x                              0x942990
#define CXStr__SetString_x                                         0x944830
#define CXStr__operator_char_p_x                                   0x9423E0
#define CXStr__GetChar_x                                           0x944190
#define CXStr__Delete_x                                            0x943A60
#define CXStr__GetUnicode_x                                        0x944200
#define CXStr__Insert_x                                            0x944260
#define CXStr__FindNext_x                                          0x943EB0
#define CXStr__Copy_x                                              0x943870

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x995610
#define CXWnd__BringToTop_x                                        0x977630
#define CXWnd__ClrFocus_x                                          0x976FC0
#define CXWnd__Destroy_x                                           0x977060
#define CXWnd__DoAllDrawing_x                                      0x9732F0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x9732C0
#define CXWnd__DrawColoredRect_x                                   0x973880
#define CXWnd__DrawTooltip_x                                       0x971830
#define CXWnd__DrawTooltipAtPoint_x                                0x9718F0
#define CXWnd__GetBorderFrame_x                                    0x973520
#define CXWnd__GetChildWndAt_x                                     0x9776D0
#define CXWnd__GetClientClipRect_x                                 0x975880
#define CXWnd__GetScreenClipRect_x                                 0x975950
#define CXWnd__GetScreenRect_x                                     0x975B20
#define CXWnd__GetRelativeRect_x                                   0x975BD0
#define CXWnd__GetTooltipRect_x                                    0x9738D0
#define CXWnd__GetWindowTextA_x                                    0x4F2000
#define CXWnd__IsActive_x                                          0x974020
#define CXWnd__IsDescendantOf_x                                    0x976550
#define CXWnd__IsReallyVisible_x                                   0x976580
#define CXWnd__IsType_x                                            0x977E50
#define CXWnd__Move_x                                              0x9765E0
#define CXWnd__Move1_x                                             0x9766D0
#define CXWnd__ProcessTransition_x                                 0x977140
#define CXWnd__Refade_x                                            0x976980
#define CXWnd__Resize_x                                            0x976C50
#define CXWnd__Right_x                                             0x977420
#define CXWnd__SetFocus_x                                          0x976F80
#define CXWnd__SetFont_x                                           0x976FF0
#define CXWnd__SetKeyTooltip_x                                     0x977C20
#define CXWnd__SetMouseOver_x                                      0x974980
#define CXWnd__StartFade_x                                         0x976430
#define CXWnd__GetChildItem_x                                      0x977850
#define CXWnd__SetParent_x                                         0x976270
#define CXWnd__Minimize_x                                          0x976CB0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9B3350

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x97A680
#define CXWndManager__DrawWindows_x                                0x97A7D0
#define CXWndManager__GetKeyboardFlags_x                           0x97D170
#define CXWndManager__HandleKeyboardMsg_x                          0x97CD50
#define CXWndManager__RemoveWnd_x                                  0x97D430
#define CXWndManager__RemovePendingDeletionWnd_x                   0x97D8F0

// CDBStr
#define CDBStr__GetString_x                                        0x55A630

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C56E0
#define EQ_Character__Cur_HP_x                                     0x4D9620
#define EQ_Character__Cur_Mana_x                                   0x4E1710
#define EQ_Character__GetCastingTimeModifier_x                     0x4C8D50
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8230
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8380
#define EQ_Character__GetHPRegen_x                                 0x4E80F0
#define EQ_Character__GetEnduranceRegen_x                          0x4E86B0
#define EQ_Character__GetManaRegen_x                               0x4E8AF0
#define EQ_Character__Max_Endurance_x                              0x682B10
#define EQ_Character__Max_HP_x                                     0x4D9450
#define EQ_Character__Max_Mana_x                                   0x682900
#define EQ_Character__doCombatAbility_x                            0x685450
#define EQ_Character__UseSkill_x                                   0x4EAB10
#define EQ_Character__GetConLevel_x                                0x67AC30
#define EQ_Character__IsExpansionFlag_x                            0x5D3BD0
#define EQ_Character__TotalEffect_x                                0x4CD1D0
#define EQ_Character__GetPCSpellAffect_x                           0x4C9B80
#define EQ_Character__SpellDuration_x                              0x4C95C0
#define EQ_Character__MySpellDuration_x                            0x4B68F0
#define EQ_Character__GetAdjustedSkill_x                           0x4DC770
#define EQ_Character__GetBaseSkill_x                               0x4DD710
#define EQ_Character__CanUseItem_x                                 0x4E1A40
#define EQ_Character__CanMedOnHorse_x                              0x4EA650

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x90D890

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69A540

//PcClient
#define PcClient__vftable_x                                        0xB45CBC
#define PcClient__PcClient_x                                       0x677EA0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BFCF0
#define CCharacterListWnd__EnterWorld_x                            0x4BF6C0
#define CCharacterListWnd__Quit_x                                  0x4BF3E0
#define CCharacterListWnd__UpdateList_x                            0x4BF8B0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65A250
#define EQ_Item__CreateItemTagString_x                             0x8E6290
#define EQ_Item__IsStackable_x                                     0x8EB4F0
#define EQ_Item__GetImageNum_x                                     0x8E7F20
#define EQ_Item__CreateItemClient_x                                0x6591F0
#define EQ_Item__GetItemValue_x                                    0x8E9220
#define EQ_Item__ValueSellMerchant_x                               0x8ED260
#define EQ_Item__IsKeyRingItem_x                                   0x8EACE0
#define EQ_Item__CanGoInBag_x                                      0x65A370
#define EQ_Item__IsEmpty_x                                         0x8EA6F0
#define EQ_Item__GetMaxItemCount_x                                 0x8E9620
#define EQ_Item__GetHeldItem_x                                     0x8E7DE0
#define EQ_Item__CanGemFitInSlot_x                                 0x8E5AB0

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57B4A0
#define EQ_LoadingS__Array_x                                       0xD92D00

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x683600
#define EQ_PC__GetAlternateAbilityId_x                             0x8F71A0
#define EQ_PC__GetCombatAbility_x                                  0x8F7720
#define EQ_PC__GetCombatAbilityTimer_x                             0x8F7790
#define EQ_PC__GetItemRecastTimer_x                                0x685A50
#define EQ_PC__HasLoreItem_x                                       0x67B5D0
#define EQ_PC__AlertInventoryChanged_x                             0x67A4F0
#define EQ_PC__GetPcZoneClient_x                                   0x6AAC40
#define EQ_PC__RemoveMyAffect_x                                    0x688F70
#define EQ_PC__GetKeyRingItems_x                                   0x8F8220
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8F7D80
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8F8370

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D9F70
#define EQItemList__add_object_x                                   0x60A460
#define EQItemList__add_item_x                                     0x5DA550
#define EQItemList__delete_item_x                                  0x5DA5A0
#define EQItemList__FreeItemList_x                                 0x5DA4B0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556760

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69BF70
#define EQPlayer__dEQPlayer_x                                      0x68E810
#define EQPlayer__DoAttack_x                                       0x6A4970
#define EQPlayer__EQPlayer_x                                       0x68F060
#define EQPlayer__SetNameSpriteState_x                             0x693620
#define EQPlayer__SetNameSpriteTint_x                              0x6944F0
#define PlayerBase__HasProperty_j_x                                0x9E2C60
#define EQPlayer__IsTargetable_x                                   0x9E31C0
#define EQPlayer__CanSee_x                                         0x9E2FB0
#define EQPlayer__CanSee1_x                                        0x9E3080
#define PlayerBase__GetVisibilityLineSegment_x                     0x9E2D20

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A8730
#define PlayerZoneClient__GetLevel_x                               0x6AAC80
#define PlayerZoneClient__IsValidTeleport_x                        0x60B900
#define PlayerZoneClient__LegalPlayerRace_x                        0x573470

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69F120
#define EQPlayerManager__GetSpawnByName_x                          0x69F1D0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69F260

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65DB60
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65DC30
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65DC70
#define KeypressHandler__ClearCommandStateArray_x                  0x65F130
#define KeypressHandler__HandleKeyDown_x                           0x65F150
#define KeypressHandler__HandleKeyUp_x                             0x65F1F0
#define KeypressHandler__SaveKeymapping_x                          0x65F7A0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7B2510
#define MapViewMap__SaveEx_x                                       0x7B5A4F
#define MapViewMap__SetZoom_x                                      0x7BB690

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x90B720

// StringTable 
#define StringTable__getString_x                                   0x906600

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x688BC0
#define PcZoneClient__RemovePetEffect_x                            0x689220
#define PcZoneClient__HasAlternateAbility_x                        0x682760
#define PcZoneClient__GetCurrentMod_x                              0x4EE2A0
#define PcZoneClient__GetModCap_x                                  0x4EE1A0
#define PcZoneClient__CanEquipItem_x                               0x682E10
#define PcZoneClient__GetItemByID_x                                0x685F20
#define PcZoneClient__GetItemByItemClass_x                         0x686060
#define PcZoneClient__RemoveBuffEffect_x                           0x6892D0
#define PcZoneClient__BandolierSwap_x                              0x683BC0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6859F0

//Doors
#define EQSwitch__UseSwitch_x                                      0x610450

//IconCache
#define IconCache__GetIcon_x                                       0x74BED0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742AA0
#define CContainerMgr__CloseContainer_x                            0x742D80
#define CContainerMgr__OpenExperimentContainer_x                   0x7438E0

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x811A30

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x6527B0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7A7760
#define CLootWnd__RequestLootSlot_x                                0x7A6990

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A5A80
#define EQ_Spell__SpellAffects_x                                   0x5A5F80
#define EQ_Spell__SpellAffectBase_x                                0x5A5CA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0BD0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0B80
#define EQ_Spell__IsSPAStacking_x                                  0x5A6E90
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A62E0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A6EA0
#define EQ_Spell__IsLullSpell_x                                    0x5A66D0
#define __IsResEffectSpell_x                                       0x4D0380

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1210

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x916190
#define EQ_Affect__SetAffectData_x                                 0x916760

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x85E2D0
#define CTargetWnd__WndNotification_x                              0x85DA60
#define CTargetWnd__RefreshTargetBuffs_x                           0x85DDC0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x85C860

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x862E50
#define CTaskWnd__ConfirmAbandonTask_x                             0x865F20

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x554300
#define CTaskManager__HandleMessage_x                              0x5521D0
#define CTaskManager__GetTaskStatus_x                              0x5543B0
#define CTaskManager__GetElementDescription_x                      0x554430

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0650
#define EqSoundManager__PlayScriptMp3_x                            0x5A0850
#define EqSoundManager__SoundAssistPlay_x                          0x6C5E30
#define EqSoundManager__WaveInstancePlay_x                         0x6C5320

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544140

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x99C370
#define CTextureAnimation__Draw_x                                  0x99C5B0
#define CTextureAnimation__AddBlankFrame_x                         0x99C190

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x998100

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x583A70
#define CAltAbilityData__GetMercMaxRank_x                          0x583A00
#define CAltAbilityData__GetMaxRank_x                              0x577E10

//CTargetRing
#define CTargetRing__Cast_x                                        0x64FFC0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x659040
#define CharacterBase__CreateItemGlobalIndex_x                     0x6466F0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x659020
#define CharacterBase__GetItemByGlobalIndex_x                      0x91DD10
#define CharacterBase__GetItemByGlobalIndex1_x                     0x91DD60
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x727910
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7281D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728280

//messages
#define msg_spell_worn_off_x                                       0x5CB580
#define msg_new_text_x                                             0x5BF350
#define __msgTokenTextParam_x                                      0x5CD9E0
#define msgTokenText_x                                             0x5CDDF0

//SpellManager
#define SpellManager__vftable_x                                    0xB302FC
#define SpellManager__SpellManager_x                               0x6C9A60
#define Spellmanager__LoadTextSpells_x                             0x6CA360
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C9C30

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9E74C0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D3C20
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D20F0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x672D80
#define ItemGlobalIndex__IsValidIndex_x                            0x5D3DB0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x916B90
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x916EE0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x79F8A0

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x747780
#define CCursorAttachment__AttachToCursor1_x                       0x7477C0
#define CCursorAttachment__Deactivate_x                            0x748D50

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x98DD20
#define CSidlManagerBase__CreatePageWnd_x                          0x98D510
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x9889E0
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x988970

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9AD980
#define CEQSuiteTextureLoader__GetTexture_x                        0x9AD600

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5242C0
#define CFindItemWnd__WndNotification_x                            0x525180
#define CFindItemWnd__Update_x                                     0x525D60
#define CFindItemWnd__PickupSelectedItem_x                         0x5239D0

//IString
#define IString__Append_x                                          0x513580

//Camera
#define CDisplay__cameraType_x                                     0xED6E08
#define EverQuest__Cameras_x                                       0xDA6038

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52EFA0
#define LootFiltersManager__GetItemFilterData_x                    0x52E8D0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52E900
#define LootFiltersManager__SetItemLootFilter_x                    0x52EB10

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7FE580

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9ED180
#define CResolutionHandler__GetWindowedStyle_x                     0x6C0310

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73F410

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9220C0
#define CDistillerInfo__Instance_x                                 0x922000

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762090
#define CGroupWnd__UpdateDisplay_x                                 0x7612E0

//ItemBase
#define ItemBase__IsLore_x                                         0x8EAD80
#define ItemBase__IsLoreEquipped_x                                 0x8EADF0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60A3C0
#define EQPlacedItemManager__GetItemByGuid_x                       0x60A500
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60A560

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4A20
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B9330

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x519D30

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x504B30
#define FactionManagerClient__HandleFactionMessage_x               0x505350
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x505B40
#define FactionManagerClient__GetMaxFaction_x                      0x505B5F
#define FactionManagerClient__GetMinFaction_x                      0x505B10

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511710

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x96ED70

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49DEE0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511980

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x582C40

//CTargetManager
#define CTargetManager__Get_x                                      0x6CD9E0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4A20

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC270

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DA450

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE436CC

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EB160
#define CAAWnd__UpdateSelected_x                                   0x6E7800
#define CAAWnd__Update_x                                           0x6EA490

//CXRect
#define CXRect__operator_and_x                                     0x757530

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240

//
#define __eq_delete_x                                              0x9ED765
#define __eq_new_x                                                 0x9EDCD4

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

