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
#define __ExpectedVersionDate                                     "Oct 12 2021"
#define __ExpectedVersionTime                                     "04:16:33"
#define __ActualVersionDate_x                                      0xB521EC
#define __ActualVersionTime_x                                      0xB521E0
#define __ActualVersionBuild_x                                     0xB423DC

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x663690
#define __MemChecker1_x                                            0x94F5A0
#define __MemChecker2_x                                            0x6DE060
#define __MemChecker3_x                                            0x6DDFD0
#define __MemChecker4_x                                            0x8A2520
#define __EncryptPad0_x                                            0xE54B80
#define __EncryptPad1_x                                            0xEAF3A8
#define __EncryptPad2_x                                            0xE63DA8
#define __EncryptPad3_x                                            0xE639A8
#define __EncryptPad4_x                                            0xEA01B0
#define __EP1_Data_x                                               0x346054

// Direct Input
#define DI8__Main_x                                                0xFA2D24
#define DI8__Keyboard_x                                            0xFA2D28
#define DI8__Mouse_x                                               0xFA2C84
#define DI8__Mouse_Copy_x                                          0xDAFDC4
#define DI8__Mouse_Check_x                                         0xFA07E4
#define __AutoSkillArray_x                                         0xDB08E0
#define __Attack_x                                                 0xE4E703
#define __Autofire_x                                               0xE4E704
#define __BindList_x                                               0xDA5478
#define g_eqCommandStates_x                                        0xDA61E0
#define __Clicks_x                                                 0xDAFE7C
#define __CommandList_x                                            0xDA6D68
#define __CurrentMapLabel_x                                        0xFB3884
#define __CurrentSocial_x                                          0xC60460
#define __DoAbilityList_x                                          0xDE6224
#define __do_loot_x                                                0x5E0A20
#define __DrawHandler_x                                            0x1625180
#define __GroupCount_x                                             0xF95E1A
#define __Guilds_x                                                 0xF9A280
#define __gWorld_x                                                 0xF9602C
#define __HWnd_x                                                   0xFA2C88
#define __heqmain_x                                                0xFA2C78
#define __InChatMode_x                                             0xDAFDAC
#define __LastTell_x                                               0xDB1920
#define __LMouseHeldTime_x                                         0xDAFEE8
#define __Mouse_x                                                  0xFA2D10
#define __MouseLook_x                                              0xDAFE42
#define __MouseEventTime_x                                         0xF9BCAC
#define __gpbCommandEvent_x                                        0xF96138
#define __NetStatusToggle_x                                        0xDAFE45
#define __PCNames_x                                                0xDB0ED0
#define __RangeAttackReady_x                                       0xDB0BC4
#define __RMouseHeldTime_x                                         0xDAFEE4
#define __RunWalkState_x                                           0xDAFDB0
#define __ScreenMode_x                                             0xEE2104
#define __ScreenX_x                                                0xDAFD64
#define __ScreenY_x                                                0xDAFD60
#define __ScreenXMax_x                                             0xDAFD68
#define __ScreenYMax_x                                             0xDAFD6C
#define __ServerHost_x                                             0xF96303
#define __ServerName_x                                             0xDE61E4
#define __ShiftKeyDown_x                                           0xDB0440
#define __ShowNames_x                                              0xDB0D80
#define EverQuestInfo__bSocialChanged_x                            0xDE626C
#define __Socials_x                                                0xDE62E4
#define __SubscriptionType_x                                       0xFEA4D8
#define __TargetAggroHolder_x                                      0xFB6238
#define __ZoneType_x                                               0xDB0240
#define __GroupAggro_x                                             0xFB6278
#define __LoginName_x                                              0xFA33F4
#define __Inviter_x                                                0xE4E680
#define __AttackOnAssist_x                                         0xDB0D3C
#define __UseTellWindows_x                                         0xDB1068
#define __gfMaxZoomCameraDistance_x                                0xB4A074
#define __gfMaxCameraDistance_x                                    0xB729B4
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
#define instCRaid_x                                                0xF96618
#define instEQZoneInfo_x                                           0xDB0038
#define pinstActiveBanker_x                                        0xF93D18
#define pinstActiveCorpse_x                                        0xF93D10
#define pinstActiveGMaster_x                                       0xF93D14
#define pinstActiveMerchant_x                                      0xF93D0C
#define pinstAltAdvManager_x                                       0xEE2F28
#define pinstBandageTarget_x                                       0xF93D28
#define pinstCamActor_x                                            0xEE20F8
#define pinstCDBStr_x                                              0xEE1C98
#define pinstCDisplay_x                                            0xF93D94
#define pinstCEverQuest_x                                          0xFA2C8C
#define pinstEverQuestInfo_x                                       0xDAFD58
#define pinstCharData_x                                            0xF93D84
#define pinstCharSpawn_x                                           0xF93D60
#define pinstControlledMissile_x                                   0xF93D6C
#define pinstControlledPlayer_x                                    0xF93D60
#define pinstCResolutionHandler_x                                  0x16253A8
#define pinstCSidlManager_x                                        0x1624344
#define pinstCXWndManager_x                                        0x162433C
#define instDynamicZone_x                                          0xF9A158
#define pinstDZMember_x                                            0xF9A268
#define pinstDZTimerInfo_x                                         0xF9A26C
#define pinstEqLogin_x                                             0xFA2D40
#define instEQMisc_x                                               0xD998D8
#define pinstEQSoundManager_x                                      0xEE3838
#define pinstEQSpellStrings_x                                      0xED2938
#define instExpeditionLeader_x                                     0xF9A1A2
#define instExpeditionName_x                                       0xF9A1E2
#define pinstGroup_x                                               0xF95E16
#define pinstImeManager_x                                          0x1624340
#define pinstLocalPlayer_x                                         0xF93D08
#define pinstMercenaryData_x                                       0xF9D7A4
#define pinstMercenaryStats_x                                      0xFB6304
#define pinstModelPlayer_x                                         0xF93D20
#define pinstPCData_x                                              0xF93D84
#define pinstSkillMgr_x                                            0xF9F890
#define pinstSpawnManager_x                                        0xF9E368
#define pinstSpellManager_x                                        0xF9FAD0
#define pinstSpellSets_x                                           0xE4732C
#define pinstStringTable_x                                         0xF93D90
#define pinstSwitchManager_x                                       0xF93BB8
#define pinstTarget_x                                              0xF93D5C
#define pinstTargetObject_x                                        0xF93D7C
#define pinstTargetSwitch_x                                        0xF93D80
#define pinstTaskMember_x                                          0xD99420
#define pinstTrackTarget_x                                         0xF93D64
#define pinstTradeTarget_x                                         0xF93D1C
#define instTributeActive_x                                        0xD998F9
#define pinstViewActor_x                                           0xEE20F4
#define pinstWorldData_x                                           0xF93D8C
#define pinstZoneAddr_x                                            0xDB02D8
#define pinstPlayerPath_x                                          0xF9E400
#define pinstTargetIndicator_x                                     0xF9FD38
#define EQObject_Top_x                                             0xF93D78

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE2168
#define pinstCAchievementsWnd_x                                    0xEE1DD8
#define pinstCActionsWnd_x                                         0xEE20F0
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE211C
#define pinstCAdvancedLootWnd_x                                    0xEE2110
#define pinstCAdventureLeaderboardWnd_x                            0xFAD0A8
#define pinstCAdventureRequestWnd_x                                0xFAD158
#define pinstCAdventureStatsWnd_x                                  0xFAD208
#define pinstCAggroMeterWnd_x                                      0xEE1E68
#define pinstCAlarmWnd_x                                           0xEE2164
#define pinstCAlertHistoryWnd_x                                    0xEE20D8
#define pinstCAlertStackWnd_x                                      0xEE1EA4
#define pinstCAlertWnd_x                                           0xEE20C4
#define pinstCAltStorageWnd_x                                      0xFAD568
#define pinstCAudioTriggersWindow_x                                0xEC4C68
#define pinstCAuraWnd_x                                            0xEE2138
#define pinstCAvaZoneWnd_x                                         0xEE1DC4
#define pinstCBandolierWnd_x                                       0xEE2144
#define pinstCBankWnd_x                                            0xEE20D4
#define pinstCBarterMerchantWnd_x                                  0xFAE7A8
#define pinstCBarterSearchWnd_x                                    0xFAE858
#define pinstCBarterWnd_x                                          0xFAE908
#define pinstCBazaarConfirmationWnd_x                              0xEE1D3C
#define pinstCBazaarSearchWnd_x                                    0xEE1E04
#define pinstCBazaarWnd_x                                          0xEE1DA8
#define pinstCBlockedBuffWnd_x                                     0xEE1E30
#define pinstCBlockedPetBuffWnd_x                                  0xEE1E34
#define pinstCBodyTintWnd_x                                        0xEE1D60
#define pinstCBookWnd_x                                            0xEE20E0
#define pinstCBreathWnd_x                                          0xEE216C
#define pinstCBuffWindowNORMAL_x                                   0xEE1E28
#define pinstCBuffWindowSHORT_x                                    0xEE1E2C
#define pinstCBugReportWnd_x                                       0xEE1DE4
#define pinstCButtonWnd_x                                          0x16245A8
#define pinstCCastingWnd_x                                         0xEE1E64
#define pinstCCastSpellWnd_x                                       0xEE1E74
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEE1E08
#define pinstCChatWindowManager_x                                  0xFAF3B0
#define pinstCClaimWnd_x                                           0xFAF508
#define pinstCColorPickerWnd_x                                     0xEE1E1C
#define pinstCCombatAbilityWnd_x                                   0xEE2128
#define pinstCCombatSkillsSelectWnd_x                              0xEE2124
#define pinstCCompassWnd_x                                         0xEE2140
#define pinstCConfirmationDialog_x                                 0xFB43D0
#define pinstCContainerMgr_x                                       0xEE2160
#define pinstCContextMenuManager_x                                 0x16242F8
#define pinstCCursorAttachment_x                                   0xEE1E5C
#define pinstCDynamicZoneWnd_x                                     0xFAFAD0
#define pinstCEditLabelWnd_x                                       0xEE1DC8
#define pinstCEQMainWnd_x                                          0xFAFD18
#define pinstCEventCalendarWnd_x                                   0xEE2154
#define pinstCExtendedTargetWnd_x                                  0xEE1E60
#define pinstCPlayerCustomizationWnd_x                             0xEE1E10
#define pinstCFactionWnd_x                                         0xEE1E70
#define pinstCFellowshipWnd_x                                      0xFAFF18
#define pinstCFileSelectionWnd_x                                   0xEE2134
#define pinstCFindItemWnd_x                                        0xEE1D64
#define pinstCFindLocationWnd_x                                    0xFB0070
#define pinstCFriendsWnd_x                                         0xEE2130
#define pinstCGemsGameWnd_x                                        0xEE2158
#define pinstCGiveWnd_x                                            0xEE1DB4
#define pinstCGroupSearchFiltersWnd_x                              0xEE1E48
#define pinstCGroupSearchWnd_x                                     0xFB0468
#define pinstCGroupWnd_x                                           0xFB0518
#define pinstCGuildBankWnd_x                                       0xFB05C8
#define pinstCGuildCreationWnd_x                                   0xFB0678
#define pinstCGuildMgmtWnd_x                                       0xFB0728
#define pinstCharacterCreation_x                                   0xEE1E58
#define pinstCHelpWnd_x                                            0xEE20BC
#define pinstCHeritageSelectionWnd_x                               0xEE1E14
#define pinstCHotButtonWnd_x                                       0xFB2880
#define pinstCHotButtonWnd1_x                                      0xFB2880
#define pinstCHotButtonWnd2_x                                      0xFB2884
#define pinstCHotButtonWnd3_x                                      0xFB2888
#define pinstCHotButtonWnd4_x                                      0xFB288C
#define pinstCIconSelectionWnd_x                                   0xEE1DE0
#define pinstCInspectWnd_x                                         0xEE1DD4
#define pinstCInventoryWnd_x                                       0xEE20C0
#define pinstCInvSlotMgr_x                                         0xEE214C
#define pinstCItemDisplayManager_x                                 0xFB2DD8
#define pinstCItemExpTransferWnd_x                                 0xFB2F08
#define pinstCItemOverflowWnd_x                                    0xEE1D94
#define pinstCJournalCatWnd_x                                      0xEE1D4C
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE1D40
#define pinstCJournalTextWnd_x                                     0xEE1D40
#define pinstCKeyRingWnd_x                                         0xEE20C8
#define pinstCLargeDialogWnd_x                                     0xFB5050
#define pinstCLayoutCopyWnd_x                                      0xFB3258
#define pinstCLFGuildWnd_x                                         0xFB3308
#define pinstCLoadskinWnd_x                                        0xEE215C
#define pinstCLootFiltersCopyWnd_x                                 0xEE11A8
#define pinstCLootFiltersWnd_x                                     0xEE1D44
#define pinstCLootSettingsWnd_x                                    0xEE1D48
#define pinstCLootWnd_x                                            0xEE20E4
#define pinstCMailAddressBookWnd_x                                 0xEE1DF8
#define pinstCMailCompositionWnd_x                                 0xEE1DF0
#define pinstCMailIgnoreListWnd_x                                  0xEE1DFC
#define pinstCMailWnd_x                                            0xEE1DE8
#define pinstCManageLootWnd_x                                      0xEE33A8
#define pinstCMapToolbarWnd_x                                      0xEE1DB8
#define pinstCMapViewWnd_x                                         0xEE1DB0
#define pinstCMarketplaceWnd_x                                     0xEE1D8C
#define pinstCMerchantWnd_x                                        0xEE1D90
#define pinstCMIZoneSelectWnd_x                                    0xFB3B40
#define pinstCMusicPlayerWnd_x                                     0xEE2150
#define pinstCNameChangeMercWnd_x                                  0xEE1E94
#define pinstCNameChangePetWnd_x                                   0xEE1E84
#define pinstCNameChangeWnd_x                                      0xEE1DEC
#define pinstCNoteWnd_x                                            0xEE20B8
#define pinstCObjectPreviewWnd_x                                   0xEE1E00
#define pinstCOptionsWnd_x                                         0xEE1E20
#define pinstCOverseerWnd_x                                        0xEE1D88
#define pinstCPetInfoWnd_x                                         0xEE20E8
#define pinstCPetitionQWnd_x                                       0xEE1E3C
#define pinstCPlayerNotesWnd_x                                     0xEE2148
#define pinstCPlayerWnd_x                                          0xEE1D58
#define pinstCPopupWndManager_x                                    0xFB43D0
#define pinstCProgressionSelectionWnd_x                            0xFB4480
#define pinstCPurchaseGroupWnd_x                                   0xEE1D9C
#define pinstCPurchaseWnd_x                                        0xEE1D98
#define pinstCPvPLeaderboardWnd_x                                  0xFB4530
#define pinstCPvPStatsWnd_x                                        0xFB45E0
#define pinstCQuantityWnd_x                                        0xEE20DC
#define pinstCRaceChangeWnd_x                                      0xEE1DF4
#define pinstCRaidOptionsWnd_x                                     0xEE1E6C
#define pinstCRaidWnd_x                                            0xEE1E78
#define pinstCRealEstateItemsWnd_x                                 0xEE1E18
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEE1E54
#define pinstCRealEstateManageWnd_x                                0xEE1E40
#define pinstCRealEstateNeighborhoodWnd_x                          0xEE1E44
#define pinstCRealEstatePlotSearchWnd_x                            0xEE1E4C
#define pinstCRealEstatePurchaseWnd_x                              0xEE1E50
#define pinstCRespawnWnd_x                                         0xEE213C
#define pinstCRewardSelectionWnd_x                                 0xFB4D28
#define pinstCSelectorWnd_x                                        0xEE1DA4
#define pinstCSendMoneyWnd_x                                       0xEE1DC0
#define pinstCServerListWnd_x                                      0xEE212C
#define pinstCSkillsSelectWnd_x                                    0xEE2118
#define pinstCSkillsWnd_x                                          0xEE2114
#define pinstCSocialEditWnd_x                                      0xEE1DDC
#define pinstCSocialWnd_x                                          0xEE1D38
#define pinstCSpellBookWnd_x                                       0xEE1E98
#define pinstCStoryWnd_x                                           0xEE1D54
#define pinstCTargetOfTargetWnd_x                                  0xFB6388
#define pinstCTargetWnd_x                                          0xEE1DD0
#define pinstCTaskOverlayWnd_x                                     0xEE1D50
#define pinstCTaskSelectWnd_x                                      0xFB64E0
#define pinstCTaskManager_x                                        0xC6B268
#define pinstCTaskTemplateSelectWnd_x                              0xFB6590
#define pinstCTaskWnd_x                                            0xFB6640
#define pinstCTextEntryWnd_x                                       0xEE2120
#define pinstCTimeLeftWnd_x                                        0xEE1E38
#define pinstCTipWndCONTEXT_x                                      0xFB6844
#define pinstCTipWndOFDAY_x                                        0xFB6840
#define pinstCTitleWnd_x                                           0xFB68F0
#define pinstCTrackingWnd_x                                        0xEE1DCC
#define pinstCTradeskillWnd_x                                      0xFB6A58
#define pinstCTradeWnd_x                                           0xEE1DA0
#define pinstCTrainWnd_x                                           0xEE20EC
#define pinstCTributeBenefitWnd_x                                  0xFB6C58
#define pinstCTributeMasterWnd_x                                   0xFB6D08
#define pinstCTributeTrophyWnd_x                                   0xFB6DB8
#define pinstCVideoModesWnd_x                                      0xEE1DAC
#define pinstCVoiceMacroWnd_x                                      0xFA0150
#define pinstCVoteResultsWnd_x                                     0xEE1E80
#define pinstCVoteWnd_x                                            0xEE1E7C
#define pinstCZoneGuideWnd_x                                       0xEE20CC
#define pinstCZonePathWnd_x                                        0xEE20D0

#define pinstEQSuiteTextureLoader_x                                0xEAF968
#define pinstItemIconCache_x                                       0xFAFCD0
#define pinstLootFiltersManager_x                                  0xEE1258
#define pinstRewardSelectionWnd_x                                  0xFB4D28

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DBD00
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DBF90
#define __ConvertItemTags_x                                        0x5F91A0
#define __CleanItemTags_x                                          0x47DA40
#define __DoesFileExist_x                                          0x952530
#define __EQGetTime_x                                              0x94F210
#define __ExecuteCmd_x                                             0x5D4140
#define __FixHeading_x                                             0x9ED860
#define __FlushDxKeyboard_x                                        0x6D9360
#define __GameLoop_x                                               0x6DCC60
#define __get_bearing_x                                            0x5DB8A0
#define __get_melee_range_x                                        0x5DC1D0
#define __GetAnimationCache_x                                      0x74B410
#define __GetGaugeValueFromEQ_x                                    0x85B350
#define __GetLabelFromEQ_x                                         0x85CD60
#define __GetXTargetType_x                                         0x9EFBD0
#define __HandleMouseWheel_x                                       0x6DE0F0
#define __HeadingDiff_x                                            0x9ED8C0
#define __HelpPath_x                                               0xF9B96C
#define __ExecuteFrontEnd_x                                        0x6D9B40
#define __NewUIINI_x                                               0x85B030
#define __ProcessGameEvents_x                                      0x6427F0
#define __ProcessMouseEvent_x                                      0x641EF0
#define __SaveColors_x                                             0x5702F0
#define __STMLToText_x                                             0x98B510
#define __ToggleKeyRingItem_x                                      0x528A80
#define CMemoryMappedFile__SetFile_x                               0xADDFF0
#define CrashDetected_x                                            0x6DB870
#define DrawNetStatus_x                                            0x671CF0
#define Expansion_HoT_x                                            0xDB0D28
#define Teleport_Table_Size_x                                      0xF961C0
#define Teleport_Table_x                                           0xF93D98
#define Util__FastTime_x                                           0x94EDD0
#define __CopyLayout_x                                             0x65E910
#define __WndProc_x                                                0x6DBD70
#define __ProcessKeyboardEvent_x                                   0x6DB2B0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491980
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B4D0
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B350
#define CAdvancedLootWnd__AddPlayerToList_x                        0x495650
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494890

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x579380
#define AltAdvManager__IsAbilityReady_x                            0x577F60
#define AltAdvManager__GetAAById_x                                 0x578300
#define AltAdvManager__CanTrainAbility_x                           0x578370
#define AltAdvManager__CanSeeAbility_x                             0x578720

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D16C0
#define CharacterZoneClient__HasSkill_x                            0x4DCE30
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE580
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8B40
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C12E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFA80
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFB80
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFCC0
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAD80
#define CharacterZoneClient__BardCastBard_x                        0x4CDD90
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5220
#define CharacterZoneClient__GetEffect_x                           0x4C1220
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC390
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC440
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC4E0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC6A0
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC880
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8AE0
#define CharacterZoneClient__FindItemByGuid_x                      0x684F10
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEB60

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x706F70
#define CBankWnd__WndNotification_x                                0x706D10

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711990

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70C5D0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x70A5B0

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x7160C0

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x988AC0
#define CButtonWnd__CButtonWnd_x                                   0x987410

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x7389B0
#define CChatManager__InitContextMenu_x                            0x7318D0
#define CChatManager__FreeChatWindow_x                             0x737570
#define CChatManager__SetLockedActiveChatWindow_x                  0x738690
#define CChatManager__CreateChatWindow_x                           0x737BA0

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFB80

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99E8D0
#define CContextMenu__dCContextMenu_x                              0x99EB10
#define CContextMenu__AddMenuItem_x                                0x99EB20
#define CContextMenu__RemoveMenuItem_x                             0x99EE30
#define CContextMenu__RemoveAllMenuItems_x                         0x99EE50
#define CContextMenu__CheckMenuItem_x                              0x99EEB0
#define CContextMenu__SetMenuItem_x                                0x99ED50
#define CContextMenu__AddSeparator_x                               0x99ECB0

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99F440
#define CContextMenuManager__RemoveMenu_x                          0x99F4B0
#define CContextMenuManager__PopupMenu_x                           0x99F570
#define CContextMenuManager__Flush_x                               0x99F3E0
#define CContextMenuManager__GetMenu_x                             0x49D9C0
#define CContextMenuManager__CreateDefaultMenu_x                   0x7452D0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x929B70
#define CChatService__GetFriendName_x                              0x929B80

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x739330
#define CChatWindow__Clear_x                                       0x73A7C0
#define CChatWindow__WndNotification_x                             0x73AF50
#define CChatWindow__AddHistory_x                                  0x73A000

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99B9C0
#define CComboWnd__Draw_x                                          0x99AE50
#define CComboWnd__GetCurChoice_x                                  0x99B790
#define CComboWnd__GetListRect_x                                   0x99B300
#define CComboWnd__GetTextRect_x                                   0x99BA30
#define CComboWnd__InsertChoice_x                                  0x99B490
#define CComboWnd__SetColors_x                                     0x99B460
#define CComboWnd__SetChoice_x                                     0x99B770
#define CComboWnd__GetItemCount_x                                  0x99B7A0
#define CComboWnd__GetCurChoiceText_x                              0x99B7D0
#define CComboWnd__GetChoiceText_x                                 0x99B7B0
#define CComboWnd__InsertChoiceAtIndex_x                           0x99B530

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x742910
#define CContainerWnd__vftable_x                                   0xB5B454
#define CContainerWnd__SetContainer_x                              0x744170

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x56AB30
#define CDisplay__PreZoneMainUI_x                                  0x56AB40
#define CDisplay__CleanGameUI_x                                    0x5700D0
#define CDisplay__GetClickedActor_x                                0x562900
#define CDisplay__GetUserDefinedColor_x                            0x55A650
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x564410
#define CDisplay__is3dON_x                                         0x55F190
#define CDisplay__ReloadUI_x                                       0x569E50
#define CDisplay__WriteTextHD2_x                                   0x55EF80
#define CDisplay__TrueDistance_x                                   0x5663F0
#define CDisplay__SetViewActor_x                                   0x562220
#define CDisplay__GetFloorHeight_x                                 0x55F250
#define CDisplay__SetRenderWindow_x                                0x55DBD0
#define CDisplay__ToggleScreenshotMode_x                           0x561CF0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C1090

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A23C0
#define CEditWnd__EnsureCaretVisible_x                             0x9A4740
#define CEditWnd__GetCaretPt_x                                     0x9A35A0
#define CEditWnd__GetCharIndexPt_x                                 0x9A3350
#define CEditWnd__GetDisplayString_x                               0x9A31F0
#define CEditWnd__GetHorzOffset_x                                  0x9A1930
#define CEditWnd__GetLineForPrintableChar_x                        0x9A4650
#define CEditWnd__GetSelStartPt_x                                  0x9A3600
#define CEditWnd__GetSTMLSafeText_x                                0x9A3000
#define CEditWnd__PointFromPrintableChar_x                         0x9A4290
#define CEditWnd__SelectableCharFromPoint_x                        0x9A43F0
#define CEditWnd__SetEditable_x                                    0x9A36D0
#define CEditWnd__SetWindowTextA_x                                 0x9A2D50
#define CEditWnd__ReplaceSelection_x                               0x9A3E50
#define CEditWnd__ReplaceSelection1_x                              0x9A3DD0

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62DDD0
#define CEverQuest__ClickedPlayer_x                                0x61F310
#define CEverQuest__CreateTargetIndicator_x                        0x63F770
#define CEverQuest__DeleteTargetIndicator_x                        0x63F800
#define CEverQuest__DoTellWindow_x                                 0x4EFC80
#define CEverQuest__OutputTextToLog_x                              0x4EFF50
#define CEverQuest__DropHeldItemOnGround_x                         0x6143E0
#define CEverQuest__dsp_chat_x                                     0x4F0320
#define CEverQuest__trimName_x                                     0x63AD60
#define CEverQuest__Emote_x                                        0x62E490
#define CEverQuest__EnterZone_x                                    0x628150
#define CEverQuest__GetBodyTypeDesc_x                              0x6339F0
#define CEverQuest__GetClassDesc_x                                 0x634030
#define CEverQuest__GetClassThreeLetterCode_x                      0x634630
#define CEverQuest__GetDeityDesc_x                                 0x63DF20
#define CEverQuest__GetLangDesc_x                                  0x6347F0
#define CEverQuest__GetRaceDesc_x                                  0x634010
#define CEverQuest__InterpretCmd_x                                 0x63E590
#define CEverQuest__LeftClickedOnPlayer_x                          0x6188D0
#define CEverQuest__LMouseUp_x                                     0x616990
#define CEverQuest__RightClickedOnPlayer_x                         0x6194C0
#define CEverQuest__RMouseUp_x                                     0x617C50
#define CEverQuest__SetGameState_x                                 0x614160
#define CEverQuest__UPCNotificationFlush_x                         0x63AC80
#define CEverQuest__IssuePetCommand_x                              0x635DF0
#define CEverQuest__ReportSuccessfulHit_x                          0x62FD70

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756390
#define CGaugeWnd__CalcLinesFillRect_x                             0x7563F0
#define CGaugeWnd__Draw_x                                          0x7559B0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4930
#define CGuild__GetGuildName_x                                     0x4B3150
#define CGuild__GetGuildIndex_x                                    0x4B3870

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x7737F0

//CHotButton
#define CHotButton__SetCheck_x                                     0x652DA0
#define CHotButton__SetButtonSize_x                                0x653160

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x780A20
#define CInvSlotMgr__MoveItem_x                                    0x77F690
#define CInvSlotMgr__SelectSlot_x                                  0x780AE0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77DEA0
#define CInvSlot__SliderComplete_x                                 0x77B130
#define CInvSlot__GetItemBase_x                                    0x77A9D0
#define CInvSlot__UpdateItem_x                                     0x77ABC0

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7818C0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7822B0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x8557D0
#define CItemDisplayWnd__UpdateStrings_x                           0x79A0A0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78F080
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78F5D0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79A7B0
#define CItemDisplayWnd__AboutToShow_x                             0x799CA0
#define CItemDisplayWnd__WndNotification_x                         0x79BF10
#define CItemDisplayWnd__RequestConvertItem_x                      0x79B5D0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x798B70
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x799A90

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88AAB0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A1660
#define CItemDisplayManager__ShowItem_x                            0x7A0AC0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A8190

// CListWnd
#define CListWnd__CListWnd_x                                       0x96DD50
#define CListWnd__dCListWnd_x                                      0x96E050
#define CListWnd__AddColumn_x                                      0x972C60
#define CListWnd__AddColumn1_x                                     0x972D80
#define CListWnd__AddLine_x                                        0x9730F0
#define CListWnd__AddString_x                                      0x972EF0
#define CListWnd__CalculateFirstVisibleLine_x                      0x972A10
#define CListWnd__CalculateVSBRange_x                              0x9727F0
#define CListWnd__ClearSel_x                                       0x9739E0
#define CListWnd__ClearAllSel_x                                    0x973A30
#define CListWnd__CloseAndUpdateEditWindow_x                       0x9744E0
#define CListWnd__Compare_x                                        0x971F70
#define CListWnd__Draw_x                                           0x96E210
#define CListWnd__DrawColumnSeparators_x                           0x970D60
#define CListWnd__DrawHeader_x                                     0x9711C0
#define CListWnd__DrawItem_x                                       0x971810
#define CListWnd__DrawLine_x                                       0x970ED0
#define CListWnd__DrawSeparator_x                                  0x970E00
#define CListWnd__EnableLine_x                                     0x970610
#define CListWnd__EnsureVisible_x                                  0x974400
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x973920
#define CListWnd__GetColumnTooltip_x                               0x970190
#define CListWnd__GetColumnMinWidth_x                              0x970200
#define CListWnd__GetColumnWidth_x                                 0x970110
#define CListWnd__GetCurSel_x                                      0x96FAB0
#define CListWnd__GetItemAtPoint_x                                 0x970890
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x970900
#define CListWnd__GetItemColor_x                                   0x96FE30
#define CListWnd__GetItemData_x                                    0x96FB30
#define CListWnd__GetItemHeight_x                                  0x96FEE0
#define CListWnd__GetItemIcon_x                                    0x96FCB0
#define CListWnd__GetItemRect_x                                    0x970700
#define CListWnd__GetItemText_x                                    0x96FB70
#define CListWnd__GetSelList_x                                     0x973A80
#define CListWnd__GetSeparatorRect_x                               0x970B70
#define CListWnd__InsertLine_x                                     0x973550
#define CListWnd__RemoveLine_x                                     0x973770
#define CListWnd__SetColors_x                                      0x9727C0
#define CListWnd__SetColumnJustification_x                         0x9724F0
#define CListWnd__SetColumnLabel_x                                 0x972E90
#define CListWnd__SetItemOnlyDrawTexture_x                         0x974130
#define CListWnd__SetColumnWidth_x                                 0x972400
#define CListWnd__SetCurSel_x                                      0x973870
#define CListWnd__SetItemColor_x                                   0x9740C0
#define CListWnd__SetItemData_x                                    0x974080
#define CListWnd__SetItemText_x                                    0x973CA0
#define CListWnd__ShiftColumnSeparator_x                           0x9725B0
#define CListWnd__Sort_x                                           0x972260
#define CListWnd__ToggleSel_x                                      0x9738A0
#define CListWnd__SetColumnsSizable_x                              0x972650
#define CListWnd__SetItemWnd_x                                     0x973F40
#define CListWnd__GetItemWnd_x                                     0x96FD00
#define CListWnd__SetItemIcon_x                                    0x973D20
#define CListWnd__CalculateCustomWindowPositions_x                 0x972B10
#define CListWnd__SetVScrollPos_x                                  0x9723E0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7BF5A0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BDBC0
#define CMapViewWnd__HandleLButtonDown_x                           0x7BAA50
#define CMapViewWnd__WndNotification_x                             0x7C1ED0

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E29A0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E3300
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E3990
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E6C60
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E1420
#define CMerchantWnd__SelectBuySellSlot_x                          0x7ECE60
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E25F0

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F6740
#define CPacketScrambler__hton_x                                   0x8F6730

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x991B90
#define CSidlManager__FindScreenPieceTemplate_x                    0x991F60
#define CSidlManager__FindScreenPieceTemplate1_x                   0x991D90
#define CSidlManager__CreateXWndFromTemplate_x                     0x995410
#define CSidlManager__CreateXWndFromTemplate1_x                    0x9956B0
#define CSidlManagerbase__CreateXWnd_x                             0x9956F0

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84B920
#define CSidlManager__CreateLabel_x                                0x84B4E0

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84AF50

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98D8B0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98D7B0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BB2E0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98D130
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98CE20
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98CEF0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98CFC0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98E160
#define CSidlScreenWnd__EnableIniStorage_x                         0x98E640
#define CSidlScreenWnd__GetSidlPiece_x                             0x98E350
#define CSidlScreenWnd__Init1_x                                    0x98C8F0
#define CSidlScreenWnd__LoadIniInfo_x                              0x98E690
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98F250
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98BCE0
#define CSidlScreenWnd__StoreIniInfo_x                             0x98EDD0
#define CSidlScreenWnd__StoreIniVis_x                              0x98F140
#define CSidlScreenWnd__WndNotification_x                          0x98E030
#define CSidlScreenWnd__GetChildItem_x                             0x98E5C0
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97CA50
#define CSidlScreenWnd__m_layoutCopy_x                             0x16241C8

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0E70
#define CSkillMgr__GetSkillCap_x                                   0x6C1040
#define CSkillMgr__GetNameToken_x                                  0x6C06B0
#define CSkillMgr__IsActivatedSkill_x                              0x6C07A0
#define CSkillMgr__IsCombatSkill_x                                 0x6C0710

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x9A0510
#define CSliderWnd__SetValue_x                                     0x9A0340
#define CSliderWnd__SetNumTicks_x                                  0x9A03A0

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x852190

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A99E0
#define CStmlWnd__ParseSTML_x                                      0x9AABA0
#define CStmlWnd__CalculateHSBRange_x                              0x9AA960
#define CStmlWnd__CalculateVSBRange_x                              0x9AA8D0
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AF7D0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9B0470
#define CStmlWnd__ForceParseNow_x                                  0x9A9F50
#define CStmlWnd__GetNextTagPiece_x                                0x9AF730
#define CStmlWnd__GetVisibleText_x                                 0x9A9F70
#define CStmlWnd__InitializeWindowVariables_x                      0x9B02C0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A9080
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A90F0
#define CStmlWnd__SetSTMLText_x                                    0x9A7E60
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B1690
#define CStmlWnd__UpdateHistoryString_x                            0x9B0670

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A6D10
#define CTabWnd__DrawCurrentPage_x                                 0x9A76A0
#define CTabWnd__DrawTab_x                                         0x9A7290
#define CTabWnd__GetCurrentPage_x                                  0x9A6470
#define CTabWnd__GetPageInnerRect_x                                0x9A66A0
#define CTabWnd__GetTabInnerRect_x                                 0x9A65E0
#define CTabWnd__GetTabRect_x                                      0x9A64A0
#define CTabWnd__InsertPage_x                                      0x9A6890
#define CTabWnd__RemovePage_x                                      0x9A69E0
#define CTabWnd__SetPage_x                                         0x9A6720
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A6C10
#define CTabWnd__UpdatePage_x                                      0x9A7080
#define CTabWnd__GetPageFromTabIndex_x                             0x9A71D0
#define CTabWnd__GetCurrentTabIndex_x                              0x9A6460

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x9A5E20
#define CPageWnd__FlashTab_x                                       0x9A5E80

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC990

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x978E80
#define CTextureFont__GetTextExtent_x                              0x979180

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B7D90

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x963800

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x542550
#define CXStr__CXStr1_x                                            0x482710
#define CXStr__CXStr3_x                                            0x94B160
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x94B3A0
#define CXStr__operator_equal1_x                                   0x94B3E0
#define CXStr__operator_plus_equal1_x                              0x94BE40
#define CXStr__SetString_x                                         0x94DCE0
#define CXStr__operator_char_p_x                                   0x94B890
#define CXStr__GetChar_x                                           0x94D640
#define CXStr__Delete_x                                            0x94CF10
#define CXStr__GetUnicode_x                                        0x94D6B0
#define CXStr__Insert_x                                            0x94D710
#define CXStr__FindNext_x                                          0x94D360
#define CXStr__Copy_x                                              0x94CD20

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99E530
#define CXWnd__BringToTop_x                                        0x9804D0
#define CXWnd__ClrFocus_x                                          0x97FE60
#define CXWnd__Destroy_x                                           0x97FF00
#define CXWnd__DoAllDrawing_x                                      0x97C0A0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97C070
#define CXWnd__DrawColoredRect_x                                   0x97C630
#define CXWnd__DrawTooltip_x                                       0x97A5D0
#define CXWnd__DrawTooltipAtPoint_x                                0x97A690
#define CXWnd__GetBorderFrame_x                                    0x97C2D0
#define CXWnd__GetChildWndAt_x                                     0x980570
#define CXWnd__GetClientClipRect_x                                 0x97E6C0
#define CXWnd__GetScreenClipRect_x                                 0x97E790
#define CXWnd__GetScreenRect_x                                     0x97E960
#define CXWnd__GetRelativeRect_x                                   0x97EA20
#define CXWnd__GetTooltipRect_x                                    0x97C680
#define CXWnd__GetWindowTextA_x                                    0x4EFB20
#define CXWnd__IsActive_x                                          0x97CDD0
#define CXWnd__IsDescendantOf_x                                    0x97F3B0
#define CXWnd__IsReallyVisible_x                                   0x97F3E0
#define CXWnd__IsType_x                                            0x980D00
#define CXWnd__Move_x                                              0x97F440
#define CXWnd__Move1_x                                             0x97F530
#define CXWnd__ProcessTransition_x                                 0x97FFE0
#define CXWnd__Refade_x                                            0x97F7E0
#define CXWnd__Resize_x                                            0x97FAB0
#define CXWnd__Right_x                                             0x9802C0
#define CXWnd__SetFocus_x                                          0x97FE20
#define CXWnd__SetFont_x                                           0x97FE90
#define CXWnd__SetKeyTooltip_x                                     0x980AC0
#define CXWnd__SetMouseOver_x                                      0x97D770
#define CXWnd__StartFade_x                                         0x97F290
#define CXWnd__GetChildItem_x                                      0x9806F0
#define CXWnd__SetParent_x                                         0x97F0C0
#define CXWnd__Minimize_x                                          0x97FB20

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BC330

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x983540
#define CXWndManager__DrawWindows_x                                0x983690
#define CXWndManager__GetKeyboardFlags_x                           0x986020
#define CXWndManager__HandleKeyboardMsg_x                          0x985C00
#define CXWndManager__RemoveWnd_x                                  0x9862F0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x9867B0

// CDBStr
#define CDBStr__GetString_x                                        0x559140

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5BA0
#define EQ_Character__Cur_HP_x                                     0x4D9AA0
#define EQ_Character__Cur_Mana_x                                   0x4E0CA0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9230
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B86F0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8840
#define EQ_Character__GetHPRegen_x                                 0x4E6770
#define EQ_Character__GetEnduranceRegen_x                          0x4E6D30
#define EQ_Character__GetManaRegen_x                               0x4E7170
#define EQ_Character__Max_Endurance_x                              0x6817C0
#define EQ_Character__Max_HP_x                                     0x4D98D0
#define EQ_Character__Max_Mana_x                                   0x6815A0
#define EQ_Character__doCombatAbility_x                            0x684340
#define EQ_Character__UseSkill_x                                   0x4E8340
#define EQ_Character__GetConLevel_x                                0x679930
#define EQ_Character__IsExpansionFlag_x                            0x5D29B0
#define EQ_Character__TotalEffect_x                                0x4CD6A0
#define EQ_Character__GetPCSpellAffect_x                           0x4CA060
#define EQ_Character__SpellDuration_x                              0x4C9AA0
#define EQ_Character__MySpellDuration_x                            0x4B6DC0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCBF0
#define EQ_Character__GetBaseSkill_x                               0x4DDB90
#define EQ_Character__CanUseItem_x                                 0x4E0FD0
#define EQ_Character__CanMedOnHorse_x                              0x4E7E80

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x917260

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699A60

//PcClient
#define PcClient__vftable_x                                        0xB4EF68
#define PcClient__PcClient_x                                       0x676BB0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0190
#define CCharacterListWnd__EnterWorld_x                            0x4BFB60
#define CCharacterListWnd__Quit_x                                  0x4BF880
#define CCharacterListWnd__UpdateList_x                            0x4BFD50

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658F80
#define EQ_Item__CreateItemTagString_x                             0x8EF530
#define EQ_Item__IsStackable_x                                     0x8F46C0
#define EQ_Item__GetImageNum_x                                     0x8F11C0
#define EQ_Item__CreateItemClient_x                                0x657F10
#define EQ_Item__GetItemValue_x                                    0x8F2420
#define EQ_Item__ValueSellMerchant_x                               0x8F6400
#define EQ_Item__IsKeyRingItem_x                                   0x8F3E70
#define EQ_Item__CanGoInBag_x                                      0x6590A0
#define EQ_Item__IsEmpty_x                                         0x8F3850
#define EQ_Item__GetMaxItemCount_x                                 0x8F2820
#define EQ_Item__GetHeldItem_x                                     0x8F1070
#define EQ_Item__CanGemFitInSlot_x                                 0x8EED40

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x57A190
#define EQ_LoadingS__Array_x                                       0xD9DD30

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x682500
#define EQ_PC__GetAlternateAbilityId_x                             0x9005B0
#define EQ_PC__GetCombatAbility_x                                  0x900B30
#define EQ_PC__GetCombatAbilityTimer_x                             0x900BA0
#define EQ_PC__GetItemRecastTimer_x                                0x684940
#define EQ_PC__HasLoreItem_x                                       0x67A280
#define EQ_PC__AlertInventoryChanged_x                             0x6791F0
#define EQ_PC__GetPcZoneClient_x                                   0x6AA150
#define EQ_PC__RemoveMyAffect_x                                    0x6881B0
#define EQ_PC__GetKeyRingItems_x                                   0x901710
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9011F0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x901910

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D8D10
#define EQItemList__add_object_x                                   0x6092C0
#define EQItemList__add_item_x                                     0x5D92F0
#define EQItemList__delete_item_x                                  0x5D9340
#define EQItemList__FreeItemList_x                                 0x5D9250

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5554F0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69B490
#define EQPlayer__dEQPlayer_x                                      0x68DD20
#define EQPlayer__DoAttack_x                                       0x6A3E80
#define EQPlayer__EQPlayer_x                                       0x68E570
#define EQPlayer__SetNameSpriteState_x                             0x692B30
#define EQPlayer__SetNameSpriteTint_x                              0x6939F0
#define PlayerBase__HasProperty_j_x                                0x9EBC30
#define EQPlayer__IsTargetable_x                                   0x9EC190
#define EQPlayer__CanSee_x                                         0x9EBF80
#define EQPlayer__CanSee1_x                                        0x9EC050
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EBCF0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7C40
#define PlayerZoneClient__GetLevel_x                               0x6AA190
#define PlayerZoneClient__IsValidTeleport_x                        0x60A770
#define PlayerZoneClient__LegalPlayerRace_x                        0x572130

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69E630
#define EQPlayerManager__GetSpawnByName_x                          0x69E6E0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69E770

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C8D0
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C9A0
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C9E0
#define KeypressHandler__ClearCommandStateArray_x                  0x65DEA0
#define KeypressHandler__HandleKeyDown_x                           0x65DEC0
#define KeypressHandler__HandleKeyUp_x                             0x65DF60
#define KeypressHandler__SaveKeymapping_x                          0x65E510

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BB250
#define MapViewMap__SaveEx_x                                       0x7BE78F
#define MapViewMap__SetZoom_x                                      0x7C44A0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9150F0

// StringTable 
#define StringTable__getString_x                                   0x90FE40

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687E00
#define PcZoneClient__RemovePetEffect_x                            0x688460
#define PcZoneClient__HasAlternateAbility_x                        0x681400
#define PcZoneClient__GetCurrentMod_x                              0x4EBCD0
#define PcZoneClient__GetModCap_x                                  0x4EBBD0
#define PcZoneClient__CanEquipItem_x                               0x681AD0
#define PcZoneClient__GetItemByID_x                                0x684E70
#define PcZoneClient__RemoveBuffEffect_x                           0x688510
#define PcZoneClient__BandolierSwap_x                              0x682AB0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6848E0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60F380

//IconCache
#define IconCache__GetIcon_x                                       0x74ADB0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x7417E0
#define CContainerMgr__CloseContainer_x                            0x741B00
#define CContainerMgr__OpenExperimentContainer_x                   0x742660

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81A840

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x651520

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B04D0
#define CLootWnd__RequestLootSlot_x                                0x7AF6F0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A46F0
#define EQ_Spell__SpellAffects_x                                   0x5A4BF0
#define EQ_Spell__SpellAffectBase_x                                0x5A4910
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1090
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1040
#define EQ_Spell__IsSPAStacking_x                                  0x5A59A0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4DF0
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A59B0
#define EQ_Spell__IsLullSpell_x                                    0x5A51E0
#define __IsResEffectSpell_x                                       0x4D0840

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B16E0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x91FCF0
#define EQ_Affect__SetAffectData_x                                 0x9202C0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8672F0
#define CTargetWnd__WndNotification_x                              0x866A90
#define CTargetWnd__RefreshTargetBuffs_x                           0x866DF0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x865890

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86BE60
#define CTaskWnd__ConfirmAbandonTask_x                             0x86EF10

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5530B0
#define CTaskManager__HandleMessage_x                              0x550F90
#define CTaskManager__GetTaskStatus_x                              0x553160
#define CTaskManager__GetElementDescription_x                      0x5531E0

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59F320
#define EqSoundManager__PlayScriptMp3_x                            0x59F520
#define EqSoundManager__SoundAssistPlay_x                          0x6C5300
#define EqSoundManager__WaveInstancePlay_x                         0x6C47F0

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x542200

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A52D0
#define CTextureAnimation__Draw_x                                  0x9A5510
#define CTextureAnimation__AddBlankFrame_x                         0x9A50F0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A1010

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x5827B0
#define CAltAbilityData__GetMercMaxRank_x                          0x582740
#define CAltAbilityData__GetMaxRank_x                              0x576AC0

//CTargetRing
#define CTargetRing__Cast_x                                        0x64ED30

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x657D60
#define CharacterBase__CreateItemGlobalIndex_x                     0x6454B0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x77F510
#define CharacterBase__GetItemByGlobalIndex_x                      0x927860
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9278B0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726670
#define CCastSpellWnd__IsBardSongPlaying_x                         0x726F30
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726FE0

//messages
#define msg_spell_worn_off_x                                       0x5CA150
#define msg_new_text_x                                             0x5BDB60
#define __msgTokenTextParam_x                                      0x5CC5B0
#define msgTokenText_x                                             0x5CC9C0

//SpellManager
#define SpellManager__vftable_x                                    0xB39540
#define SpellManager__SpellManager_x                               0x6C8F40
#define Spellmanager__LoadTextSpells_x                             0x6C9840
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C9110

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F0480

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x671A90
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0CF0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x671A60
#define ItemGlobalIndex__IsValidIndex_x                            0x5D2B70

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x920770
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x920AC0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A8610

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746540
#define CCursorAttachment__AttachToCursor1_x                       0x746580
#define CCursorAttachment__Deactivate_x                            0x747C40

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x996C70
#define CSidlManagerBase__CreatePageWnd_x                          0x996450
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x991910
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x9918A0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B6960
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B65E0

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x521FF0
#define CFindItemWnd__WndNotification_x                            0x522EB0
#define CFindItemWnd__Update_x                                     0x523B00
#define CFindItemWnd__PickupSelectedItem_x                         0x5216C0

//IString
#define IString__Append_x                                          0x558BC0

//Camera
#define CDisplay__cameraType_x                                     0xEE1EA0
#define EverQuest__Cameras_x                                       0xDB1074

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CF90
#define LootFiltersManager__GetItemFilterData_x                    0x52C8C0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C8F0
#define LootFiltersManager__SetItemLootFilter_x                    0x52CB00

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x8072E0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F6140
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF7C0

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73E180

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92B540
#define CDistillerInfo__Instance_x                                 0x92B480

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x760F40
#define CGroupWnd__UpdateDisplay_x                                 0x760190

//ItemBase
#define ItemBase__IsLore_x                                         0x8F3F30
#define ItemBase__IsLoreEquipped_x                                 0x8F3FA0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x609220
#define EQPlacedItemManager__GetItemByGuid_x                       0x609360
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x6093C0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3F60
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8810

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517A10

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5026A0
#define FactionManagerClient__HandleFactionMessage_x               0x502EC0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x5036B0
#define FactionManagerClient__GetMaxFaction_x                      0x5036CF
#define FactionManagerClient__GetMinFaction_x                      0x503680

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F330

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x977AF0

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E3D0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F5A0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x581960

//CTargetManager
#define CTargetManager__Get_x                                      0x6CCEC0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B3F60

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC750

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D91F0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4E708

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA800
#define CAAWnd__UpdateSelected_x                                   0x6E6EA0
#define CAAWnd__Update_x                                           0x6E9B30

//CXRect
#define CXRect__operator_and_x                                     0x756450

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D200

//
#define __eq_delete_x                                              0x9F6725
#define __eq_new_x                                                 0x9F6C94

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
