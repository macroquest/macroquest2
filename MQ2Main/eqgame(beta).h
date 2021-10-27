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
#define __ExpectedVersionDate                                     "Oct 27 2021"
#define __ExpectedVersionTime                                     "04:25:53"
#define __ActualVersionDate_x                                      0xB53324
#define __ActualVersionTime_x                                      0xB53318
#define __ActualVersionBuild_x                                     0xB43444

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Beta)"
#define __MacroQuestWinName                                       "MacroQuest2(Beta)"

// Memory Protection
#define __MemChecker0_x                                            0x662B40
#define __MemChecker1_x                                            0x8F2030
#define __MemChecker2_x                                            0x6DD780
#define __MemChecker3_x                                            0x6DD6F0
#define __MemChecker4_x                                            0x8A3400
#define __EncryptPad0_x                                            0xE52BA8
#define __EncryptPad1_x                                            0xEA0570
#define __EncryptPad2_x                                            0xE61DD0
#define __EncryptPad3_x                                            0xE619D0
#define __EncryptPad4_x                                            0xE9E1D8
#define __EP1_Data_x                                               0x37A3D4

// Direct Input
#define DI8__Main_x                                                0xF9E87C
#define DI8__Keyboard_x                                            0xF9E880
#define DI8__Mouse_x                                               0xF9E7D8
#define DI8__Mouse_Copy_x                                          0xDADDEC
#define DI8__Mouse_Check_x                                         0xF9F2B8
#define __AutoSkillArray_x                                         0xDAE908
#define __Attack_x                                                 0xE4C72B
#define __Autofire_x                                               0xE4C72C
#define __BindList_x                                               0xDA3498
#define g_eqCommandStates_x                                        0xDA4200
#define __Clicks_x                                                 0xDADEA4
#define __CommandList_x                                            0xDA4D88
#define __CurrentMapLabel_x                                        0xFB1894
#define __CurrentSocial_x                                          0xC5E460
#define __DoAbilityList_x                                          0xDE424C
#define __do_loot_x                                                0x5DFDA0
#define __DrawHandler_x                                            0x1623170
#define __GroupCount_x                                             0xF93E2A
#define __Guilds_x                                                 0xF98290
#define __gWorld_x                                                 0xF9403C
#define __HWnd_x                                                   0xF9E7DC
#define __heqmain_x                                                0xFA174C
#define __InChatMode_x                                             0xDADDD4
#define __LastTell_x                                               0xDAF948
#define __LMouseHeldTime_x                                         0xDADF10
#define __Mouse_x                                                  0xF9E868
#define __MouseLook_x                                              0xDADE6A
#define __MouseEventTime_x                                         0xF99CBC
#define __gpbCommandEvent_x                                        0xF94148
#define __NetStatusToggle_x                                        0xDADE6D
#define __PCNames_x                                                0xDAEEF8
#define __RangeAttackReady_x                                       0xDAEBEC
#define __RMouseHeldTime_x                                         0xDADF0C
#define __RunWalkState_x                                           0xDADDD8
#define __ScreenMode_x                                             0xEE011C
#define __ScreenX_x                                                0xDADD8C
#define __ScreenY_x                                                0xDADD88
#define __ScreenXMax_x                                             0xDADD90
#define __ScreenYMax_x                                             0xDADD94
#define __ServerHost_x                                             0xF94313
#define __ServerName_x                                             0xDE420C
#define __ShiftKeyDown_x                                           0xDAE468
#define __ShowNames_x                                              0xDAEDA8
#define EverQuestInfo__bSocialChanged_x                            0xDE4294
#define __Socials_x                                                0xDE430C
#define __SubscriptionType_x                                       0xFE93B8
#define __TargetAggroHolder_x                                      0xFB4248
#define __ZoneType_x                                               0xDAE268
#define __GroupAggro_x                                             0xFB4288
#define __LoginName_x                                              0xF9EF4C
#define __Inviter_x                                                0xE4C6A8
#define __AttackOnAssist_x                                         0xDAED64
#define __UseTellWindows_x                                         0xDAF090
#define __gfMaxZoomCameraDistance_x                                0xB4B19C
#define __gfMaxCameraDistance_x                                    0xB73B80
#define __pulAutoRun_x                                             0xDADE88
#define __pulForward_x                                             0xDAF0C8
#define __pulBackward_x                                            0xDAF0CC
#define __pulTurnRight_x                                           0xDAF0D0
#define __pulTurnLeft_x                                            0xDAF0D4
#define __pulStrafeLeft_x                                          0xDAF0D8
#define __pulStrafeRight_x                                         0xDAF0DC

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF94628
#define instEQZoneInfo_x                                           0xDAE060
#define pinstActiveBanker_x                                        0xF91D28
#define pinstActiveCorpse_x                                        0xF91D20
#define pinstActiveGMaster_x                                       0xF91D24
#define pinstActiveMerchant_x                                      0xF91D1C
#define pinstAltAdvManager_x                                       0xEE0F38
#define pinstBandageTarget_x                                       0xF91D38
#define pinstCamActor_x                                            0xEE0110
#define pinstCDBStr_x                                              0xEDFCA8
#define pinstCDisplay_x                                            0xF91DA4
#define pinstCEverQuest_x                                          0xF9E7E4
#define pinstEverQuestInfo_x                                       0xDADD80
#define pinstCharData_x                                            0xF91D94
#define pinstCharSpawn_x                                           0xF91D70
#define pinstControlledMissile_x                                   0xF91D7C
#define pinstControlledPlayer_x                                    0xF91D70
#define pinstCResolutionHandler_x                                  0x1623398
#define pinstCSidlManager_x                                        0xFC2DD4
#define pinstCXWndManager_x                                        0xFC2DCC
#define instDynamicZone_x                                          0xF98168
#define pinstDZMember_x                                            0xF98278
#define pinstDZTimerInfo_x                                         0xF9827C
#define pinstEqLogin_x                                             0xF9E898
#define instEQMisc_x                                               0xD978D8
#define pinstEQSoundManager_x                                      0xEE1848
#define pinstEQSpellStrings_x                                      0xED0948
#define instExpeditionLeader_x                                     0xF981B2
#define instExpeditionName_x                                       0xF981F2
#define pinstGroup_x                                               0xF93E26
#define pinstImeManager_x                                          0xFC2DD0
#define pinstLocalPlayer_x                                         0xF91D18
#define pinstMercenaryData_x                                       0xF9B7B4
#define pinstMercenaryStats_x                                      0xFB4314
#define pinstModelPlayer_x                                         0xF91D30
#define pinstPCData_x                                              0xF91D94
#define pinstSkillMgr_x                                            0xF9D8A0
#define pinstSpawnManager_x                                        0xF9C378
#define pinstSpellManager_x                                        0xF9DAE0
#define pinstSpellSets_x                                           0xE45354
#define pinstStringTable_x                                         0xF91DA0
#define pinstSwitchManager_x                                       0xF91BC8
#define pinstTarget_x                                              0xF91D6C
#define pinstTargetObject_x                                        0xF91D8C
#define pinstTargetSwitch_x                                        0xF91D90
#define pinstTaskMember_x                                          0xD97420
#define pinstTrackTarget_x                                         0xF91D74
#define pinstTradeTarget_x                                         0xF91D2C
#define instTributeActive_x                                        0xD978F9
#define pinstViewActor_x                                           0xEE010C
#define pinstWorldData_x                                           0xF91D9C
#define pinstZoneAddr_x                                            0xDAE300
#define pinstPlayerPath_x                                          0xF9C410
#define pinstTargetIndicator_x                                     0xF9DD48
#define EQObject_Top_x                                             0xF91D88

//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE0170
#define pinstCAchievementsWnd_x                                    0xEDFE30
#define pinstCActionsWnd_x                                         0xEE0100
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE012C
#define pinstCAdvancedLootWnd_x                                    0xEE0104
#define pinstCAdventureLeaderboardWnd_x                            0xFAB0B8
#define pinstCAdventureRequestWnd_x                                0xFAB168
#define pinstCAdventureStatsWnd_x                                  0xFAB218
#define pinstCAggroMeterWnd_x                                      0xEDFE8C
#define pinstCAlarmWnd_x                                           0xEDFD60
#define pinstCAlertHistoryWnd_x                                    0xEE0154
#define pinstCAlertStackWnd_x                                      0xEE0130
#define pinstCAlertWnd_x                                           0xEE0138
#define pinstCAltStorageWnd_x                                      0xFAB578
#define pinstCAudioTriggersWindow_x                                0xEC2C78
#define pinstCAuraWnd_x                                            0xEE0158
#define pinstCAvaZoneWnd_x                                         0xEDFE2C
#define pinstCBandolierWnd_x                                       0xEE0160
#define pinstCBankWnd_x                                            0xEE00DC
#define pinstCBarterMerchantWnd_x                                  0xFAC7B8
#define pinstCBarterSearchWnd_x                                    0xFAC868
#define pinstCBarterWnd_x                                          0xFAC918
#define pinstCBazaarConfirmationWnd_x                              0xEDFD6C
#define pinstCBazaarSearchWnd_x                                    0xEDFE14
#define pinstCBazaarWnd_x                                          0xEDFDC8
#define pinstCBlockedBuffWnd_x                                     0xEDFE54
#define pinstCBlockedPetBuffWnd_x                                  0xEDFE58
#define pinstCBodyTintWnd_x                                        0xEDFD8C
#define pinstCBookWnd_x                                            0xEE00E4
#define pinstCBreathWnd_x                                          0xEE0174
#define pinstCBuffWindowNORMAL_x                                   0xEDFE4C
#define pinstCBuffWindowSHORT_x                                    0xEDFE50
#define pinstCBugReportWnd_x                                       0xEDFDF8
#define pinstCButtonWnd_x                                          0xFC3038
#define pinstCCastingWnd_x                                         0xEDFE88
#define pinstCCastSpellWnd_x                                       0xEDFE9C
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEDFE18
#define pinstCChatWindowManager_x                                  0xFAD3C0
#define pinstCClaimWnd_x                                           0xFAD518
#define pinstCColorPickerWnd_x                                     0xEDFE40
#define pinstCCombatAbilityWnd_x                                   0xEE0144
#define pinstCCombatSkillsSelectWnd_x                              0xEE0140
#define pinstCCompassWnd_x                                         0xEDFD48
#define pinstCConfirmationDialog_x                                 0xFB23E0
#define pinstCContainerMgr_x                                       0xEE016C
#define pinstCContextMenuManager_x                                 0xFC2D88
#define pinstCCursorAttachment_x                                   0xEDFE80
#define pinstCDynamicZoneWnd_x                                     0xFADAE0
#define pinstCEditLabelWnd_x                                       0xEDFDDC
#define pinstCEQMainWnd_x                                          0xFADD28
#define pinstCEventCalendarWnd_x                                   0xEDFD50
#define pinstCExtendedTargetWnd_x                                  0xEDFE84
#define pinstCPlayerCustomizationWnd_x                             0xEDFE20
#define pinstCFactionWnd_x                                         0xEDFE98
#define pinstCFellowshipWnd_x                                      0xFADF28
#define pinstCFileSelectionWnd_x                                   0xEE017C
#define pinstCFindItemWnd_x                                        0xEDFD64
#define pinstCFindLocationWnd_x                                    0xFAE080
#define pinstCFriendsWnd_x                                         0xEE0148
#define pinstCGemsGameWnd_x                                        0xEDFD58
#define pinstCGiveWnd_x                                            0xEDFDD0
#define pinstCGroupSearchFiltersWnd_x                              0xEDFE5C
#define pinstCGroupSearchWnd_x                                     0xFAE478
#define pinstCGroupWnd_x                                           0xFAE528
#define pinstCGuildBankWnd_x                                       0xFAE5D8
#define pinstCGuildCreationWnd_x                                   0xFAE688
#define pinstCGuildMgmtWnd_x                                       0xFAE738
#define pinstCharacterCreation_x                                   0xEDFE64
#define pinstCHelpWnd_x                                            0xEE00D0
#define pinstCHeritageSelectionWnd_x                               0xEDFE24
#define pinstCHotButtonWnd_x                                       0xFB0890
#define pinstCHotButtonWnd1_x                                      0xFB0890
#define pinstCHotButtonWnd2_x                                      0xFB0894
#define pinstCHotButtonWnd3_x                                      0xFB0898
#define pinstCHotButtonWnd4_x                                      0xFB089C
#define pinstCIconSelectionWnd_x                                   0xEDFDF0
#define pinstCInspectWnd_x                                         0xEDFDE8
#define pinstCInventoryWnd_x                                       0xEE00D4
#define pinstCInvSlotMgr_x                                         0xEE0164
#define pinstCItemDisplayManager_x                                 0xFB0DE8
#define pinstCItemExpTransferWnd_x                                 0xFB0F1C
#define pinstCItemOverflowWnd_x                                    0xEDFD94
#define pinstCJournalCatWnd_x                                      0xEDFD7C
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEDFD70
#define pinstCJournalTextWnd_x                                     0xEDFD70
#define pinstCKeyRingWnd_x                                         0xEE00D8
#define pinstCLargeDialogWnd_x                                     0xFB3060
#define pinstCLayoutCopyWnd_x                                      0xFB1268
#define pinstCLFGuildWnd_x                                         0xFB1318
#define pinstCLoadskinWnd_x                                        0xEDFD5C
#define pinstCLootFiltersCopyWnd_x                                 0xEDF1B8
#define pinstCLootFiltersWnd_x                                     0xEDFD74
#define pinstCLootSettingsWnd_x                                    0xEDFD78
#define pinstCLootWnd_x                                            0xEE00E8
#define pinstCMailAddressBookWnd_x                                 0xEDFE0C
#define pinstCMailCompositionWnd_x                                 0xEDFE04
#define pinstCMailIgnoreListWnd_x                                  0xEDFE10
#define pinstCMailWnd_x                                            0xEDFDFC
#define pinstCManageLootWnd_x                                      0xEE13B8
#define pinstCMapToolbarWnd_x                                      0xEDFDD4
#define pinstCMapViewWnd_x                                         0xEDFDCC
#define pinstCMarketplaceWnd_x                                     0xEDFDF4
#define pinstCMerchantWnd_x                                        0xEDFD90
#define pinstCMIZoneSelectWnd_x                                    0xFB1B50
#define pinstCMusicPlayerWnd_x                                     0xEE0168
#define pinstCNameChangeMercWnd_x                                  0xEE0108
#define pinstCNameChangePetWnd_x                                   0xEE00FC
#define pinstCNameChangeWnd_x                                      0xEDFE34
#define pinstCNoteWnd_x                                            0xEDFEBC
#define pinstCObjectPreviewWnd_x                                   0xEDFE3C
#define pinstCOptionsWnd_x                                         0xEDFE48
#define pinstCOverseerWnd_x                                        0xEDFDC0
#define pinstCPetInfoWnd_x                                         0xEE00F0
#define pinstCPetitionQWnd_x                                       0xEDFE6C
#define pinstCPlayerNotesWnd_x                                     0xEDFD4C
#define pinstCPlayerWnd_x                                          0xEDFD54
#define pinstCPopupWndManager_x                                    0xFB23E0
#define pinstCProgressionSelectionWnd_x                            0xFB2490
#define pinstCPurchaseGroupWnd_x                                   0xEDFE08
#define pinstCPurchaseWnd_x                                        0xEDFE00
#define pinstCPvPLeaderboardWnd_x                                  0xFB2540
#define pinstCPvPStatsWnd_x                                        0xFB25F0
#define pinstCQuantityWnd_x                                        0xEE00E0
#define pinstCRaceChangeWnd_x                                      0xEDFE38
#define pinstCRaidOptionsWnd_x                                     0xEDFE90
#define pinstCRaidWnd_x                                            0xEDFEA0
#define pinstCRealEstateItemsWnd_x                                 0xEDFE44
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDFE94
#define pinstCRealEstateManageWnd_x                                0xEDFE70
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDFE74
#define pinstCRealEstatePlotSearchWnd_x                            0xEDFE78
#define pinstCRealEstatePurchaseWnd_x                              0xEDFE7C
#define pinstCRespawnWnd_x                                         0xEE015C
#define pinstCRewardSelectionWnd_x                                 0xFB2D38
#define pinstCSelectorWnd_x                                        0xEDFDBC
#define pinstCSendMoneyWnd_x                                       0xEDFDD8
#define pinstCServerListWnd_x                                      0xEE0178
#define pinstCSkillsSelectWnd_x                                    0xEE013C
#define pinstCSkillsWnd_x                                          0xEE0128
#define pinstCSocialEditWnd_x                                      0xEDFDEC
#define pinstCSocialWnd_x                                          0xEDFD68
#define pinstCSpellBookWnd_x                                       0xEDFEB4
#define pinstCStoryWnd_x                                           0xEDFD84
#define pinstCTargetOfTargetWnd_x                                  0xFB4398
#define pinstCTargetWnd_x                                          0xEDFDE4
#define pinstCTaskOverlayWnd_x                                     0xEDFD80
#define pinstCTaskSelectWnd_x                                      0xFB44F0
#define pinstCTaskManager_x                                        0xC69268
#define pinstCTaskTemplateSelectWnd_x                              0xFB45A0
#define pinstCTaskWnd_x                                            0xFB4650
#define pinstCTextEntryWnd_x                                       0xEE0134
#define pinstCTimeLeftWnd_x                                        0xEDFE68
#define pinstCTipWndCONTEXT_x                                      0xFB4854
#define pinstCTipWndOFDAY_x                                        0xFB4850
#define pinstCTitleWnd_x                                           0xFB4900
#define pinstCTrackingWnd_x                                        0xEDFDE0
#define pinstCTradeskillWnd_x                                      0xFB4A68
#define pinstCTradeWnd_x                                           0xEDFDB8
#define pinstCTrainWnd_x                                           0xEE00F8
#define pinstCTributeBenefitWnd_x                                  0xFB4C68
#define pinstCTributeMasterWnd_x                                   0xFB4D18
#define pinstCTributeTrophyWnd_x                                   0xFB4DC8
#define pinstCVideoModesWnd_x                                      0xEDFDC4
#define pinstCVoiceMacroWnd_x                                      0xF9E160
#define pinstCVoteResultsWnd_x                                     0xEE00F4
#define pinstCVoteWnd_x                                            0xEE00EC
#define pinstCZoneGuideWnd_x                                       0xEE014C
#define pinstCZonePathWnd_x                                        0xEE0150

#define pinstEQSuiteTextureLoader_x                                0xEA0B30
#define pinstItemIconCache_x                                       0xFADCE0
#define pinstLootFiltersManager_x                                  0xEDF268
#define pinstRewardSelectionWnd_x                                  0xFB2D38

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB070
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB300
#define __ConvertItemTags_x                                        0x5F8510
#define __CleanItemTags_x                                          0x47DAD0
#define __DoesFileExist_x                                          0x8F4FC0
#define __EQGetTime_x                                              0x8F1CA0
#define __ExecuteCmd_x                                             0x5D3510
#define __FixHeading_x                                             0x9EE310
#define __FlushDxKeyboard_x                                        0x6D8A50
#define __GameLoop_x                                               0x6DC380
#define __get_bearing_x                                            0x5DAC90
#define __get_melee_range_x                                        0x5DB540
#define __GetAnimationCache_x                                      0x74B9D0
#define __GetGaugeValueFromEQ_x                                    0x85C160
#define __GetLabelFromEQ_x                                         0x85DB70
#define __GetXTargetType_x                                         0x9F0680
#define __HandleMouseWheel_x                                       0x6DD810
#define __HeadingDiff_x                                            0x9EE370
#define __HelpPath_x                                               0xF9997C
#define __ExecuteFrontEnd_x                                        0x6D9230
#define __NewUIINI_x                                               0x85BE40
#define __ProcessGameEvents_x                                      0x641C40
#define __ProcessMouseEvent_x                                      0x641340
#define __SaveColors_x                                             0x56F6D0
#define __STMLToText_x                                             0x92D7A0
#define __ToggleKeyRingItem_x                                      0x528C40
#define CMemoryMappedFile__SetFile_x                               0xADF5D0
#define CrashDetected_x                                            0x6DAF80
#define DrawNetStatus_x                                            0x671130
#define Expansion_HoT_x                                            0xDAED50
#define Teleport_Table_Size_x                                      0xF941D0
#define Teleport_Table_x                                           0xF91DA8
#define Util__FastTime_x                                           0x8F1860
#define __CopyLayout_x                                             0x65DDC0
#define __WndProc_x                                                0x6DB480
#define __ProcessKeyboardEvent_x                                   0x6DA9C0

//// 
// Section 4: Function Offsets 
//// 
// CAdvancedLootWnd
#define CAdvancedLootWnd__CAdvancedLootWnd_x                       0x491A20
#define CAdvancedLootWnd__DoAdvLootAction_x                        0x49B570
#define CAdvancedLootWnd__DoSharedAdvLootAction_x                  0x49B3F0
#define CAdvancedLootWnd__AddPlayerToList_x                        0x4956F0
#define CAdvancedLootWnd__UpdateMasterLooter_x                     0x494930

// AltAdvManager 
#define AltAdvManager__GetCalculatedTimer_x                        0x578740
#define AltAdvManager__IsAbilityReady_x                            0x577340
#define AltAdvManager__GetAAById_x                                 0x5776E0
#define AltAdvManager__CanTrainAbility_x                           0x577750
#define AltAdvManager__CanSeeAbility_x                             0x577B00

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1790
#define CharacterZoneClient__HasSkill_x                            0x4DCF40
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE6C0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8BF0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C13C0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFBC0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFCC0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFE00
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAEE0
#define CharacterZoneClient__BardCastBard_x                        0x4CDE40
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5360
#define CharacterZoneClient__GetEffect_x                           0x4C1300
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC410
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC4C0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC560
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC720
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC900
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8BD0
#define CharacterZoneClient__FindItemByGuid_x                      0x684440
#define CharacterZoneClient__FindItemByRecord_x                    0x4DECA0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x706850
#define CBankWnd__WndNotification_x                                0x706600

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711360

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70BFA0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x709F70

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715A90

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x92AD50
#define CButtonWnd__CButtonWnd_x                                   0x9296A0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x738ED0
#define CChatManager__InitContextMenu_x                            0x7313B0
#define CChatManager__FreeChatWindow_x                             0x737A80
#define CChatManager__SetLockedActiveChatWindow_x                  0x738BB0
#define CChatManager__CreateChatWindow_x                           0x7380B0

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFD20

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x940B60
#define CContextMenu__dCContextMenu_x                              0x940DA0
#define CContextMenu__AddMenuItem_x                                0x940DB0
#define CContextMenu__AddChildMenuItem_x                           0x940EF0
#define CContextMenu__RemoveMenuItem_x                             0x9411A0
#define CContextMenu__RemoveAllMenuItems_x                         0x9411C0
#define CContextMenu__CheckMenuItem_x                              0x941220
#define CContextMenu__SetMenuItem_x                                0x9410C0
#define CContextMenu__AddSeparator_x                               0x9410A0
#define CContextMenu__AddColorSeparator_x                          0x915AC0

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x9417B0
#define CContextMenuManager__RemoveMenu_x                          0x941820
#define CContextMenuManager__PopupMenu_x                           0x9418E0
#define CContextMenuManager__Flush_x                               0x941750
#define CContextMenuManager__GetMenu_x                             0x49DA60
#define CContextMenuManager__CreateDefaultMenu_x                   0x745850

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x9C7A50
#define CChatService__GetFriendName_x                              0x9C7A60

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x739850
#define CChatWindow__Clear_x                                       0x73ACF0
#define CChatWindow__WndNotification_x                             0x73B480
#define CChatWindow__AddHistory_x                                  0x73A530

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x93DC10
#define CComboWnd__Draw_x                                          0x93D090
#define CComboWnd__GetCurChoice_x                                  0x93D9E0
#define CComboWnd__GetListRect_x                                   0x93D540
#define CComboWnd__GetTextRect_x                                   0x93DC80
#define CComboWnd__InsertChoice_x                                  0x93D6D0
#define CComboWnd__SetColors_x                                     0x93D6A0
#define CComboWnd__SetChoice_x                                     0x93D9C0
#define CComboWnd__GetItemCount_x                                  0x93D9F0
#define CComboWnd__GetCurChoiceText_x                              0x93DA20
#define CComboWnd__GetChoiceText_x                                 0x93DA00
#define CComboWnd__InsertChoiceAtIndex_x                           0x93D770

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x742E90
#define CContainerWnd__vftable_x                                   0xB5C5C4
#define CContainerWnd__SetContainer_x                              0x744700

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569F10
#define CDisplay__PreZoneMainUI_x                                  0x569F20
#define CDisplay__CleanGameUI_x                                    0x56F4B0
#define CDisplay__GetClickedActor_x                                0x561D00
#define CDisplay__GetUserDefinedColor_x                            0x559A80
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x563810
#define CDisplay__is3dON_x                                         0x55E590
#define CDisplay__ReloadUI_x                                       0x569230
#define CDisplay__WriteTextHD2_x                                   0x55E380
#define CDisplay__TrueDistance_x                                   0x5657F0
#define CDisplay__SetViewActor_x                                   0x561620
#define CDisplay__GetFloorHeight_x                                 0x55E650
#define CDisplay__SetRenderWindow_x                                0x55D000
#define CDisplay__ToggleScreenshotMode_x                           0x5610F0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x963450

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x944730
#define CEditWnd__EnsureCaretVisible_x                             0x946AB0
#define CEditWnd__GetCaretPt_x                                     0x945910
#define CEditWnd__GetCharIndexPt_x                                 0x9456C0
#define CEditWnd__GetDisplayString_x                               0x945560
#define CEditWnd__GetHorzOffset_x                                  0x943CA0
#define CEditWnd__GetLineForPrintableChar_x                        0x9469C0
#define CEditWnd__GetSelStartPt_x                                  0x945970
#define CEditWnd__GetSTMLSafeText_x                                0x945370
#define CEditWnd__PointFromPrintableChar_x                         0x946600
#define CEditWnd__SelectableCharFromPoint_x                        0x946760
#define CEditWnd__SetEditable_x                                    0x945A40
#define CEditWnd__SetWindowTextA_x                                 0x9450C0
#define CEditWnd__ReplaceSelection_x                               0x9461C0
#define CEditWnd__ReplaceSelection1_x                              0x946140

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D240
#define CEverQuest__ClickedPlayer_x                                0x61E750
#define CEverQuest__CreateTargetIndicator_x                        0x63EBA0
#define CEverQuest__DeleteTargetIndicator_x                        0x63EC30
#define CEverQuest__DoTellWindow_x                                 0x4EFE20
#define CEverQuest__OutputTextToLog_x                              0x4F00F0
#define CEverQuest__DropHeldItemOnGround_x                         0x613820
#define CEverQuest__dsp_chat_x                                     0x4F04C0
#define CEverQuest__trimName_x                                     0x63A190
#define CEverQuest__Emote_x                                        0x62D900
#define CEverQuest__EnterZone_x                                    0x6275A0
#define CEverQuest__GetBodyTypeDesc_x                              0x632E50
#define CEverQuest__GetClassDesc_x                                 0x633490
#define CEverQuest__GetClassThreeLetterCode_x                      0x633A90
#define CEverQuest__GetDeityDesc_x                                 0x63D350
#define CEverQuest__GetLangDesc_x                                  0x633C50
#define CEverQuest__GetRaceDesc_x                                  0x633470
#define CEverQuest__InterpretCmd_x                                 0x63D9C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x617D10
#define CEverQuest__LMouseUp_x                                     0x615DD0
#define CEverQuest__RightClickedOnPlayer_x                         0x618900
#define CEverQuest__RMouseUp_x                                     0x617090
#define CEverQuest__SetGameState_x                                 0x6135A0
#define CEverQuest__UPCNotificationFlush_x                         0x63A0B0
#define CEverQuest__IssuePetCommand_x                              0x635250
#define CEverQuest__ReportSuccessfulHit_x                          0x62F1D0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x756960
#define CGaugeWnd__CalcLinesFillRect_x                             0x7569C0
#define CGaugeWnd__Draw_x                                          0x755F80

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4A00
#define CGuild__GetGuildName_x                                     0x4B3220
#define CGuild__GetGuildIndex_x                                    0x4B3940

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x773EE0

//CHotButton
#define CHotButton__SetCheck_x                                     0x6521C0
#define CHotButton__SetButtonSize_x                                0x652580

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x781330
#define CInvSlotMgr__MoveItem_x                                    0x77FF60
#define CInvSlotMgr__SelectSlot_x                                  0x7813F0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77E6A0
#define CInvSlot__SliderComplete_x                                 0x77B850
#define CInvSlot__GetItemBase_x                                    0x77B0D0
#define CInvSlot__UpdateItem_x                                     0x77B2C0

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x7821F0
#define CInvSlotWnd__HandleLButtonUp_x                             0x782C20

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x8565F0
#define CItemDisplayWnd__UpdateStrings_x                           0x79AAA0
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78FA50
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78FFA0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x79B1B0
#define CItemDisplayWnd__AboutToShow_x                             0x79A690
#define CItemDisplayWnd__WndNotification_x                         0x79C940
#define CItemDisplayWnd__RequestConvertItem_x                      0x79BFE0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x799560
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x79A480

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x88B9A0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A2070
#define CItemDisplayManager__ShowItem_x                            0x7A14E0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A8BB0

// CListWnd
#define CListWnd__CListWnd_x                                       0x9104E0
#define CListWnd__dCListWnd_x                                      0x9107E0
#define CListWnd__AddColumn_x                                      0x915420
#define CListWnd__AddColumn1_x                                     0x915540
#define CListWnd__AddLine_x                                        0x9158C0
#define CListWnd__AddString_x                                      0x9156B0
#define CListWnd__CalculateFirstVisibleLine_x                      0x9151D0
#define CListWnd__CalculateVSBRange_x                              0x914FB0
#define CListWnd__ClearSel_x                                       0x916290
#define CListWnd__ClearAllSel_x                                    0x9162E0
#define CListWnd__CloseAndUpdateEditWindow_x                       0x916DD0
#define CListWnd__Compare_x                                        0x914730
#define CListWnd__Draw_x                                           0x9109A0
#define CListWnd__DrawColumnSeparators_x                           0x913520
#define CListWnd__DrawHeader_x                                     0x913980
#define CListWnd__DrawItem_x                                       0x913FD0
#define CListWnd__DrawLine_x                                       0x913690
#define CListWnd__DrawSeparator_x                                  0x9135C0
#define CListWnd__EnableLine_x                                     0x912DD0
#define CListWnd__EnsureVisible_x                                  0x916CF0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x9161D0
#define CListWnd__GetColumnTooltip_x                               0x912950
#define CListWnd__GetColumnMinWidth_x                              0x9129C0
#define CListWnd__GetColumnWidth_x                                 0x9128D0
#define CListWnd__GetCurSel_x                                      0x912230
#define CListWnd__GetItemAtPoint_x                                 0x913050
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x9130C0
#define CListWnd__GetItemColor_x                                   0x9125B0
#define CListWnd__GetItemData_x                                    0x9122B0
#define CListWnd__GetItemHeight_x                                  0x9126A0
#define CListWnd__GetItemIcon_x                                    0x912430
#define CListWnd__GetItemRect_x                                    0x912EC0
#define CListWnd__GetItemText_x                                    0x9122F0
#define CListWnd__GetSelList_x                                     0x916330
#define CListWnd__GetSeparatorRect_x                               0x913330
#define CListWnd__InsertLine_x                                     0x915E00
#define CListWnd__RemoveLine_x                                     0x916020
#define CListWnd__SetColors_x                                      0x914F80
#define CListWnd__SetColumnJustification_x                         0x914CB0
#define CListWnd__SetColumnLabel_x                                 0x915650
#define CListWnd__SetItemOnlyDrawTexture_x                         0x9169E0
#define CListWnd__SetColumnWidth_x                                 0x914BC0
#define CListWnd__SetCurSel_x                                      0x916120
#define CListWnd__SetItemColor_x                                   0x916970
#define CListWnd__SetItemData_x                                    0x916930
#define CListWnd__SetItemText_x                                    0x916550
#define CListWnd__ShiftColumnSeparator_x                           0x914D70
#define CListWnd__Sort_x                                           0x914A20
#define CListWnd__ToggleSel_x                                      0x916150
#define CListWnd__SetColumnsSizable_x                              0x914E10
#define CListWnd__SetItemWnd_x                                     0x9167F0
#define CListWnd__GetItemWnd_x                                     0x912480
#define CListWnd__SetItemIcon_x                                    0x9165D0
#define CListWnd__CalculateCustomWindowPositions_x                 0x9152D0
#define CListWnd__SetVScrollPos_x                                  0x914BA0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7C0110
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BE750
#define CMapViewWnd__HandleLButtonDown_x                           0x7BB570
#define CMapViewWnd__WndNotification_x                             0x7C2A40

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E3700
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E4060
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E46E0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E79D0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E2170
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EDBB0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E3350

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x994550
#define CPacketScrambler__hton_x                                   0x994540

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x933DD0
#define CSidlManager__FindScreenPieceTemplate_x                    0x9341A0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x933FD0
#define CSidlManager__CreateXWndFromTemplate_x                     0x937650
#define CSidlManager__CreateXWndFromTemplate1_x                    0x9378F0
#define CSidlManagerbase__CreateXWnd_x                             0x937930

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84C650
#define CSidlManager__CreateLabel_x                                0x84C210

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84BC80

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x92FB10
#define CSidlScreenWnd__CalculateVSBRange_x                        0x92FA10
#define CSidlScreenWnd__ConvertToRes_x                             0x95D6C0
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x92F390
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x92F080
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x92F150
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x92F220
#define CSidlScreenWnd__DrawSidlPiece_x                            0x9303D0
#define CSidlScreenWnd__EnableIniStorage_x                         0x9308B0
#define CSidlScreenWnd__GetSidlPiece_x                             0x9305C0
#define CSidlScreenWnd__Init1_x                                    0x92EB70
#define CSidlScreenWnd__LoadIniInfo_x                              0x930900
#define CSidlScreenWnd__LoadIniListWnd_x                           0x9314C0
#define CSidlScreenWnd__LoadSidlScreen_x                           0x92DF70
#define CSidlScreenWnd__StoreIniInfo_x                             0x931040
#define CSidlScreenWnd__StoreIniVis_x                              0x9313B0
#define CSidlScreenWnd__WndNotification_x                          0x9302A0
#define CSidlScreenWnd__GetChildItem_x                             0x930830
#define CSidlScreenWnd__HandleLButtonUp_x                          0x91ED60
#define CSidlScreenWnd__m_layoutCopy_x                             0xFC2C58

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C0670
#define CSkillMgr__GetSkillCap_x                                   0x6C0840
#define CSkillMgr__GetNameToken_x                                  0x6BFE60
#define CSkillMgr__IsActivatedSkill_x                              0x6BFF50
#define CSkillMgr__IsCombatSkill_x                                 0x6BFEC0

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x942880
#define CSliderWnd__SetValue_x                                     0x9426B0
#define CSliderWnd__SetNumTicks_x                                  0x942710

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x852F50

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x94BD60
#define CStmlWnd__ParseSTML_x                                      0x94CF20
#define CStmlWnd__CalculateHSBRange_x                              0x94CCE0
#define CStmlWnd__CalculateVSBRange_x                              0x94CC50
#define CStmlWnd__CanBreakAtCharacter_x                            0x951B50
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9527F0
#define CStmlWnd__ForceParseNow_x                                  0x94C2D0
#define CStmlWnd__GetNextTagPiece_x                                0x951AB0
#define CStmlWnd__GetVisibleText_x                                 0x94C2F0
#define CStmlWnd__InitializeWindowVariables_x                      0x952640
#define CStmlWnd__MakeStmlColorTag_x                               0x94B400
#define CStmlWnd__MakeWndNotificationTag_x                         0x94B470
#define CStmlWnd__SetSTMLText_x                                    0x94A1E0
#define CStmlWnd__StripFirstSTMLLines_x                            0x953A10
#define CStmlWnd__UpdateHistoryString_x                            0x9529F0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x949080
#define CTabWnd__DrawCurrentPage_x                                 0x949A10
#define CTabWnd__DrawTab_x                                         0x949600
#define CTabWnd__GetCurrentPage_x                                  0x9487E0
#define CTabWnd__GetPageInnerRect_x                                0x948A10
#define CTabWnd__GetTabInnerRect_x                                 0x948950
#define CTabWnd__GetTabRect_x                                      0x948810
#define CTabWnd__InsertPage_x                                      0x948C00
#define CTabWnd__RemovePage_x                                      0x948D50
#define CTabWnd__SetPage_x                                         0x948A90
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x948F80
#define CTabWnd__UpdatePage_x                                      0x9493F0
#define CTabWnd__GetPageFromTabIndex_x                             0x949540
#define CTabWnd__GetCurrentTabIndex_x                              0x9487D0

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x9481A0
#define CPageWnd__FlashTab_x                                       0x948200

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4ACA80

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x91B1E0
#define CTextureFont__GetTextExtent_x                              0x91B4E0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x95A170

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x905F90

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x5419A0
#define CXStr__CXStr1_x                                            0x4827A0
#define CXStr__CXStr3_x                                            0x8EDBE0
#define CXStr__dCXStr_x                                            0x478FA0
#define CXStr__operator_equal_x                                    0x8EDE20
#define CXStr__operator_equal1_x                                   0x8EDE60
#define CXStr__operator_plus_equal1_x                              0x8EE8C0
#define CXStr__SetString_x                                         0x8F0770
#define CXStr__operator_char_p_x                                   0x8EE310
#define CXStr__GetChar_x                                           0x8F00D0
#define CXStr__Delete_x                                            0x8EF990
#define CXStr__GetUnicode_x                                        0x8F0140
#define CXStr__Insert_x                                            0x8F01A0
#define CXStr__FindNext_x                                          0x8EFDE0
#define CXStr__Copy_x                                              0x8EF7A0

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x9407C0
#define CXWnd__BringToTop_x                                        0x922790
#define CXWnd__ClrFocus_x                                          0x922110
#define CXWnd__Destroy_x                                           0x9221C0
#define CXWnd__DoAllDrawing_x                                      0x91E3A0
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x91E370
#define CXWnd__DrawColoredRect_x                                   0x91E940
#define CXWnd__DrawTooltip_x                                       0x91C8D0
#define CXWnd__DrawTooltipAtPoint_x                                0x91C990
#define CXWnd__GetBorderFrame_x                                    0x91E5E0
#define CXWnd__GetChildWndAt_x                                     0x922830
#define CXWnd__GetClientClipRect_x                                 0x9209D0
#define CXWnd__GetScreenClipRect_x                                 0x920AA0
#define CXWnd__GetScreenRect_x                                     0x920C60
#define CXWnd__GetRelativeRect_x                                   0x920D20
#define CXWnd__GetTooltipRect_x                                    0x91E990
#define CXWnd__GetWindowTextA_x                                    0x4EFCC0
#define CXWnd__IsActive_x                                          0x91F0E0
#define CXWnd__IsDescendantOf_x                                    0x9216B0
#define CXWnd__IsReallyVisible_x                                   0x9216E0
#define CXWnd__IsType_x                                            0x922FB0
#define CXWnd__Move_x                                              0x921750
#define CXWnd__Move1_x                                             0x921840
#define CXWnd__ProcessTransition_x                                 0x9222A0
#define CXWnd__Refade_x                                            0x921AF0
#define CXWnd__Resize_x                                            0x921D90
#define CXWnd__Right_x                                             0x922580
#define CXWnd__SetFocus_x                                          0x9220D0
#define CXWnd__SetFont_x                                           0x922140
#define CXWnd__SetKeyTooltip_x                                     0x922D70
#define CXWnd__SetMouseOver_x                                      0x91FA80
#define CXWnd__StartFade_x                                         0x921590
#define CXWnd__GetChildItem_x                                      0x9229B0
#define CXWnd__SetParent_x                                         0x9213C0
#define CXWnd__Minimize_x                                          0x921DF0

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x95E710

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x9257C0
#define CXWndManager__DrawWindows_x                                0x925910
#define CXWndManager__GetKeyboardFlags_x                           0x9282B0
#define CXWndManager__HandleKeyboardMsg_x                          0x927E90
#define CXWndManager__RemoveWnd_x                                  0x928580
#define CXWndManager__RemovePendingDeletionWnd_x                   0x928A40

// CDBStr
#define CDBStr__GetString_x                                        0x558560

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5CB0
#define EQ_Character__Cur_HP_x                                     0x4D9B90
#define EQ_Character__Cur_Mana_x                                   0x4E0DF0
#define EQ_Character__GetCastingTimeModifier_x                     0x4C92E0
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B87E0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8930
#define EQ_Character__GetHPRegen_x                                 0x4E68E0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6EA0
#define EQ_Character__GetManaRegen_x                               0x4E72E0
#define EQ_Character__Max_Endurance_x                              0x680CC0
#define EQ_Character__Max_HP_x                                     0x4D99C0
#define EQ_Character__Max_Mana_x                                   0x680AA0
#define EQ_Character__doCombatAbility_x                            0x683870
#define EQ_Character__UseSkill_x                                   0x4E84B0
#define EQ_Character__GetConLevel_x                                0x678DC0
#define EQ_Character__IsExpansionFlag_x                            0x5D1D20
#define EQ_Character__TotalEffect_x                                0x4CD730
#define EQ_Character__GetPCSpellAffect_x                           0x4CA140
#define EQ_Character__SpellDuration_x                              0x4C9B80
#define EQ_Character__MySpellDuration_x                            0x4B6EB0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCD00
#define EQ_Character__GetBaseSkill_x                               0x4DDCB0
#define EQ_Character__CanUseItem_x                                 0x4E1120
#define EQ_Character__CanMedOnHorse_x                              0x4E7FF0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x9B4FD0

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x699110

//PcClient
#define PcClient__vftable_x                                        0xB50094
#define PcClient__PcClient_x                                       0x675FF0

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0290
#define CCharacterListWnd__EnterWorld_x                            0x4BFC60
#define CCharacterListWnd__Quit_x                                  0x4BF980
#define CCharacterListWnd__UpdateList_x                            0x4BFE50

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658430
#define EQ_Item__CreateItemTagString_x                             0x98D320
#define EQ_Item__IsStackable_x                                     0x9924E0
#define EQ_Item__GetImageNum_x                                     0x98EFD0
#define EQ_Item__CreateItemClient_x                                0x657380
#define EQ_Item__GetItemValue_x                                    0x990240
#define EQ_Item__ValueSellMerchant_x                               0x994210
#define EQ_Item__IsKeyRingItem_x                                   0x991C90
#define EQ_Item__CanGoInBag_x                                      0x658550
#define EQ_Item__IsEmpty_x                                         0x991680
#define EQ_Item__GetMaxItemCount_x                                 0x990640
#define EQ_Item__GetHeldItem_x                                     0x98EE90
#define EQ_Item__CanGemFitInSlot_x                                 0x98CB40

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x5796E0
#define EQ_LoadingS__Array_x                                       0xD9BD50

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x681A10
#define EQ_PC__GetAlternateAbilityId_x                             0x99E400
#define EQ_PC__GetCombatAbility_x                                  0x99E990
#define EQ_PC__GetCombatAbilityTimer_x                             0x99EA00
#define EQ_PC__GetItemRecastTimer_x                                0x683E70
#define EQ_PC__HasLoreItem_x                                       0x679700
#define EQ_PC__AlertInventoryChanged_x                             0x678680
#define EQ_PC__GetPcZoneClient_x                                   0x6A9880
#define EQ_PC__RemoveMyAffect_x                                    0x6876E0
#define EQ_PC__GetKeyRingItems_x                                   0x99F550
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x99F030
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x99F760

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D80F0
#define EQItemList__add_object_x                                   0x608700
#define EQItemList__add_item_x                                     0x5D86D0
#define EQItemList__delete_item_x                                  0x5D8720
#define EQItemList__FreeItemList_x                                 0x5D8630

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554920

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69AB40
#define EQPlayer__dEQPlayer_x                                      0x68D250
#define EQPlayer__DoAttack_x                                       0x6A3540
#define EQPlayer__EQPlayer_x                                       0x68DAA0
#define EQPlayer__SetNameSpriteState_x                             0x692050
#define EQPlayer__SetNameSpriteTint_x                              0x692F20
#define PlayerBase__HasProperty_j_x                                0x9EC6E0
#define EQPlayer__IsTargetable_x                                   0x9ECC40
#define EQPlayer__CanSee_x                                         0x9ECA30
#define EQPlayer__CanSee1_x                                        0x9ECB00
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EC7A0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A7360
#define PlayerZoneClient__GetLevel_x                               0x6A98C0
#define PlayerZoneClient__IsValidTeleport_x                        0x609BB0
#define PlayerZoneClient__LegalPlayerRace_x                        0x571510

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69DCF0
#define EQPlayerManager__GetSpawnByName_x                          0x69DDA0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69DE30

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65BD80
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65BE50
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65BE90
#define KeypressHandler__ClearCommandStateArray_x                  0x65D350
#define KeypressHandler__HandleKeyDown_x                           0x65D370
#define KeypressHandler__HandleKeyUp_x                             0x65D410
#define KeypressHandler__SaveKeymapping_x                          0x65D9C0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BBD70
#define MapViewMap__SaveEx_x                                       0x7BF31F
#define MapViewMap__SetZoom_x                                      0x7C5000

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x9B2E50

// StringTable 
#define StringTable__getString_x                                   0x9ADBA0

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x687320
#define PcZoneClient__RemovePetEffect_x                            0x687990
#define PcZoneClient__HasAlternateAbility_x                        0x6808F0
#define PcZoneClient__GetCurrentMod_x                              0x4EBE80
#define PcZoneClient__GetModCap_x                                  0x4EBD80
#define PcZoneClient__CanEquipItem_x                               0x680FD0
#define PcZoneClient__GetItemByID_x                                0x6843A0
#define PcZoneClient__RemoveBuffEffect_x                           0x687A40
#define PcZoneClient__BandolierSwap_x                              0x681FD0
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x683E10

//Doors
#define EQSwitch__UseSwitch_x                                      0x60E7E0

//IconCache
#define IconCache__GetIcon_x                                       0x74B370

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x741D50
#define CContainerMgr__CloseContainer_x                            0x742070
#define CContainerMgr__OpenExperimentContainer_x                   0x742BD0

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x81B670

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650930

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7B0F70
#define CLootWnd__RequestLootSlot_x                                0x7B0190

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3900
#define EQ_Spell__SpellAffects_x                                   0x5A3E10
#define EQ_Spell__SpellAffectBase_x                                0x5A3B30
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1140
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D10F0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4D90
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4020
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4DC0
#define EQ_Spell__IsLullSpell_x                                    0x5A44F0
#define __IsResEffectSpell_x                                       0x4D08F0

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B17A0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x9BDA60
#define EQ_Affect__SetAffectData_x                                 0x9BE030

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x868290
#define CTargetWnd__WndNotification_x                              0x867A30
#define CTargetWnd__RefreshTargetBuffs_x                           0x867D90
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x866810

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86CCD0
#define CTaskWnd__ConfirmAbandonTask_x                             0x86FD90

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x5524E0
#define CTaskManager__HandleMessage_x                              0x5503C0
#define CTaskManager__GetTaskStatus_x                              0x552590
#define CTaskManager__GetElementDescription_x                      0x552610

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E4F0
#define EqSoundManager__PlayScriptMp3_x                            0x59E6F0
#define EqSoundManager__SoundAssistPlay_x                          0x6C4B40
#define EqSoundManager__WaveInstancePlay_x                         0x6C4030

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541650

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x947640
#define CTextureAnimation__Draw_x                                  0x947880
#define CTextureAnimation__AddBlankFrame_x                         0x947460

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x943380

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581CD0
#define CAltAbilityData__GetMercMaxRank_x                          0x581C60
#define CAltAbilityData__GetMaxRank_x                              0x575EC0

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E140

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x6571D0
#define CharacterBase__CreateItemGlobalIndex_x                     0x5D1420
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x77FE00
#define CharacterBase__GetItemByGlobalIndex_x                      0x9C5700
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9C5750
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x726110
#define CCastSpellWnd__IsBardSongPlaying_x                         0x7269E0
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x726A90

//messages
#define msg_spell_worn_off_x                                       0x5C9460
#define msg_new_text_x                                             0x5BCE40
#define __msgTokenTextParam_x                                      0x5CB8C0
#define msgTokenText_x                                             0x5CBCD0

//SpellManager
#define SpellManager__vftable_x                                    0xB3A540
#define SpellManager__SpellManager_x                               0x6C8760
#define Spellmanager__LoadTextSpells_x                             0x6C9060
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8930

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9F0F30

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x670ED0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0010
#define ItemGlobalIndex__IsEquippedLocation_x                      0x670EA0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D1EE0

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x9BE4F0
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x9BE840

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A9030

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x746B00
#define CCursorAttachment__AttachToCursor1_x                       0x746B40
#define CCursorAttachment__Deactivate_x                            0x748200

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x938EB0
#define CSidlManagerBase__CreatePageWnd_x                          0x938690
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x933B50
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x933AE0

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x958D40
#define CEQSuiteTextureLoader__GetTexture_x                        0x9589C0

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522190
#define CFindItemWnd__WndNotification_x                            0x523060
#define CFindItemWnd__Update_x                                     0x523CB0
#define CFindItemWnd__PickupSelectedItem_x                         0x521870

//IString
#define IString__Append_x                                          0x557FE0

//Camera
#define CDisplay__cameraType_x                                     0xEDFEB8
#define EverQuest__Cameras_x                                       0xDAF09C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52D120
#define LootFiltersManager__GetItemFilterData_x                    0x52CA60
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52CA90
#define LootFiltersManager__SetItemLootFilter_x                    0x52CCA0

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x808030

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F6C00
#define CResolutionHandler__GetWindowedStyle_x                     0x6BEF60

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73E6D0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x9C9420
#define CDistillerInfo__Instance_x                                 0x9C9360

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x7615D0
#define CGroupWnd__UpdateDisplay_x                                 0x760820

//ItemBase
#define ItemBase__IsLore_x                                         0x991D50
#define ItemBase__IsLoreEquipped_x                                 0x991DC0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608660
#define EQPlacedItemManager__GetItemByGuid_x                       0x6087A0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608800

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B36D0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B7F80

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517BD0

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x5027D0
#define FactionManagerClient__HandleFactionMessage_x               0x502FF0
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503810
#define FactionManagerClient__GetMaxFaction_x                      0x50382F
#define FactionManagerClient__GetMinFaction_x                      0x5037E0

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F4A0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x919E50

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E470

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F710

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580E90

//CTargetManager
#define CTargetManager__Get_x                                      0x6CC6E0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B36D0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC840

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D85D0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4C730

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA060
#define CAAWnd__UpdateSelected_x                                   0x6E6600
#define CAAWnd__Update_x                                           0x6E93A0

//CXRect
#define CXRect__operator_and_x                                     0x756A20

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D290

//
#define __eq_delete_x                                              0x9F71F3
#define __eq_new_x                                                 0x9F7764

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
