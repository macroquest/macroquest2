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
#define __ExpectedVersionDate                                     "Nov 10 2021"
#define __ExpectedVersionTime                                     "04:27:13"
#define __ActualVersionDate_x                                      0xB566CC
#define __ActualVersionTime_x                                      0xB566C0
#define __ActualVersionBuild_x                                     0xB468A4

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x663590
#define __MemChecker1_x                                            0x8F2E20
#define __MemChecker2_x                                            0x6DE590
#define __MemChecker3_x                                            0x6DE500
#define __MemChecker4_x                                            0x8A41E0
#define __EncryptPad0_x                                            0xE56C10
#define __EncryptPad1_x                                            0xEA45D8
#define __EncryptPad2_x                                            0xE65E38
#define __EncryptPad3_x                                            0xE65A38
#define __EncryptPad4_x                                            0xEA2240
#define __EP1_Data_x                                               0x34A034

// Direct Input
#define DI8__Main_x                                                0xFA28DC
#define DI8__Keyboard_x                                            0xFA28E0
#define DI8__Mouse_x                                               0xFA2838
#define DI8__Mouse_Copy_x                                          0xDB1E54
#define DI8__Mouse_Check_x                                         0xFA3318
#define __AutoSkillArray_x                                         0xDB2970
#define __Attack_x                                                 0xE50793
#define __Autofire_x                                               0xE50794
#define __BindList_x                                               0xDA7508
#define g_eqCommandStates_x                                        0xDA8270
#define __Clicks_x                                                 0xDB1F0C
#define __CommandList_x                                            0xDA8DF8
#define __CurrentMapLabel_x                                        0xFB58F4
#define __CurrentSocial_x                                          0xC62460
#define __DoAbilityList_x                                          0xDE82B4
#define __do_loot_x                                                0x5E0820
#define __DrawHandler_x                                            0x16271D0
#define __GroupCount_x                                             0xF97E8A
#define __Guilds_x                                                 0xF9C2F0
#define __gWorld_x                                                 0xF9809C
#define __HWnd_x                                                   0xFA283C
#define __heqmain_x                                                0xFA57AC
#define __InChatMode_x                                             0xDB1E3C
#define __LastTell_x                                               0xDB39B0
#define __LMouseHeldTime_x                                         0xDB1F78
#define __Mouse_x                                                  0xFA28C8
#define __MouseLook_x                                              0xDB1ED2
#define __MouseEventTime_x                                         0xF9DD1C
#define __gpbCommandEvent_x                                        0xF981A8
#define __NetStatusToggle_x                                        0xDB1ED5
#define __PCNames_x                                                0xDB2F60
#define __RangeAttackReady_x                                       0xDB2C54
#define __RMouseHeldTime_x                                         0xDB1F74
#define __RunWalkState_x                                           0xDB1E40
#define __ScreenMode_x                                             0xEE4184
#define __ScreenX_x                                                0xDB1DF4
#define __ScreenY_x                                                0xDB1DF0
#define __ScreenXMax_x                                             0xDB1DF8
#define __ScreenYMax_x                                             0xDB1DFC
#define __ServerHost_x                                             0xF98373
#define __ServerName_x                                             0xDE8274
#define __ShiftKeyDown_x                                           0xDB24D0
#define __ShowNames_x                                              0xDB2E10
#define EverQuestInfo__bSocialChanged_x                            0xDE82FC
#define __Socials_x                                                0xDE8374
#define __SubscriptionType_x                                       0xFED418
#define __TargetAggroHolder_x                                      0xFB82A8
#define __ZoneType_x                                               0xDB22D0
#define __GroupAggro_x                                             0xFB82E8
#define __LoginName_x                                              0xFA2FAC
#define __Inviter_x                                                0xE50710
#define __AttackOnAssist_x                                         0xDB2DCC
#define __UseTellWindows_x                                         0xDB30F8
#define __gfMaxZoomCameraDistance_x                                0xB4E544
#define __gfMaxCameraDistance_x                                    0xB76F10
#define __pulAutoRun_x                                             0xDB1EF0
#define __pulForward_x                                             0xDB3130
#define __pulBackward_x                                            0xDB3134
#define __pulTurnRight_x                                           0xDB3138
#define __pulTurnLeft_x                                            0xDB313C
#define __pulStrafeLeft_x                                          0xDB3140
#define __pulStrafeRight_x                                         0xDB3144

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF98688
#define instEQZoneInfo_x                                           0xDB20C8
#define pinstActiveBanker_x                                        0xF95D88
#define pinstActiveCorpse_x                                        0xF95D80
#define pinstActiveGMaster_x                                       0xF95D84
#define pinstActiveMerchant_x                                      0xF95D7C
#define pinstAltAdvManager_x                                       0xEE4F98
#define pinstBandageTarget_x                                       0xF95D98
#define pinstCamActor_x                                            0xEE4178
#define pinstCDBStr_x                                              0xEE3D08
#define pinstCDisplay_x                                            0xF95E04
#define pinstCEverQuest_x                                          0xFA2844
#define pinstEverQuestInfo_x                                       0xDB1DE8
#define pinstCharData_x                                            0xF95DF4
#define pinstCharSpawn_x                                           0xF95DD0
#define pinstControlledMissile_x                                   0xF95DDC
#define pinstControlledPlayer_x                                    0xF95DD0
#define pinstCResolutionHandler_x                                  0x16273F8
#define pinstCSidlManager_x                                        0xFC6E34
#define pinstCXWndManager_x                                        0xFC6E2C
#define instDynamicZone_x                                          0xF9C1C8
#define pinstDZMember_x                                            0xF9C2D8
#define pinstDZTimerInfo_x                                         0xF9C2DC
#define pinstEqLogin_x                                             0xFA28F8
#define instEQMisc_x                                               0xD9B8D8
#define pinstEQSoundManager_x                                      0xEE58A8
#define pinstEQSpellStrings_x                                      0xED49A8
#define instExpeditionLeader_x                                     0xF9C212
#define instExpeditionName_x                                       0xF9C252
#define pinstGroup_x                                               0xF97E86
#define pinstImeManager_x                                          0xFC6E30
#define pinstLocalPlayer_x                                         0xF95D78
#define pinstMercenaryData_x                                       0xF9F814
#define pinstMercenaryStats_x                                      0xFB8374
#define pinstModelPlayer_x                                         0xF95D90
#define pinstPCData_x                                              0xF95DF4
#define pinstSkillMgr_x                                            0xFA1900
#define pinstSpawnManager_x                                        0xFA03D8
#define pinstSpellManager_x                                        0xFA1B40
#define pinstSpellSets_x                                           0xE493BC
#define pinstStringTable_x                                         0xF95E00
#define pinstSwitchManager_x                                       0xF95C28
#define pinstTarget_x                                              0xF95DCC
#define pinstTargetObject_x                                        0xF95DEC
#define pinstTargetSwitch_x                                        0xF95DF0
#define pinstTaskMember_x                                          0xD9B420
#define pinstTrackTarget_x                                         0xF95DD4
#define pinstTradeTarget_x                                         0xF95D8C
#define instTributeActive_x                                        0xD9B8F9
#define pinstViewActor_x                                           0xEE4174
#define pinstWorldData_x                                           0xF95DF8
#define pinstZoneAddr_x                                            0xDB2368
#define pinstPlayerPath_x                                          0xFA0470
#define pinstTargetIndicator_x                                     0xFA1DA8
#define EQObject_Top_x                                             0xF95DE8

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE3DA8
#define pinstCAchievementsWnd_x                                    0xEE3EA0
#define pinstCActionsWnd_x                                         0xEE4170
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE419C
#define pinstCAdvancedLootWnd_x                                    0xEE4190
#define pinstCAdventureLeaderboardWnd_x                            0xFAF118
#define pinstCAdventureRequestWnd_x                                0xFAF1C8
#define pinstCAdventureStatsWnd_x                                  0xFAF278
#define pinstCAggroMeterWnd_x                                      0xEE3EFC
#define pinstCAlarmWnd_x                                           0xEE3DD0
#define pinstCAlertHistoryWnd_x                                    0xEE41C4
#define pinstCAlertStackWnd_x                                      0xEE41A0
#define pinstCAlertWnd_x                                           0xEE41A8
#define pinstCAltStorageWnd_x                                      0xFAF5D8
#define pinstCAudioTriggersWindow_x                                0xEC6CD8
#define pinstCAuraWnd_x                                            0xEE41C8
#define pinstCAvaZoneWnd_x                                         0xEE3E94
#define pinstCBandolierWnd_x                                       0xEE41D0
#define pinstCBankWnd_x                                            0xEE414C
#define pinstCBarterMerchantWnd_x                                  0xFB0818
#define pinstCBarterSearchWnd_x                                    0xFB08C8
#define pinstCBarterWnd_x                                          0xFB0978
#define pinstCBazaarConfirmationWnd_x                              0xEE3DDC
#define pinstCBazaarSearchWnd_x                                    0xEE3E88
#define pinstCBazaarWnd_x                                          0xEE3E38
#define pinstCBlockedBuffWnd_x                                     0xEE3EC4
#define pinstCBlockedPetBuffWnd_x                                  0xEE3EC8
#define pinstCBodyTintWnd_x                                        0xEE3DFC
#define pinstCBookWnd_x                                            0xEE4154
#define pinstCBreathWnd_x                                          0xEE3DAC
#define pinstCBuffWindowNORMAL_x                                   0xEE3EBC
#define pinstCBuffWindowSHORT_x                                    0xEE3EC0
#define pinstCBugReportWnd_x                                       0xEE3E68
#define pinstCButtonWnd_x                                          0xFC7098
#define pinstCCastingWnd_x                                         0xEE3EF8
#define pinstCCastSpellWnd_x                                       0xEE3F0C
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE3E90
#define pinstCChatWindowManager_x                                  0xFB1420
#define pinstCClaimWnd_x                                           0xFB1578
#define pinstCColorPickerWnd_x                                     0xEE3EB0
#define pinstCCombatAbilityWnd_x                                   0xEE41B4
#define pinstCCombatSkillsSelectWnd_x                              0xEE41B0
#define pinstCCompassWnd_x                                         0xEE3DB8
#define pinstCConfirmationDialog_x                                 0xFB6440
#define pinstCContainerMgr_x                                       0xEE41DC
#define pinstCContextMenuManager_x                                 0xFC6DE8
#define pinstCCursorAttachment_x                                   0xEE3EF0
#define pinstCDragonHoardWnd_x                                     0xEE3E84
#define pinstCDynamicZoneWnd_x                                     0xFB1B40
#define pinstCEditLabelWnd_x                                       0xEE3E4C
#define pinstCEQMainWnd_x                                          0xFB1D88
#define pinstCEventCalendarWnd_x                                   0xEE3DC0
#define pinstCExtendedTargetWnd_x                                  0xEE3EF4
#define pinstCFactionWnd_x                                         0xEE3F08
#define pinstCFellowshipWnd_x                                      0xFB1F88
#define pinstCFileSelectionWnd_x                                   0xEE3DB4
#define pinstCFindItemWnd_x                                        0xEE3DD4
#define pinstCFindLocationWnd_x                                    0xFB20E0
#define pinstCFriendsWnd_x                                         0xEE41B8
#define pinstCGemsGameWnd_x                                        0xEE3DC8
#define pinstCGiveWnd_x                                            0xEE3E40
#define pinstCGroupSearchFiltersWnd_x                              0xEE3ECC
#define pinstCGroupSearchWnd_x                                     0xFB24D8
#define pinstCGroupWnd_x                                           0xFB2588
#define pinstCGuildBankWnd_x                                       0xFB2638
#define pinstCGuildCreationWnd_x                                   0xFB26E8
#define pinstCGuildMgmtWnd_x                                       0xFB2798
#define pinstCharacterCreation_x                                   0xEE3ED4
#define pinstCHelpWnd_x                                            0xEE4140
#define pinstCHeritageSelectionWnd_x                               0xEE3E9C
#define pinstCHotButtonWnd_x                                       0xFB48F0
#define pinstCHotButtonWnd1_x                                      0xFB48F0
#define pinstCHotButtonWnd2_x                                      0xFB48F4
#define pinstCHotButtonWnd3_x                                      0xFB48F8
#define pinstCHotButtonWnd4_x                                      0xFB48FC
#define pinstCIconSelectionWnd_x                                   0xEE3E64
#define pinstCInspectWnd_x                                         0xEE3E58
#define pinstCInventoryWnd_x                                       0xEE4144
#define pinstCInvSlotMgr_x                                         0xEE41D4
#define pinstCItemDisplayManager_x                                 0xFB4E48
#define pinstCItemExpTransferWnd_x                                 0xFB4F78
#define pinstCItemFuseWnd_x                                        0xEE3DF8
#define pinstCItemOverflowWnd_x                                    0xEE3E24
#define pinstCJournalCatWnd_x                                      0xEE3DEC
#define pinstCJournalNPCWnd_x                                      0xEE3DE0
#define pinstCJournalTextWnd_x                                     0xEE3DE0
#define pinstCKeyRingWnd_x                                         0xEE4148
#define pinstCLargeDialogWnd_x                                     0xFB70C0
#define pinstCLayoutCopyWnd_x                                      0xFB52C8
#define pinstCLFGuildWnd_x                                         0xFB5378
#define pinstCLoadskinWnd_x                                        0xEE3DCC
#define pinstCLootFiltersCopyWnd_x                                 0xEE3218
#define pinstCLootFiltersWnd_x                                     0xEE3DE4
#define pinstCLootSettingsWnd_x                                    0xEE3DE8
#define pinstCLootWnd_x                                            0xEE4158
#define pinstCMailAddressBookWnd_x                                 0xEE3E7C
#define pinstCMailCompositionWnd_x                                 0xEE3E74
#define pinstCMailIgnoreListWnd_x                                  0xEE3E80
#define pinstCMailWnd_x                                            0xEE3E6C
#define pinstCManageLootWnd_x                                      0xEE5418
#define pinstCMapToolbarWnd_x                                      0xEE3E44
#define pinstCMapViewWnd_x                                         0xEE3E3C
#define pinstCMarketplaceWnd_x                                     0xEE3E60
#define pinstCMerchantWnd_x                                        0xEE3E20
#define pinstCMIZoneSelectWnd_x                                    0xFB5BB0
#define pinstCMusicPlayerWnd_x                                     0xEE41D8
#define pinstCNameChangeMercWnd_x                                  0xEE4194
#define pinstCNameChangePetWnd_x                                   0xEE416C
#define pinstCNameChangeWnd_x                                      0xEE3EA4
#define pinstCNoteWnd_x                                            0xEE3F2C
#define pinstCObjectPreviewWnd_x                                   0xEE3EAC
#define pinstCOptionsWnd_x                                         0xEE3EB8
#define pinstCOverseerWnd_x                                        0xEE3E28
#define pinstCPetInfoWnd_x                                         0xEE4160
#define pinstCPetitionQWnd_x                                       0xEE3EDC
#define pinstCPlayerCustomizationWnd_x                             0xEE3E98
#define pinstCPlayerNotesWnd_x                                     0xEE3DBC
#define pinstCPlayerWnd_x                                          0xEE3DC4
#define pinstCPopupWndManager_x                                    0xFB6440
#define pinstCProgressionSelectionWnd_x                            0xFB64F0
#define pinstCPurchaseGroupWnd_x                                   0xEE3E78
#define pinstCPurchaseWnd_x                                        0xEE3E70
#define pinstCPvPLeaderboardWnd_x                                  0xFB65A0
#define pinstCPvPStatsWnd_x                                        0xFB6650
#define pinstCQuantityWnd_x                                        0xEE4150
#define pinstCRaceChangeWnd_x                                      0xEE3EA8
#define pinstCRaidOptionsWnd_x                                     0xEE3F00
#define pinstCRaidWnd_x                                            0xEE3F10
#define pinstCRealEstateItemsWnd_x                                 0xEE3EB4
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE3F04
#define pinstCRealEstateManageWnd_x                                0xEE3EE0
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE3EE4
#define pinstCRealEstatePlotSearchWnd_x                            0xEE3EE8
#define pinstCRealEstatePurchaseWnd_x                              0xEE3EEC
#define pinstCRespawnWnd_x                                         0xEE41CC
#define pinstCRewardSelectionWnd_x                                 0xFB6D98
#define pinstCSelectorWnd_x                                        0xEE3E30
#define pinstCSendMoneyWnd_x                                       0xEE3E48
#define pinstCServerListWnd_x                                      0xEE3DB0
#define pinstCSkillsSelectWnd_x                                    0xEE41AC
#define pinstCSkillsWnd_x                                          0xEE4198
#define pinstCSocialEditWnd_x                                      0xEE3E5C
#define pinstCSocialWnd_x                                          0xEE3DD8
#define pinstCSpellBookWnd_x                                       0xEE3F28
#define pinstCStoryWnd_x                                           0xEE3DF4
#define pinstCTargetOfTargetWnd_x                                  0xFB83F8
#define pinstCTargetWnd_x                                          0xEE3E54
#define pinstCTaskOverlayWnd_x                                     0xEE3DF0
#define pinstCTaskSelectWnd_x                                      0xFB8550
#define pinstCTaskManager_x                                        0xC6D268
#define pinstCTaskTemplateSelectWnd_x                              0xFB8600
#define pinstCTaskWnd_x                                            0xFB86B0
#define pinstCTextEntryWnd_x                                       0xEE41A4
#define pinstCTimeLeftWnd_x                                        0xEE3ED8
#define pinstCTipWndCONTEXT_x                                      0xFB88B4
#define pinstCTipWndOFDAY_x                                        0xFB88B0
#define pinstCTitleWnd_x                                           0xFB8960
#define pinstCTrackingWnd_x                                        0xEE3E50
#define pinstCTradeskillWnd_x                                      0xFB8AC8
#define pinstCTradeWnd_x                                           0xEE3E2C
#define pinstCTrainWnd_x                                           0xEE4168
#define pinstCTributeBenefitWnd_x                                  0xFB8CC8
#define pinstCTributeMasterWnd_x                                   0xFB8D78
#define pinstCTributeTrophyWnd_x                                   0xFB8E28
#define pinstCVideoModesWnd_x                                      0xEE3E34
#define pinstCVoiceMacroWnd_x                                      0xFA21C0
#define pinstCVoteResultsWnd_x                                     0xEE4164
#define pinstCVoteWnd_x                                            0xEE415C
#define pinstCZoneGuideWnd_x                                       0xEE41BC
#define pinstCZonePathWnd_x                                        0xEE41C0

#define pinstEQSuiteTextureLoader_x                                0xEA4B98
#define pinstItemIconCache_x                                       0xFB1D40
#define pinstLootFiltersManager_x                                  0xEE32C8
#define pinstRewardSelectionWnd_x                                  0xFB6D98

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DBAF0
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DBD80
#define __ConvertItemTags_x                                        0x5F8F90
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F5DB0
#define __EQGetTime_x                                              0x8F2A90
#define __ExecuteCmd_x                                             0x5D3FB0
#define __FixHeading_x                                             0x9F0930
#define __FlushDxKeyboard_x                                        0x6D9860
#define __GameLoop_x                                               0x6DD190
#define __get_bearing_x                                            0x5DB710
#define __get_melee_range_x                                        0x5DBFC0
#define __GetAnimationCache_x                                      0x74C780
#define __GetGaugeValueFromEQ_x                                    0x85CEF0
#define __GetLabelFromEQ_x                                         0x85E900
#define __GetXTargetType_x                                         0x9F2CA0
#define __HandleMouseWheel_x                                       0x6DE620
#define __HeadingDiff_x                                            0x9F0990
#define __HelpPath_x                                               0xF9D9DC
#define __ExecuteFrontEnd_x                                        0x6DA040
#define __NewUIINI_x                                               0x85CBD0
#define __ProcessGameEvents_x                                      0x6426E0
#define __ProcessMouseEvent_x                                      0x641DE0
#define __SaveColors_x                                             0x56F8F0
#define __STMLToText_x                                             0x92FE70
#define __ToggleKeyRingItem_x                                      0x528DD0
#define CMemoryMappedFile__SetFile_x                               0xAE1C20
#define CrashDetected_x                                            0x6DBD90
#define DrawNetStatus_x                                            0x671B50
#define Expansion_HoT_x                                            0xDB2DB8
#define Teleport_Table_Size_x                                      0xF98230
#define Teleport_Table_x                                           0xF95E08
#define Util__FastTime_x                                           0x8F2650
#define __CopyLayout_x                                             0x65E800
#define __WndProc_x                                                0x6DC290
#define __ProcessKeyboardEvent_x                                   0x6DB7D0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491A20
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B580
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B400
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495700
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494940

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x578970
#define AltAdvManager__IsAbilityReady_x                            0x577570
#define AltAdvManager__GetAAById_x                                 0x577910
#define AltAdvManager__CanTrainAbility_x                           0x577980
#define AltAdvManager__CanSeeAbility_x                             0x577D30

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1880
#define CharacterZoneClient__HasSkill_x                            0x4DD030
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE7B0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8CD0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C14A0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFCB0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFDB0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFEF0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAFC0
#define CharacterZoneClient__BardCastBard_x                        0x4CDF20
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5440
#define CharacterZoneClient__GetEffect_x                           0x4C13E0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC4F0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC5A0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC640
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC800
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC9E0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8C50
#define CharacterZoneClient__FindItemByGuid_x                      0x684FF0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DED90

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x707670
#define CBankWnd__WndNotification_x                                0x707420

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712190

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70CDD0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70ADA0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x7168C0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92D410
#define CButtonWnd__CButtonWnd_x                                   0x92BDC0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x739C60
#define CChatManager__InitContextMenu_x                            0x732140
#define CChatManager__FreeChatWindow_x                             0x738810
#define CChatManager__SetLockedActiveChatWindow_x                  0x739940
#define CChatManager__CreateChatWindow_x                           0x738E40

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFE00

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x943270
#define CContextMenu__dCContextMenu_x                              0x9434B0
#define CContextMenu__AddMenuItem_x                                0x9434C0
#define CContextMenu__AddChildMenuItem_x                           0x943600
#define CContextMenu__RemoveMenuItem_x                             0x9438B0
#define CContextMenu__RemoveAllMenuItems_x                         0x9438D0
#define CContextMenu__CheckMenuItem_x                              0x943930
#define CContextMenu__SetMenuItem_x                                0x9437D0
#define CContextMenu__AddSeparator_x                               0x9437B0
#define CContextMenu__AddColorSeparator_x                          0x9183A0

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x943EC0
#define CContextMenuManager__RemoveMenu_x                          0x943F30
#define CContextMenuManager__PopupMenu_x                           0x943FF0
#define CContextMenuManager__Flush_x                               0x943E60
#define CContextMenuManager__GetMenu_x                             0x49DA70
#define CContextMenuManager__CreateDefaultMenu_x                   0x7465E0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9CA320
#define CChatService__GetFriendName_x                              0x9CA330

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73A5E0
#define CChatWindow__Clear_x                                       0x73BA80
#define CChatWindow__WndNotification_x                             0x73C210
#define CChatWindow__AddHistory_x                                  0x73B2C0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x940330
#define CComboWnd__Draw_x                                          0x93F7B0
#define CComboWnd__GetCurChoice_x                                  0x940100
#define CComboWnd__GetListRect_x                                   0x93FC60
#define CComboWnd__GetTextRect_x                                   0x9403A0
#define CComboWnd__InsertChoice_x                                  0x93FDF0
#define CComboWnd__SetColors_x                                     0x93FDC0
#define CComboWnd__SetChoice_x                                     0x9400E0
#define CComboWnd__GetItemCount_x                                  0x940110
#define CComboWnd__GetCurChoiceText_x                              0x940140
#define CComboWnd__GetChoiceText_x                                 0x940120
#define CComboWnd__InsertChoiceAtIndex_x                           0x93FE90

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x743C20
#define CContainerWnd__vftable_x                                   0xB5F96C
#define CContainerWnd__SetContainer_x                              0x745490

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56A130
#define CDisplay__PreZoneMainUI_x                                  0x56A140
#define CDisplay__CleanGameUI_x                                    0x56F6D0
#define CDisplay__GetClickedActor_x                                0x561F20
#define CDisplay__GetUserDefinedColor_x                            0x559CA0
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x563A30
#define CDisplay__is3dON_x                                         0x55E7B0
#define CDisplay__ReloadUI_x                                       0x569450
#define CDisplay__WriteTextHD2_x                                   0x55E5A0
#define CDisplay__TrueDistance_x                                   0x565A10
#define CDisplay__SetViewActor_x                                   0x561840
#define CDisplay__GetFloorHeight_x                                 0x55E870
#define CDisplay__SetRenderWindow_x                                0x55D220
#define CDisplay__ToggleScreenshotMode_x                           0x561310

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x965C30

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x946E70
#define CEditWnd__EnsureCaretVisible_x                             0x9491F0
#define CEditWnd__GetCaretPt_x                                     0x948050
#define CEditWnd__GetCharIndexPt_x                                 0x947E00
#define CEditWnd__GetDisplayString_x                               0x947CA0
#define CEditWnd__GetHorzOffset_x                                  0x9463C0
#define CEditWnd__GetLineForPrintableChar_x                        0x949100
#define CEditWnd__GetSelStartPt_x                                  0x9480B0
#define CEditWnd__GetSTMLSafeText_x                                0x947AB0
#define CEditWnd__PointFromPrintableChar_x                         0x948D40
#define CEditWnd__SelectableCharFromPoint_x                        0x948EA0
#define CEditWnd__SetEditable_x                                    0x948180
#define CEditWnd__SetWindowTextA_x                                 0x947800
#define CEditWnd__ReplaceSelection_x                               0x948900
#define CEditWnd__ReplaceSelection1_x                              0x948880

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62DCE0
#define CEverQuest__ClickedPlayer_x                                0x61F1F0
#define CEverQuest__CreateTargetIndicator_x                        0x63F640
#define CEverQuest__DeleteTargetIndicator_x                        0x63F6D0
#define CEverQuest__DoTellWindow_x                                 0x4EFF00
#define CEverQuest__OutputTextToLog_x                              0x4F01D0
#define CEverQuest__DropHeldItemOnGround_x                         0x6142C0
#define CEverQuest__dsp_chat_x                                     0x4F05A0
#define CEverQuest__trimName_x                                     0x63AC30
#define CEverQuest__Emote_x                                        0x62E3A0
#define CEverQuest__EnterZone_x                                    0x628040
#define CEverQuest__GetBodyTypeDesc_x                              0x6338F0
#define CEverQuest__GetClassDesc_x                                 0x633F30
#define CEverQuest__GetClassThreeLetterCode_x                      0x634530
#define CEverQuest__GetDeityDesc_x                                 0x63DDF0
#define CEverQuest__GetLangDesc_x                                  0x6346F0
#define CEverQuest__GetRaceDesc_x                                  0x633F10
#define CEverQuest__InterpretCmd_x                                 0x63E460
#define CEverQuest__LeftClickedOnPlayer_x                          0x6187B0
#define CEverQuest__LMouseUp_x                                     0x616870
#define CEverQuest__RightClickedOnPlayer_x                         0x6193A0
#define CEverQuest__RMouseUp_x                                     0x617B30
#define CEverQuest__SetGameState_x                                 0x614040
#define CEverQuest__UPCNotificationFlush_x                         0x63AB50
#define CEverQuest__IssuePetCommand_x                              0x635CF0
#define CEverQuest__ReportSuccessfulHit_x                          0x62FC70

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757730
#define CGaugeWnd__CalcLinesFillRect_x                             0x757790
#define CGaugeWnd__Draw_x                                          0x756D40

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4A50
#define CGuild__GetGuildName_x                                     0x4B3270
#define CGuild__GetGuildIndex_x                                    0x4B3990

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x774CA0

//CHotButton
#define CHotButton__SetCheck_x                                     0x652C80
#define CHotButton__SetButtonSize_x                                0x653040

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x782060
#define CInvSlotMgr__MoveItem_x                                    0x780C20
#define CInvSlotMgr__SelectSlot_x                                  0x782120

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F2F0
#define CInvSlot__SliderComplete_x                                 0x77C610
#define CInvSlot__GetItemBase_x                                    0x77BE90
#define CInvSlot__UpdateItem_x                                     0x77C080

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x782F20
#define CInvSlotWnd__HandleLButtonUp_x                             0x783940

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x857370
#define CItemDisplayWnd__UpdateStrings_x                           0x79B830
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x7907C0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790D10
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79BF40
#define CItemDisplayWnd__AboutToShow_x                             0x79B420
#define CItemDisplayWnd__WndNotification_x                         0x79D6D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79CD70
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79A2F0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79B210

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88C730

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2E20
#define CItemDisplayManager__ShowItem_x                            0x7A2290

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9970

// CListWnd
#define CListWnd__CListWnd_x                                       0x912DD0
#define CListWnd__dCListWnd_x                                      0x9130D0
#define CListWnd__AddColumn_x                                      0x917D00
#define CListWnd__AddColumn1_x                                     0x917E20
#define CListWnd__AddLine_x                                        0x9181A0
#define CListWnd__AddString_x                                      0x917F90
#define CListWnd__CalculateFirstVisibleLine_x                      0x917AB0
#define CListWnd__CalculateVSBRange_x                              0x917890
#define CListWnd__ClearSel_x                                       0x918B70
#define CListWnd__ClearAllSel_x                                    0x918BC0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9196B0
#define CListWnd__Compare_x                                        0x917010
#define CListWnd__Draw_x                                           0x913290
#define CListWnd__DrawColumnSeparators_x                           0x915E00
#define CListWnd__DrawHeader_x                                     0x916260
#define CListWnd__DrawItem_x                                       0x9168B0
#define CListWnd__DrawLine_x                                       0x915F70
#define CListWnd__DrawSeparator_x                                  0x915EA0
#define CListWnd__EnableLine_x                                     0x9156B0
#define CListWnd__EnsureVisible_x                                  0x9195D0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x918AB0
#define CListWnd__GetColumnTooltip_x                               0x915230
#define CListWnd__GetColumnMinWidth_x                              0x9152A0
#define CListWnd__GetColumnWidth_x                                 0x9151B0
#define CListWnd__GetCurSel_x                                      0x914B20
#define CListWnd__GetItemAtPoint_x                                 0x915930
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x9159A0
#define CListWnd__GetItemColor_x                                   0x914EA0
#define CListWnd__GetItemData_x                                    0x914BA0
#define CListWnd__GetItemHeight_x                                  0x914F80
#define CListWnd__GetItemIcon_x                                    0x914D20
#define CListWnd__GetItemRect_x                                    0x9157A0
#define CListWnd__GetItemText_x                                    0x914BE0
#define CListWnd__GetSelList_x                                     0x918C10
#define CListWnd__GetSeparatorRect_x                               0x915C10
#define CListWnd__InsertLine_x                                     0x9186E0
#define CListWnd__RemoveLine_x                                     0x918900
#define CListWnd__SetColors_x                                      0x917860
#define CListWnd__SetColumnJustification_x                         0x917590
#define CListWnd__SetColumnLabel_x                                 0x917F30
#define CListWnd__SetItemOnlyDrawTexture_x                         0x9192C0
#define CListWnd__SetColumnWidth_x                                 0x9174A0
#define CListWnd__SetCurSel_x                                      0x918A00
#define CListWnd__SetItemColor_x                                   0x919250
#define CListWnd__SetItemData_x                                    0x919210
#define CListWnd__SetItemText_x                                    0x918E30
#define CListWnd__ShiftColumnSeparator_x                           0x917650
#define CListWnd__Sort_x                                           0x917300
#define CListWnd__ToggleSel_x                                      0x918A30
#define CListWnd__SetColumnsSizable_x                              0x9176F0
#define CListWnd__SetItemWnd_x                                     0x9190D0
#define CListWnd__GetItemWnd_x                                     0x914D70
#define CListWnd__SetItemIcon_x                                    0x918EB0
#define CListWnd__CalculateCustomWindowPositions_x                 0x917BB0
#define CListWnd__SetVScrollPos_x                                  0x917480

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0EA0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BF4E0
#define CMapViewWnd__HandleLButtonDown_x                           0x7BC300
#define CMapViewWnd__WndNotification_x                             0x7C37D0

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E4480
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4DE0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E5470
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E8760
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2EF0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE940
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E40D0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x996DC0
#define CPacketScrambler__hton_x                                   0x996DB0

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x9364D0
#define CSidlManager__FindScreenPieceTemplate_x                    0x9368A0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x9366D0
#define CSidlManager__CreateXWndFromTemplate_x                     0x939D50
#define CSidlManager__CreateXWndFromTemplate1_x                    0x939FF0
#define CSidlManagerbase__CreateXWnd_x                             0x93A030

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84D3C0
#define CSidlManager__CreateLabel_x                                0x84CF90

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84CA10

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x932200
#define CSidlScreenWnd__CalculateVSBRange_x                        0x932100
#define CSidlScreenWnd__ConvertToRes_x                             0x95FEA0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x931A80
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x931770
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x931840
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x931910
#define CSidlScreenWnd__DrawSidlPiece_x                            0x932AC0
#define CSidlScreenWnd__EnableIniStorage_x                         0x932FA0
#define CSidlScreenWnd__GetSidlPiece_x                             0x932CB0
#define CSidlScreenWnd__Init1_x                                    0x931240
#define CSidlScreenWnd__LoadIniInfo_x                              0x932FF0
#define CSidlScreenWnd__LoadIniListWnd_x                           0x933BC0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x930640
#define CSidlScreenWnd__StoreIniInfo_x                             0x933740
#define CSidlScreenWnd__StoreIniVis_x                              0x933AB0
#define CSidlScreenWnd__WndNotification_x                          0x932990
#define CSidlScreenWnd__GetChildItem_x                             0x932F20
#define CSidlScreenWnd__HandleLButtonUp_x                          0x9215A0
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC6CB8

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C1220
#define CSkillMgr__GetSkillCap_x                                   0x6C13F0
#define CSkillMgr__GetNameToken_x                                  0x6C0A10
#define CSkillMgr__IsActivatedSkill_x                              0x6C0B00
#define CSkillMgr__IsCombatSkill_x                                 0x6C0A70

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x944FC0
#define CSliderWnd__SetValue_x                                     0x944DF0
#define CSliderWnd__SetNumTicks_x                                  0x944E50

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x853CC0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94E500
#define CStmlWnd__ParseSTML_x                                      0x94F6C0
#define CStmlWnd__CalculateHSBRange_x                              0x94F480
#define CStmlWnd__CalculateVSBRange_x                              0x94F3F0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9542F0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x954F90
#define CStmlWnd__ForceParseNow_x                                  0x94EA70
#define CStmlWnd__GetNextTagPiece_x                                0x954250
#define CStmlWnd__GetVisibleText_x                                 0x94EA90
#define CStmlWnd__InitializeWindowVariables_x                      0x954DE0
#define CStmlWnd__MakeStmlColorTag_x                               0x94DBA0
#define CStmlWnd__MakeWndNotificationTag_x                         0x94DC10
#define CStmlWnd__SetSTMLText_x                                    0x94C980
#define CStmlWnd__StripFirstSTMLLines_x                            0x9561B0
#define CStmlWnd__UpdateHistoryString_x                            0x955190

// CTabWnd 
#define CTabWnd__Draw_x                                            0x94B820
#define CTabWnd__DrawCurrentPage_x                                 0x94C1B0
#define CTabWnd__DrawTab_x                                         0x94BDA0
#define CTabWnd__GetCurrentPage_x                                  0x94AF80
#define CTabWnd__GetPageInnerRect_x                                0x94B1B0
#define CTabWnd__GetTabInnerRect_x                                 0x94B0F0
#define CTabWnd__GetTabRect_x                                      0x94AFB0
#define CTabWnd__InsertPage_x                                      0x94B3A0
#define CTabWnd__RemovePage_x                                      0x94B4F0
#define CTabWnd__SetPage_x                                         0x94B230
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x94B720
#define CTabWnd__UpdatePage_x                                      0x94BB90
#define CTabWnd__GetPageFromTabIndex_x                             0x94BCE0
#define CTabWnd__GetCurrentTabIndex_x                              0x94AF70

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x94A910
#define CPageWnd__FlashTab_x                                       0x94A970

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACAA0

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91DAC0
#define CTextureFont__GetTextExtent_x                              0x91DDC0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x95C950

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x908870

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x541B80
#define CXStr__CXStr1_x                                            0x4827A0
#define CXStr__CXStr3_x                                            0x8EE9E0
#define CXStr__dCXStr_x                                            0x478FA0
#define CXStr__operator_equal_x                                    0x8EEC20
#define CXStr__operator_equal1_x                                   0x8EEC60
#define CXStr__operator_plus_equal1_x                              0x8EF6C0
#define CXStr__SetString_x                                         0x8F1560
#define CXStr__operator_char_p_x                                   0x8EF110
#define CXStr__GetChar_x                                           0x8F0EC0
#define CXStr__Delete_x                                            0x8F0790
#define CXStr__GetUnicode_x                                        0x8F0F30
#define CXStr__Insert_x                                            0x8F0F90
#define CXStr__FindNext_x                                          0x8F0BE0
#define CXStr__Copy_x                                              0x8F05A0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x942ED0
#define CXWnd__BringToTop_x                                        0x924FA0
#define CXWnd__ClrFocus_x                                          0x924930
#define CXWnd__Destroy_x                                           0x9249D0
#define CXWnd__DoAllDrawing_x                                      0x920C00
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x920BD0
#define CXWnd__DrawColoredRect_x                                   0x921190
#define CXWnd__DrawTooltip_x                                       0x91F1A0
#define CXWnd__DrawTooltipAtPoint_x                                0x91F260
#define CXWnd__GetBorderFrame_x                                    0x920E30
#define CXWnd__GetChildWndAt_x                                     0x925040
#define CXWnd__GetClientClipRect_x                                 0x9231B0
#define CXWnd__GetScreenClipRect_x                                 0x923280
#define CXWnd__GetScreenRect_x                                     0x923440
#define CXWnd__GetRelativeRect_x                                   0x923500
#define CXWnd__GetTooltipRect_x                                    0x9211E0
#define CXWnd__GetWindowTextA_x                                    0x4EFDA0
#define CXWnd__IsActive_x                                          0x921910
#define CXWnd__IsDescendantOf_x                                    0x923E90
#define CXWnd__IsReallyVisible_x                                   0x923EC0
#define CXWnd__IsType_x                                            0x9257C0
#define CXWnd__Move_x                                              0x923F20
#define CXWnd__Move1_x                                             0x924020
#define CXWnd__ProcessTransition_x                                 0x924AB0
#define CXWnd__Refade_x                                            0x9242E0
#define CXWnd__Resize_x                                            0x924560
#define CXWnd__Right_x                                             0x924D90
#define CXWnd__SetFocus_x                                          0x9248F0
#define CXWnd__SetFont_x                                           0x924960
#define CXWnd__SetKeyTooltip_x                                     0x925580
#define CXWnd__SetMouseOver_x                                      0x922280
#define CXWnd__StartFade_x                                         0x923D70
#define CXWnd__GetChildItem_x                                      0x9251C0
#define CXWnd__SetParent_x                                         0x923BD0
#define CXWnd__Minimize_x                                          0x9245D0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x960EF0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x928000
#define CXWndManager__DrawWindows_x                                0x928150
#define CXWndManager__GetKeyboardFlags_x                           0x92A9F0
#define CXWndManager__HandleKeyboardMsg_x                          0x92A5D0
#define CXWndManager__RemoveWnd_x                                  0x92ACC0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x92B170

// CDBStr
#define CDBStr__GetString_x                                        0x5587A0

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5D90
#define EQ_Character__Cur_HP_x                                     0x4D9C80
#define EQ_Character__Cur_Mana_x                                   0x4E0EE0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C93C0
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8860
#define EQ_Character__GetFocusRangeModifier_x                      0x4B89B0
#define EQ_Character__GetHPRegen_x                                 0x4E69D0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6F90
#define EQ_Character__GetManaRegen_x                               0x4E73D0
#define EQ_Character__Max_Endurance_x                              0x681870
#define EQ_Character__Max_HP_x                                     0x4D9AB0
#define EQ_Character__Max_Mana_x                                   0x681650
#define EQ_Character__doCombatAbility_x                            0x684420
#define EQ_Character__UseSkill_x                                   0x4E85A0
#define EQ_Character__GetConLevel_x                                0x679950
#define EQ_Character__IsExpansionFlag_x                            0x5D2740
#define EQ_Character__TotalEffect_x                                0x4CD810
#define EQ_Character__GetPCSpellAffect_x                           0x4CA220
#define EQ_Character__SpellDuration_x                              0x4C9C60
#define EQ_Character__MySpellDuration_x                            0x4B6F30
#define EQ_Character__GetAdjustedSkill_x                           0x4DCDF0
#define EQ_Character__GetBaseSkill_x                               0x4DDDA0
#define EQ_Character__CanUseItem_x                                 0x4E1210
#define EQ_Character__CanMedOnHorse_x                              0x4E80E0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B78B0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699CE0

//PcClient
#define PcClient__vftable_x                                        0xB5343C
#define PcClient__PcClient_x                                       0x676A20

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0370
#define CCharacterListWnd__EnterWorld_x                            0x4BFD40
#define CCharacterListWnd__Quit_x                                  0x4BFA60
#define CCharacterListWnd__UpdateList_x                            0x4BFF30

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658EC0
#define EQ_Item__CreateItemTagString_x                             0x98FB10
#define EQ_Item__IsStackable_x                                     0x994D80
#define EQ_Item__GetImageNum_x                                     0x991870
#define EQ_Item__CreateItemClient_x                                0x657E50
#define EQ_Item__GetItemValue_x                                    0x992A90
#define EQ_Item__ValueSellMerchant_x                               0x996AD0
#define EQ_Item__IsKeyRingItem_x                                   0x994500
#define EQ_Item__CanGoInBag_x                                      0x658FE0
#define EQ_Item__IsEmpty_x                                         0x993EE0
#define EQ_Item__GetMaxItemCount_x                                 0x992EA0
#define EQ_Item__GetHeldItem_x                                     0x991720
#define EQ_Item__CanGemFitInSlot_x                                 0x98F2E0

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x579910
#define EQ_LoadingS__Array_x                                       0xD9FD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x6825C0
#define EQ_PC__GetAlternateAbilityId_x                             0x9A0CB0
#define EQ_PC__GetCombatAbility_x                                  0x9A1240
#define EQ_PC__GetCombatAbilityTimer_x                             0x9A12B0
#define EQ_PC__GetItemRecastTimer_x                                0x684A20
#define EQ_PC__HasLoreItem_x                                       0x67A2A0
#define EQ_PC__AlertInventoryChanged_x                             0x679130
#define EQ_PC__GetPcZoneClient_x                                   0x6AA460
#define EQ_PC__RemoveMyAffect_x                                    0x688290
#define EQ_PC__GetKeyRingItems_x                                   0x9A1E00
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9A18E0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9A2010

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8B90
#define EQItemList__add_object_x                                   0x609190
#define EQItemList__add_item_x                                     0x5D9170
#define EQItemList__delete_item_x                                  0x5D91C0
#define EQItemList__FreeItemList_x                                 0x5D90D0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554B00

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B710
#define EQPlayer__dEQPlayer_x                                      0x68DE20
#define EQPlayer__DoAttack_x                                       0x6A4120
#define EQPlayer__EQPlayer_x                                       0x68E670
#define EQPlayer__SetNameSpriteState_x                             0x692C20
#define EQPlayer__SetNameSpriteTint_x                              0x693AF0
#define PlayerBase__HasProperty_j_x                                0x9EED00
#define EQPlayer__IsTargetable_x                                   0x9EF260
#define EQPlayer__CanSee_x                                         0x9EF050
#define EQPlayer__CanSee1_x                                        0x9EF120
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EEDC0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7F40
#define PlayerZoneClient__GetLevel_x                               0x6AA4A0
#define PlayerZoneClient__IsValidTeleport_x                        0x60A660
#define PlayerZoneClient__LegalPlayerRace_x                        0x571730

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E8C0
#define EQPlayerManager__GetSpawnByName_x                          0x69E970
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69EA00

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C7B0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C880
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C8C0
#define KeypressHandler__ClearCommandStateArray_x                  0x65DD80
#define KeypressHandler__HandleKeyDown_x                           0x65DDA0
#define KeypressHandler__HandleKeyUp_x                             0x65DE40
#define KeypressHandler__SaveKeymapping_x                          0x65E3F0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BCB00
#define MapViewMap__SaveEx_x                                       0x7C00AF
#define MapViewMap__SetZoom_x                                      0x7C5D90

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B5730

// StringTable 
#define StringTable__getString_x                                   0x9B0470

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687ED0
#define PcZoneClient__RemovePetEffect_x                            0x688540
#define PcZoneClient__HasAlternateAbility_x                        0x6814A0
#define PcZoneClient__GetCurrentMod_x                              0x4EBF60
#define PcZoneClient__GetModCap_x                                  0x4EBE60
#define PcZoneClient__CanEquipItem_x                               0x681B80
#define PcZoneClient__GetItemByID_x                                0x684F50
#define PcZoneClient__RemoveBuffEffect_x                           0x6885F0
#define PcZoneClient__BandolierSwap_x                              0x682B80
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6849C0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60F280

//IconCache
#define IconCache__GetIcon_x                                       0x74C120

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x742AF0
#define CContainerMgr__CloseContainer_x                            0x742E10
#define CContainerMgr__OpenExperimentContainer_x                   0x743970

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81C3F0

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651400

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1D10
#define CLootWnd__RequestLootSlot_x                                0x7B0F30

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3B90
#define EQ_Spell__SpellAffects_x                                   0x5A40A0
#define EQ_Spell__SpellAffectBase_x                                0x5A3DC0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1220
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D11D0
#define EQ_Spell__IsSPAStacking_x                                  0x5A5020
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A42B0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A5050
#define EQ_Spell__IsLullSpell_x                                    0x5A4780
#define __IsResEffectSpell_x                                       0x4D09D0

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1800

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9C0330
#define EQ_Affect__SetAffectData_x                                 0x9C0900

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x869050
#define CTargetWnd__WndNotification_x                              0x8687F0
#define CTargetWnd__RefreshTargetBuffs_x                           0x868B50
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x8675D0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86DA90
#define CTaskWnd__ConfirmAbandonTask_x                             0x870B50

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5526C0
#define CTaskManager__HandleMessage_x                              0x550590
#define CTaskManager__GetTaskStatus_x                              0x552770
#define CTaskManager__GetElementDescription_x                      0x5527F0

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E780
#define EqSoundManager__PlayScriptMp3_x                            0x59E980
#define EqSoundManager__SoundAssistPlay_x                          0x6C56C0
#define EqSoundManager__WaveInstancePlay_x                         0x6C4BB0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541830

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x949D80
#define CTextureAnimation__Draw_x                                  0x949FC0
#define CTextureAnimation__AddBlankFrame_x                         0x949BA0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x945AA0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581F10
#define CAltAbilityData__GetMercMaxRank_x                          0x581EA0
#define CAltAbilityData__GetMaxRank_x                              0x5760F0

//CTargetRing
#define CTargetRing__Cast_x                                        0x64EC00

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657CA0
#define CharacterBase__CreateItemGlobalIndex_x                     0x645380
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x780AA0
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C7FD0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C8020
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726EE0
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7277B0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x727860

//messages
#define msg_spell_worn_off_x                                       0x5C9EA0
#define msg_new_text_x                                             0x5BD830
#define __msgTokenTextParam_x                                      0x5CC300
#define msgTokenText_x                                             0x5CC710

//SpellManager
#define SpellManager__vftable_x                                    0xB3D540
#define SpellManager__SpellManager_x                               0x6C92E0
#define Spellmanager__LoadTextSpells_x                             0x6C9BE0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C94B0

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F3550

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D2790
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0A30
#define ItemGlobalIndex__IsEquippedLocation_x                      0x6718F0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D2930

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9C0DC0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9C1110

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9DF0

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x747890
#define CCursorAttachment__AttachToCursor1_x                       0x7478D0
#define CCursorAttachment__Deactivate_x                            0x748FB0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x93B5A0
#define CSidlManagerBase__CreatePageWnd_x                          0x93AD90
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x936250
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9361E0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x95B510
#define CEQSuiteTextureLoader__GetTexture_x                        0x95B190

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522320
#define CFindItemWnd__WndNotification_x                            0x5231F0
#define CFindItemWnd__Update_x                                     0x523E40
#define CFindItemWnd__PickupSelectedItem_x                         0x521A00

//IString
#define IString__Append_x                                          0x558220

//Camera
#define CDisplay__cameraType_x                                     0xEE3F24
#define EverQuest__Cameras_x                                       0xDB3104

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D300
#define LootFiltersManager__GetItemFilterData_x                    0x52CC30
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CC60
#define LootFiltersManager__SetItemLootFilter_x                    0x52CE70

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808DA0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F9230
#define CResolutionHandler__GetWindowedStyle_x                     0x6BFB10

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73F460

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9CBCF0
#define CDistillerInfo__Instance_x                                 0x9CBC30

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762380
#define CGroupWnd__UpdateDisplay_x                                 0x7615D0

//ItemBase
#define ItemBase__IsLore_x                                         0x9945C0
#define ItemBase__IsLoreEquipped_x                                 0x994640

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x6090F0
#define EQPlacedItemManager__GetItemByGuid_x                       0x609230
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x609290

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B42C0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8B30

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517D60

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502890
#define FactionManagerClient__HandleFactionMessage_x               0x5030B0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5038A0
#define FactionManagerClient__GetMaxFaction_x                      0x5038BF
#define FactionManagerClient__GetMinFaction_x                      0x503870

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F640

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x91C730

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E490

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F8B0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5810D0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CD260

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B42C0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC860

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D9070

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE50798

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EAE50
#define CAAWnd__UpdateSelected_x                                   0x6E73F0
#define CAAWnd__Update_x                                           0x6EA190

//CXRect
#define CXRect__operator_and_x                                     0x7577F0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F9813
#define __eq_new_x                                                 0x9F9D84

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
