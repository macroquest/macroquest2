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
#define __ExpectedVersionDate                                     "Sep  7 2021"
#define __ExpectedVersionTime                                     "17:04:48"
#define __ActualVersionDate_x                                      0xB51164
#define __ActualVersionTime_x                                      0xB51158
#define __ActualVersionBuild_x                                     0xB4135C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x662F20
#define __MemChecker1_x                                            0x94E7E0
#define __MemChecker2_x                                            0x6DD8E0
#define __MemChecker3_x                                            0x6DD850
#define __MemChecker4_x                                            0x8A1930
#define __EncryptPad0_x                                            0xE52B68
#define __EncryptPad1_x                                            0xEAD378
#define __EncryptPad2_x                                            0xE61D90
#define __EncryptPad3_x                                            0xE61990
#define __EncryptPad4_x                                            0xE9E190
#define __EP1_Data_x                                               0x37A05C

// Direct Input
#define DI8__Main_x                                                0xFA0CF4
#define DI8__Keyboard_x                                            0xFA0CF8
#define DI8__Mouse_x                                               0xFA0C54
#define DI8__Mouse_Copy_x                                          0xDADDAC
#define DI8__Mouse_Check_x                                         0xF9E7B4
#define __AutoSkillArray_x                                         0xDAE8C8
#define __Attack_x                                                 0xE4C6EB
#define __Autofire_x                                               0xE4C6EC
#define __BindList_x                                               0xDA3478
#define g_eqCommandStates_x                                        0xDA41E0
#define __Clicks_x                                                 0xDADE64
#define __CommandList_x                                            0xDA4D68
#define __CurrentMapLabel_x                                        0xFB16F4
#define __CurrentSocial_x                                          0xC5E46C
#define __DoAbilityList_x                                          0xDE420C
#define __do_loot_x                                                0x5E0600
#define __DrawHandler_x                                            0x1620488
#define __GroupCount_x                                             0xF93DEA
#define __Guilds_x                                                 0xF98250
#define __gWorld_x                                                 0xF93FFC
#define __HWnd_x                                                   0xFA0C58
#define __heqmain_x                                                0xFA0C48
#define __InChatMode_x                                             0xDADD94
#define __LastTell_x                                               0xDAF908
#define __LMouseHeldTime_x                                         0xDADED0
#define __Mouse_x                                                  0xFA0CE0
#define __MouseLook_x                                              0xDADE2A
#define __MouseEventTime_x                                         0xF99C7C
#define __gpbCommandEvent_x                                        0xF93FF4
#define __NetStatusToggle_x                                        0xDADE2D
#define __PCNames_x                                                0xDAEEB8
#define __RangeAttackReady_x                                       0xDAEBAC
#define __RMouseHeldTime_x                                         0xDADECC
#define __RunWalkState_x                                           0xDADD98
#define __ScreenMode_x                                             0xEE00B4
#define __ScreenX_x                                                0xDADD4C
#define __ScreenY_x                                                0xDADD48
#define __ScreenXMax_x                                             0xDADD50
#define __ScreenYMax_x                                             0xDADD54
#define __ServerHost_x                                             0xF942D3
#define __ServerName_x                                             0xDE41CC
#define __ShiftKeyDown_x                                           0xDAE428
#define __ShowNames_x                                              0xDAED68
#define EverQuestInfo__bSocialChanged_x                            0xDE4254
#define __Socials_x                                                0xDE42CC
#define __SubscriptionType_x                                       0xFE57E0
#define __TargetAggroHolder_x                                      0xFB40A8
#define __ZoneType_x                                               0xDAE228
#define __GroupAggro_x                                             0xFB40E8
#define __LoginName_x                                              0xFA13C4
#define __Inviter_x                                                0xE4C668
#define __AttackOnAssist_x                                         0xDAED24
#define __UseTellWindows_x                                         0xDAF050
#define __gfMaxZoomCameraDistance_x                                0xB48FEC
#define __gfMaxCameraDistance_x                                    0xB718FC
#define __pulAutoRun_x                                             0xDADE48
#define __pulForward_x                                             0xDAF088
#define __pulBackward_x                                            0xDAF08C
#define __pulTurnRight_x                                           0xDAF090
#define __pulTurnLeft_x                                            0xDAF094
#define __pulStrafeLeft_x                                          0xDAF098
#define __pulStrafeRight_x                                         0xDAF09C

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF945E8
#define instEQZoneInfo_x                                           0xDAE020
#define pinstActiveBanker_x                                        0xF91CE8
#define pinstActiveCorpse_x                                        0xF91CE0
#define pinstActiveGMaster_x                                       0xF91CE4
#define pinstActiveMerchant_x                                      0xF91CDC
#define pinstAltAdvManager_x                                       0xEE0EF8
#define pinstBandageTarget_x                                       0xF91CF8
#define pinstCamActor_x                                            0xEE00A8
#define pinstCDBStr_x                                              0xEDFC68
#define pinstCDisplay_x                                            0xF91D64
#define pinstCEverQuest_x                                          0xFA0C5C
#define pinstEverQuestInfo_x                                       0xDADD40
#define pinstCharData_x                                            0xF91D54
#define pinstCharSpawn_x                                           0xF91D30
#define pinstControlledMissile_x                                   0xF91D3C
#define pinstControlledPlayer_x                                    0xF91D30
#define pinstCResolutionHandler_x                                  0x16206B0
#define pinstCSidlManager_x                                        0x161F64C
#define pinstCXWndManager_x                                        0x161F644
#define instDynamicZone_x                                          0xF98128
#define pinstDZMember_x                                            0xF98238
#define pinstDZTimerInfo_x                                         0xF9823C
#define pinstEqLogin_x                                             0xFA0D10
#define instEQMisc_x                                               0xD978D8
#define pinstEQSoundManager_x                                      0xEE1808
#define pinstEQSpellStrings_x                                      0xED0908
#define instExpeditionLeader_x                                     0xF98172
#define instExpeditionName_x                                       0xF981B2
#define pinstGroup_x                                               0xF93DE6
#define pinstImeManager_x                                          0x161F648
#define pinstLocalPlayer_x                                         0xF91CD8
#define pinstMercenaryData_x                                       0xF9B774
#define pinstMercenaryStats_x                                      0xFB4174
#define pinstModelPlayer_x                                         0xF91CF0
#define pinstPCData_x                                              0xF91D54
#define pinstSkillMgr_x                                            0xF9D860
#define pinstSpawnManager_x                                        0xF9C338
#define pinstSpellManager_x                                        0xF9DAA0
#define pinstSpellSets_x                                           0xE45314
#define pinstStringTable_x                                         0xF91D60
#define pinstSwitchManager_x                                       0xF91B88
#define pinstTarget_x                                              0xF91D2C
#define pinstTargetObject_x                                        0xF91D4C
#define pinstTargetSwitch_x                                        0xF91D50
#define pinstTaskMember_x                                          0xD97420
#define pinstTrackTarget_x                                         0xF91D34
#define pinstTradeTarget_x                                         0xF91CEC
#define instTributeActive_x                                        0xD978F9
#define pinstViewActor_x                                           0xEE00A4
#define pinstWorldData_x                                           0xF91D5C
#define pinstZoneAddr_x                                            0xDAE2C0
#define pinstPlayerPath_x                                          0xF9C3D0
#define pinstTargetIndicator_x                                     0xF9DD08
#define EQObject_Top_x                                             0xF91D48
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEE0114
#define pinstCAchievementsWnd_x                                    0xEDFD84
#define pinstCActionsWnd_x                                         0xEE009C
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEE00C4
#define pinstCAdvancedLootWnd_x                                    0xEE00A0
#define pinstCAdventureLeaderboardWnd_x                            0xFAAF18
#define pinstCAdventureRequestWnd_x                                0xFAAFC8
#define pinstCAdventureStatsWnd_x                                  0xFAB078
#define pinstCAggroMeterWnd_x                                      0xEDFE14
#define pinstCAlarmWnd_x                                           0xEE010C
#define pinstCAlertHistoryWnd_x                                    0xEE0084
#define pinstCAlertStackWnd_x                                      0xEDFE4C
#define pinstCAlertWnd_x                                           0xEDFE54
#define pinstCAltStorageWnd_x                                      0xFAB3D8
#define pinstCAudioTriggersWindow_x                                0xEC2C38
#define pinstCAuraWnd_x                                            0xEE00E4
#define pinstCAvaZoneWnd_x                                         0xEDFD6C
#define pinstCBandolierWnd_x                                       0xEE00F4
#define pinstCBankWnd_x                                            0xEE0080
#define pinstCBarterMerchantWnd_x                                  0xFAC618
#define pinstCBarterSearchWnd_x                                    0xFAC6C8
#define pinstCBarterWnd_x                                          0xFAC778
#define pinstCBazaarConfirmationWnd_x                              0xEE0120
#define pinstCBazaarSearchWnd_x                                    0xEDFDB0
#define pinstCBazaarWnd_x                                          0xEDFD54
#define pinstCBlockedBuffWnd_x                                     0xEDFDDC
#define pinstCBlockedPetBuffWnd_x                                  0xEDFDE4
#define pinstCBodyTintWnd_x                                        0xEDFD0C
#define pinstCBookWnd_x                                            0xEE008C
#define pinstCBreathWnd_x                                          0xEE0118
#define pinstCBuffWindowNORMAL_x                                   0xEDFDD4
#define pinstCBuffWindowSHORT_x                                    0xEDFDD8
#define pinstCBugReportWnd_x                                       0xEDFD90
#define pinstCButtonWnd_x                                          0x161F8B0
#define pinstCCastingWnd_x                                         0xEDFE10
#define pinstCCastSpellWnd_x                                       0xEDFE20
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEDFDB4
#define pinstCChatWindowManager_x                                  0xFAD220
#define pinstCClaimWnd_x                                           0xFAD378
#define pinstCColorPickerWnd_x                                     0xEDFDC8
#define pinstCCombatAbilityWnd_x                                   0xEE00D0
#define pinstCCombatSkillsSelectWnd_x                              0xEE00D4
#define pinstCCompassWnd_x                                         0xEE00EC
#define pinstCConfirmationDialog_x                                 0xFB2240
#define pinstCContainerMgr_x                                       0xEE0110
#define pinstCContextMenuManager_x                                 0x161F600
#define pinstCCursorAttachment_x                                   0xEDFE08
#define pinstCDynamicZoneWnd_x                                     0xFAD940
#define pinstCEditLabelWnd_x                                       0xEDFD74
#define pinstCEQMainWnd_x                                          0xFADB88
#define pinstCEventCalendarWnd_x                                   0xEE0100
#define pinstCExtendedTargetWnd_x                                  0xEDFE0C
#define pinstCPlayerCustomizationWnd_x                             0xEDFDBC
#define pinstCFactionWnd_x                                         0xEDFE1C
#define pinstCFellowshipWnd_x                                      0xFADD88
#define pinstCFileSelectionWnd_x                                   0xEE00E0
#define pinstCFindItemWnd_x                                        0xEDFD10
#define pinstCFindLocationWnd_x                                    0xFADEE0
#define pinstCFriendsWnd_x                                         0xEE00DC
#define pinstCGemsGameWnd_x                                        0xEE0104
#define pinstCGiveWnd_x                                            0xEDFD5C
#define pinstCGroupSearchFiltersWnd_x                              0xEDFDF4
#define pinstCGroupSearchWnd_x                                     0xFAE2D8
#define pinstCGroupWnd_x                                           0xFAE388
#define pinstCGuildBankWnd_x                                       0xFAE438
#define pinstCGuildCreationWnd_x                                   0xFAE4E8
#define pinstCGuildMgmtWnd_x                                       0xFAE598
#define pinstCharacterCreation_x                                   0xEDFE04
#define pinstCHelpWnd_x                                            0xEE0070
#define pinstCHeritageSelectionWnd_x                               0xEDFDC0
#define pinstCHotButtonWnd_x                                       0xFB06F0
#define pinstCHotButtonWnd1_x                                      0xFB06F0
#define pinstCHotButtonWnd2_x                                      0xFB06F4
#define pinstCHotButtonWnd3_x                                      0xFB06F8
#define pinstCHotButtonWnd4_x                                      0xFB06FC
#define pinstCIconSelectionWnd_x                                   0xEDFD8C
#define pinstCInspectWnd_x                                         0xEDFD80
#define pinstCInventoryWnd_x                                       0xEE006C
#define pinstCInvSlotMgr_x                                         0xEE00F8
#define pinstCItemDisplayManager_x                                 0xFB0C48
#define pinstCItemExpTransferWnd_x                                 0xFB0D7C
#define pinstCItemOverflowWnd_x                                    0xEDFD44
#define pinstCJournalCatWnd_x                                      0xEE0130
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEE0124
#define pinstCJournalTextWnd_x                                     0xEE0124
#define pinstCKeyRingWnd_x                                         0xEE0078
#define pinstCLargeDialogWnd_x                                     0xFB2EC0
#define pinstCLayoutCopyWnd_x                                      0xFB10C8
#define pinstCLFGuildWnd_x                                         0xFB1178
#define pinstCLoadskinWnd_x                                        0xEE0108
#define pinstCLootFiltersCopyWnd_x                                 0xEDF178
#define pinstCLootFiltersWnd_x                                     0xEE0128
#define pinstCLootSettingsWnd_x                                    0xEE012C
#define pinstCLootWnd_x                                            0xEE0090
#define pinstCMailAddressBookWnd_x                                 0xEDFDA4
#define pinstCMailCompositionWnd_x                                 0xEDFD9C
#define pinstCMailIgnoreListWnd_x                                  0xEDFDA8
#define pinstCMailWnd_x                                            0xEDFD98
#define pinstCManageLootWnd_x                                      0xEE1378
#define pinstCMapToolbarWnd_x                                      0xEDFD68
#define pinstCMapViewWnd_x                                         0xEDFD58
#define pinstCMarketplaceWnd_x                                     0xEDFD38
#define pinstCMerchantWnd_x                                        0xEDFD3C
#define pinstCMIZoneSelectWnd_x                                    0xFB19B0
#define pinstCMusicPlayerWnd_x                                     0xEE00FC
#define pinstCNameChangeMercWnd_x                                  0xEDFE34
#define pinstCNameChangePetWnd_x                                   0xEDFE30
#define pinstCNameChangeWnd_x                                      0xEDFD94
#define pinstCNoteWnd_x                                            0xEE0068
#define pinstCObjectPreviewWnd_x                                   0xEDFDAC
#define pinstCOptionsWnd_x                                         0xEDFDCC
#define pinstCOverseerWnd_x                                        0xEDFD34
#define pinstCPetInfoWnd_x                                         0xEE0094
#define pinstCPetitionQWnd_x                                       0xEDFDEC
#define pinstCPlayerNotesWnd_x                                     0xEE00F0
#define pinstCPlayerWnd_x                                          0xEDFD08
#define pinstCPopupWndManager_x                                    0xFB2240
#define pinstCProgressionSelectionWnd_x                            0xFB22F0
#define pinstCPurchaseGroupWnd_x                                   0xEDFD48
#define pinstCPurchaseWnd_x                                        0xEDFD40
#define pinstCPvPLeaderboardWnd_x                                  0xFB23A0
#define pinstCPvPStatsWnd_x                                        0xFB2450
#define pinstCQuantityWnd_x                                        0xEE0088
#define pinstCRaceChangeWnd_x                                      0xEDFDA0
#define pinstCRaidOptionsWnd_x                                     0xEDFE18
#define pinstCRaidWnd_x                                            0xEDFE24
#define pinstCRealEstateItemsWnd_x                                 0xEDFDC4
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDFE00
#define pinstCRealEstateManageWnd_x                                0xEDFDE8
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDFDF0
#define pinstCRealEstatePlotSearchWnd_x                            0xEDFDF8
#define pinstCRealEstatePurchaseWnd_x                              0xEDFDFC
#define pinstCRespawnWnd_x                                         0xEE00E8
#define pinstCRewardSelectionWnd_x                                 0xFB2B98
#define pinstCSelectorWnd_x                                        0xEDFD50
#define pinstCSendMoneyWnd_x                                       0xEDFD70
#define pinstCServerListWnd_x                                      0xEE00D8
#define pinstCSkillsSelectWnd_x                                    0xEE00C8
#define pinstCSkillsWnd_x                                          0xEE00C0
#define pinstCSocialEditWnd_x                                      0xEDFD88
#define pinstCSocialWnd_x                                          0xEE011C
#define pinstCSpellBookWnd_x                                       0xEDFE38
#define pinstCStoryWnd_x                                           0xEE013C
#define pinstCTargetOfTargetWnd_x                                  0xFB41F8
#define pinstCTargetWnd_x                                          0xEDFD7C
#define pinstCTaskOverlayWnd_x                                     0xEE0134
#define pinstCTaskSelectWnd_x                                      0xFB4350
#define pinstCTaskManager_x                                        0xC69268
#define pinstCTaskTemplateSelectWnd_x                              0xFB4400
#define pinstCTaskWnd_x                                            0xFB44B0
#define pinstCTextEntryWnd_x                                       0xEE00CC
#define pinstCTimeLeftWnd_x                                        0xEDFDE0
#define pinstCTipWndCONTEXT_x                                      0xFB46B4
#define pinstCTipWndOFDAY_x                                        0xFB46B0
#define pinstCTitleWnd_x                                           0xFB4760
#define pinstCTrackingWnd_x                                        0xEDFD78
#define pinstCTradeskillWnd_x                                      0xFB48C8
#define pinstCTradeWnd_x                                           0xEDFD4C
#define pinstCTrainWnd_x                                           0xEE0098
#define pinstCTributeBenefitWnd_x                                  0xFB4AC8
#define pinstCTributeMasterWnd_x                                   0xFB4B78
#define pinstCTributeTrophyWnd_x                                   0xFB4C28
#define pinstCVideoModesWnd_x                                      0xEDFD64
#define pinstCVoiceMacroWnd_x                                      0xF9E120
#define pinstCVoteResultsWnd_x                                     0xEDFE2C
#define pinstCVoteWnd_x                                            0xEDFE28
#define pinstCZoneGuideWnd_x                                       0xEE0074
#define pinstCZonePathWnd_x                                        0xEE007C

#define pinstEQSuiteTextureLoader_x                                0xEAD938
#define pinstItemIconCache_x                                       0xFADB40
#define pinstLootFiltersManager_x                                  0xEDF228
#define pinstRewardSelectionWnd_x                                  0xFB2B98

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB8E0
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DBB70
#define __ConvertItemTags_x                                        0x5F8D30
#define __CleanItemTags_x                                          0x47DA40
#define __DoesFileExist_x                                          0x951770
#define __EQGetTime_x                                              0x94E450
#define __ExecuteCmd_x                                             0x5D3D00
#define __FixHeading_x                                             0x9ED0D0
#define __FlushDxKeyboard_x                                        0x6D8BE0
#define __GameLoop_x                                               0x6DC4E0
#define __get_bearing_x                                            0x5DB480
#define __get_melee_range_x                                        0x5DBDB0
#define __GetAnimationCache_x                                      0x74AB80
#define __GetGaugeValueFromEQ_x                                    0x85A8E0
#define __GetLabelFromEQ_x                                         0x85C2F0
#define __GetXTargetType_x                                         0x9EF440
#define __HandleMouseWheel_x                                       0x6DD970
#define __HeadingDiff_x                                            0x9ED130
#define __HelpPath_x                                               0xF9993C
#define __ExecuteFrontEnd_x                                        0x6D93C0
#define __NewUIINI_x                                               0x85A5B0
#define __ProcessGameEvents_x                                      0x642190
#define __ProcessMouseEvent_x                                      0x641890
#define __SaveColors_x                                             0x56F620
#define __STMLToText_x                                             0x98AE10
#define __ToggleKeyRingItem_x                                      0x5287F0
#define CMemoryMappedFile__SetFile_x                               0xADD8C0
#define CrashDetected_x                                            0x6DB0F0
#define DrawNetStatus_x                                            0x6715B0
#define Expansion_HoT_x                                            0xDAED10
#define Teleport_Table_Size_x                                      0xF94190
#define Teleport_Table_x                                           0xF91D68
#define Util__FastTime_x                                           0x94E010
#define __CopyLayout_x                                             0x65E1B0
#define __WndProc_x                                                0x6DB5F0
#define __ProcessKeyboardEvent_x                                   0x6DAB30

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
#define AltAdvManager__GetCalculatedTimer_x                        0x578660
#define AltAdvManager__IsAbilityReady_x                            0x577240
#define AltAdvManager__GetAAById_x                                 0x5775E0
#define AltAdvManager__CanTrainAbility_x                           0x577650
#define AltAdvManager__CanSeeAbility_x                             0x577A00

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1680
#define CharacterZoneClient__HasSkill_x                            0x4DCDD0
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE520
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8AC0
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C1280
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFA10
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFB10
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFC50
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAD00
#define CharacterZoneClient__BardCastBard_x                        0x4CDD10
#define CharacterZoneClient__GetMaxEffects_x                       0x4C51C0
#define CharacterZoneClient__GetEffect_x                           0x4C11C0
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC310
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC3C0
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC460
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC620
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC800
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8A80
#define CharacterZoneClient__FindItemByGuid_x                      0x6847E0
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEB00

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x706830
#define CBankWnd__WndNotification_x                                0x7065D0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x711250

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70BEA0
#define CBarterSearchWnd__UpdateInventoryList_x                    0x709E80

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x715990

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x9883B0
#define CButtonWnd__CButtonWnd_x                                   0x986D40

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x7382A0
#define CChatManager__InitContextMenu_x                            0x7311D0
#define CChatManager__FreeChatWindow_x                             0x736E60
#define CChatManager__SetLockedActiveChatWindow_x                  0x737F80
#define CChatManager__CreateChatWindow_x                           0x737490

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFB90

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99E140
#define CContextMenu__dCContextMenu_x                              0x99E370
#define CContextMenu__AddMenuItem_x                                0x99E380
#define CContextMenu__RemoveMenuItem_x                             0x99E680
#define CContextMenu__RemoveAllMenuItems_x                         0x99E6A0
#define CContextMenu__CheckMenuItem_x                              0x99E700
#define CContextMenu__SetMenuItem_x                                0x99E5B0
#define CContextMenu__AddSeparator_x                               0x99E510

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99EC90
#define CContextMenuManager__RemoveMenu_x                          0x99ED00
#define CContextMenuManager__PopupMenu_x                           0x99EDC0
#define CContextMenuManager__Flush_x                               0x99EC30
#define CContextMenuManager__GetMenu_x                             0x49D9B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x744B70

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x928D50
#define CChatService__GetFriendName_x                              0x928D60

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x738C00
#define CChatWindow__Clear_x                                       0x73A060
#define CChatWindow__WndNotification_x                             0x73A7F0
#define CChatWindow__AddHistory_x                                  0x7398C0

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x99B240
#define CComboWnd__Draw_x                                          0x99A6E0
#define CComboWnd__GetCurChoice_x                                  0x99B010
#define CComboWnd__GetListRect_x                                   0x99AB90
#define CComboWnd__GetTextRect_x                                   0x99B2A0
#define CComboWnd__InsertChoice_x                                  0x99AD20
#define CComboWnd__SetColors_x                                     0x99ACF0
#define CComboWnd__SetChoice_x                                     0x99AFF0
#define CComboWnd__GetItemCount_x                                  0x99B020
#define CComboWnd__GetCurChoiceText_x                              0x99B050
#define CComboWnd__GetChoiceText_x                                 0x99B030
#define CComboWnd__InsertChoiceAtIndex_x                           0x99ADB0

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x7421C0
#define CContainerWnd__vftable_x                                   0xB5A3BC
#define CContainerWnd__SetContainer_x                              0x743A10

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569E60
#define CDisplay__PreZoneMainUI_x                                  0x569E70
#define CDisplay__CleanGameUI_x                                    0x56F400
#define CDisplay__GetClickedActor_x                                0x561C30
#define CDisplay__GetUserDefinedColor_x                            0x559990
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x563740
#define CDisplay__is3dON_x                                         0x55E4C0
#define CDisplay__ReloadUI_x                                       0x569180
#define CDisplay__WriteTextHD2_x                                   0x55E2B0
#define CDisplay__TrueDistance_x                                   0x565720
#define CDisplay__SetViewActor_x                                   0x561550
#define CDisplay__GetFloorHeight_x                                 0x55E580
#define CDisplay__SetRenderWindow_x                                0x55CF00
#define CDisplay__ToggleScreenshotMode_x                           0x561020

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9C0920

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A1C50
#define CEditWnd__EnsureCaretVisible_x                             0x9A3FA0
#define CEditWnd__GetCaretPt_x                                     0x9A2E10
#define CEditWnd__GetCharIndexPt_x                                 0x9A2BD0
#define CEditWnd__GetDisplayString_x                               0x9A2A70
#define CEditWnd__GetHorzOffset_x                                  0x9A11B0
#define CEditWnd__GetLineForPrintableChar_x                        0x9A3EB0
#define CEditWnd__GetSelStartPt_x                                  0x9A2E70
#define CEditWnd__GetSTMLSafeText_x                                0x9A2880
#define CEditWnd__PointFromPrintableChar_x                         0x9A3B00
#define CEditWnd__SelectableCharFromPoint_x                        0x9A3C60
#define CEditWnd__SetEditable_x                                    0x9A2F40
#define CEditWnd__SetWindowTextA_x                                 0x9A25D0
#define CEditWnd__ReplaceSelection_x                               0x9A36C0
#define CEditWnd__ReplaceSelection1_x                              0x9A3640

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D8B0
#define CEverQuest__ClickedPlayer_x                                0x61EE80
#define CEverQuest__CreateTargetIndicator_x                        0x63F110
#define CEverQuest__DeleteTargetIndicator_x                        0x63F1A0
#define CEverQuest__DoTellWindow_x                                 0x4EFC90
#define CEverQuest__OutputTextToLog_x                              0x4EFF60
#define CEverQuest__DropHeldItemOnGround_x                         0x613F50
#define CEverQuest__dsp_chat_x                                     0x4F0330
#define CEverQuest__trimName_x                                     0x63A700
#define CEverQuest__Emote_x                                        0x62DF70
#define CEverQuest__EnterZone_x                                    0x627C30
#define CEverQuest__GetBodyTypeDesc_x                              0x6334D0
#define CEverQuest__GetClassDesc_x                                 0x633B10
#define CEverQuest__GetClassThreeLetterCode_x                      0x634110
#define CEverQuest__GetDeityDesc_x                                 0x63D8C0
#define CEverQuest__GetLangDesc_x                                  0x6342D0
#define CEverQuest__GetRaceDesc_x                                  0x633AF0
#define CEverQuest__InterpretCmd_x                                 0x63DF30
#define CEverQuest__LeftClickedOnPlayer_x                          0x618440
#define CEverQuest__LMouseUp_x                                     0x616500
#define CEverQuest__RightClickedOnPlayer_x                         0x619030
#define CEverQuest__RMouseUp_x                                     0x6177C0
#define CEverQuest__SetGameState_x                                 0x613CD0
#define CEverQuest__UPCNotificationFlush_x                         0x63A620
#define CEverQuest__IssuePetCommand_x                              0x6358D0
#define CEverQuest__ReportSuccessfulHit_x                          0x62F850

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x755B20
#define CGaugeWnd__CalcLinesFillRect_x                             0x755B80
#define CGaugeWnd__Draw_x                                          0x755130

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B48D0
#define CGuild__GetGuildName_x                                     0x4B30F0
#define CGuild__GetGuildIndex_x                                    0x4B3810

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x772FD0

//CHotButton
#define CHotButton__SetCheck_x                                     0x6526F0
#define CHotButton__SetButtonSize_x                                0x652AB0

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x7800F0
#define CInvSlotMgr__MoveItem_x                                    0x77ED40
#define CInvSlotMgr__SelectSlot_x                                  0x7801B0

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77D580
#define CInvSlot__SliderComplete_x                                 0x77A8E0
#define CInvSlot__GetItemBase_x                                    0x77A180
#define CInvSlot__UpdateItem_x                                     0x77A370

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x780FB0
#define CInvSlotWnd__HandleLButtonUp_x                             0x7819C0

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x854D10
#define CItemDisplayWnd__UpdateStrings_x                           0x799800
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78E7D0
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78ED20
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x799F10
#define CItemDisplayWnd__AboutToShow_x                             0x799400
#define CItemDisplayWnd__WndNotification_x                         0x79B660
#define CItemDisplayWnd__RequestConvertItem_x                      0x79AD30
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x7982D0
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x7991F0

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x889EC0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A0DA0
#define CItemDisplayManager__ShowItem_x                            0x7A0200

// CLabel 
#define CLabel__UpdateText_x                                       0x7A78E0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96D790
#define CListWnd__dCListWnd_x                                      0x96DA90
#define CListWnd__AddColumn_x                                      0x972650
#define CListWnd__AddColumn1_x                                     0x972770
#define CListWnd__AddLine_x                                        0x972AE0
#define CListWnd__AddString_x                                      0x9728E0
#define CListWnd__CalculateFirstVisibleLine_x                      0x972400
#define CListWnd__CalculateVSBRange_x                              0x9721F0
#define CListWnd__ClearSel_x                                       0x9733D0
#define CListWnd__ClearAllSel_x                                    0x973420
#define CListWnd__CloseAndUpdateEditWindow_x                       0x973EB0
#define CListWnd__Compare_x                                        0x971970
#define CListWnd__Draw_x                                           0x96DC50
#define CListWnd__DrawColumnSeparators_x                           0x970760
#define CListWnd__DrawHeader_x                                     0x970BC0
#define CListWnd__DrawItem_x                                       0x971210
#define CListWnd__DrawLine_x                                       0x9708D0
#define CListWnd__DrawSeparator_x                                  0x970800
#define CListWnd__EnableLine_x                                     0x970030
#define CListWnd__EnsureVisible_x                                  0x973DE0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x973310
#define CListWnd__GetColumnTooltip_x                               0x96FBB0
#define CListWnd__GetColumnMinWidth_x                              0x96FC20
#define CListWnd__GetColumnWidth_x                                 0x96FB30
#define CListWnd__GetCurSel_x                                      0x96F4D0
#define CListWnd__GetItemAtPoint_x                                 0x9702A0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x970310
#define CListWnd__GetItemColor_x                                   0x96F850
#define CListWnd__GetItemData_x                                    0x96F550
#define CListWnd__GetItemHeight_x                                  0x96F900
#define CListWnd__GetItemIcon_x                                    0x96F6D0
#define CListWnd__GetItemRect_x                                    0x970120
#define CListWnd__GetItemText_x                                    0x96F590
#define CListWnd__GetSelList_x                                     0x973470
#define CListWnd__GetSeparatorRect_x                               0x970580
#define CListWnd__InsertLine_x                                     0x972F40
#define CListWnd__RemoveLine_x                                     0x973160
#define CListWnd__SetColors_x                                      0x9721C0
#define CListWnd__SetColumnJustification_x                         0x971EF0
#define CListWnd__SetColumnLabel_x                                 0x972880
#define CListWnd__SetItemOnlyDrawTexture_x                         0x973B20
#define CListWnd__SetColumnWidth_x                                 0x971E00
#define CListWnd__SetCurSel_x                                      0x973260
#define CListWnd__SetItemColor_x                                   0x973AB0
#define CListWnd__SetItemData_x                                    0x973A70
#define CListWnd__SetItemText_x                                    0x973690
#define CListWnd__ShiftColumnSeparator_x                           0x971FB0
#define CListWnd__Sort_x                                           0x971C60
#define CListWnd__ToggleSel_x                                      0x973290
#define CListWnd__SetColumnsSizable_x                              0x972050
#define CListWnd__SetItemWnd_x                                     0x973930
#define CListWnd__GetItemWnd_x                                     0x96F720
#define CListWnd__SetItemIcon_x                                    0x973710
#define CListWnd__CalculateCustomWindowPositions_x                 0x972500
#define CListWnd__SetVScrollPos_x                                  0x971DE0

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7BECA0
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BD2C0
#define CMapViewWnd__HandleLButtonDown_x                           0x7BA150
#define CMapViewWnd__WndNotification_x                             0x7C1570

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E1F30
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E2890
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E2F20
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E61F0
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7E09B0
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EC3F0
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E1B80

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F5B40
#define CPacketScrambler__hton_x                                   0x8F5B30

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x991410
#define CSidlManager__FindScreenPieceTemplate_x                    0x9917E0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x991610
#define CSidlManager__CreateXWndFromTemplate_x                     0x994C90
#define CSidlManager__CreateXWndFromTemplate1_x                    0x994F20
#define CSidlManagerbase__CreateXWnd_x                             0x994F60

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84AE80
#define CSidlManager__CreateLabel_x                                0x84AA50

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x84A4D0

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98D1A0
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98D0A0
#define CSidlScreenWnd__ConvertToRes_x                             0x9BAB70
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98CA20
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98C710
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98C7E0
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98C8B0
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98DA20
#define CSidlScreenWnd__EnableIniStorage_x                         0x98DF00
#define CSidlScreenWnd__GetSidlPiece_x                             0x98DC10
#define CSidlScreenWnd__Init1_x                                    0x98C1C0
#define CSidlScreenWnd__LoadIniInfo_x                              0x98DF50
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98EB00
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98B5E0
#define CSidlScreenWnd__StoreIniInfo_x                             0x98E680
#define CSidlScreenWnd__StoreIniVis_x                              0x98E9F0
#define CSidlScreenWnd__WndNotification_x                          0x98D8F0
#define CSidlScreenWnd__GetChildItem_x                             0x98DE80
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97C3C0
#define CSidlScreenWnd__m_layoutCopy_x                             0x161F4D0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6C06D0
#define CSkillMgr__GetSkillCap_x                                   0x6C08A0
#define CSkillMgr__GetNameToken_x                                  0x6BFF10
#define CSkillMgr__IsActivatedSkill_x                              0x6C0000
#define CSkillMgr__IsCombatSkill_x                                 0x6BFF70

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x99FD90
#define CSliderWnd__SetValue_x                                     0x99FBC0
#define CSliderWnd__SetNumTicks_x                                  0x99FC20

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x8516F0

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A9290
#define CStmlWnd__ParseSTML_x                                      0x9AA440
#define CStmlWnd__CalculateHSBRange_x                              0x9AA210
#define CStmlWnd__CalculateVSBRange_x                              0x9AA180
#define CStmlWnd__CanBreakAtCharacter_x                            0x9AF040
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9AFCE0
#define CStmlWnd__ForceParseNow_x                                  0x9A9800
#define CStmlWnd__GetNextTagPiece_x                                0x9AEFA0
#define CStmlWnd__GetVisibleText_x                                 0x9A9820
#define CStmlWnd__InitializeWindowVariables_x                      0x9AFB30
#define CStmlWnd__MakeStmlColorTag_x                               0x9A8930
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A89A0
#define CStmlWnd__SetSTMLText_x                                    0x9A7710
#define CStmlWnd__StripFirstSTMLLines_x                            0x9B0F00
#define CStmlWnd__UpdateHistoryString_x                            0x9AFEE0

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A65C0
#define CTabWnd__DrawCurrentPage_x                                 0x9A6F50
#define CTabWnd__DrawTab_x                                         0x9A6B40
#define CTabWnd__GetCurrentPage_x                                  0x9A5D20
#define CTabWnd__GetPageInnerRect_x                                0x9A5F50
#define CTabWnd__GetTabInnerRect_x                                 0x9A5E90
#define CTabWnd__GetTabRect_x                                      0x9A5D50
#define CTabWnd__InsertPage_x                                      0x9A6140
#define CTabWnd__RemovePage_x                                      0x9A6290
#define CTabWnd__SetPage_x                                         0x9A5FD0
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A64C0
#define CTabWnd__UpdatePage_x                                      0x9A6930
#define CTabWnd__GetPageFromTabIndex_x                             0x9A6A80
#define CTabWnd__GetCurrentTabIndex_x                              0x9A5D10

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x                                     0x479340
#define CPageWnd__SetTabText_x                                     0x9A56B0
#define CPageWnd__FlashTab_x                                       0x9A5710

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC980

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x978850
#define CTextureFont__GetTextExtent_x                              0x978B50

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B7620

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x963240

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x542280
#define CXStr__CXStr1_x                                            0x482710
#define CXStr__CXStr3_x                                            0x94A3A0
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x94A5E0
#define CXStr__operator_equal1_x                                   0x94A620
#define CXStr__operator_plus_equal1_x                              0x94B080
#define CXStr__SetString_x                                         0x94CF20
#define CXStr__operator_char_p_x                                   0x94AAD0
#define CXStr__GetChar_x                                           0x94C880
#define CXStr__Delete_x                                            0x94C150
#define CXStr__GetUnicode_x                                        0x94C8F0
#define CXStr__Insert_x                                            0x94C950
#define CXStr__FindNext_x                                          0x94C5A0
#define CXStr__Copy_x                                              0x94BF60

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99DDA0
#define CXWnd__BringToTop_x                                        0x97FE30
#define CXWnd__ClrFocus_x                                          0x97F7C0
#define CXWnd__Destroy_x                                           0x97F860
#define CXWnd__DoAllDrawing_x                                      0x97BA20
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97B9F0
#define CXWnd__DrawColoredRect_x                                   0x97BFA0
#define CXWnd__DrawTooltip_x                                       0x979F70
#define CXWnd__DrawTooltipAtPoint_x                                0x97A030
#define CXWnd__GetBorderFrame_x                                    0x97BC40
#define CXWnd__GetChildWndAt_x                                     0x97FED0
#define CXWnd__GetClientClipRect_x                                 0x97DFC0
#define CXWnd__GetScreenClipRect_x                                 0x97E090
#define CXWnd__GetScreenRect_x                                     0x97E260
#define CXWnd__GetRelativeRect_x                                   0x97E330
#define CXWnd__GetTooltipRect_x                                    0x97BFF0
#define CXWnd__GetWindowTextA_x                                    0x4EFB30
#define CXWnd__IsActive_x                                          0x97C740
#define CXWnd__IsDescendantOf_x                                    0x97ECF0
#define CXWnd__IsReallyVisible_x                                   0x97ED20
#define CXWnd__IsType_x                                            0x980650
#define CXWnd__Move_x                                              0x97ED90
#define CXWnd__Move1_x                                             0x97EE90
#define CXWnd__ProcessTransition_x                                 0x97F940
#define CXWnd__Refade_x                                            0x97F160
#define CXWnd__Resize_x                                            0x97F3F0
#define CXWnd__Right_x                                             0x97FC20
#define CXWnd__SetFocus_x                                          0x97F780
#define CXWnd__SetFont_x                                           0x97F7F0
#define CXWnd__SetKeyTooltip_x                                     0x980420
#define CXWnd__SetMouseOver_x                                      0x97D0D0
#define CXWnd__StartFade_x                                         0x97EBE0
#define CXWnd__GetChildItem_x                                      0x980050
#define CXWnd__SetParent_x                                         0x97EA10
#define CXWnd__Minimize_x                                          0x97F460

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BBBC0

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x982EB0
#define CXWndManager__DrawWindows_x                                0x983000
#define CXWndManager__GetKeyboardFlags_x                           0x985970
#define CXWndManager__HandleKeyboardMsg_x                          0x985550
#define CXWndManager__RemoveWnd_x                                  0x985C30
#define CXWndManager__RemovePendingDeletionWnd_x                   0x9860D0

// CDBStr
#define CDBStr__GetString_x                                        0x5584A0

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5B40
#define EQ_Character__Cur_HP_x                                     0x4D9A40
#define EQ_Character__Cur_Mana_x                                   0x4E0C30
#define EQ_Character__GetCastingTimeModifier_x                     0x4C91B0
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B8690
#define EQ_Character__GetFocusRangeModifier_x                      0x4B87E0
#define EQ_Character__GetHPRegen_x                                 0x4E6700
#define EQ_Character__GetEnduranceRegen_x                          0x4E6CC0
#define EQ_Character__GetManaRegen_x                               0x4E7100
#define EQ_Character__Max_Endurance_x                              0x6810A0
#define EQ_Character__Max_HP_x                                     0x4D9870
#define EQ_Character__Max_Mana_x                                   0x680E80
#define EQ_Character__doCombatAbility_x                            0x683C10
#define EQ_Character__UseSkill_x                                   0x4E82D0
#define EQ_Character__GetConLevel_x                                0x6791F0
#define EQ_Character__IsExpansionFlag_x                            0x5D2590
#define EQ_Character__TotalEffect_x                                0x4CD620
#define EQ_Character__GetPCSpellAffect_x                           0x4C9FE0
#define EQ_Character__SpellDuration_x                              0x4C9A20
#define EQ_Character__MySpellDuration_x                            0x4B6D60
#define EQ_Character__GetAdjustedSkill_x                           0x4DCB90
#define EQ_Character__GetBaseSkill_x                               0x4DDB30
#define EQ_Character__CanUseItem_x                                 0x4E0F60
#define EQ_Character__CanMedOnHorse_x                              0x4E7E10

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x916580

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x6992A0

//PcClient
#define PcClient__vftable_x                                        0xB4DEE0
#define PcClient__PcClient_x                                       0x676470

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0140
#define CCharacterListWnd__EnterWorld_x                            0x4BFB10
#define CCharacterListWnd__Quit_x                                  0x4BF830
#define CCharacterListWnd__UpdateList_x                            0x4BFD00

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658820
#define EQ_Item__CreateItemTagString_x                             0x8EE920
#define EQ_Item__IsStackable_x                                     0x8F3AA0
#define EQ_Item__GetImageNum_x                                     0x8F05D0
#define EQ_Item__CreateItemClient_x                                0x657790
#define EQ_Item__GetItemValue_x                                    0x8F1830
#define EQ_Item__ValueSellMerchant_x                               0x8F5800
#define EQ_Item__IsKeyRingItem_x                                   0x8F3270
#define EQ_Item__CanGoInBag_x                                      0x658940
#define EQ_Item__IsEmpty_x                                         0x8F2C50
#define EQ_Item__GetMaxItemCount_x                                 0x8F1C30
#define EQ_Item__GetHeldItem_x                                     0x8F0480
#define EQ_Item__CanGemFitInSlot_x                                 0x8EE140

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x579470
#define EQ_LoadingS__Array_x                                       0xD9BD30

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x681DD0
#define EQ_PC__GetAlternateAbilityId_x                             0x8FF8A0
#define EQ_PC__GetCombatAbility_x                                  0x8FFE20
#define EQ_PC__GetCombatAbilityTimer_x                             0x8FFE90
#define EQ_PC__GetItemRecastTimer_x                                0x684210
#define EQ_PC__HasLoreItem_x                                       0x679B40
#define EQ_PC__AlertInventoryChanged_x                             0x678AB0
#define EQ_PC__GetPcZoneClient_x                                   0x6A99B0
#define EQ_PC__RemoveMyAffect_x                                    0x687A80
#define EQ_PC__GetKeyRingItems_x                                   0x900980
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x9004E0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x900B60

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D88D0
#define EQItemList__add_object_x                                   0x608E30
#define EQItemList__add_item_x                                     0x5D8EB0
#define EQItemList__delete_item_x                                  0x5D8F00
#define EQItemList__FreeItemList_x                                 0x5D8E10

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x554540

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69ACD0
#define EQPlayer__dEQPlayer_x                                      0x68D590
#define EQPlayer__DoAttack_x                                       0x6A36E0
#define EQPlayer__EQPlayer_x                                       0x68DDE0
#define EQPlayer__SetNameSpriteState_x                             0x692390
#define EQPlayer__SetNameSpriteTint_x                              0x693250
#define PlayerBase__HasProperty_j_x                                0x9EB4A0
#define EQPlayer__IsTargetable_x                                   0x9EBA00
#define EQPlayer__CanSee_x                                         0x9EB7F0
#define EQPlayer__CanSee1_x                                        0x9EB8C0
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EB560

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A74A0
#define PlayerZoneClient__GetLevel_x                               0x6A99F0
#define PlayerZoneClient__IsValidTeleport_x                        0x60A2E0
#define PlayerZoneClient__LegalPlayerRace_x                        0x571420

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69DE80
#define EQPlayerManager__GetSpawnByName_x                          0x69DF30
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69DFC0

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65C170
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65C240
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65C280
#define KeypressHandler__ClearCommandStateArray_x                  0x65D740
#define KeypressHandler__HandleKeyDown_x                           0x65D760
#define KeypressHandler__HandleKeyUp_x                             0x65D800
#define KeypressHandler__SaveKeymapping_x                          0x65DDB0

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7BA950
#define MapViewMap__SaveEx_x                                       0x7BDE8F
#define MapViewMap__SetZoom_x                                      0x7C3AC0

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x914410

// StringTable 
#define StringTable__getString_x                                   0x90F150

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x6876D0
#define PcZoneClient__RemovePetEffect_x                            0x687D30
#define PcZoneClient__HasAlternateAbility_x                        0x680CE0
#define PcZoneClient__GetCurrentMod_x                              0x4EBC60
#define PcZoneClient__GetModCap_x                                  0x4EBB60
#define PcZoneClient__CanEquipItem_x                               0x6813A0
#define PcZoneClient__GetItemByID_x                                0x684740
#define PcZoneClient__RemoveBuffEffect_x                           0x687DE0
#define PcZoneClient__BandolierSwap_x                              0x682380
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x6841B0

//Doors
#define EQSwitch__UseSwitch_x                                      0x60EEF0

//IconCache
#define IconCache__GetIcon_x                                       0x74A520

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x741080
#define CContainerMgr__CloseContainer_x                            0x7413A0
#define CContainerMgr__OpenExperimentContainer_x                   0x741F00

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x819D90

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650EB0

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7AFC00
#define CLootWnd__RequestLootSlot_x                                0x7AEE30

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3A20
#define EQ_Spell__SpellAffects_x                                   0x5A3F20
#define EQ_Spell__SpellAffectBase_x                                0x5A3C40
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D1010
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D0FC0
#define EQ_Spell__IsSPAStacking_x                                  0x5A4CD0
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4120
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4CE0
#define EQ_Spell__IsLullSpell_x                                    0x5A4510
#define __IsResEffectSpell_x                                       0x4D07C0

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B16C0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x91EEF0
#define EQ_Affect__SetAffectData_x                                 0x91F4C0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x8668E0
#define CTargetWnd__WndNotification_x                              0x866080
#define CTargetWnd__RefreshTargetBuffs_x                           0x8663E0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x864E60

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86B460
#define CTaskWnd__ConfirmAbandonTask_x                             0x86E510

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552100
#define CTaskManager__HandleMessage_x                              0x54FFE0
#define CTaskManager__GetTaskStatus_x                              0x5521B0
#define CTaskManager__GetElementDescription_x                      0x552230

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E650
#define EqSoundManager__PlayScriptMp3_x                            0x59E850
#define EqSoundManager__SoundAssistPlay_x                          0x6C4B90
#define EqSoundManager__WaveInstancePlay_x                         0x6C4080

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541F30

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A4B30
#define CTextureAnimation__Draw_x                                  0x9A4D70
#define CTextureAnimation__AddBlankFrame_x                         0x9A4950

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x9A0890

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581A70
#define CAltAbilityData__GetMercMaxRank_x                          0x581A00
#define CAltAbilityData__GetMaxRank_x                              0x575DC0

//CTargetRing
#define CTargetRing__Cast_x                                        0x64E6C0

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x6575E0
#define CharacterBase__CreateItemGlobalIndex_x                     0x644E50
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x77EBC0
#define CharacterBase__GetItemByGlobalIndex_x                      0x926A60
#define CharacterBase__GetItemByGlobalIndex1_x                     0x926AB0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x725F50
#define CCastSpellWnd__IsBardSongPlaying_x                         0x726810
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x7268C0

//messages
#define msg_spell_worn_off_x                                       0x5C9E00
#define msg_new_text_x                                             0x5BD950
#define __msgTokenTextParam_x                                      0x5CC260
#define msgTokenText_x                                             0x5CC670

//SpellManager
#define SpellManager__vftable_x                                    0xB38538
#define SpellManager__SpellManager_x                               0x6C87C0
#define Spellmanager__LoadTextSpells_x                             0x6C90C0
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8990

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9EFCF0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x780DB0
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D09A0
#define ItemGlobalIndex__IsEquippedLocation_x                      0x671350
#define ItemGlobalIndex__IsValidIndex_x                            0x5D2750

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x91F970
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x91FCC0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A7D60

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x745DE0
#define CCursorAttachment__AttachToCursor1_x                       0x745E20
#define CCursorAttachment__Deactivate_x                            0x7473B0

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x9964D0
#define CSidlManagerBase__CreatePageWnd_x                          0x995CC0
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x991190
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x991120

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B61F0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B5E70

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x521FE0
#define CFindItemWnd__WndNotification_x                            0x522EA0
#define CFindItemWnd__Update_x                                     0x523AF0
#define CFindItemWnd__PickupSelectedItem_x                         0x5216B0

//IString
#define IString__Append_x                                          0x557F20

//Camera
#define CDisplay__cameraType_x                                     0xEDFE50
#define EverQuest__Cameras_x                                       0xDAF05C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CC90
#define LootFiltersManager__GetItemFilterData_x                    0x52C5D0
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C600
#define LootFiltersManager__SetItemLootFilter_x                    0x52C810

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x806840

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F59B0
#define CResolutionHandler__GetWindowedStyle_x                     0x6BF020

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73DA20

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x92A720
#define CDistillerInfo__Instance_x                                 0x92A660

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x760730
#define CGroupWnd__UpdateDisplay_x                                 0x75F980

//ItemBase
#define ItemBase__IsLore_x                                         0x8F3310
#define ItemBase__IsLoreEquipped_x                                 0x8F3380

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608D90
#define EQPlacedItemManager__GetItemByGuid_x                       0x608ED0
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x608F30

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B37B0
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B8070

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
#define ArrayClass__DeleteElement_x                                0x9774C0

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E3D0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F5A0

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580C40

//CTargetManager
#define CTargetManager__Get_x                                      0x6CC740

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B37B0

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC740

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D8DB0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4C6F0

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6EA080
#define CAAWnd__UpdateSelected_x                                   0x6E6720
#define CAAWnd__Update_x                                           0x6E93B0

//CXRect
#define CXRect__operator_and_x                                     0x755BE0

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D200

//
#define __eq_delete_x                                              0x9F5F95
#define __eq_new_x                                                 0x9F6504

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

