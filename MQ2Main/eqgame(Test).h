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
#define __ExpectedVersionDate                                     "Aug 24 2021"
#define __ExpectedVersionTime                                     "15:31:32"
#define __ActualVersionDate_x                                      0xB54184
#define __ActualVersionTime_x                                      0xB54178
#define __ActualVersionBuild_x                                     0xB4432C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x6650A0
#define __MemChecker1_x                                            0x950820
#define __MemChecker2_x                                            0x6DF390
#define __MemChecker3_x                                            0x6DF300
#define __MemChecker4_x                                            0x8A36A0
#define __EncryptPad0_x                                            0xE56B48
#define __EncryptPad1_x                                            0xEB1360
#define __EncryptPad2_x                                            0xE65D70
#define __EncryptPad3_x                                            0xE65970
#define __EncryptPad4_x                                            0xEA2170
#define __EP1_Data_x                                               0x34A0DC

// Direct Input
#define DI8__Main_x                                                0xFA4CBC
#define DI8__Keyboard_x                                            0xFA4CC0
#define DI8__Mouse_x                                               0xFA4C1C
#define DI8__Mouse_Copy_x                                          0xDB1D8C
#define DI8__Mouse_Check_x                                         0xFA277C
#define __AutoSkillArray_x                                         0xDB28A8
#define __Attack_x                                                 0xE506CB
#define __Autofire_x                                               0xE506CC
#define __BindList_x                                               0xDA7458
#define g_eqCommandStates_x                                        0xDA81C0
#define __Clicks_x                                                 0xDB1E44
#define __CommandList_x                                            0xDA8D48
#define __CurrentMapLabel_x                                        0xFB56BC
#define __CurrentSocial_x                                          0xC6246C
#define __DoAbilityList_x                                          0xDE81EC
#define __do_loot_x                                                0x5E2490
#define __DrawHandler_x                                            0x1624450
#define __GroupCount_x                                             0xF97D52
#define __Guilds_x                                                 0xF9C218
#define __gWorld_x                                                 0xF98060
#define __HWnd_x                                                   0xFA4C20
#define __heqmain_x                                                0xFA4C10
#define __InChatMode_x                                             0xDB1D74
#define __LastTell_x                                               0xDB38E8
#define __LMouseHeldTime_x                                         0xDB1EB0
#define __Mouse_x                                                  0xFA4CA8
#define __MouseLook_x                                              0xDB1E0A
#define __MouseEventTime_x                                         0xF9DC44
#define __gpbCommandEvent_x                                        0xF9806C
#define __NetStatusToggle_x                                        0xDB1E0D
#define __PCNames_x                                                0xDB2E98
#define __RangeAttackReady_x                                       0xDB2B8C
#define __RMouseHeldTime_x                                         0xDB1EAC
#define __RunWalkState_x                                           0xDB1D78
#define __ScreenMode_x                                             0xEE4070
#define __ScreenX_x                                                0xDB1D2C
#define __ScreenY_x                                                0xDB1D28
#define __ScreenXMax_x                                             0xDB1D30
#define __ScreenYMax_x                                             0xDB1D34
#define __ServerHost_x                                             0xF9823B
#define __ServerName_x                                             0xDE81AC
#define __ShiftKeyDown_x                                           0xDB2408
#define __ShowNames_x                                              0xDB2D48
#define EverQuestInfo__bSocialChanged_x                            0xDE8234
#define __Socials_x                                                0xDE82AC
#define __SubscriptionType_x                                       0xFE97A8
#define __TargetAggroHolder_x                                      0xFB8070
#define __ZoneType_x                                               0xDB2208
#define __GroupAggro_x                                             0xFB80B0
#define __LoginName_x                                              0xFA538C
#define __Inviter_x                                                0xE50648
#define __AttackOnAssist_x                                         0xDB2D04
#define __UseTellWindows_x                                         0xDB3030
#define __gfMaxZoomCameraDistance_x                                0xB4C014
#define __gfMaxCameraDistance_x                                    0xB7492C
#define __pulAutoRun_x                                             0xDB1E28
#define __pulForward_x                                             0xDB3068
#define __pulBackward_x                                            0xDB306C
#define __pulTurnRight_x                                           0xDB3070
#define __pulTurnLeft_x                                            0xDB3074
#define __pulStrafeLeft_x                                          0xDB3078
#define __pulStrafeRight_x                                         0xDB307C

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF985B0
#define instEQZoneInfo_x                                           0xDB2000
#define pinstActiveBanker_x                                        0xF98558
#define pinstActiveCorpse_x                                        0xF98550
#define pinstActiveGMaster_x                                       0xF98554
#define pinstActiveMerchant_x                                      0xF9854C
#define pinstAltAdvManager_x                                       0xEE4EC0
#define pinstBandageTarget_x                                       0xF98568
#define pinstCamActor_x                                            0xEE4064
#define pinstCDBStr_x                                              0xEE3C40
#define pinstCDisplay_x                                            0xF97CC8
#define pinstCEverQuest_x                                          0xFA4C24
#define pinstEverQuestInfo_x                                       0xDB1D20
#define pinstCharData_x                                            0xF95CB8
#define pinstCharSpawn_x                                           0xF985A0
#define pinstControlledMissile_x                                   0xF95CA0
#define pinstControlledPlayer_x                                    0xF985A0
#define pinstCResolutionHandler_x                                  0x1624678
#define pinstCSidlManager_x                                        0x1623614
#define pinstCXWndManager_x                                        0x162360C
#define instDynamicZone_x                                          0xF9C0F0
#define pinstDZMember_x                                            0xF9C200
#define pinstDZTimerInfo_x                                         0xF9C204
#define pinstEqLogin_x                                             0xFA4CD8
#define instEQMisc_x                                               0xD9B8D8
#define pinstEQSoundManager_x                                      0xEE57D0
#define pinstEQSpellStrings_x                                      0xED48E0
#define instExpeditionLeader_x                                     0xF9C13A
#define instExpeditionName_x                                       0xF9C17A
#define pinstGroup_x                                               0xF97D4E
#define pinstImeManager_x                                          0x1623610
#define pinstLocalPlayer_x                                         0xF98344
#define pinstMercenaryData_x                                       0xF9F73C
#define pinstMercenaryStats_x                                      0xFB813C
#define pinstModelPlayer_x                                         0xF98560
#define pinstPCData_x                                              0xF95CB8
#define pinstSkillMgr_x                                            0xFA1828
#define pinstSpawnManager_x                                        0xFA0300
#define pinstSpellManager_x                                        0xFA1A68
#define pinstSpellSets_x                                           0xE492F4
#define pinstStringTable_x                                         0xF95CC0
#define pinstSwitchManager_x                                       0xF95B50
#define pinstTarget_x                                              0xF9859C
#define pinstTargetObject_x                                        0xF95CB0
#define pinstTargetSwitch_x                                        0xF95CB4
#define pinstTaskMember_x                                          0xD9B420
#define pinstTrackTarget_x                                         0xF985A4
#define pinstTradeTarget_x                                         0xF9855C
#define instTributeActive_x                                        0xD9B8F9
#define pinstViewActor_x                                           0xEE4060
#define pinstWorldData_x                                           0xF95CC4
#define pinstZoneAddr_x                                            0xDB22A0
#define pinstPlayerPath_x                                          0xFA0398
#define pinstTargetIndicator_x                                     0xFA1CD0
#define EQObject_Top_x                                             0xF95CAC
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE40D0
#define pinstCAchievementsWnd_x                                    0xEE3D50
#define pinstCActionsWnd_x                                         0xEE4058
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE4080
#define pinstCAdvancedLootWnd_x                                    0xEE405C
#define pinstCAdventureLeaderboardWnd_x                            0xFAEEE0
#define pinstCAdventureRequestWnd_x                                0xFAEF90
#define pinstCAdventureStatsWnd_x                                  0xFAF040
#define pinstCAggroMeterWnd_x                                      0xEE3DE0
#define pinstCAlarmWnd_x                                           0xEE40C8
#define pinstCAlertHistoryWnd_x                                    0xEE4040
#define pinstCAlertStackWnd_x                                      0xEE3E1C
#define pinstCAlertWnd_x                                           0xEE4020
#define pinstCAltStorageWnd_x                                      0xFAF3A0
#define pinstCAudioTriggersWindow_x                                0xEC6C10
#define pinstCAuraWnd_x                                            0xEE40A0
#define pinstCAvaZoneWnd_x                                         0xEE3D38
#define pinstCBandolierWnd_x                                       0xEE40B0
#define pinstCBankWnd_x                                            0xEE403C
#define pinstCBarterMerchantWnd_x                                  0xFB05E0
#define pinstCBarterSearchWnd_x                                    0xFB0690
#define pinstCBarterWnd_x                                          0xFB0740
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
#define pinstCButtonWnd_x                                          0x1623878
#define pinstCCastingWnd_x                                         0xEE3DDC
#define pinstCCastSpellWnd_x                                       0xEE3DEC
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE3D80
#define pinstCChatWindowManager_x                                  0xFB11E8
#define pinstCClaimWnd_x                                           0xFB1340
#define pinstCColorPickerWnd_x                                     0xEE3D94
#define pinstCCombatAbilityWnd_x                                   0xEE408C
#define pinstCCombatSkillsSelectWnd_x                              0xEE4094
#define pinstCCompassWnd_x                                         0xEE40A8
#define pinstCConfirmationDialog_x                                 0xFB6208
#define pinstCContainerMgr_x                                       0xEE40CC
#define pinstCContextMenuManager_x                                 0x16235C8
#define pinstCCursorAttachment_x                                   0xEE3DD4
#define pinstCDynamicZoneWnd_x                                     0xFB1908
#define pinstCEditLabelWnd_x                                       0xEE3D40
#define pinstCEQMainWnd_x                                          0xFB1B50
#define pinstCEventCalendarWnd_x                                   0xEE40BC
#define pinstCExtendedTargetWnd_x                                  0xEE3DD8
#define pinstCPlayerCustomizationWnd_x                             0xEE3D88
#define pinstCFactionWnd_x                                         0xEE3DE8
#define pinstCFellowshipWnd_x                                      0xFB1D50
#define pinstCFileSelectionWnd_x                                   0xEE409C
#define pinstCFindItemWnd_x                                        0xEE4104
#define pinstCFindLocationWnd_x                                    0xFB1EA8
#define pinstCFriendsWnd_x                                         0xEE4098
#define pinstCGemsGameWnd_x                                        0xEE40C0
#define pinstCGiveWnd_x                                            0xEE3D28
#define pinstCGroupSearchFiltersWnd_x                              0xEE3DC4
#define pinstCGroupSearchWnd_x                                     0xFB22A0
#define pinstCGroupWnd_x                                           0xFB2350
#define pinstCGuildBankWnd_x                                       0xFB2400
#define pinstCGuildCreationWnd_x                                   0xFB24B0
#define pinstCGuildMgmtWnd_x                                       0xFB2560
#define pinstCharacterCreation_x                                   0xEE3DD0
#define pinstCHelpWnd_x                                            0xEE402C
#define pinstCHeritageSelectionWnd_x                               0xEE3D8C
#define pinstCHotButtonWnd_x                                       0xFB46B8
#define pinstCHotButtonWnd1_x                                      0xFB46B8
#define pinstCHotButtonWnd2_x                                      0xFB46BC
#define pinstCHotButtonWnd3_x                                      0xFB46C0
#define pinstCHotButtonWnd4_x                                      0xFB46C4
#define pinstCIconSelectionWnd_x                                   0xEE3D58
#define pinstCInspectWnd_x                                         0xEE3D4C
#define pinstCInventoryWnd_x                                       0xEE4028
#define pinstCInvSlotMgr_x                                         0xEE40B4
#define pinstCItemDisplayManager_x                                 0xFB4C10
#define pinstCItemExpTransferWnd_x                                 0xFB4D40
#define pinstCItemOverflowWnd_x                                    0xEE3D10
#define pinstCJournalCatWnd_x                                      0xEE40EC
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE40E0
#define pinstCJournalTextWnd_x                                     0xEE40E0
#define pinstCKeyRingWnd_x                                         0xEE4034
#define pinstCLargeDialogWnd_x                                     0xFB6E88
#define pinstCLayoutCopyWnd_x                                      0xFB5090
#define pinstCLFGuildWnd_x                                         0xFB5140
#define pinstCLoadskinWnd_x                                        0xEE40C4
#define pinstCLootFiltersCopyWnd_x                                 0xEE3150
#define pinstCLootFiltersWnd_x                                     0xEE40E4
#define pinstCLootSettingsWnd_x                                    0xEE40E8
#define pinstCLootWnd_x                                            0xEE404C
#define pinstCMailAddressBookWnd_x                                 0xEE3D70
#define pinstCMailCompositionWnd_x                                 0xEE3D68
#define pinstCMailIgnoreListWnd_x                                  0xEE3D74
#define pinstCMailWnd_x                                            0xEE3D64
#define pinstCManageLootWnd_x                                      0xEE5340
#define pinstCMapToolbarWnd_x                                      0xEE3D34
#define pinstCMapViewWnd_x                                         0xEE3D24
#define pinstCMarketplaceWnd_x                                     0xEE3D04
#define pinstCMerchantWnd_x                                        0xEE3D08
#define pinstCMIZoneSelectWnd_x                                    0xFB5978
#define pinstCMusicPlayerWnd_x                                     0xEE40B8
#define pinstCNameChangeMercWnd_x                                  0xEE3E00
#define pinstCNameChangePetWnd_x                                   0xEE3DFC
#define pinstCNameChangeWnd_x                                      0xEE3D60
#define pinstCNoteWnd_x                                            0xEE4024
#define pinstCObjectPreviewWnd_x                                   0xEE3D78
#define pinstCOptionsWnd_x                                         0xEE3D98
#define pinstCOverseerWnd_x                                        0xEE3D00
#define pinstCPetInfoWnd_x                                         0xEE4050
#define pinstCPetitionQWnd_x                                       0xEE3DB8
#define pinstCPlayerNotesWnd_x                                     0xEE40AC
#define pinstCPlayerWnd_x                                          0xEE40FC
#define pinstCPopupWndManager_x                                    0xFB6208
#define pinstCProgressionSelectionWnd_x                            0xFB62B8
#define pinstCPurchaseGroupWnd_x                                   0xEE3D14
#define pinstCPurchaseWnd_x                                        0xEE3D0C
#define pinstCPvPLeaderboardWnd_x                                  0xFB6368
#define pinstCPvPStatsWnd_x                                        0xFB6418
#define pinstCQuantityWnd_x                                        0xEE4044
#define pinstCRaceChangeWnd_x                                      0xEE3D6C
#define pinstCRaidOptionsWnd_x                                     0xEE3DE4
#define pinstCRaidWnd_x                                            0xEE3DF0
#define pinstCRealEstateItemsWnd_x                                 0xEE3D90
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE3DCC
#define pinstCRealEstateManageWnd_x                                0xEE3DB4
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE3DBC
#define pinstCRealEstatePlotSearchWnd_x                            0xEE3DC0
#define pinstCRealEstatePurchaseWnd_x                              0xEE3DC8
#define pinstCRespawnWnd_x                                         0xEE40A4
#define pinstCRewardSelectionWnd_x                                 0xFB6B60
#define pinstCSelectorWnd_x                                        0xEE3D1C
#define pinstCSendMoneyWnd_x                                       0xEE3D3C
#define pinstCServerListWnd_x                                      0xEE4090
#define pinstCSkillsSelectWnd_x                                    0xEE4084
#define pinstCSkillsWnd_x                                          0xEE407C
#define pinstCSocialEditWnd_x                                      0xEE3D54
#define pinstCSocialWnd_x                                          0xEE40D8
#define pinstCSpellBookWnd_x                                       0xEE3E10
#define pinstCStoryWnd_x                                           0xEE40F8
#define pinstCTargetOfTargetWnd_x                                  0xFB81C0
#define pinstCTargetWnd_x                                          0xEE3D48
#define pinstCTaskOverlayWnd_x                                     0xEE40F0
#define pinstCTaskSelectWnd_x                                      0xFB8318
#define pinstCTaskManager_x                                        0xC6D268
#define pinstCTaskTemplateSelectWnd_x                              0xFB83C8
#define pinstCTaskWnd_x                                            0xFB8478
#define pinstCTextEntryWnd_x                                       0xEE4088
#define pinstCTimeLeftWnd_x                                        0xEE3DAC
#define pinstCTipWndCONTEXT_x                                      0xFB867C
#define pinstCTipWndOFDAY_x                                        0xFB8678
#define pinstCTitleWnd_x                                           0xFB8728
#define pinstCTrackingWnd_x                                        0xEE3D44
#define pinstCTradeskillWnd_x                                      0xFB8890
#define pinstCTradeWnd_x                                           0xEE3D18
#define pinstCTrainWnd_x                                           0xEE4054
#define pinstCTributeBenefitWnd_x                                  0xFB8A90
#define pinstCTributeMasterWnd_x                                   0xFB8B40
#define pinstCTributeTrophyWnd_x                                   0xFB8BF0
#define pinstCVideoModesWnd_x                                      0xEE3D2C
#define pinstCVoiceMacroWnd_x                                      0xFA20E8
#define pinstCVoteResultsWnd_x                                     0xEE3DF8
#define pinstCVoteWnd_x                                            0xEE3DF4
#define pinstCZoneGuideWnd_x                                       0xEE4030
#define pinstCZonePathWnd_x                                        0xEE4038

#define pinstEQSuiteTextureLoader_x                                0xEB1920
#define pinstItemIconCache_x                                       0xFB1B08
#define pinstLootFiltersManager_x                                  0xEE3200
#define pinstRewardSelectionWnd_x                                  0xFB6B60

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DD780
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DDA10
#define __ConvertItemTags_x                                        0x5FABF0
#define __CleanItemTags_x                                          0x47DA40
#define __DoesFileExist_x                                          0x9537B0
#define __EQGetTime_x                                              0x950490
#define __ExecuteCmd_x                                             0x5D5BB0
#define __FixHeading_x                                             0x9EF030
#define __FlushDxKeyboard_x                                        0x6DA690
#define __GameLoop_x                                               0x6DDF90
#define __get_bearing_x                                            0x5DD320
#define __get_melee_range_x                                        0x5DDC50
#define __GetAnimationCache_x                                      0x74CF00
#define __GetGaugeValueFromEQ_x                                    0x85C6A0
#define __GetLabelFromEQ_x                                         0x85E1E0
#define __GetXTargetType_x                                         0x9F13A0
#define __HandleMouseWheel_x                                       0x6DF420
#define __HeadingDiff_x                                            0x9EF090
#define __HelpPath_x                                               0xF9D904
#define __ExecuteFrontEnd_x                                        0x6DAE70
#define __NewUIINI_x                                               0x85C370
#define __ProcessGameEvents_x                                      0x644230
#define __ProcessMouseEvent_x                                      0x643930
#define __SaveColors_x                                             0x572050
#define __STMLToText_x                                             0x98CC20
#define __ToggleKeyRingItem_x                                      0x52B1F0
#define CMemoryMappedFile__SetFile_x                               0xADF7F0
#define CrashDetected_x                                            0x6DCBA0
#define DrawNetStatus_x                                            0x673750
#define Expansion_HoT_x                                            0xDB2CF0
#define Teleport_Table_Size_x                                      0xF980F4
#define Teleport_Table_x                                           0xF95CC8
#define Util__FastTime_x                                           0x950050
#define __CopyLayout_x                                             0x660360
#define __WndProc_x                                                0x6DD0A0
#define __ProcessKeyboardEvent_x                                   0x6DC5E0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491970
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4A0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B320
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495650
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494890

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x57B050
#define AltAdvManager__IsAbilityReady_x                            0x579C30
#define AltAdvManager__GetAAById_x                                 0x579FD0
#define AltAdvManager__CanTrainAbility_x                           0x57A040
#define AltAdvManager__CanSeeAbility_x                             0x57A3F0

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1550
#define CharacterZoneClient__HasSkill_x                            0x4DCCC0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE410
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8980
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1140
#define CharacterZoneClient__GetItemCountWorn_x                    0x4E1320
#define CharacterZoneClient__GetItemCountInInventory_x             0x4E1420
#define CharacterZoneClient__GetCursorItemCount_x                  0x4E1520
#define CharacterZoneClient__FindAffectSlot_x                      0x4CABC0
#define CharacterZoneClient__BardCastBard_x                        0x4CDBD0
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5080
#define CharacterZoneClient__GetEffect_x                           0x4C1080
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC1D0
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC280
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC320
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC4E0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC6C0
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8940
#define CharacterZoneClient__FindItemByGuid_x                      0x4DF5B0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEF00

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x7082B0
#define CBankWnd__WndNotification_x                                0x708050

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x712CE0

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70D930
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70B900

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x717410

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x98A1C0
#define CButtonWnd__CButtonWnd_x                                   0x988B10

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x73A680
#define CChatManager__InitContextMenu_x                            0x7335B0
#define CChatManager__FreeChatWindow_x                             0x739240
#define CChatManager__SetLockedActiveChatWindow_x                  0x73A360
#define CChatManager__CreateChatWindow_x                           0x739870

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4F26D0

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99FFD0
#define CContextMenu__dCContextMenu_x                              0x9A0210
#define CContextMenu__AddMenuItem_x                                0x9A0220
#define CContextMenu__RemoveMenuItem_x                             0x9A0530
#define CContextMenu__RemoveAllMenuItems_x                         0x9A0550
#define CContextMenu__CheckMenuItem_x                              0x9A05B0
#define CContextMenu__SetMenuItem_x                                0x9A0450
#define CContextMenu__AddSeparator_x                               0x9A03B0

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9A0B40
#define CContextMenuManager__RemoveMenu_x                          0x9A0BB0
#define CContextMenuManager__PopupMenu_x                           0x9A0C70
#define CContextMenuManager__Flush_x                               0x9A0AE0
#define CContextMenuManager__GetMenu_x                             0x49D890
#define CContextMenuManager__CreateDefaultMenu_x                   0x746ED0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x8F2280
#define CChatService__GetFriendName_x                              0x92AB90

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x73AFE0
#define CChatWindow__Clear_x                                       0x73C440
#define CChatWindow__WndNotification_x                             0x73CBD0
#define CChatWindow__AddHistory_x                                  0x73BCA0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99D0A0
#define CComboWnd__Draw_x                                          0x99C530
#define CComboWnd__GetCurChoice_x                                  0x99CE70
#define CComboWnd__GetListRect_x                                   0x99C9E0
#define CComboWnd__GetTextRect_x                                   0x99D110
#define CComboWnd__InsertChoice_x                                  0x99CB70
#define CComboWnd__SetColors_x                                     0x99CB40
#define CComboWnd__SetChoice_x                                     0x99CE50
#define CComboWnd__GetItemCount_x                                  0x99CE80
#define CComboWnd__GetCurChoiceText_x                              0x99CEB0
#define CComboWnd__GetChoiceText_x                                 0x99CE90
#define CComboWnd__InsertChoiceAtIndex_x                           0x99CC10

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x744560
#define CContainerWnd__vftable_x                                   0xB5D3DC
#define CContainerWnd__SetContainer_x                              0x745DA0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56C890
#define CDisplay__PreZoneMainUI_x                                  0x56C8A0
#define CDisplay__CleanGameUI_x                                    0x571E30
#define CDisplay__GetClickedActor_x                                0x564660
#define CDisplay__GetUserDefinedColor_x                            0x55C3F0
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x566170
#define CDisplay__is3dON_x                                         0x560EF0
#define CDisplay__ReloadUI_x                                       0x56BBB0
#define CDisplay__WriteTextHD2_x                                   0x560CE0
#define CDisplay__TrueDistance_x                                   0x568150
#define CDisplay__SetViewActor_x                                   0x563F80
#define CDisplay__GetFloorHeight_x                                 0x560FB0
#define CDisplay__SetRenderWindow_x                                0x55F930
#define CDisplay__ToggleScreenshotMode_x                           0x563A50

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C2840

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A3B10
#define CEditWnd__EnsureCaretVisible_x                             0x9A5E90
#define CEditWnd__GetCaretPt_x                                     0x9A4CF0
#define CEditWnd__GetCharIndexPt_x                                 0x9A4AA0
#define CEditWnd__GetDisplayString_x                               0x9A4940
#define CEditWnd__GetHorzOffset_x                                  0x9A3060
#define CEditWnd__GetLineForPrintableChar_x                        0x9A5DA0
#define CEditWnd__GetSelStartPt_x                                  0x9A4D50
#define CEditWnd__GetSTMLSafeText_x                                0x9A4750
#define CEditWnd__PointFromPrintableChar_x                         0x9A59E0
#define CEditWnd__SelectableCharFromPoint_x                        0x9A5B40
#define CEditWnd__SetEditable_x                                    0x9A4E20
#define CEditWnd__SetWindowTextA_x                                 0x9A44A0
#define CEditWnd__ReplaceSelection_x                               0x9A55A0
#define CEditWnd__ReplaceSelection1_x                              0x9A5520

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62F8D0
#define CEverQuest__ClickedPlayer_x                                0x620EA0
#define CEverQuest__CreateTargetIndicator_x                        0x6411B0
#define CEverQuest__DeleteTargetIndicator_x                        0x641240
#define CEverQuest__DoTellWindow_x                                 0x4F27D0
#define CEverQuest__OutputTextToLog_x                              0x4F2AA0
#define CEverQuest__DropHeldItemOnGround_x                         0x615F80
#define CEverQuest__dsp_chat_x                                     0x4F2E70
#define CEverQuest__trimName_x                                     0x63C7A0
#define CEverQuest__Emote_x                                        0x62FF90
#define CEverQuest__EnterZone_x                                    0x629C50
#define CEverQuest__GetBodyTypeDesc_x                              0x6354F0
#define CEverQuest__GetClassDesc_x                                 0x635B30
#define CEverQuest__GetClassThreeLetterCode_x                      0x636130
#define CEverQuest__GetDeityDesc_x                                 0x63F960
#define CEverQuest__GetLangDesc_x                                  0x6362F0
#define CEverQuest__GetRaceDesc_x                                  0x635B10
#define CEverQuest__InterpretCmd_x                                 0x63FFD0
#define CEverQuest__LeftClickedOnPlayer_x                          0x61A460
#define CEverQuest__LMouseUp_x                                     0x618520
#define CEverQuest__RightClickedOnPlayer_x                         0x61B050
#define CEverQuest__RMouseUp_x                                     0x6197E0
#define CEverQuest__SetGameState_x                                 0x615D00
#define CEverQuest__UPCNotificationFlush_x                         0x63C6C0
#define CEverQuest__IssuePetCommand_x                              0x6378F0
#define CEverQuest__ReportSuccessfulHit_x                          0x631870

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x757E50
#define CGaugeWnd__CalcLinesFillRect_x                             0x757EB0
#define CGaugeWnd__Draw_x                                          0x757460

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4780
#define CGuild__GetGuildName_x                                     0x4B2FA0
#define CGuild__GetGuildIndex_x                                    0x4B36C0

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x7752C0

//CHotButton
#define CHotButton__SetCheck_x                                     0x6547F0
#define CHotButton__SetButtonSize_x                                0x654BB0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x7822A0
#define CInvSlotMgr__MoveItem_x                                    0x780E70
#define CInvSlotMgr__SelectSlot_x                                  0x782360

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77F6C0
#define CInvSlot__SliderComplete_x                                 0x77CBA0
#define CInvSlot__GetItemBase_x                                    0x77C470
#define CInvSlot__UpdateItem_x                                     0x77C660

// CInvSlotWnd
#define CInvSlotWnd__DrawTooltip_x                                 0x783FE0
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7831C0
#define CInvSlotWnd__HandleLButtonUp_x                             0x783B60

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x856B00
#define CItemDisplayWnd__UpdateStrings_x                           0x79B5C0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x790910
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x790E60
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79BCC0
#define CItemDisplayWnd__AboutToShow_x                             0x79B1B0
#define CItemDisplayWnd__WndNotification_x                         0x79D3D0
#define CItemDisplayWnd__RequestConvertItem_x                      0x79CAE0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x79A080
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79AFA0

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88BC40

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2AF0
#define CItemDisplayManager__ShowItem_x                            0x7A1F40

// CLabel 
#define CLabel__UpdateText_x                                       0x7A9610

// CListWnd
#define CListWnd__CListWnd_x                                       0x96F570
#define CListWnd__dCListWnd_x                                      0x96F870
#define CListWnd__AddColumn_x                                      0x974440
#define CListWnd__AddColumn1_x                                     0x974560
#define CListWnd__AddLine_x                                        0x9748D0
#define CListWnd__AddString_x                                      0x9746D0
#define CListWnd__CalculateFirstVisibleLine_x                      0x9741F0
#define CListWnd__CalculateVSBRange_x                              0x973FD0
#define CListWnd__ClearSel_x                                       0x9751C0
#define CListWnd__ClearAllSel_x                                    0x975210
#define CListWnd__CloseAndUpdateEditWindow_x                       0x975CC0
#define CListWnd__Compare_x                                        0x973750
#define CListWnd__Draw_x                                           0x96FA30
#define CListWnd__DrawColumnSeparators_x                           0x972550
#define CListWnd__DrawHeader_x                                     0x9729A0
#define CListWnd__DrawItem_x                                       0x972FF0
#define CListWnd__DrawLine_x                                       0x9726B0
#define CListWnd__DrawSeparator_x                                  0x9725F0
#define CListWnd__EnableLine_x                                     0x971E10
#define CListWnd__EnsureVisible_x                                  0x975BE0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x975100
#define CListWnd__GetColumnTooltip_x                               0x971990
#define CListWnd__GetColumnMinWidth_x                              0x971A00
#define CListWnd__GetColumnWidth_x                                 0x971910
#define CListWnd__GetCurSel_x                                      0x9712B0
#define CListWnd__GetItemAtPoint_x                                 0x972080
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x9720F0
#define CListWnd__GetItemColor_x                                   0x971630
#define CListWnd__GetItemData_x                                    0x971330
#define CListWnd__GetItemHeight_x                                  0x9716E0
#define CListWnd__GetItemIcon_x                                    0x9714B0
#define CListWnd__GetItemRect_x                                    0x971F00
#define CListWnd__GetItemText_x                                    0x971370
#define CListWnd__GetSelList_x                                     0x975260
#define CListWnd__GetSeparatorRect_x                               0x972360
#define CListWnd__InsertLine_x                                     0x974D30
#define CListWnd__RemoveLine_x                                     0x974F50
#define CListWnd__SetColors_x                                      0x973FA0
#define CListWnd__SetColumnJustification_x                         0x973CD0
#define CListWnd__SetColumnLabel_x                                 0x974670
#define CListWnd__SetColumnWidth_x                                 0x973BE0
#define CListWnd__SetCurSel_x                                      0x975050
#define CListWnd__SetItemColor_x                                   0x9758A0
#define CListWnd__SetItemData_x                                    0x975860
#define CListWnd__SetItemText_x                                    0x975480
#define CListWnd__ShiftColumnSeparator_x                           0x973D90
#define CListWnd__Sort_x                                           0x973A40
#define CListWnd__ToggleSel_x                                      0x975080
#define CListWnd__SetColumnsSizable_x                              0x973E30
#define CListWnd__SetItemWnd_x                                     0x975720
#define CListWnd__GetItemWnd_x                                     0x971500
#define CListWnd__SetItemIcon_x                                    0x975500
#define CListWnd__CalculateCustomWindowPositions_x                 0x9742F0
#define CListWnd__SetVScrollPos_x                                  0x973BC0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0A20
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BF040
#define CMapViewWnd__HandleLButtonDown_x                           0x7BBED0
#define CMapViewWnd__WndNotification_x                             0x7C3300

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3C90
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E45F0
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E4C80
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E7F50
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2720
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EE160
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E38E0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F7A50
#define CPacketScrambler__hton_x                                   0x8F7A40

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x993290
#define CSidlManager__FindScreenPieceTemplate_x                    0x993660
#define CSidlManager__FindScreenPieceTemplate1_x                   0x993490
#define CSidlManager__CreateXWndFromTemplate_x                     0x996B10
#define CSidlManager__CreateXWndFromTemplate1_x                    0x996DA0
#define CSidlManagerbase__CreateXWnd_x                             0x996DE0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84CC50
#define CSidlManager__CreateLabel_x                                0x84C830

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84C2B0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98EFC0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98EEC0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BCA90
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98E840
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98E530
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98E600
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98E6D0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98F860
#define CSidlScreenWnd__EnableIniStorage_x                         0x98FD40
#define CSidlScreenWnd__GetSidlPiece_x                             0x98FA50
#define CSidlScreenWnd__Init1_x                                    0x98E000
#define CSidlScreenWnd__LoadIniInfo_x                              0x98FD90
#define CSidlScreenWnd__LoadIniListWnd_x                           0x990980
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98D400
#define CSidlScreenWnd__StoreIniInfo_x                             0x9904F0
#define CSidlScreenWnd__StoreIniVis_x                              0x990870
#define CSidlScreenWnd__WndNotification_x                          0x98F730
#define CSidlScreenWnd__GetChildItem_x                             0x98FCC0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97E230
#define CSidlScreenWnd__m_layoutCopy_x                             0x1623498

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C21A0
#define CSkillMgr__GetSkillCap_x                                   0x6C2370
#define CSkillMgr__GetNameToken_x                                  0x6C19E0
#define CSkillMgr__IsActivatedSkill_x                              0x6C1AD0
#define CSkillMgr__IsCombatSkill_x                                 0x6C1A40

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A1C40
#define CSliderWnd__SetValue_x                                     0x9A1A70
#define CSliderWnd__SetNumTicks_x                                  0x9A1AD0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x8534D0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9AB180
#define CStmlWnd__ParseSTML_x                                      0x9AC320
#define CStmlWnd__CalculateHSBRange_x                              0x9AC0F0
#define CStmlWnd__CalculateVSBRange_x                              0x9AC060
#define CStmlWnd__CanBreakAtCharacter_x                            0x9B0F50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B1BF0
#define CStmlWnd__ForceParseNow_x                                  0x9AB6F0
#define CStmlWnd__GetNextTagPiece_x                                0x9B0EB0
#define CStmlWnd__GetVisibleText_x                                 0x9AB710
#define CStmlWnd__InitializeWindowVariables_x                      0x9B1A40
#define CStmlWnd__MakeStmlColorTag_x                               0x9AA820
#define CStmlWnd__MakeWndNotificationTag_x                         0x9AA890
#define CStmlWnd__SetSTMLText_x                                    0x9A9600
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B2E00
#define CStmlWnd__UpdateHistoryString_x                            0x9B1DF0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A84B0
#define CTabWnd__DrawCurrentPage_x                                 0x9A8E40
#define CTabWnd__DrawTab_x                                         0x9A8A30
#define CTabWnd__GetCurrentPage_x                                  0x9A7C10
#define CTabWnd__GetPageInnerRect_x                                0x9A7E40
#define CTabWnd__GetTabInnerRect_x                                 0x9A7D80
#define CTabWnd__GetTabRect_x                                      0x9A7C40
#define CTabWnd__InsertPage_x                                      0x9A8030
#define CTabWnd__RemovePage_x                                      0x9A8180
#define CTabWnd__SetPage_x                                         0x9A7EC0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A83B0
#define CTabWnd__UpdatePage_x                                      0x9A8820
#define CTabWnd__GetPageFromTabIndex_x                             0x9A8970
#define CTabWnd__GetCurrentTabIndex_x                              0x9A7C00

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A75A0
#define CPageWnd__FlashTab_x                                       0x9A7600

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC840

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x97A660
#define CTextureFont__GetTextExtent_x                              0x97A960

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B9540

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x965020

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x544CF0
#define CXStr__CXStr1_x                                            0x482710
#define CXStr__CXStr3_x                                            0x94C3E0
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x94C620
#define CXStr__operator_equal1_x                                   0x94C660
#define CXStr__operator_plus_equal1_x                              0x94D0C0
#define CXStr__SetString_x                                         0x94EF60
#define CXStr__operator_char_p_x                                   0x94CB10
#define CXStr__GetChar_x                                           0x94E8C0
#define CXStr__Delete_x                                            0x94E190
#define CXStr__GetUnicode_x                                        0x94E930
#define CXStr__Insert_x                                            0x94E990
#define CXStr__FindNext_x                                          0x94E5E0
#define CXStr__Copy_x                                              0x94DFA0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99FC30
#define CXWnd__BringToTop_x                                        0x981CE0
#define CXWnd__ClrFocus_x                                          0x981660
#define CXWnd__Destroy_x                                           0x981710
#define CXWnd__DoAllDrawing_x                                      0x97D8A0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97D870
#define CXWnd__DrawColoredRect_x                                   0x97DE30
#define CXWnd__DrawTooltip_x                                       0x97BDC0
#define CXWnd__DrawTooltipAtPoint_x                                0x97BE80
#define CXWnd__GetBorderFrame_x                                    0x97DAD0
#define CXWnd__GetChildWndAt_x                                     0x981D80
#define CXWnd__GetClientClipRect_x                                 0x97FE80
#define CXWnd__GetScreenClipRect_x                                 0x97FF50
#define CXWnd__GetScreenRect_x                                     0x980120
#define CXWnd__GetRelativeRect_x                                   0x9801E0
#define CXWnd__GetTooltipRect_x                                    0x97DE80
#define CXWnd__GetWindowTextA_x                                    0x4F2670
#define CXWnd__IsActive_x                                          0x97E5B0
#define CXWnd__IsDescendantOf_x                                    0x980B90
#define CXWnd__IsReallyVisible_x                                   0x980BC0
#define CXWnd__IsType_x                                            0x9824E0
#define CXWnd__Move_x                                              0x980C30
#define CXWnd__Move1_x                                             0x980D30
#define CXWnd__ProcessTransition_x                                 0x9817F0
#define CXWnd__Refade_x                                            0x981000
#define CXWnd__Resize_x                                            0x981280
#define CXWnd__Right_x                                             0x981AD0
#define CXWnd__SetFocus_x                                          0x981620
#define CXWnd__SetFont_x                                           0x981690
#define CXWnd__SetKeyTooltip_x                                     0x9822B0
#define CXWnd__SetMouseOver_x                                      0x97EF30
#define CXWnd__StartFade_x                                         0x980A70
#define CXWnd__GetChildItem_x                                      0x981F00
#define CXWnd__SetParent_x                                         0x9808B0
#define CXWnd__Minimize_x                                          0x9812F0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BDAE0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x984D50
#define CXWndManager__DrawWindows_x                                0x984EA0
#define CXWndManager__GetKeyboardFlags_x                           0x987750
#define CXWndManager__HandleKeyboardMsg_x                          0x987330
#define CXWndManager__RemoveWnd_x                                  0x987A10
#define CXWndManager__RemovePendingDeletionWnd_x                   0x987EC0

// CDBStr
#define CDBStr__GetString_x                                        0x55AF20

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5A00
#define EQ_Character__Cur_HP_x                                     0x4D9930
#define EQ_Character__Cur_Mana_x                                   0x4E1A50
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9070
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8550
#define EQ_Character__GetFocusRangeModifier_x                      0x4B86A0
#define EQ_Character__GetHPRegen_x                                 0x4E8460
#define EQ_Character__GetEnduranceRegen_x                          0x4E8A20
#define EQ_Character__GetManaRegen_x                               0x4E8E60
#define EQ_Character__Max_Endurance_x                              0x6832B0
#define EQ_Character__Max_HP_x                                     0x4D9760
#define EQ_Character__Max_Mana_x                                   0x683090
#define EQ_Character__doCombatAbility_x                            0x685BE0
#define EQ_Character__UseSkill_x                                   0x4EAEA0
#define EQ_Character__GetConLevel_x                                0x67B3B0
#define EQ_Character__IsExpansionFlag_x                            0x5D4410
#define EQ_Character__TotalEffect_x                                0x4CD4E0
#define EQ_Character__GetPCSpellAffect_x                           0x4C9EA0
#define EQ_Character__SpellDuration_x                              0x4C98E0
#define EQ_Character__MySpellDuration_x                            0x4B6C10
#define EQ_Character__GetAdjustedSkill_x                           0x4DCA80
#define EQ_Character__GetBaseSkill_x                               0x4DDA20
#define EQ_Character__CanUseItem_x                                 0x4E1D80
#define EQ_Character__CanMedOnHorse_x                              0x4EA9E0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917FD0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x69AD20

//PcClient
#define PcClient__vftable_x                                        0xB50F08
#define PcClient__PcClient_x                                       0x678620

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0010
#define CCharacterListWnd__EnterWorld_x                            0x4BF9E0
#define CCharacterListWnd__Quit_x                                  0x4BF700
#define CCharacterListWnd__UpdateList_x                            0x4BFBD0

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x65AA20
#define EQ_Item__CreateItemTagString_x                             0x8F0620
#define EQ_Item__IsStackable_x                                     0x8F5A00
#define EQ_Item__GetImageNum_x                                     0x8F2390
#define EQ_Item__CreateItemClient_x                                0x6599E0
#define EQ_Item__GetItemValue_x                                    0x8F3670
#define EQ_Item__ValueSellMerchant_x                               0x8F7760
#define EQ_Item__IsKeyRingItem_x                                   0x8F51B0
#define EQ_Item__CanGoInBag_x                                      0x65AB40
#define EQ_Item__IsEmpty_x                                         0x8F4B70
#define EQ_Item__GetMaxItemCount_x                                 0x8F3A90
#define EQ_Item__GetHeldItem_x                                     0x8F2240
#define EQ_Item__CanGemFitInSlot_x                                 0x8EFDF0

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57BE50
#define EQ_LoadingS__Array_x                                       0xD9FD10

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x683DA0
#define EQ_PC__GetAlternateAbilityId_x                             0x9017D0
#define EQ_PC__GetCombatAbility_x                                  0x901D50
#define EQ_PC__GetCombatAbilityTimer_x                             0x901DC0
#define EQ_PC__GetItemRecastTimer_x                                0x6861E0
#define EQ_PC__HasLoreItem_x                                       0x67BD70
#define EQ_PC__AlertInventoryChanged_x                             0x67AC70
#define EQ_PC__GetPcZoneClient_x                                   0x6AB420
#define EQ_PC__RemoveMyAffect_x                                    0x689750
#define EQ_PC__GetKeyRingItems_x                                   0x902850
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9023B0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x9029A0

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5DA790
#define EQItemList__add_object_x                                   0x60AD00
#define EQItemList__add_item_x                                     0x5DAD70
#define EQItemList__delete_item_x                                  0x5DADC0
#define EQItemList__FreeItemList_x                                 0x5DACD0

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x556FC0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69C750
#define EQPlayer__dEQPlayer_x                                      0x68EFF0
#define EQPlayer__DoAttack_x                                       0x6A5150
#define EQPlayer__EQPlayer_x                                       0x68F840
#define EQPlayer__SetNameSpriteState_x                             0x693E00
#define EQPlayer__SetNameSpriteTint_x                              0x694CD0
#define PlayerBase__HasProperty_j_x                                0x9ED3F0
#define EQPlayer__IsTargetable_x                                   0x9ED950
#define EQPlayer__CanSee_x                                         0x9ED740
#define EQPlayer__CanSee1_x                                        0x9ED810
#define PlayerBase__GetVisibilityLineSegment_x                     0x9ED4B0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A8F10
#define PlayerZoneClient__GetLevel_x                               0x6AB460
#define PlayerZoneClient__IsValidTeleport_x                        0x60C1A0
#define PlayerZoneClient__LegalPlayerRace_x                        0x573E10

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69F900
#define EQPlayerManager__GetSpawnByName_x                          0x69F9B0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69FA40

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65E310
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65E3E0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65E420
#define KeypressHandler__ClearCommandStateArray_x                  0x65F8E0
#define KeypressHandler__HandleKeyDown_x                           0x65F900
#define KeypressHandler__HandleKeyUp_x                             0x65F9A0
#define KeypressHandler__SaveKeymapping_x                          0x65FF50

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BC6D0
#define MapViewMap__SaveEx_x                                       0x7BFC0F
#define MapViewMap__SetZoom_x                                      0x7C5850

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x915E60

// StringTable 
#define StringTable__getString_x                                   0x910C80

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6893A0
#define PcZoneClient__RemovePetEffect_x                            0x689A00
#define PcZoneClient__HasAlternateAbility_x                        0x682EF0
#define PcZoneClient__GetCurrentMod_x                              0x4EE7B0
#define PcZoneClient__GetModCap_x                                  0x4EE6B0
#define PcZoneClient__CanEquipItem_x                               0x6835B0
#define PcZoneClient__GetItemByID_x                                0x6866B0
#define PcZoneClient__GetItemByItemClass_x                         0x6867F0
#define PcZoneClient__RemoveBuffEffect_x                           0x689AB0
#define PcZoneClient__BandolierSwap_x                              0x684350
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x686180

//Doors
#define EQSwitch__UseSwitch_x                                      0x610DA0

//IconCache
#define IconCache__GetIcon_x                                       0x74C8A0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x743470
#define CContainerMgr__CloseContainer_x                            0x743750
#define CContainerMgr__OpenExperimentContainer_x                   0x7442B0

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81BAB0

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x652F10

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B1950
#define CLootWnd__RequestLootSlot_x                                0x7B0B80

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A6280
#define EQ_Spell__SpellAffects_x                                   0x5A6780
#define EQ_Spell__SpellAffectBase_x                                0x5A64A0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D0ED0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0E80
#define EQ_Spell__IsSPAStacking_x                                  0x5A7530
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A6980
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A7540
#define EQ_Spell__IsLullSpell_x                                    0x5A6D70
#define __IsResEffectSpell_x                                       0x4D0680

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B1550

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x920920
#define EQ_Affect__SetAffectData_x                                 0x920EF0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868620
#define CTargetWnd__WndNotification_x                              0x867DC0
#define CTargetWnd__RefreshTargetBuffs_x                           0x868120
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866BC0

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86D1A0
#define CTaskWnd__ConfirmAbandonTask_x                             0x870270

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x554B60
#define CTaskManager__HandleMessage_x                              0x552A40
#define CTaskManager__GetTaskStatus_x                              0x554C10
#define CTaskManager__GetElementDescription_x                      0x554C90

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x5A0EB0
#define EqSoundManager__PlayScriptMp3_x                            0x5A10B0
#define EqSoundManager__SoundAssistPlay_x                          0x6C6630
#define EqSoundManager__WaveInstancePlay_x                         0x6C5B20

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x5449A0

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A6A20
#define CTextureAnimation__Draw_x                                  0x9A6C60
#define CTextureAnimation__AddBlankFrame_x                         0x9A6840

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A2740

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x584400
#define CAltAbilityData__GetMercMaxRank_x                          0x584390
#define CAltAbilityData__GetMaxRank_x                              0x5787B0

//CTargetRing
#define CTargetRing__Cast_x                                        0x650720

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x659830
#define CharacterBase__CreateItemGlobalIndex_x                     0x646E40
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x659810
#define CharacterBase__GetItemByGlobalIndex_x                      0x9284A0
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9284F0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x728340
#define CCastSpellWnd__IsBardSongPlaying_x                         0x728C00
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x728CB0

//messages
#define msg_spell_worn_off_x                                       0x5CBCF0
#define msg_new_text_x                                             0x5BF9B0
#define __msgTokenTextParam_x                                      0x5CE160
#define msgTokenText_x                                             0x5CE570

//SpellManager
#define SpellManager__vftable_x                                    0xB3B518
#define SpellManager__SpellManager_x                               0x6CA260
#define Spellmanager__LoadTextSpells_x                             0x6CAB60
#define SpellManager__GetSpellByGroupAndRank_x                     0x6CA430

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F1C50

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x5D4460
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D2870
#define ItemGlobalIndex__IsEquippedLocation_x                      0x6734E0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D45F0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x921320
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x921670

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9A90

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x748150
#define CCursorAttachment__AttachToCursor1_x                       0x748190
#define CCursorAttachment__Deactivate_x                            0x749720

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x998320
#define CSidlManagerBase__CreatePageWnd_x                          0x997B20
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x993010
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x992FA0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B8110
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B7D90

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x524A90
#define CFindItemWnd__WndNotification_x                            0x525950
#define CFindItemWnd__Update_x                                     0x526510
#define CFindItemWnd__PickupSelectedItem_x                         0x524190

//IString
#define IString__Append_x                                          0x55A9A0

//Camera
#define CDisplay__cameraType_x                                     0xEE3E18
#define EverQuest__Cameras_x                                       0xDB303C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52F720
#define LootFiltersManager__GetItemFilterData_x                    0x52F060
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52F090
#define LootFiltersManager__SetItemLootFilter_x                    0x52F2A0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8085C0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F7910
#define CResolutionHandler__GetWindowedStyle_x                     0x6C0AE0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73FDF0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92C830
#define CDistillerInfo__Instance_x                                 0x92C770

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x762A90
#define CGroupWnd__UpdateDisplay_x                                 0x761CE0

//ItemBase
#define ItemBase__IsLore_x                                         0x8F5250
#define ItemBase__IsLoreEquipped_x                                 0x8F52D0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x60AC60
#define EQPlacedItemManager__GetItemByGuid_x                       0x60ADA0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x60AE00

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B51F0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B9B00

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x51A500

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5051A0
#define FactionManagerClient__HandleFactionMessage_x               0x5059C0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5061B0
#define FactionManagerClient__GetMaxFaction_x                      0x5061CF
#define FactionManagerClient__GetMinFaction_x                      0x506180

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x511E30

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x9792D0

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E2B0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x5120A0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x5835E0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CE1E0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B51F0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC600

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5DAC70

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE506D0

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EBB70
#define CAAWnd__UpdateSelected_x                                   0x6E8200
#define CAAWnd__Update_x                                           0x6EAE90

//CXRect
#define CXRect__operator_and_x                                     0x757F10

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D200

//
#define __eq_delete_x                                              0x9F7EF5
#define __eq_new_x                                                 0x9F8464

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

