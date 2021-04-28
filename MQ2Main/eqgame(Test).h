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
#define __ExpectedVersionDate                                     "Apr 27 2021"
#define __ExpectedVersionTime                                     "13:22:05"
#define __ActualVersionDate_x                                      0xB47F34
#define __ActualVersionTime_x                                      0xB47F28
#define __ActualVersionBuild_x                                     0xB3810C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x664A60
#define __MemChecker1_x                                            0x946260
#define __MemChecker2_x                                            0x6DEA60
#define __MemChecker3_x                                            0x6DE9D0
#define __MemChecker4_x                                            0x8993A0
#define __EncryptPad0_x                                            0xE48B40
#define __EncryptPad1_x                                            0xEA3340
#define __EncryptPad2_x                                            0xE57D58
#define __EncryptPad3_x                                            0xE57958
#define __EncryptPad4_x                                            0xE94150
#define __EncryptPad5_x                                            0xF96C18
#define __AC1_x                                                    0x853F40
#define __AC2_x                                                    0x61957F
#define __AC3_x                                                    0x620941
#define __AC4_x                                                    0x624AB0
#define __AC5_x                                                    0x62B42F
#define __AC6_x                                                    0x62FB76
#define __AC7_x                                                    0x618FE0
#define __AC1_Data                                                 0x11111111
#define __EP1_Data_x                                               0x24CDB0

// Direct Input
#define DI8__Main_x                                                0xF96CC4
#define DI8__Keyboard_x                                            0xF96CC8
#define DI8__Mouse_x                                               0xF96C24
#define DI8__Mouse_Copy_x                                          0xDA3D7C
#define DI8__Mouse_Check_x                                         0xF9476C
#define __AutoSkillArray_x                                         0xDA4898
#define __Attack_x                                                 0xE426C7
#define __Autofire_x                                               0xE426C8
#define __BindList_x                                               0xD99448
#define g_eqCommandStates_x                                        0xD9A1B0
#define __Clicks_x                                                 0xDA3E34
#define __CommandList_x                                            0xD9AD38
#define __CurrentMapLabel_x                                        0xFA76C4
#define __CurrentSocial_x                                          0xC5446C
#define __DoAbilityList_x                                          0xDDA1E8
#define __do_loot_x                                                0x5E1DD0
#define __DrawHandler_x                                            0x1616418
#define __GroupCount_x                                             0xF89D32
#define __Guilds_x                                                 0xF8E208
#define __gWorld_x                                                 0xF89F44
#define __HWnd_x                                                   0xF96C28
#define __heqmain_x                                                0xF96C00
#define __InChatMode_x                                             0xDA3D64
#define __LastTell_x                                               0xDA58E4
#define __LMouseHeldTime_x                                         0xDA3EA0
#define __Mouse_x                                                  0xF96CB0
#define __MouseLook_x                                              0xDA3DFA
#define __MouseEventTime_x                                         0xF8FC34
#define __gpbCommandEvent_x                                        0xF8A050
#define __NetStatusToggle_x                                        0xDA3DFD
#define __PCNames_x                                                0xDA4E94
#define __RangeAttackReady_x                                       0xDA4B7C
#define __RMouseHeldTime_x                                         0xDA3E9C
#define __RunWalkState_x                                           0xDA3D68
#define __ScreenMode_x                                             0xED6054
#define __ScreenX_x                                                0xDA3D1C
#define __ScreenY_x                                                0xDA3D18
#define __ScreenXMax_x                                             0xDA3D20
#define __ScreenYMax_x                                             0xDA3D24
#define __ServerHost_x                                             0xF8A21B
#define __ServerName_x                                             0xDDA1A8
#define __ShiftKeyDown_x                                           0xDA43F8
#define __ShowNames_x                                              0xDA4D38
#define EverQuestInfo__bSocialChanged_x                            0xDDA230
#define __Socials_x                                                0xDDA2A8
#define __SubscriptionType_x                                       0xFDB7A0
#define __TargetAggroHolder_x                                      0xFAA078
#define __ZoneType_x                                               0xDA41F8
#define __GroupAggro_x                                             0xFAA0B8
#define __LoginName_x                                              0xF97394
#define __Inviter_x                                                0xE42644
#define __AttackOnAssist_x                                         0xDA4CF4
#define __UseTellWindows_x                                         0xDA502C
#define __gfMaxZoomCameraDistance_x                                0xB3FE1C
#define __gfMaxCameraDistance_x                                    0xB6859C
#define __pulAutoRun_x                                             0xDA3E18
#define __pulForward_x                                             0xDA5064
#define __pulBackward_x                                            0xDA5068
#define __pulTurnRight_x                                           0xDA506C
#define __pulTurnLeft_x                                            0xDA5070
#define __pulStrafeLeft_x                                          0xDA5074
#define __pulStrafeRight_x                                         0xDA5078

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF8A5A0
#define instEQZoneInfo_x                                           0xDA3FF0
#define pinstActiveBanker_x                                        0xF8A53C
#define pinstActiveCorpse_x                                        0xF8A534
#define pinstActiveGMaster_x                                       0xF8A538
#define pinstActiveMerchant_x                                      0xF8A530
#define pinstAltAdvManager_x                                       0xED6E98
#define pinstBandageTarget_x                                       0xF8A54C
#define pinstCamActor_x                                            0xED6048
#define pinstCDBStr_x                                              0xED5C20
#define pinstCDisplay_x                                            0xF87CAC
#define pinstCEverQuest_x                                          0xF96C2C
#define pinstEverQuestInfo_x                                       0xDA3D10
#define pinstCharData_x                                            0xF87C9C
#define pinstCharSpawn_x                                           0xF8A584
#define pinstControlledMissile_x                                   0xF8A590
#define pinstControlledPlayer_x                                    0xF8A584
#define pinstCResolutionHandler_x                                  0x1616640
#define pinstCSidlManager_x                                        0x16155DC
#define pinstCXWndManager_x                                        0x16155D4
#define instDynamicZone_x                                          0xF8E0E0
#define pinstDZMember_x                                            0xF8E1F0
#define pinstDZTimerInfo_x                                         0xF8E1F4
#define pinstEqLogin_x                                             0xF96CE0
#define instEQMisc_x                                               0xD8D8D8
#define pinstEQSoundManager_x                                      0xED77A8
#define pinstEQSpellStrings_x                                      0xEC68C0
#define instExpeditionLeader_x                                     0xF8E12A
#define instExpeditionName_x                                       0xF8E16A
#define pinstGroup_x                                               0xF89D2E
#define pinstImeManager_x                                          0x16155D8
#define pinstLocalPlayer_x                                         0xF8A52C
#define pinstMercenaryData_x                                       0xF9172C
#define pinstMercenaryStats_x                                      0xFAA144
#define pinstModelPlayer_x                                         0xF8A544
#define pinstPCData_x                                              0xF87C9C
#define pinstSkillMgr_x                                            0xF93818
#define pinstSpawnManager_x                                        0xF922F0
#define pinstSpellManager_x                                        0xF93A58
#define pinstSpellSets_x                                           0xE3B2F0
#define pinstStringTable_x                                         0xF87CA4
#define pinstSwitchManager_x                                       0xF87B40
#define pinstTarget_x                                              0xF8A580
#define pinstTargetObject_x                                        0xF87C94
#define pinstTargetSwitch_x                                        0xF87C98
#define pinstTaskMember_x                                          0xD8D420
#define pinstTrackTarget_x                                         0xF8A588
#define pinstTradeTarget_x                                         0xF8A540
#define instTributeActive_x                                        0xD8D8F9
#define pinstViewActor_x                                           0xED6044
#define pinstWorldData_x                                           0xF87CA8
#define pinstZoneAddr_x                                            0xDA4290
#define pinstPlayerPath_x                                          0xF92388
#define pinstTargetIndicator_x                                     0xF93CC0
#define EQObject_Top_x                                             0xF87C90
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xED6088
#define pinstCAchievementsWnd_x                                    0xED5D18
#define pinstCActionsWnd_x                                         0xED6018
#define pinstCAdvancedDisplayOptionsWindow_x                       0xED6024
#define pinstCAdvancedLootWnd_x                                    0xED601C
#define pinstCAdventureLeaderboardWnd_x                            0xFA0EE8
#define pinstCAdventureRequestWnd_x                                0xFA0F98
#define pinstCAdventureStatsWnd_x                                  0xFA1048
#define pinstCAggroMeterWnd_x                                      0xED5DA0
#define pinstCAlarmWnd_x                                           0xED6080
#define pinstCAlertHistoryWnd_x                                    0xED5E00
#define pinstCAlertStackWnd_x                                      0xED5DD4
#define pinstCAlertWnd_x                                           0xED5DD8
#define pinstCAltStorageWnd_x                                      0xFA13A8
#define pinstCAudioTriggersWindow_x                                0xEB8BF0
#define pinstCAuraWnd_x                                            0xED6060
#define pinstCAvaZoneWnd_x                                         0xED5D00
#define pinstCBandolierWnd_x                                       0xED6070
#define pinstCBankWnd_x                                            0xED5DE0
#define pinstCBarterMerchantWnd_x                                  0xFA25E8
#define pinstCBarterSearchWnd_x                                    0xFA2698
#define pinstCBarterWnd_x                                          0xFA2748
#define pinstCBazaarConfirmationWnd_x                              0xED60A0
#define pinstCBazaarSearchWnd_x                                    0xED5D28
#define pinstCBazaarWnd_x                                          0xED5CE0
#define pinstCBlockedBuffWnd_x                                     0xED5D64
#define pinstCBlockedPetBuffWnd_x                                  0xED5D6C
#define pinstCBodyTintWnd_x                                        0xED60B4
#define pinstCBookWnd_x                                            0xED5DF8
#define pinstCBreathWnd_x                                          0xED608C
#define pinstCBuffWindowNORMAL_x                                   0xED5D5C
#define pinstCBuffWindowSHORT_x                                    0xED5D60
#define pinstCBugReportWnd_x                                       0xED5D14
#define pinstCButtonWnd_x                                          0x1615840
#define pinstCCastingWnd_x                                         0xED5D9C
#define pinstCCastSpellWnd_x                                       0xED5DAC
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xED5D40
#define pinstCChatWindowManager_x                                  0xFA31F0
#define pinstCClaimWnd_x                                           0xFA3348
#define pinstCColorPickerWnd_x                                     0xED5D54
#define pinstCCombatAbilityWnd_x                                   0xED6030
#define pinstCCombatSkillsSelectWnd_x                              0xED6034
#define pinstCCompassWnd_x                                         0xED6068
#define pinstCConfirmationDialog_x                                 0xFA8210
#define pinstCContainerMgr_x                                       0xED6094
#define pinstCContextMenuManager_x                                 0x1615590
#define pinstCCursorAttachment_x                                   0xED5D94
#define pinstCDynamicZoneWnd_x                                     0xFA3910
#define pinstCEditLabelWnd_x                                       0xED5CF4
#define pinstCEQMainWnd_x                                          0xFA3B58
#define pinstCEventCalendarWnd_x                                   0xED6084
#define pinstCExtendedTargetWnd_x                                  0xED5D98
#define pinstCPlayerCustomizationWnd_x                             0xED5D44
#define pinstCFactionWnd_x                                         0xED5DA8
#define pinstCFellowshipWnd_x                                      0xFA3D58
#define pinstCFileSelectionWnd_x                                   0xED603C
#define pinstCFindItemWnd_x                                        0xED60C0
#define pinstCFindLocationWnd_x                                    0xFA3EB0
#define pinstCFriendsWnd_x                                         0xED6038
#define pinstCGemsGameWnd_x                                        0xED6078
#define pinstCGiveWnd_x                                            0xED5CE8
#define pinstCGroupSearchFiltersWnd_x                              0xED5D74
#define pinstCGroupSearchWnd_x                                     0xFA42A8
#define pinstCGroupWnd_x                                           0xFA4358
#define pinstCGuildBankWnd_x                                       0xFA4408
#define pinstCGuildCreationWnd_x                                   0xFA44B8
#define pinstCGuildMgmtWnd_x                                       0xFA4568
#define pinstCharacterCreation_x                                   0xED5D90
#define pinstCHelpWnd_x                                            0xED5DD0
#define pinstCHeritageSelectionWnd_x                               0xED5D48
#define pinstCHotButtonWnd_x                                       0xFA66C0
#define pinstCHotButtonWnd1_x                                      0xFA66C0
#define pinstCHotButtonWnd2_x                                      0xFA66C4
#define pinstCHotButtonWnd3_x                                      0xFA66C8
#define pinstCHotButtonWnd4_x                                      0xFA66CC
#define pinstCIconSelectionWnd_x                                   0xED5D10
#define pinstCInspectWnd_x                                         0xED5D08
#define pinstCInventoryWnd_x                                       0xED5DCC
#define pinstCInvSlotMgr_x                                         0xED6090
#define pinstCItemDisplayManager_x                                 0xFA6C18
#define pinstCItemExpTransferWnd_x                                 0xFA6D4C
#define pinstCItemOverflowWnd_x                                    0xED5CC8
#define pinstCJournalCatWnd_x                                      0xED60A4
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xED609C
#define pinstCJournalTextWnd_x                                     0xED609C
#define pinstCKeyRingWnd_x                                         0xED5DDC
#define pinstCLargeDialogWnd_x                                     0xFA8E90
#define pinstCLayoutCopyWnd_x                                      0xFA7098
#define pinstCLFGuildWnd_x                                         0xFA7148
#define pinstCLoadskinWnd_x                                        0xED607C
#define pinstCLootFiltersCopyWnd_x                                 0xED5130
#define pinstCLootFiltersWnd_x                                     0xED60A8
#define pinstCLootSettingsWnd_x                                    0xED60AC
#define pinstCLootWnd_x                                            0xED5E08
#define pinstCMailAddressBookWnd_x                                 0xED5D38
#define pinstCMailCompositionWnd_x                                 0xED5D34
#define pinstCMailIgnoreListWnd_x                                  0xED5D3C
#define pinstCMailWnd_x                                            0xED5D30
#define pinstCManageLootWnd_x                                      0xED7318
#define pinstCMapToolbarWnd_x                                      0xED5CEC
#define pinstCMapViewWnd_x                                         0xED5CE4
#define pinstCMarketplaceWnd_x                                     0xED5CCC
#define pinstCMerchantWnd_x                                        0xED5CC4
#define pinstCMIZoneSelectWnd_x                                    0xFA7980
#define pinstCMusicPlayerWnd_x                                     0xED6074
#define pinstCNameChangeMercWnd_x                                  0xED5DC4
#define pinstCNameChangePetWnd_x                                   0xED5DC0
#define pinstCNameChangeWnd_x                                      0xED5D20
#define pinstCNoteWnd_x                                            0xED5DC8
#define pinstCObjectPreviewWnd_x                                   0xED5D2C
#define pinstCOptionsWnd_x                                         0xED5D58
#define pinstCOverseerWnd_x                                        0xED5CC0
#define pinstCPetInfoWnd_x                                         0xED6010
#define pinstCPetitionQWnd_x                                       0xED5D7C
#define pinstCPlayerNotesWnd_x                                     0xED606C
#define pinstCPlayerWnd_x                                          0xED60C4
#define pinstCPopupWndManager_x                                    0xFA8210
#define pinstCProgressionSelectionWnd_x                            0xFA82C0
#define pinstCPurchaseGroupWnd_x                                   0xED5CD8
#define pinstCPurchaseWnd_x                                        0xED5CD4
#define pinstCPvPLeaderboardWnd_x                                  0xFA8370
#define pinstCPvPStatsWnd_x                                        0xFA8420
#define pinstCQuantityWnd_x                                        0xED5DE8
#define pinstCRaceChangeWnd_x                                      0xED5D24
#define pinstCRaidOptionsWnd_x                                     0xED5DA4
#define pinstCRaidWnd_x                                            0xED5DB0
#define pinstCRealEstateItemsWnd_x                                 0xED5D50
#define pinstCRealEstateLayoutDetailsWnd_x                         0xED5D8C
#define pinstCRealEstateManageWnd_x                                0xED5D78
#define pinstCRealEstateNeighborhoodWnd_x                          0xED5D80
#define pinstCRealEstatePlotSearchWnd_x                            0xED5D84
#define pinstCRealEstatePurchaseWnd_x                              0xED5D88
#define pinstCRespawnWnd_x                                         0xED6064
#define pinstCRewardSelectionWnd_x                                 0xFA8B68
#define pinstCSelectorWnd_x                                        0xED5CDC
#define pinstCSendMoneyWnd_x                                       0xED5CF0
#define pinstCServerListWnd_x                                      0xED6040
#define pinstCSkillsSelectWnd_x                                    0xED6028
#define pinstCSkillsWnd_x                                          0xED6020
#define pinstCSocialEditWnd_x                                      0xED5D0C
#define pinstCSocialWnd_x                                          0xED6098
#define pinstCSpellBookWnd_x                                       0xED5DBC
#define pinstCStoryWnd_x                                           0xED60B0
#define pinstCTargetOfTargetWnd_x                                  0xFAA1C8
#define pinstCTargetWnd_x                                          0xED5D04
#define pinstCTaskOverlayWnd_x                                     0xED60B8
#define pinstCTaskSelectWnd_x                                      0xFAA320
#define pinstCTaskManager_x                                        0xC5F268
#define pinstCTaskTemplateSelectWnd_x                              0xFAA3D0
#define pinstCTaskWnd_x                                            0xFAA480
#define pinstCTextEntryWnd_x                                       0xED602C
#define pinstCTimeLeftWnd_x                                        0xED5D70
#define pinstCTipWndCONTEXT_x                                      0xFAA684
#define pinstCTipWndOFDAY_x                                        0xFAA680
#define pinstCTitleWnd_x                                           0xFAA730
#define pinstCTrackingWnd_x                                        0xED5CF8
#define pinstCTradeskillWnd_x                                      0xFAA898
#define pinstCTradeWnd_x                                           0xED5CD0
#define pinstCTrainWnd_x                                           0xED6014
#define pinstCTributeBenefitWnd_x                                  0xFAAA98
#define pinstCTributeMasterWnd_x                                   0xFAAB48
#define pinstCTributeTrophyWnd_x                                   0xFAABF8
#define pinstCVideoModesWnd_x                                      0xED5D1C
#define pinstCVoiceMacroWnd_x                                      0xF940D8
#define pinstCVoteResultsWnd_x                                     0xED5DB8
#define pinstCVoteWnd_x                                            0xED5DB4
#define pinstCZoneGuideWnd_x                                       0xED5DE4
#define pinstCZonePathWnd_x                                        0xED5DFC

#define pinstEQSuiteTextureLoader_x                                0xEA3900
#define pinstItemIconCache_x                                       0xFA3B10
#define pinstLootFiltersManager_x                                  0xED51E0
#define pinstRewardSelectionWnd_x                                  0xFA8B68

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DD090
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DD320
#define __ConvertItemTags_x                                        0x5FA480
#define __CleanItemTags_x                                          0x47DA80
#define __DoesFileExist_x                                          0x9491F0
#define __EQGetTime_x                                              0x945ED0
#define __ExecuteCmd_x                                             0x5D54D0
#define __FixHeading_x                                             0x9E3E50
#define __FlushDxKeyboard_x                                        0x6D9D60
#define __GameLoop_x                                               0x6DD660
#define __get_bearing_x                                            0x5DCC30
#define __get_melee_range_x                                        0x5DD560
#define __GetAnimationCache_x                                      0x74C580
#define __GetGaugeValueFromEQ_x                                    0x852380
#define __GetLabelFromEQ_x                                         0x853EC0
#define __GetXTargetType_x                                         0x9E61C0
#define __HandleMouseWheel_x                                       0x6DEAF0
#define __HeadingDiff_x                                            0x9E3EB0
#define __HelpPath_x                                               0xF8F8F4
#define __ExecuteFrontEnd_x                                        0x6DA540
#define __NewUIINI_x                                               0x852050
#define __ProcessGameEvents_x                                      0x643B90
#define __ProcessMouseEvent_x                                      0x643290
#define __SaveColors_x                                             0x5716B0
#define __STMLToText_x                                             0x981BA0
#define __ToggleKeyRingItem_x                                      0x52AA50
#define CMemoryMappedFile__SetFile_x                               0xAD4600
#define CrashDetected_x                                            0x6DC270
#define DrawNetStatus_x                                            0x673080
#define Expansion_HoT_x                                            0xDA4CE0
#define Teleport_Table_Size_x                                      0xF8A0D8
#define Teleport_Table_x                                           0xF87CB0
#define Util__FastTime_x                                           0x945A90
#define __CopyLayout_x                                             0x65FD40
#define __WndProc_x                                                0x6DC770
#define __ProcessKeyboardEvent_x                                   0x6DBCB0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x4919C0
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B1B0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B030
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495710
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494950

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x57A680
#define AltAdvManager__IsAbilityReady_x                            0x579280
#define AltAdvManager__GetAAById_x                                 0x579620
#define AltAdvManager__CanTrainAbility_x                           0x579690
#define AltAdvManager__CanSeeAbility_x                             0x579A20

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1200
#define CharacterZoneClient__HasSkill_x                            0x4DC970
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE0B0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8630
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C0DF0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E0FC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E10C0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E11C0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CA870
#define CharacterZoneClient__BardCastBard_x                        0x4CD880
#define CharacterZoneClient__GetMaxEffects_x                       0x4C4D30
#define CharacterZoneClient__GetEffect_x                           0x4C0D30
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CBE80
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CBF30
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CBFD0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC190
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC370
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B85E0
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF250
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEBA0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x7079D0
#define CBankWnd__WndNotification_x                                0x707770

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712400

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70D060
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70B030

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x716AF0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x97F140
#define CButtonWnd__CButtonWnd_x                                   0x97DAA0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x739D30
#define CChatManager__InitContextMenu_x                            0x732C70
#define CChatManager__FreeChatWindow_x                             0x738900
#define CChatManager__SetLockedActiveChatWindow_x                  0x739A10
#define CChatManager__CreateChatWindow_x                           0x738F20

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F2050

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x994F90
#define CContextMenu__dCContextMenu_x                              0x9951C0
#define CContextMenu__AddMenuItem_x                                0x9951D0
#define CContextMenu__RemoveMenuItem_x                             0x9954E0
#define CContextMenu__RemoveAllMenuItems_x                         0x995500
#define CContextMenu__CheckMenuItem_x                              0x995560
#define CContextMenu__SetMenuItem_x                                0x995400
#define CContextMenu__AddSeparator_x                               0x995360

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x995AE0
#define CContextMenuManager__RemoveMenu_x                          0x995B50
#define CContextMenuManager__PopupMenu_x                           0x995C10
#define CContextMenuManager__Flush_x                               0x995A80
#define CContextMenuManager__GetMenu_x                             0x49D4E0
#define CContextMenuManager__CreateDefaultMenu_x                   0x746550

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x920590
#define CChatService__GetFriendName_x                              0x9205A0

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73A690
#define CChatWindow__Clear_x                                       0x73BAE0
#define CChatWindow__WndNotification_x                             0x73C260
#define CChatWindow__AddHistory_x                                  0x73B340

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x991FA0
#define CComboWnd__Draw_x                                          0x991450
#define CComboWnd__GetCurChoice_x                                  0x991D70
#define CComboWnd__GetListRect_x                                   0x9918F0
#define CComboWnd__GetTextRect_x                                   0x992010
#define CComboWnd__InsertChoice_x                                  0x991A80
#define CComboWnd__SetColors_x                                     0x991A50
#define CComboWnd__SetChoice_x                                     0x991D50
#define CComboWnd__GetItemCount_x                                  0x991D80
#define CComboWnd__GetCurChoiceText_x                              0x991DB0
#define CComboWnd__GetChoiceText_x                                 0x991D90
#define CComboWnd__InsertChoiceAtIndex_x                           0x991B10

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743BF0
#define CContainerWnd__vftable_x                                   0xB51184
#define CContainerWnd__SetContainer_x                              0x745420

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
#define CEditBaseWnd__SetSel_x                                     0x9B76B0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x998A80
#define CEditWnd__EnsureCaretVisible_x                             0x99ADF0
#define CEditWnd__GetCaretPt_x                                     0x999C60
#define CEditWnd__GetCharIndexPt_x                                 0x999A10
#define CEditWnd__GetDisplayString_x                               0x9998B0
#define CEditWnd__GetHorzOffset_x                                  0x997FD0
#define CEditWnd__GetLineForPrintableChar_x                        0x99AD00
#define CEditWnd__GetSelStartPt_x                                  0x999CC0
#define CEditWnd__GetSTMLSafeText_x                                0x9996C0
#define CEditWnd__PointFromPrintableChar_x                         0x99A950
#define CEditWnd__SelectableCharFromPoint_x                        0x99AAB0
#define CEditWnd__SetEditable_x                                    0x999D90
#define CEditWnd__SetWindowTextA_x                                 0x999410
#define CEditWnd__ReplaceSelection_x                               0x99A510
#define CEditWnd__ReplaceSelection1_x                              0x99A490

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62F1F0
#define CEverQuest__ClickedPlayer_x                                0x620720
#define CEverQuest__CreateTargetIndicator_x                        0x640B10
#define CEverQuest__DeleteTargetIndicator_x                        0x640BA0
#define CEverQuest__DoTellWindow_x                                 0x4F2150
#define CEverQuest__OutputTextToLog_x                              0x4F2420
#define CEverQuest__DropHeldItemOnGround_x                         0x615730
#define CEverQuest__dsp_chat_x                                     0x4F27F0
#define CEverQuest__trimName_x                                     0x63C100
#define CEverQuest__Emote_x                                        0x62F8B0
#define CEverQuest__EnterZone_x                                    0x629530
#define CEverQuest__GetBodyTypeDesc_x                              0x634E40
#define CEverQuest__GetClassDesc_x                                 0x635480
#define CEverQuest__GetClassThreeLetterCode_x                      0x635A80
#define CEverQuest__GetDeityDesc_x                                 0x63F2C0
#define CEverQuest__GetLangDesc_x                                  0x635C40
#define CEverQuest__GetRaceDesc_x                                  0x635460
#define CEverQuest__InterpretCmd_x                                 0x63F930
#define CEverQuest__LeftClickedOnPlayer_x                          0x619CB0
#define CEverQuest__LMouseUp_x                                     0x617CE0
#define CEverQuest__RightClickedOnPlayer_x                         0x61A8A0
#define CEverQuest__RMouseUp_x                                     0x618FA0
#define CEverQuest__SetGameState_x                                 0x6154B0
#define CEverQuest__UPCNotificationFlush_x                         0x63C020
#define CEverQuest__IssuePetCommand_x                              0x637240
#define CEverQuest__ReportSuccessfulHit_x                          0x6311C0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x7574D0
#define CGaugeWnd__CalcLinesFillRect_x                             0x757530
#define CGaugeWnd__Draw_x                                          0x756AE0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4400
#define CGuild__GetGuildName_x                                     0x4B2C20
#define CGuild__GetGuildIndex_x                                    0x4B3340

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774930

//CHotButton
#define CHotButton__SetCheck_x                                     0x654170
#define CHotButton__SetButtonSize_x                                0x654530

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781950
#define CInvSlotMgr__MoveItem_x                                    0x780520
#define CInvSlotMgr__SelectSlot_x                                  0x781A10

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77ED70
#define CInvSlot__SliderComplete_x                                 0x77C250
#define CInvSlot__GetItemBase_x                                    0x77BB20
#define CInvSlot__UpdateItem_x                                     0x77BD10

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x783670
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782840
#define CInvSlotWnd__HandleLButtonUp_x                             0x7831F0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x84C7F0
#define CItemDisplayWnd__UpdateStrings_x                           0x792840
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78C300
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78C850
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x792E40
#define CItemDisplayWnd__AboutToShow_x                             0x792440
#define CItemDisplayWnd__WndNotification_x                         0x794380
#define CItemDisplayWnd__RequestConvertItem_x                      0x793C60
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x791520
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x792280

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x881940

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x798CC0
#define CItemDisplayManager__ShowItem_x                            0x798270

// CLabel 
#define CLabel__UpdateText_x                                       0x79F3F0

// CListWnd
#define CListWnd__CListWnd_x                                       0x964810
#define CListWnd__dCListWnd_x                                      0x964B10
#define CListWnd__AddColumn_x                                      0x9696F0
#define CListWnd__AddColumn1_x                                     0x969810
#define CListWnd__AddLine_x                                        0x969B80
#define CListWnd__AddString_x                                      0x969980
#define CListWnd__CalculateFirstVisibleLine_x                      0x9694A0
#define CListWnd__CalculateVSBRange_x                              0x969290
#define CListWnd__ClearSel_x                                       0x96A470
#define CListWnd__ClearAllSel_x                                    0x96A4C0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x96AF60
#define CListWnd__Compare_x                                        0x968A10
#define CListWnd__Draw_x                                           0x964CD0
#define CListWnd__DrawColumnSeparators_x                           0x967800
#define CListWnd__DrawHeader_x                                     0x967C60
#define CListWnd__DrawItem_x                                       0x9682B0
#define CListWnd__DrawLine_x                                       0x967970
#define CListWnd__DrawSeparator_x                                  0x9678A0
#define CListWnd__EnableLine_x                                     0x9670D0
#define CListWnd__EnsureVisible_x                                  0x96AE90
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x96A3B0
#define CListWnd__GetColumnTooltip_x                               0x966C50
#define CListWnd__GetColumnMinWidth_x                              0x966CC0
#define CListWnd__GetColumnWidth_x                                 0x966BD0
#define CListWnd__GetCurSel_x                                      0x966570
#define CListWnd__GetItemAtPoint_x                                 0x967340
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x9673B0
#define CListWnd__GetItemColor_x                                   0x9668F0
#define CListWnd__GetItemData_x                                    0x9665F0
#define CListWnd__GetItemHeight_x                                  0x9669A0
#define CListWnd__GetItemIcon_x                                    0x966770
#define CListWnd__GetItemRect_x                                    0x9671C0
#define CListWnd__GetItemText_x                                    0x966630
#define CListWnd__GetSelList_x                                     0x96A510
#define CListWnd__GetSeparatorRect_x                               0x967620
#define CListWnd__InsertLine_x                                     0x969FE0
#define CListWnd__RemoveLine_x                                     0x96A200
#define CListWnd__SetColors_x                                      0x969260
#define CListWnd__SetColumnJustification_x                         0x968F90
#define CListWnd__SetColumnLabel_x                                 0x969920
#define CListWnd__SetColumnWidth_x                                 0x968EA0
#define CListWnd__SetCurSel_x                                      0x96A300
#define CListWnd__SetItemColor_x                                   0x96AB50
#define CListWnd__SetItemData_x                                    0x96AB10
#define CListWnd__SetItemText_x                                    0x96A730
#define CListWnd__ShiftColumnSeparator_x                           0x969050
#define CListWnd__Sort_x                                           0x968D00
#define CListWnd__ToggleSel_x                                      0x96A330
#define CListWnd__SetColumnsSizable_x                              0x9690F0
#define CListWnd__SetItemWnd_x                                     0x96A9D0
#define CListWnd__GetItemWnd_x                                     0x9667C0
#define CListWnd__SetItemIcon_x                                    0x96A7B0
#define CListWnd__CalculateCustomWindowPositions_x                 0x9695A0
#define CListWnd__SetVScrollPos_x                                  0x968E80

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7B67F0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7B4E10
#define CMapViewWnd__HandleLButtonDown_x                           0x7B1CA0
#define CMapViewWnd__WndNotification_x                             0x7B90D0

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7D99D0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7DA330
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7DA970
#define CMerchantWnd__SelectRecoverySlot_x                         0x7DDB80
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7D8470
#define CMerchantWnd__SelectBuySellSlot_x                          0x7E3D00
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7D9630

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8ED580
#define CPacketScrambler__hton_x                                   0x8ED570

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x9881E0
#define CSidlManager__FindScreenPieceTemplate_x                    0x9885B0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x9883E0
#define CSidlManager__CreateXWndFromTemplate_x                     0x98BA60
#define CSidlManager__CreateXWndFromTemplate1_x                    0x98BCF0
#define CSidlManagerbase__CreateXWnd_x                             0x98BD30

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x842960
#define CSidlManager__CreateLabel_x                                0x842540

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x841FD0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x983F50
#define CSidlScreenWnd__CalculateVSBRange_x                        0x983E50
#define CSidlScreenWnd__ConvertToRes_x                             0x9B1900
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x9837D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x9834C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x983590
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x983660
#define CSidlScreenWnd__DrawSidlPiece_x                            0x9847E0
#define CSidlScreenWnd__EnableIniStorage_x                         0x984CC0
#define CSidlScreenWnd__GetSidlPiece_x                             0x9849D0
#define CSidlScreenWnd__Init1_x                                    0x982F70
#define CSidlScreenWnd__LoadIniInfo_x                              0x984D10
#define CSidlScreenWnd__LoadIniListWnd_x                           0x9858D0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x982380
#define CSidlScreenWnd__StoreIniInfo_x                             0x985450
#define CSidlScreenWnd__StoreIniVis_x                              0x9857C0
#define CSidlScreenWnd__WndNotification_x                          0x9846B0
#define CSidlScreenWnd__GetChildItem_x                             0x984C40
#define CSidlScreenWnd__HandleLButtonUp_x                          0x973380
#define CSidlScreenWnd__m_layoutCopy_x                             0x1615460

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C1A70
#define CSkillMgr__GetSkillCap_x                                   0x6C1C40
#define CSkillMgr__GetNameToken_x                                  0x6C12B0
#define CSkillMgr__IsActivatedSkill_x                              0x6C13A0
#define CSkillMgr__IsCombatSkill_x                                 0x6C1310

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x996BB0
#define CSliderWnd__SetValue_x                                     0x9969E0
#define CSliderWnd__SetNumTicks_x                                  0x996A40

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x8491C0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A0000
#define CStmlWnd__ParseSTML_x                                      0x9A11A0
#define CStmlWnd__CalculateHSBRange_x                              0x9A0F60
#define CStmlWnd__CalculateVSBRange_x                              0x9A0EE0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9A5DC0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9A6A60
#define CStmlWnd__ForceParseNow_x                                  0x9A0570
#define CStmlWnd__GetNextTagPiece_x                                0x9A5D20
#define CStmlWnd__GetVisibleText_x                                 0x9A0590
#define CStmlWnd__InitializeWindowVariables_x                      0x9A68B0
#define CStmlWnd__MakeStmlColorTag_x                               0x99F6A0
#define CStmlWnd__MakeWndNotificationTag_x                         0x99F710
#define CStmlWnd__SetSTMLText_x                                    0x99E480
#define CStmlWnd__StripFirstSTMLLines_x                            0x9A7C80
#define CStmlWnd__UpdateHistoryString_x                            0x9A6C60

// CTabWnd 
#define CTabWnd__Draw_x                                            0x99D3D0
#define CTabWnd__DrawCurrentPage_x                                 0x99DD60
#define CTabWnd__DrawTab_x                                         0x99D950
#define CTabWnd__GetCurrentPage_x                                  0x99CB40
#define CTabWnd__GetPageInnerRect_x                                0x99CD70
#define CTabWnd__GetTabInnerRect_x                                 0x99CCB0
#define CTabWnd__GetTabRect_x                                      0x99CB70
#define CTabWnd__InsertPage_x                                      0x99CF60
#define CTabWnd__RemovePage_x                                      0x99D0A0
#define CTabWnd__SetPage_x                                         0x99CDF0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x99D2D0
#define CTabWnd__UpdatePage_x                                      0x99D740
#define CTabWnd__GetPageFromTabIndex_x                             0x99D890
#define CTabWnd__GetCurrentTabIndex_x                              0x99CB30

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x99C4D0
#define CPageWnd__FlashTab_x                                       0x99C530

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC4A0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x96F8E0
#define CTextureFont__GetTextExtent_x                              0x96FBE0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9AE3B0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x95A2C0

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x544480
#define CXStr__CXStr1_x                                            0x482750
#define CXStr__CXStr3_x                                            0x941E20
#define CXStr__dCXStr_x                                            0x478F60
#define CXStr__operator_equal_x                                    0x942060
#define CXStr__operator_equal1_x                                   0x9420A0
#define CXStr__operator_plus_equal1_x                              0x942B00
#define CXStr__SetString_x                                         0x9449A0
#define CXStr__operator_char_p_x                                   0x942550
#define CXStr__GetChar_x                                           0x944300
#define CXStr__Delete_x                                            0x943BD0
#define CXStr__GetUnicode_x                                        0x944370
#define CXStr__Insert_x                                            0x9443D0
#define CXStr__FindNext_x                                          0x944020
#define CXStr__Copy_x                                              0x9439E0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x994BF0
#define CXWnd__BringToTop_x                                        0x976CF0
#define CXWnd__ClrFocus_x                                          0x976670
#define CXWnd__Destroy_x                                           0x976720
#define CXWnd__DoAllDrawing_x                                      0x972A20
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x9729F0
#define CXWnd__DrawColoredRect_x                                   0x972F70
#define CXWnd__DrawTooltip_x                                       0x971000
#define CXWnd__DrawTooltipAtPoint_x                                0x9710C0
#define CXWnd__GetBorderFrame_x                                    0x972C30
#define CXWnd__GetChildWndAt_x                                     0x976D90
#define CXWnd__GetClientClipRect_x                                 0x974EF0
#define CXWnd__GetScreenClipRect_x                                 0x974FC0
#define CXWnd__GetScreenRect_x                                     0x975180
#define CXWnd__GetRelativeRect_x                                   0x975230
#define CXWnd__GetTooltipRect_x                                    0x972FC0
#define CXWnd__GetWindowTextA_x                                    0x4F1FF0
#define CXWnd__IsActive_x                                          0x9736F0
#define CXWnd__IsDescendantOf_x                                    0x975BC0
#define CXWnd__IsReallyVisible_x                                   0x975BF0
#define CXWnd__IsType_x                                            0x977500
#define CXWnd__Move_x                                              0x975C50
#define CXWnd__Move1_x                                             0x975D50
#define CXWnd__ProcessTransition_x                                 0x976800
#define CXWnd__Refade_x                                            0x976010
#define CXWnd__Resize_x                                            0x9762B0
#define CXWnd__Right_x                                             0x976AE0
#define CXWnd__SetFocus_x                                          0x976630
#define CXWnd__SetFont_x                                           0x9766A0
#define CXWnd__SetKeyTooltip_x                                     0x9772D0
#define CXWnd__SetMouseOver_x                                      0x974060
#define CXWnd__StartFade_x                                         0x975AB0
#define CXWnd__GetChildItem_x                                      0x976F00
#define CXWnd__SetParent_x                                         0x975900
#define CXWnd__Minimize_x                                          0x976320

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9B2950

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x979D20
#define CXWndManager__DrawWindows_x                                0x979E70
#define CXWndManager__GetKeyboardFlags_x                           0x97C6F0
#define CXWndManager__HandleKeyboardMsg_x                          0x97C2E0
#define CXWndManager__RemoveWnd_x                                  0x97C9B0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x97CE50

// CDBStr
#define CDBStr__GetString_x                                        0x55A630

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C56B0
#define EQ_Character__Cur_HP_x                                     0x4D95E0
#define EQ_Character__Cur_Mana_x                                   0x4E16F0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C8D20
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B81F0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8340
#define EQ_Character__GetHPRegen_x                                 0x4E80F0
#define EQ_Character__GetEnduranceRegen_x                          0x4E86B0
#define EQ_Character__GetManaRegen_x                               0x4E8AF0
#define EQ_Character__Max_Endurance_x                              0x682BB0
#define EQ_Character__Max_HP_x                                     0x4D9410
#define EQ_Character__Max_Mana_x                                   0x6829A0
#define EQ_Character__doCombatAbility_x                            0x6854F0
#define EQ_Character__UseSkill_x                                   0x4EAB10
#define EQ_Character__GetConLevel_x                                0x67ACD0
#define EQ_Character__IsExpansionFlag_x                            0x5D3D30
#define EQ_Character__TotalEffect_x                                0x4CD190
#define EQ_Character__GetPCSpellAffect_x                           0x4C9B50
#define EQ_Character__SpellDuration_x                              0x4C9590
#define EQ_Character__MySpellDuration_x                            0x4B68B0
#define EQ_Character__GetAdjustedSkill_x                           0x4DC730
#define EQ_Character__GetBaseSkill_x                               0x4DD6D0
#define EQ_Character__CanUseItem_x                                 0x4E1A20
#define EQ_Character__CanMedOnHorse_x                              0x4EA650

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x90DA10

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69A5E0

//PcClient
#define PcClient__vftable_x                                        0xB44CB4
#define PcClient__PcClient_x                                       0x677F40

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4BFCB0
#define CCharacterListWnd__EnterWorld_x                            0x4BF680
#define CCharacterListWnd__Quit_x                                  0x4BF3A0
#define CCharacterListWnd__UpdateList_x                            0x4BF870

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65A3B0
#define EQ_Item__CreateItemTagString_x                             0x8E62E0
#define EQ_Item__IsStackable_x                                     0x8EB550
#define EQ_Item__GetImageNum_x                                     0x8E7FA0
#define EQ_Item__CreateItemClient_x                                0x659320
#define EQ_Item__GetItemValue_x                                    0x8E9290
#define EQ_Item__ValueSellMerchant_x                               0x8ED2B0
#define EQ_Item__IsKeyRingItem_x                                   0x8EAD40
#define EQ_Item__CanGoInBag_x                                      0x65A4D0
#define EQ_Item__IsEmpty_x                                         0x8EA740
#define EQ_Item__GetMaxItemCount_x                                 0x8E9680
#define EQ_Item__GetHeldItem_x                                     0x8E7E60
#define EQ_Item__CanGemFitInSlot_x                                 0x8E5B00

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57B480
#define EQ_LoadingS__Array_x                                       0xD91D00

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x6836A0
#define EQ_PC__GetAlternateAbilityId_x                             0x8F72F0
#define EQ_PC__GetCombatAbility_x                                  0x8F7870
#define EQ_PC__GetCombatAbilityTimer_x                             0x8F78E0
#define EQ_PC__GetItemRecastTimer_x                                0x685AF0
#define EQ_PC__HasLoreItem_x                                       0x67B680
#define EQ_PC__AlertInventoryChanged_x                             0x67A590
#define EQ_PC__GetPcZoneClient_x                                   0x6AACF0
#define EQ_PC__RemoveMyAffect_x                                    0x689010
#define EQ_PC__GetKeyRingItems_x                                   0x8F8370
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8F7ED0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x8F84C0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5DA0B0
#define EQItemList__add_object_x                                   0x60A5A0
#define EQItemList__add_item_x                                     0x5DA690
#define EQItemList__delete_item_x                                  0x5DA6E0
#define EQItemList__FreeItemList_x                                 0x5DA5F0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556740

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69C010
#define EQPlayer__dEQPlayer_x                                      0x68E8C0
#define EQPlayer__DoAttack_x                                       0x6A4A20
#define EQPlayer__EQPlayer_x                                       0x68F110
#define EQPlayer__SetNameSpriteState_x                             0x6936C0
#define EQPlayer__SetNameSpriteTint_x                              0x694590
#define PlayerBase__HasProperty_j_x                                0x9E2220
#define EQPlayer__IsTargetable_x                                   0x9E2780
#define EQPlayer__CanSee_x                                         0x9E2570
#define EQPlayer__CanSee1_x                                        0x9E2640
#define PlayerBase__GetVisibilityLineSegment_x                     0x9E22E0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A87E0
#define PlayerZoneClient__GetLevel_x                               0x6AAD30
#define PlayerZoneClient__IsValidTeleport_x                        0x60BA40
#define PlayerZoneClient__LegalPlayerRace_x                        0x573470

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69F1C0
#define EQPlayerManager__GetSpawnByName_x                          0x69F270
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69F300

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65DD00
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65DDD0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65DE10
#define KeypressHandler__ClearCommandStateArray_x                  0x65F2D0
#define KeypressHandler__HandleKeyDown_x                           0x65F2F0
#define KeypressHandler__HandleKeyUp_x                             0x65F390
#define KeypressHandler__SaveKeymapping_x                          0x65F940

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7B24A0
#define MapViewMap__SaveEx_x                                       0x7B59DF
#define MapViewMap__SetZoom_x                                      0x7BB620

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x90B8A0

// StringTable 
#define StringTable__getString_x                                   0x906780

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x688C60
#define PcZoneClient__RemovePetEffect_x                            0x6892C0
#define PcZoneClient__HasAlternateAbility_x                        0x682800
#define PcZoneClient__GetCurrentMod_x                              0x4EE2A0
#define PcZoneClient__GetModCap_x                                  0x4EE1A0
#define PcZoneClient__CanEquipItem_x                               0x682EB0
#define PcZoneClient__GetItemByID_x                                0x685FC0
#define PcZoneClient__GetItemByItemClass_x                         0x686100
#define PcZoneClient__RemoveBuffEffect_x                           0x689370
#define PcZoneClient__BandolierSwap_x                              0x683C60
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x685A90

//Doors
#define EQSwitch__UseSwitch_x                                      0x6105B0

//IconCache
#define IconCache__GetIcon_x                                       0x74BF20

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742B00
#define CContainerMgr__CloseContainer_x                            0x742DE0
#define CContainerMgr__OpenExperimentContainer_x                   0x743940

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x8119D0

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x6528C0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7A7710
#define CLootWnd__RequestLootSlot_x                                0x7A6940

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A5A00
#define EQ_Spell__SpellAffects_x                                   0x5A5F00
#define EQ_Spell__SpellAffectBase_x                                0x5A5C20
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0B80
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0B30
#define EQ_Spell__IsSPAStacking_x                                  0x5A6E10
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A6260
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A6E20
#define EQ_Spell__IsLullSpell_x                                    0x5A6650
#define __IsResEffectSpell_x                                       0x4D0330

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B11A0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x916320
#define EQ_Affect__SetAffectData_x                                 0x9168F0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x85E2C0
#define CTargetWnd__WndNotification_x                              0x85DA50
#define CTargetWnd__RefreshTargetBuffs_x                           0x85DDB0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x85C830

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x862E40
#define CTaskWnd__ConfirmAbandonTask_x                             0x865F10

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5542F0
#define CTaskManager__HandleMessage_x                              0x5521C0
#define CTaskManager__GetTaskStatus_x                              0x5543A0
#define CTaskManager__GetElementDescription_x                      0x554420

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A05E0
#define EqSoundManager__PlayScriptMp3_x                            0x5A07E0
#define EqSoundManager__SoundAssistPlay_x                          0x6C5F00
#define EqSoundManager__WaveInstancePlay_x                         0x6C53F0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x544130

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x99B960
#define CTextureAnimation__Draw_x                                  0x99BBA0
#define CTextureAnimation__AddBlankFrame_x                         0x99B780

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9976B0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x583A70
#define CAltAbilityData__GetMercMaxRank_x                          0x583A00
#define CAltAbilityData__GetMaxRank_x                              0x577E00

//CTargetRing
#define CTargetRing__Cast_x                                        0x6500D0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x659170
#define CharacterBase__CreateItemGlobalIndex_x                     0x6467E0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x659150
#define CharacterBase__GetItemByGlobalIndex_x                      0x91DEA0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x91DEF0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x727A10
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7282D0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728380

//messages
#define msg_spell_worn_off_x                                       0x5CB700
#define msg_new_text_x                                             0x5BF4F0
#define __msgTokenTextParam_x                                      0x5CDB60
#define msgTokenText_x                                             0x5CDF70

//SpellManager
#define SpellManager__vftable_x                                    0xB2F2F4
#define SpellManager__SpellManager_x                               0x6C9B30
#define Spellmanager__LoadTextSpells_x                             0x6CA430
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C9D00

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9E6A70

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D3D80
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D2260
#define ItemGlobalIndex__IsEquippedLocation_x                      0x672E20
#define ItemGlobalIndex__IsValidIndex_x                            0x5D3F10

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x916D20
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x917070

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x79F860

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x7477D0
#define CCursorAttachment__AttachToCursor1_x                       0x747810
#define CCursorAttachment__Deactivate_x                            0x748DA0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x98D250
#define CSidlManagerBase__CreatePageWnd_x                          0x98CB00
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x987F60
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x987EF0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9ACF80
#define CEQSuiteTextureLoader__GetTexture_x                        0x9ACC00

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x5242F0
#define CFindItemWnd__WndNotification_x                            0x5251B0
#define CFindItemWnd__Update_x                                     0x525D70
#define CFindItemWnd__PickupSelectedItem_x                         0x5239F0

//IString
#define IString__Append_x                                          0x513580

//Camera
#define CDisplay__cameraType_x                                     0xED5E0C
#define EverQuest__Cameras_x                                       0xDA5038

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52EF90
#define LootFiltersManager__GetItemFilterData_x                    0x52E8D0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52E900
#define LootFiltersManager__SetItemLootFilter_x                    0x52EB10

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x7FE4B0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9EC730
#define CResolutionHandler__GetWindowedStyle_x                     0x6C03B0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73F480

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x922240
#define CDistillerInfo__Instance_x                                 0x922180

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7620D0
#define CGroupWnd__UpdateDisplay_x                                 0x761330

//ItemBase
#define ItemBase__IsLore_x                                         0x8EADE0
#define ItemBase__IsLoreEquipped_x                                 0x8EAE50

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60A500
#define EQPlacedItemManager__GetItemByGuid_x                       0x60A640
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60A6A0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4AD0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B93D0

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x519D60

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x504B00
#define FactionManagerClient__HandleFactionMessage_x               0x505320
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x505B40
#define FactionManagerClient__GetMaxFaction_x                      0x505B5F
#define FactionManagerClient__GetMinFaction_x                      0x505B10

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511710

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x96E570

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49DF00

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x511980

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x582C40

//CTargetManager
#define CTargetManager__Get_x                                      0x6CDAC0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B4AD0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC260

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DA590

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE426CC

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EB220
#define CAAWnd__UpdateSelected_x                                   0x6E78C0
#define CAAWnd__Update_x                                           0x6EA550

//CXRect
#define CXRect__operator_and_x                                     0x757590

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D240

//
#define __eq_delete_x                                              0x9ECD15
#define __eq_new_x                                                 0x9ED284

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

