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
#define __ExpectedVersionDate                                     "Sep 21 2021"
#define __ExpectedVersionTime                                     "09:33:01"
#define __ActualVersionDate_x                                      0xB50164
#define __ActualVersionTime_x                                      0xB50158
#define __ActualVersionBuild_x                                     0xB4035C

#define __ClientOverride                                           0
#define __MacroQuestWinClassName                                  "__MacroQuest2Tray(Test)"
#define __MacroQuestWinName                                       "MacroQuest2(Test)"

// Memory Protection
#define __MemChecker0_x                                            0x6626A0
#define __MemChecker1_x                                            0x94DDD0
#define __MemChecker2_x                                            0x6DCD40
#define __MemChecker3_x                                            0x6DCCB0
#define __MemChecker4_x                                            0x8A0D40
#define __EncryptPad0_x                                            0xE51B68
#define __EncryptPad1_x                                            0xEAC378
#define __EncryptPad2_x                                            0xE60D90
#define __EncryptPad3_x                                            0xE60990
#define __EncryptPad4_x                                            0xE9D190
#define __EP1_Data_x                                               0x37E05C

// Direct Input
#define DI8__Main_x                                                0xF9FCF4
#define DI8__Keyboard_x                                            0xF9FCF8
#define DI8__Mouse_x                                               0xF9FC54
#define DI8__Mouse_Copy_x                                          0xDACDAC
#define DI8__Mouse_Check_x                                         0xF9D7B4
#define __AutoSkillArray_x                                         0xDAD8C8
#define __Attack_x                                                 0xE4B6EB
#define __Autofire_x                                               0xE4B6EC
#define __BindList_x                                               0xDA2478
#define g_eqCommandStates_x                                        0xDA31E0
#define __Clicks_x                                                 0xDACE64
#define __CommandList_x                                            0xDA3D68
#define __CurrentMapLabel_x                                        0xFB06F4
#define __CurrentSocial_x                                          0xC5D46C
#define __DoAbilityList_x                                          0xDE320C
#define __do_loot_x                                                0x5DFDC0
#define __DrawHandler_x                                            0x161F488
#define __GroupCount_x                                             0xF92DEA
#define __Guilds_x                                                 0xF97250
#define __gWorld_x                                                 0xF92FFC
#define __HWnd_x                                                   0xF9FC58
#define __heqmain_x                                                0xF9FC48
#define __InChatMode_x                                             0xDACD94
#define __LastTell_x                                               0xDAE908
#define __LMouseHeldTime_x                                         0xDACED0
#define __Mouse_x                                                  0xF9FCE0
#define __MouseLook_x                                              0xDACE2A
#define __MouseEventTime_x                                         0xF98C7C
#define __gpbCommandEvent_x                                        0xF93108
#define __NetStatusToggle_x                                        0xDACE2D
#define __PCNames_x                                                0xDADEB8
#define __RangeAttackReady_x                                       0xDADBAC
#define __RMouseHeldTime_x                                         0xDACECC
#define __RunWalkState_x                                           0xDACD98
#define __ScreenMode_x                                             0xEDF0B4
#define __ScreenX_x                                                0xDACD4C
#define __ScreenY_x                                                0xDACD48
#define __ScreenXMax_x                                             0xDACD50
#define __ScreenYMax_x                                             0xDACD54
#define __ServerHost_x                                             0xF932D3
#define __ServerName_x                                             0xDE31CC
#define __ShiftKeyDown_x                                           0xDAD428
#define __ShowNames_x                                              0xDADD68
#define EverQuestInfo__bSocialChanged_x                            0xDE3254
#define __Socials_x                                                0xDE32CC
#define __SubscriptionType_x                                       0xFE47E0
#define __TargetAggroHolder_x                                      0xFB30A8
#define __ZoneType_x                                               0xDAD228
#define __GroupAggro_x                                             0xFB30E8
#define __LoginName_x                                              0xFA03C4
#define __Inviter_x                                                0xE4B668
#define __AttackOnAssist_x                                         0xDADD24
#define __UseTellWindows_x                                         0xDAE050
#define __gfMaxZoomCameraDistance_x                                0xB47FEC
#define __gfMaxCameraDistance_x                                    0xB708FC
#define __pulAutoRun_x                                             0xDACE48
#define __pulForward_x                                             0xDAE088
#define __pulBackward_x                                            0xDAE08C
#define __pulTurnRight_x                                           0xDAE090
#define __pulTurnLeft_x                                            0xDAE094
#define __pulStrafeLeft_x                                          0xDAE098
#define __pulStrafeRight_x                                         0xDAE09C

//// 
//Section 1: Vital Offsets 
//// 
#define instCRaid_x                                                0xF935E8
#define instEQZoneInfo_x                                           0xDAD020
#define pinstActiveBanker_x                                        0xF90CE8
#define pinstActiveCorpse_x                                        0xF90CE0
#define pinstActiveGMaster_x                                       0xF90CE4
#define pinstActiveMerchant_x                                      0xF90CDC
#define pinstAltAdvManager_x                                       0xEDFEF8
#define pinstBandageTarget_x                                       0xF90CF8
#define pinstCamActor_x                                            0xEDF0A8
#define pinstCDBStr_x                                              0xEDEC68
#define pinstCDisplay_x                                            0xF90D64
#define pinstCEverQuest_x                                          0xF9FC5C
#define pinstEverQuestInfo_x                                       0xDACD40
#define pinstCharData_x                                            0xF90D54
#define pinstCharSpawn_x                                           0xF90D30
#define pinstControlledMissile_x                                   0xF90D3C
#define pinstControlledPlayer_x                                    0xF90D30
#define pinstCResolutionHandler_x                                  0x161F6B0
#define pinstCSidlManager_x                                        0x161E64C
#define pinstCXWndManager_x                                        0x161E644
#define instDynamicZone_x                                          0xF97128
#define pinstDZMember_x                                            0xF97238
#define pinstDZTimerInfo_x                                         0xF9723C
#define pinstEqLogin_x                                             0xF9FD10
#define instEQMisc_x                                               0xD968D8
#define pinstEQSoundManager_x                                      0xEE0808
#define pinstEQSpellStrings_x                                      0xECF908
#define instExpeditionLeader_x                                     0xF97172
#define instExpeditionName_x                                       0xF971B2
#define pinstGroup_x                                               0xF92DE6
#define pinstImeManager_x                                          0x161E648
#define pinstLocalPlayer_x                                         0xF90CD8
#define pinstMercenaryData_x                                       0xF9A774
#define pinstMercenaryStats_x                                      0xFB3174
#define pinstModelPlayer_x                                         0xF90CF0
#define pinstPCData_x                                              0xF90D54
#define pinstSkillMgr_x                                            0xF9C860
#define pinstSpawnManager_x                                        0xF9B338
#define pinstSpellManager_x                                        0xF9CAA0
#define pinstSpellSets_x                                           0xE44314
#define pinstStringTable_x                                         0xF90D60
#define pinstSwitchManager_x                                       0xF90B88
#define pinstTarget_x                                              0xF90D2C
#define pinstTargetObject_x                                        0xF90D4C
#define pinstTargetSwitch_x                                        0xF90D50
#define pinstTaskMember_x                                          0xD96420
#define pinstTrackTarget_x                                         0xF90D34
#define pinstTradeTarget_x                                         0xF90CEC
#define instTributeActive_x                                        0xD968F9
#define pinstViewActor_x                                           0xEDF0A4
#define pinstWorldData_x                                           0xF90D5C
#define pinstZoneAddr_x                                            0xDAD2C0
#define pinstPlayerPath_x                                          0xF9B3D0
#define pinstTargetIndicator_x                                     0xF9CD08
#define EQObject_Top_x                                             0xF90D48
 
//// 
//Section 2:  UI Related Offsets 
//// 
#define pinstCAAWnd_x                                              0xEDF114
#define pinstCAchievementsWnd_x                                    0xEDED84
#define pinstCActionsWnd_x                                         0xEDF09C
#define pinstCAdvancedDisplayOptionsWindow_x                       0xEDF0C4
#define pinstCAdvancedLootWnd_x                                    0xEDF0A0
#define pinstCAdventureLeaderboardWnd_x                            0xFA9F18
#define pinstCAdventureRequestWnd_x                                0xFA9FC8
#define pinstCAdventureStatsWnd_x                                  0xFAA078
#define pinstCAggroMeterWnd_x                                      0xEDEE14
#define pinstCAlarmWnd_x                                           0xEDF10C
#define pinstCAlertHistoryWnd_x                                    0xEDF084
#define pinstCAlertStackWnd_x                                      0xEDEE4C
#define pinstCAlertWnd_x                                           0xEDEE54
#define pinstCAltStorageWnd_x                                      0xFAA3D8
#define pinstCAudioTriggersWindow_x                                0xEC1C38
#define pinstCAuraWnd_x                                            0xEDF0E4
#define pinstCAvaZoneWnd_x                                         0xEDED6C
#define pinstCBandolierWnd_x                                       0xEDF0F4
#define pinstCBankWnd_x                                            0xEDF080
#define pinstCBarterMerchantWnd_x                                  0xFAB618
#define pinstCBarterSearchWnd_x                                    0xFAB6C8
#define pinstCBarterWnd_x                                          0xFAB778
#define pinstCBazaarConfirmationWnd_x                              0xEDF120
#define pinstCBazaarSearchWnd_x                                    0xEDEDB0
#define pinstCBazaarWnd_x                                          0xEDED54
#define pinstCBlockedBuffWnd_x                                     0xEDEDDC
#define pinstCBlockedPetBuffWnd_x                                  0xEDEDE4
#define pinstCBodyTintWnd_x                                        0xEDED0C
#define pinstCBookWnd_x                                            0xEDF08C
#define pinstCBreathWnd_x                                          0xEDF118
#define pinstCBuffWindowNORMAL_x                                   0xEDEDD4
#define pinstCBuffWindowSHORT_x                                    0xEDEDD8
#define pinstCBugReportWnd_x                                       0xEDED90
#define pinstCButtonWnd_x                                          0x161E8B0
#define pinstCCastingWnd_x                                         0xEDEE10
#define pinstCCastSpellWnd_x                                       0xEDEE20
//#define pinstCCharacterCreationWnd_x                             0xDA8EBC
#define pinstCCharacterListWnd_x                                   0xEDEDB4
#define pinstCChatWindowManager_x                                  0xFAC220
#define pinstCClaimWnd_x                                           0xFAC378
#define pinstCColorPickerWnd_x                                     0xEDEDC8
#define pinstCCombatAbilityWnd_x                                   0xEDF0D0
#define pinstCCombatSkillsSelectWnd_x                              0xEDF0D4
#define pinstCCompassWnd_x                                         0xEDF0EC
#define pinstCConfirmationDialog_x                                 0xFB1240
#define pinstCContainerMgr_x                                       0xEDF110
#define pinstCContextMenuManager_x                                 0x161E600
#define pinstCCursorAttachment_x                                   0xEDEE08
#define pinstCDynamicZoneWnd_x                                     0xFAC940
#define pinstCEditLabelWnd_x                                       0xEDED74
#define pinstCEQMainWnd_x                                          0xFACB88
#define pinstCEventCalendarWnd_x                                   0xEDF100
#define pinstCExtendedTargetWnd_x                                  0xEDEE0C
#define pinstCPlayerCustomizationWnd_x                             0xEDEDBC
#define pinstCFactionWnd_x                                         0xEDEE1C
#define pinstCFellowshipWnd_x                                      0xFACD88
#define pinstCFileSelectionWnd_x                                   0xEDF0E0
#define pinstCFindItemWnd_x                                        0xEDED10
#define pinstCFindLocationWnd_x                                    0xFACEE0
#define pinstCFriendsWnd_x                                         0xEDF0DC
#define pinstCGemsGameWnd_x                                        0xEDF104
#define pinstCGiveWnd_x                                            0xEDED5C
#define pinstCGroupSearchFiltersWnd_x                              0xEDEDF4
#define pinstCGroupSearchWnd_x                                     0xFAD2D8
#define pinstCGroupWnd_x                                           0xFAD388
#define pinstCGuildBankWnd_x                                       0xFAD438
#define pinstCGuildCreationWnd_x                                   0xFAD4E8
#define pinstCGuildMgmtWnd_x                                       0xFAD598
#define pinstCharacterCreation_x                                   0xEDEE04
#define pinstCHelpWnd_x                                            0xEDF070
#define pinstCHeritageSelectionWnd_x                               0xEDEDC0
#define pinstCHotButtonWnd_x                                       0xFAF6F0
#define pinstCHotButtonWnd1_x                                      0xFAF6F0
#define pinstCHotButtonWnd2_x                                      0xFAF6F4
#define pinstCHotButtonWnd3_x                                      0xFAF6F8
#define pinstCHotButtonWnd4_x                                      0xFAF6FC
#define pinstCIconSelectionWnd_x                                   0xEDED8C
#define pinstCInspectWnd_x                                         0xEDED80
#define pinstCInventoryWnd_x                                       0xEDF06C
#define pinstCInvSlotMgr_x                                         0xEDF0F8
#define pinstCItemDisplayManager_x                                 0xFAFC48
#define pinstCItemExpTransferWnd_x                                 0xFAFD7C
#define pinstCItemOverflowWnd_x                                    0xEDED44
#define pinstCJournalCatWnd_x                                      0xEDF130
//these are the same should probably rename to pinstCJournalNPCWnd at some point
#define pinstCJournalNPCWnd_x                                      0xEDF124
#define pinstCJournalTextWnd_x                                     0xEDF124
#define pinstCKeyRingWnd_x                                         0xEDF078
#define pinstCLargeDialogWnd_x                                     0xFB1EC0
#define pinstCLayoutCopyWnd_x                                      0xFB00C8
#define pinstCLFGuildWnd_x                                         0xFB0178
#define pinstCLoadskinWnd_x                                        0xEDF108
#define pinstCLootFiltersCopyWnd_x                                 0xEDE178
#define pinstCLootFiltersWnd_x                                     0xEDF128
#define pinstCLootSettingsWnd_x                                    0xEDF12C
#define pinstCLootWnd_x                                            0xEDF090
#define pinstCMailAddressBookWnd_x                                 0xEDEDA4
#define pinstCMailCompositionWnd_x                                 0xEDED9C
#define pinstCMailIgnoreListWnd_x                                  0xEDEDA8
#define pinstCMailWnd_x                                            0xEDED98
#define pinstCManageLootWnd_x                                      0xEE0378
#define pinstCMapToolbarWnd_x                                      0xEDED68
#define pinstCMapViewWnd_x                                         0xEDED58
#define pinstCMarketplaceWnd_x                                     0xEDED38
#define pinstCMerchantWnd_x                                        0xEDED3C
#define pinstCMIZoneSelectWnd_x                                    0xFB09B0
#define pinstCMusicPlayerWnd_x                                     0xEDF0FC
#define pinstCNameChangeMercWnd_x                                  0xEDEE34
#define pinstCNameChangePetWnd_x                                   0xEDEE30
#define pinstCNameChangeWnd_x                                      0xEDED94
#define pinstCNoteWnd_x                                            0xEDF068
#define pinstCObjectPreviewWnd_x                                   0xEDEDAC
#define pinstCOptionsWnd_x                                         0xEDEDCC
#define pinstCOverseerWnd_x                                        0xEDED34
#define pinstCPetInfoWnd_x                                         0xEDF094
#define pinstCPetitionQWnd_x                                       0xEDEDEC
#define pinstCPlayerNotesWnd_x                                     0xEDF0F0
#define pinstCPlayerWnd_x                                          0xEDED08
#define pinstCPopupWndManager_x                                    0xFB1240
#define pinstCProgressionSelectionWnd_x                            0xFB12F0
#define pinstCPurchaseGroupWnd_x                                   0xEDED48
#define pinstCPurchaseWnd_x                                        0xEDED40
#define pinstCPvPLeaderboardWnd_x                                  0xFB13A0
#define pinstCPvPStatsWnd_x                                        0xFB1450
#define pinstCQuantityWnd_x                                        0xEDF088
#define pinstCRaceChangeWnd_x                                      0xEDEDA0
#define pinstCRaidOptionsWnd_x                                     0xEDEE18
#define pinstCRaidWnd_x                                            0xEDEE24
#define pinstCRealEstateItemsWnd_x                                 0xEDEDC4
#define pinstCRealEstateLayoutDetailsWnd_x                         0xEDEE00
#define pinstCRealEstateManageWnd_x                                0xEDEDE8
#define pinstCRealEstateNeighborhoodWnd_x                          0xEDEDF0
#define pinstCRealEstatePlotSearchWnd_x                            0xEDEDF8
#define pinstCRealEstatePurchaseWnd_x                              0xEDEDFC
#define pinstCRespawnWnd_x                                         0xEDF0E8
#define pinstCRewardSelectionWnd_x                                 0xFB1B98
#define pinstCSelectorWnd_x                                        0xEDED50
#define pinstCSendMoneyWnd_x                                       0xEDED70
#define pinstCServerListWnd_x                                      0xEDF0D8
#define pinstCSkillsSelectWnd_x                                    0xEDF0C8
#define pinstCSkillsWnd_x                                          0xEDF0C0
#define pinstCSocialEditWnd_x                                      0xEDED88
#define pinstCSocialWnd_x                                          0xEDF11C
#define pinstCSpellBookWnd_x                                       0xEDEE38
#define pinstCStoryWnd_x                                           0xEDF13C
#define pinstCTargetOfTargetWnd_x                                  0xFB31F8
#define pinstCTargetWnd_x                                          0xEDED7C
#define pinstCTaskOverlayWnd_x                                     0xEDF134
#define pinstCTaskSelectWnd_x                                      0xFB3350
#define pinstCTaskManager_x                                        0xC68268
#define pinstCTaskTemplateSelectWnd_x                              0xFB3400
#define pinstCTaskWnd_x                                            0xFB34B0
#define pinstCTextEntryWnd_x                                       0xEDF0CC
#define pinstCTimeLeftWnd_x                                        0xEDEDE0
#define pinstCTipWndCONTEXT_x                                      0xFB36B4
#define pinstCTipWndOFDAY_x                                        0xFB36B0
#define pinstCTitleWnd_x                                           0xFB3760
#define pinstCTrackingWnd_x                                        0xEDED78
#define pinstCTradeskillWnd_x                                      0xFB38C8
#define pinstCTradeWnd_x                                           0xEDED4C
#define pinstCTrainWnd_x                                           0xEDF098
#define pinstCTributeBenefitWnd_x                                  0xFB3AC8
#define pinstCTributeMasterWnd_x                                   0xFB3B78
#define pinstCTributeTrophyWnd_x                                   0xFB3C28
#define pinstCVideoModesWnd_x                                      0xEDED64
#define pinstCVoiceMacroWnd_x                                      0xF9D120
#define pinstCVoteResultsWnd_x                                     0xEDEE2C
#define pinstCVoteWnd_x                                            0xEDEE28
#define pinstCZoneGuideWnd_x                                       0xEDF074
#define pinstCZonePathWnd_x                                        0xEDF07C

#define pinstEQSuiteTextureLoader_x                                0xEAC938
#define pinstItemIconCache_x                                       0xFACB40
#define pinstLootFiltersManager_x                                  0xEDE228
#define pinstRewardSelectionWnd_x                                  0xFB1B98

//// 
// Section 3: Miscellaneous Offsets 
////
#define __CastRay_x                                                0x5DB0A0
//it has no refs but we can possibly call it still 
#define __CastRay2_x                                               0x5DB330
#define __ConvertItemTags_x                                        0x5F84E0
#define __CleanItemTags_x                                          0x47DA40
#define __DoesFileExist_x                                          0x950D60
#define __EQGetTime_x                                              0x94DA40
#define __ExecuteCmd_x                                             0x5D34F0
#define __FixHeading_x                                             0x9EBE80
#define __FlushDxKeyboard_x                                        0x6D8040
#define __GameLoop_x                                               0x6DB940
#define __get_bearing_x                                            0x5DAC40
#define __get_melee_range_x                                        0x5DB570
#define __GetAnimationCache_x                                      0x749F00
#define __GetGaugeValueFromEQ_x                                    0x859D10
#define __GetLabelFromEQ_x                                         0x85B720
#define __GetXTargetType_x                                         0x9EE1F0
#define __HandleMouseWheel_x                                       0x6DCDD0
#define __HeadingDiff_x                                            0x9EBEE0
#define __HelpPath_x                                               0xF9893C
#define __ExecuteFrontEnd_x                                        0x6D8820
#define __NewUIINI_x                                               0x8599E0
#define __ProcessGameEvents_x                                      0x641930
#define __ProcessMouseEvent_x                                      0x641030
#define __SaveColors_x                                             0x56F6B0
#define __STMLToText_x                                             0x989AA0
#define __ToggleKeyRingItem_x                                      0x528830
#define CMemoryMappedFile__SetFile_x                               0xADC600
#define CrashDetected_x                                            0x6DA550
#define DrawNetStatus_x                                            0x670C40
#define Expansion_HoT_x                                            0xDADD10
#define Teleport_Table_Size_x                                      0xF93190
#define Teleport_Table_x                                           0xF90D68
#define Util__FastTime_x                                           0x94D600
#define __CopyLayout_x                                             0x65D970
#define __WndProc_x                                                0x6DAA50
#define __ProcessKeyboardEvent_x                                   0x6D9F90

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
#define AltAdvManager__GetCalculatedTimer_x                        0x5786E0
#define AltAdvManager__IsAbilityReady_x                            0x5772C0
#define AltAdvManager__GetAAById_x                                 0x577660
#define AltAdvManager__CanTrainAbility_x                           0x5776D0
#define AltAdvManager__CanSeeAbility_x                             0x577A80

// CharacterZoneClient
#define CharacterZoneClient__CharacterZoneClient_x                 0x4D1740
#define CharacterZoneClient__HasSkill_x                            0x4DCE90
#define CharacterZoneClient__MakeMeVisible_x                       0x4DE5E0
#define CharacterZoneClient__IsStackBlocked_x                      0x4C8B30
#define CharacterZoneClient__CanUseMemorizedSpellSlot_x            0x4C12E0
#define CharacterZoneClient__GetItemCountWorn_x                    0x4DFAE0
#define CharacterZoneClient__GetItemCountInInventory_x             0x4DFBE0
#define CharacterZoneClient__GetCursorItemCount_x                  0x4DFD20
#define CharacterZoneClient__FindAffectSlot_x                      0x4CAD70
#define CharacterZoneClient__BardCastBard_x                        0x4CDD90
#define CharacterZoneClient__GetMaxEffects_x                       0x4C5220
#define CharacterZoneClient__GetEffect_x                           0x4C1220
#define CharacterZoneClient__GetOpenEffectSlot_x                   0x4CC380
#define CharacterZoneClient__GetFirstEffectSlot_x                  0x4CC430
#define CharacterZoneClient__GetLastEffectSlot_x                   0x4CC4D0
#define CharacterZoneClient__CalcAffectChange_x                    0x4CC690
#define CharacterZoneClient__CalcAffectChangeGeneric_x             0x4CC870
#define CharacterZoneClient__GetFocusReuseMod_x                    0x4B8AE0
#define CharacterZoneClient__FindItemByGuid_x                      0x683E80
#define CharacterZoneClient__FindItemByRecord_x                    0x4DEBC0

// CBankWnd 
#define CBankWnd__GetNumBankSlots_x                                0x705C30
#define CBankWnd__WndNotification_x                                0x7059D0

//CBarterWnd
#define CBarterWnd__WndNotification_x                              0x710650

//CBarterSearchWnd
#define CBarterSearchWnd__WndNotification_x                        0x70B290
#define CBarterSearchWnd__UpdateInventoryList_x                    0x709270

// CBazaarSearchWnd 
#define CBazaarSearchWnd__HandleSearchResults_x                    0x714D90

// CButtonWnd 
#define CButtonWnd__SetCheck_x                                     0x987040
#define CButtonWnd__CButtonWnd_x                                   0x9859A0

// CChatManager 
#define CChatManager__GetRGBAFromIndex_x                           0x737660
#define CChatManager__InitContextMenu_x                            0x7305A0
#define CChatManager__FreeChatWindow_x                             0x736230
#define CChatManager__SetLockedActiveChatWindow_x                  0x737340
#define CChatManager__CreateChatWindow_x                           0x736850

//ChatManagerClient
#define ChatManagerClient__Instance_x                              0x4EFC70

// CContextMenu 
#define CContextMenu__CContextMenu_x                               0x99CED0
#define CContextMenu__dCContextMenu_x                              0x99D100
#define CContextMenu__AddMenuItem_x                                0x99D110
#define CContextMenu__RemoveMenuItem_x                             0x99D420
#define CContextMenu__RemoveAllMenuItems_x                         0x99D440
#define CContextMenu__CheckMenuItem_x                              0x99D4A0
#define CContextMenu__SetMenuItem_x                                0x99D340
#define CContextMenu__AddSeparator_x                               0x99D2A0

//CContextMenuManager
#define CContextMenuManager__AddMenu_x                             0x99DA20
#define CContextMenuManager__RemoveMenu_x                          0x99DA90
#define CContextMenuManager__PopupMenu_x                           0x99DB50
#define CContextMenuManager__Flush_x                               0x99D9C0
#define CContextMenuManager__GetMenu_x                             0x49D9B0
#define CContextMenuManager__CreateDefaultMenu_x                   0x743EF0

// CChatService
#define CChatService__GetNumberOfFriends_x                         0x928360
#define CChatService__GetFriendName_x                              0x928370

// CChatWindow 
#define CChatWindow__CChatWindow_x                                 0x737FC0
#define CChatWindow__Clear_x                                       0x739410
#define CChatWindow__WndNotification_x                             0x739B90
#define CChatWindow__AddHistory_x                                  0x738C70

// CComboWnd 
#define CComboWnd__DeleteAll_x                                     0x999F00
#define CComboWnd__Draw_x                                          0x9993B0
#define CComboWnd__GetCurChoice_x                                  0x999CD0
#define CComboWnd__GetListRect_x                                   0x999850
#define CComboWnd__GetTextRect_x                                   0x999F70
#define CComboWnd__InsertChoice_x                                  0x9999E0
#define CComboWnd__SetColors_x                                     0x9999B0
#define CComboWnd__SetChoice_x                                     0x999CB0
#define CComboWnd__GetItemCount_x                                  0x999CE0
#define CComboWnd__GetCurChoiceText_x                              0x999D10
#define CComboWnd__GetChoiceText_x                                 0x999CF0
#define CComboWnd__InsertChoiceAtIndex_x                           0x999A70

// CContainerWnd 
#define CContainerWnd__HandleCombine_x                             0x741540
#define CContainerWnd__vftable_x                                   0xB593BC
#define CContainerWnd__SetContainer_x                              0x742DA0

// CDisplay
#define CDisplay__ZoneMainUI_x                                     0x569EF0
#define CDisplay__PreZoneMainUI_x                                  0x569F00
#define CDisplay__CleanGameUI_x                                    0x56F490
#define CDisplay__GetClickedActor_x                                0x561CC0
#define CDisplay__GetUserDefinedColor_x                            0x559A20
//well they inlined it in jan 25 2021 test but the function is still left in exe so for now we can probably just call it...
#define CDisplay__GetWorldFilePath_x                               0x5637D0
#define CDisplay__is3dON_x                                         0x55E550
#define CDisplay__ReloadUI_x                                       0x569210
#define CDisplay__WriteTextHD2_x                                   0x55E340
#define CDisplay__TrueDistance_x                                   0x5657B0
#define CDisplay__SetViewActor_x                                   0x5615E0
#define CDisplay__GetFloorHeight_x                                 0x55E610
#define CDisplay__SetRenderWindow_x                                0x55CF90
#define CDisplay__ToggleScreenshotMode_x                           0x5610B0

// CEditBaseWnd 
#define CEditBaseWnd__SetSel_x                                     0x9BF6E0

// CEditWnd 
#define CEditWnd__DrawCaret_x                                      0x9A09B0
#define CEditWnd__EnsureCaretVisible_x                             0x9A2D30
#define CEditWnd__GetCaretPt_x                                     0x9A1B90
#define CEditWnd__GetCharIndexPt_x                                 0x9A1940
#define CEditWnd__GetDisplayString_x                               0x9A17E0
#define CEditWnd__GetHorzOffset_x                                  0x99FF10
#define CEditWnd__GetLineForPrintableChar_x                        0x9A2C40
#define CEditWnd__GetSelStartPt_x                                  0x9A1BF0
#define CEditWnd__GetSTMLSafeText_x                                0x9A15F0
#define CEditWnd__PointFromPrintableChar_x                         0x9A2880
#define CEditWnd__SelectableCharFromPoint_x                        0x9A29E0
#define CEditWnd__SetEditable_x                                    0x9A1CC0
#define CEditWnd__SetWindowTextA_x                                 0x9A1340
#define CEditWnd__ReplaceSelection_x                               0x9A2440
#define CEditWnd__ReplaceSelection1_x                              0x9A23C0

// CEverQuest 
#define CEverQuest__DoPercentConvert_x                             0x62D040
#define CEverQuest__ClickedPlayer_x                                0x61E610
#define CEverQuest__CreateTargetIndicator_x                        0x63E8A0
#define CEverQuest__DeleteTargetIndicator_x                        0x63E930
#define CEverQuest__DoTellWindow_x                                 0x4EFD70
#define CEverQuest__OutputTextToLog_x                              0x4F0040
#define CEverQuest__DropHeldItemOnGround_x                         0x6136E0
#define CEverQuest__dsp_chat_x                                     0x4F0410
#define CEverQuest__trimName_x                                     0x639E90
#define CEverQuest__Emote_x                                        0x62D700
#define CEverQuest__EnterZone_x                                    0x6273C0
#define CEverQuest__GetBodyTypeDesc_x                              0x632C60
#define CEverQuest__GetClassDesc_x                                 0x6332A0
#define CEverQuest__GetClassThreeLetterCode_x                      0x6338A0
#define CEverQuest__GetDeityDesc_x                                 0x63D050
#define CEverQuest__GetLangDesc_x                                  0x633A60
#define CEverQuest__GetRaceDesc_x                                  0x633280
#define CEverQuest__InterpretCmd_x                                 0x63D6C0
#define CEverQuest__LeftClickedOnPlayer_x                          0x617BD0
#define CEverQuest__LMouseUp_x                                     0x615C90
#define CEverQuest__RightClickedOnPlayer_x                         0x6187C0
#define CEverQuest__RMouseUp_x                                     0x616F50
#define CEverQuest__SetGameState_x                                 0x613460
#define CEverQuest__UPCNotificationFlush_x                         0x639DB0
#define CEverQuest__IssuePetCommand_x                              0x635060
#define CEverQuest__ReportSuccessfulHit_x                          0x62EFE0

// CGaugeWnd 
//not sure, need to call it to see if its correct CGaugeWnd__CalcFillRect_x
#define CGaugeWnd__CalcFillRect_x                                  0x754E90
#define CGaugeWnd__CalcLinesFillRect_x                             0x754EF0
#define CGaugeWnd__Draw_x                                          0x7544A0

// CGuild
#define CGuild__FindMemberByName_x                                 0x4B4910
#define CGuild__GetGuildName_x                                     0x4B3130
#define CGuild__GetGuildIndex_x                                    0x4B3850

// CHotButtonWnd 
#define CHotButtonWnd__DoHotButton_x                               0x772310

//CHotButton
#define CHotButton__SetCheck_x                                     0x651ED0
#define CHotButton__SetButtonSize_x                                0x652290

// CInvSlotMgr 
#define CInvSlotMgr__FindInvSlot_x                                 0x77F4C0
#define CInvSlotMgr__MoveItem_x                                    0x77E0D0
#define CInvSlotMgr__SelectSlot_x                                  0x77F580

// CInvSLot
#define CInvSlot__HandleRButtonUp_x                                0x77C910
#define CInvSlot__SliderComplete_x                                 0x779C50
#define CInvSlot__GetItemBase_x                                    0x7794D0
#define CInvSlot__UpdateItem_x                                     0x7796C0

// CInvSlotWnd
//just calls CXWnd::DrawTooltip now... - eqmule Sep 7 2-21 test
//#define CInvSlotWnd__DrawTooltip_x                               
#define CInvSlotWnd__CInvSlotWnd_x                                 0x780380
#define CInvSlotWnd__HandleLButtonUp_x                             0x780D90

// CItemDisplayWnd 
#define CItemDisplayWnd__SetSpell_x                                0x854140
#define CItemDisplayWnd__UpdateStrings_x                           0x798B70
#define CItemDisplayWnd__InsertAugmentRequest_x                    0x78DB70
#define CItemDisplayWnd__RemoveAugmentRequest_x                    0x78E0C0
//only 1 arg now? need to check
#define CItemDisplayWnd__SetItem_x                                 0x799280
#define CItemDisplayWnd__AboutToShow_x                             0x798770
#define CItemDisplayWnd__WndNotification_x                         0x79AA10
#define CItemDisplayWnd__RequestConvertItem_x                      0x79A0B0
#define CItemDisplayWnd__CItemDisplayWnd_x                         0x797650
#define CItemDisplayWnd__dCItemDisplayWnd_x                        0x798560

//CWndDisplayManager
#define CWndDisplayManager__FindWindowA_x                          0x8892E0

//CItemDisplayManager
#define CItemDisplayManager__CreateWindowInstance_x                0x7A0190
#define CItemDisplayManager__ShowItem_x                            0x79F5C0

// CLabel 
#define CLabel__UpdateText_x                                       0x7A6CC0

// CListWnd
#define CListWnd__CListWnd_x                                       0x96C5A0
#define CListWnd__dCListWnd_x                                      0x96C8A0
#define CListWnd__AddColumn_x                                      0x971490
#define CListWnd__AddColumn1_x                                     0x9715B0
#define CListWnd__AddLine_x                                        0x971920
#define CListWnd__AddString_x                                      0x971720
#define CListWnd__CalculateFirstVisibleLine_x                      0x971240
#define CListWnd__CalculateVSBRange_x                              0x971030
#define CListWnd__ClearSel_x                                       0x972210
#define CListWnd__ClearAllSel_x                                    0x972260
#define CListWnd__CloseAndUpdateEditWindow_x                       0x972D10
#define CListWnd__Compare_x                                        0x9707C0
#define CListWnd__Draw_x                                           0x96CA60
#define CListWnd__DrawColumnSeparators_x                           0x96F5B0
#define CListWnd__DrawHeader_x                                     0x96FA10
#define CListWnd__DrawItem_x                                       0x970060
#define CListWnd__DrawLine_x                                       0x96F720
#define CListWnd__DrawSeparator_x                                  0x96F650
#define CListWnd__EnableLine_x                                     0x96EE60
#define CListWnd__EnsureVisible_x                                  0x972C30
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__ExtendSel_x                                      0x972150
#define CListWnd__GetColumnTooltip_x                               0x96E9E0
#define CListWnd__GetColumnMinWidth_x                              0x96EA50
#define CListWnd__GetColumnWidth_x                                 0x96E960
#define CListWnd__GetCurSel_x                                      0x96E300
#define CListWnd__GetItemAtPoint_x                                 0x96F0E0
//no references in jan 25 2021 test exe we can probably still call it
#define CListWnd__GetItemAtPoint1_x                                0x96F150
#define CListWnd__GetItemColor_x                                   0x96E680
#define CListWnd__GetItemData_x                                    0x96E380
#define CListWnd__GetItemHeight_x                                  0x96E730
#define CListWnd__GetItemIcon_x                                    0x96E500
#define CListWnd__GetItemRect_x                                    0x96EF50
#define CListWnd__GetItemText_x                                    0x96E3C0
#define CListWnd__GetSelList_x                                     0x9722B0
#define CListWnd__GetSeparatorRect_x                               0x96F3C0
#define CListWnd__InsertLine_x                                     0x971D80
#define CListWnd__RemoveLine_x                                     0x971FA0
#define CListWnd__SetColors_x                                      0x971010
#define CListWnd__SetColumnJustification_x                         0x970D40
#define CListWnd__SetColumnLabel_x                                 0x9716C0
#define CListWnd__SetItemOnlyDrawTexture_x                         0x972960
#define CListWnd__SetColumnWidth_x                                 0x970C50
#define CListWnd__SetCurSel_x                                      0x9720A0
#define CListWnd__SetItemColor_x                                   0x9728F0
#define CListWnd__SetItemData_x                                    0x9728B0
#define CListWnd__SetItemText_x                                    0x9724D0
#define CListWnd__ShiftColumnSeparator_x                           0x970E00
#define CListWnd__Sort_x                                           0x970AB0
#define CListWnd__ToggleSel_x                                      0x9720D0
#define CListWnd__SetColumnsSizable_x                              0x970EA0
#define CListWnd__SetItemWnd_x                                     0x972770
#define CListWnd__GetItemWnd_x                                     0x96E550
#define CListWnd__SetItemIcon_x                                    0x972550
#define CListWnd__CalculateCustomWindowPositions_x                 0x971340
#define CListWnd__SetVScrollPos_x                                  0x970C30

// CMapViewWnd 
#define CMapViewWnd__CMapViewWnd_x                                 0x7BE050
#define CMapViewWnd__GetWorldCoordinates_x                         0x7BC670
#define CMapViewWnd__HandleLButtonDown_x                           0x7B9500
#define CMapViewWnd__WndNotification_x                             0x7C0920

// CMerchantWnd 
#define CMerchantWnd__DisplayBuyOrSellPrice_x                      0x7E12D0
#define CMerchantWnd__PurchasePageHandler__RequestGetItem_x        0x7E1C30
#define CMerchantWnd__PurchasePageHandler__RequestPutItem_x        0x7E22C0
#define CMerchantWnd__SelectRecoverySlot_x                         0x7E5580
#define CMerchantWnd__MerchantPageHandler__SelectBuySellSlot_x     0x7DFD50
#define CMerchantWnd__SelectBuySellSlot_x                          0x7EB770
#define CMerchantWnd__PurchasePageHandler__UpdateList_x            0x7E0F20

// CPacketScrambler
#define CPacketScrambler__ntoh_x                                   0x8F4FC0
#define CPacketScrambler__hton_x                                   0x8F4FB0

// CSidlManagerbase we should rename at some point
#define CSidlManager__FindAnimation1_x                             0x990110
#define CSidlManager__FindScreenPieceTemplate_x                    0x9904E0
#define CSidlManager__FindScreenPieceTemplate1_x                   0x990310
#define CSidlManager__CreateXWndFromTemplate_x                     0x993990
#define CSidlManager__CreateXWndFromTemplate1_x                    0x993C20
#define CSidlManagerbase__CreateXWnd_x                             0x993C60

//inlined since jan 25 2021 test but they left the function intact
#define CSidlManager__CreateHotButtonWnd_x                         0x84A2B0
#define CSidlManager__CreateLabel_x                                0x849E80

//CSidlManager
#define CSidlManager__CreateXWnd_x                                 0x849900

// CSidlScreenWnd 
#define CSidlScreenWnd__CalculateHSBRange_x                        0x98BE50
#define CSidlScreenWnd__CalculateVSBRange_x                        0x98BD50
#define CSidlScreenWnd__ConvertToRes_x                             0x9B9930
#define CSidlScreenWnd__CreateChildrenFromSidl_x                   0x98B6D0
#define CSidlScreenWnd__CSidlScreenWnd1_x                          0x98B3C0
#define CSidlScreenWnd__CSidlScreenWnd2_x                          0x98B490
#define CSidlScreenWnd__dCSidlScreenWnd_x                          0x98B560
#define CSidlScreenWnd__DrawSidlPiece_x                            0x98C6F0
#define CSidlScreenWnd__EnableIniStorage_x                         0x98CBD0
#define CSidlScreenWnd__GetSidlPiece_x                             0x98C8E0
#define CSidlScreenWnd__Init1_x                                    0x98AE70
#define CSidlScreenWnd__LoadIniInfo_x                              0x98CC20
#define CSidlScreenWnd__LoadIniListWnd_x                           0x98D800
#define CSidlScreenWnd__LoadSidlScreen_x                           0x98A270
#define CSidlScreenWnd__StoreIniInfo_x                             0x98D370
#define CSidlScreenWnd__StoreIniVis_x                              0x98D6F0
#define CSidlScreenWnd__WndNotification_x                          0x98C5C0
#define CSidlScreenWnd__GetChildItem_x                             0x98CB50
#define CSidlScreenWnd__HandleLButtonUp_x                          0x97B190
#define CSidlScreenWnd__m_layoutCopy_x                             0x161E4D0

// CSkillMgr
#define CSkillMgr__IsAvailable_x                                   0x6BFDB0
#define CSkillMgr__GetSkillCap_x                                   0x6BFF80
#define CSkillMgr__GetNameToken_x                                  0x6BF5F0
#define CSkillMgr__IsActivatedSkill_x                              0x6BF6E0
#define CSkillMgr__IsCombatSkill_x                                 0x6BF650

// CSliderWnd 
#define CSliderWnd__GetValue_x                                     0x99EAF0
#define CSliderWnd__SetValue_x                                     0x99E920
#define CSliderWnd__SetNumTicks_x                                  0x99E980

// CSpellBookWnd 
#define CSpellBookWnd__MemorizeSet_x                               0x850B20

// CStmlWnd
#define CStmlWnd__AppendSTML_x                                     0x9A8010
#define CStmlWnd__ParseSTML_x                                      0x9A91D0
#define CStmlWnd__CalculateHSBRange_x                              0x9A8F90
#define CStmlWnd__CalculateVSBRange_x                              0x9A8F00
#define CStmlWnd__CanBreakAtCharacter_x                            0x9ADDF0
#define CStmlWnd__FastForwardToEndOfTag_x                          0x9AEA90
#define CStmlWnd__ForceParseNow_x                                  0x9A8580
#define CStmlWnd__GetNextTagPiece_x                                0x9ADD50
#define CStmlWnd__GetVisibleText_x                                 0x9A85A0
#define CStmlWnd__InitializeWindowVariables_x                      0x9AE8E0
#define CStmlWnd__MakeStmlColorTag_x                               0x9A76B0
#define CStmlWnd__MakeWndNotificationTag_x                         0x9A7720
#define CStmlWnd__SetSTMLText_x                                    0x9A6490
#define CStmlWnd__StripFirstSTMLLines_x                            0x9AFCB0
#define CStmlWnd__UpdateHistoryString_x                            0x9AEC90

// CTabWnd 
#define CTabWnd__Draw_x                                            0x9A5340
#define CTabWnd__DrawCurrentPage_x                                 0x9A5CD0
#define CTabWnd__DrawTab_x                                         0x9A58C0
#define CTabWnd__GetCurrentPage_x                                  0x9A4AB0
#define CTabWnd__GetPageInnerRect_x                                0x9A4CE0
#define CTabWnd__GetTabInnerRect_x                                 0x9A4C20
#define CTabWnd__GetTabRect_x                                      0x9A4AE0
#define CTabWnd__InsertPage_x                                      0x9A4ED0
#define CTabWnd__RemovePage_x                                      0x9A5010
#define CTabWnd__SetPage_x                                         0x9A4D60
//inlined but we can probably call it jan 25 2021
#define CTabWnd__SetPageRect_x                                     0x9A5240
#define CTabWnd__UpdatePage_x                                      0x9A56B0
#define CTabWnd__GetPageFromTabIndex_x                             0x9A5800
#define CTabWnd__GetCurrentTabIndex_x                              0x9A4AA0

// CPageWnd
//inlined in Jan 25 2021 test
//#define CPageWnd__GetTabText_x
#define CPageWnd__SetTabText_x                                     0x9A4440
#define CPageWnd__FlashTab_x                                       0x9A44A0

// CTextOverlay 
#define CTextOverlay__DisplayText_x                                0x4AC960

// CTextureFont
#define CTextureFont__DrawWrappedText_x                            0x9776B0
#define CTextureFont__GetTextExtent_x                              0x9779B0

// CXMLDataManager 
#define CXMLDataManager__GetXMLData_x                              0x9B63E0

// CXMLSOMDocumentBase 
#define CXMLSOMDocumentBase__XMLRead_x                             0x962050

// CXStr 
// WARNING:  Be sure that none of these offsets are identical! 
// 
// Note:  dCXStr, CXStr1, & CXStr3 can be found in the 'BookWindow' constructor. 
#define CXStr__CXStr_x                                             0x5422C0
#define CXStr__CXStr1_x                                            0x482710
#define CXStr__CXStr3_x                                            0x949990
#define CXStr__dCXStr_x                                            0x478F20
#define CXStr__operator_equal_x                                    0x949BD0
#define CXStr__operator_equal1_x                                   0x949C10
#define CXStr__operator_plus_equal1_x                              0x94A670
#define CXStr__SetString_x                                         0x94C510
#define CXStr__operator_char_p_x                                   0x94A0C0
#define CXStr__GetChar_x                                           0x94BE70
#define CXStr__Delete_x                                            0x94B740
#define CXStr__GetUnicode_x                                        0x94BEE0
#define CXStr__Insert_x                                            0x94BF40
#define CXStr__FindNext_x                                          0x94BB90
#define CXStr__Copy_x                                              0x94B550

// CXWnd
//CTileLayoutWnd__SetOriginalAutoStretchInfo_x is here because its where I lookup the actual CXWnd Size.
#define CTileLayoutWnd__SetOriginalAutoStretchInfo_x               0x99CB30
#define CXWnd__BringToTop_x                                        0x97EBF0
#define CXWnd__ClrFocus_x                                          0x97E570
#define CXWnd__Destroy_x                                           0x97E620
#define CXWnd__DoAllDrawing_x                                      0x97A830
//inlined in jan 25 2021 we can probably still call it
#define CXWnd__DrawChildren_x                                      0x97A800
#define CXWnd__DrawColoredRect_x                                   0x97AD80
#define CXWnd__DrawTooltip_x                                       0x978DF0
#define CXWnd__DrawTooltipAtPoint_x                                0x978EB0
#define CXWnd__GetBorderFrame_x                                    0x97AA40
#define CXWnd__GetChildWndAt_x                                     0x97EC90
#define CXWnd__GetClientClipRect_x                                 0x97CD80
#define CXWnd__GetScreenClipRect_x                                 0x97CE50
#define CXWnd__GetScreenRect_x                                     0x97D020
#define CXWnd__GetRelativeRect_x                                   0x97D0E0
#define CXWnd__GetTooltipRect_x                                    0x97ADD0
#define CXWnd__GetWindowTextA_x                                    0x4EFC10
#define CXWnd__IsActive_x                                          0x97B500
#define CXWnd__IsDescendantOf_x                                    0x97DA80
#define CXWnd__IsReallyVisible_x                                   0x97DAB0
#define CXWnd__IsType_x                                            0x97F420
#define CXWnd__Move_x                                              0x97DB10
#define CXWnd__Move1_x                                             0x97DC10
#define CXWnd__ProcessTransition_x                                 0x97E700
#define CXWnd__Refade_x                                            0x97DEE0
#define CXWnd__Resize_x                                            0x97E1A0
#define CXWnd__Right_x                                             0x97E9E0
#define CXWnd__SetFocus_x                                          0x97E530
#define CXWnd__SetFont_x                                           0x97E5A0
#define CXWnd__SetKeyTooltip_x                                     0x97F1E0
#define CXWnd__SetMouseOver_x                                      0x97BE90
#define CXWnd__StartFade_x                                         0x97D970
#define CXWnd__GetChildItem_x                                      0x97EE10
#define CXWnd__SetParent_x                                         0x97D7B0
#define CXWnd__Minimize_x                                          0x97E210

// CScreenPieceTemplate
#define CScreenPieceTemplate__IsType_x                             0x9BA980

// CXWndManager 
#define CXWndManager__DrawCursor_x                                 0x981C40
#define CXWndManager__DrawWindows_x                                0x981D90
#define CXWndManager__GetKeyboardFlags_x                           0x9845F0
#define CXWndManager__HandleKeyboardMsg_x                          0x9841E0
#define CXWndManager__RemoveWnd_x                                  0x9848B0
#define CXWndManager__RemovePendingDeletionWnd_x                   0x984D60

// CDBStr
#define CDBStr__GetString_x                                        0x558540

// EQ_Character 
#define EQ_Character__CastSpell_x                                  0x4C5BA0
#define EQ_Character__Cur_HP_x                                     0x4D9B00
#define EQ_Character__Cur_Mana_x                                   0x4E0D10
#define EQ_Character__GetCastingTimeModifier_x                     0x4C9220
#define EQ_Character__GetFocusCastingTimeModifier_x                0x4B86F0
#define EQ_Character__GetFocusRangeModifier_x                      0x4B8840
#define EQ_Character__GetHPRegen_x                                 0x4E67E0
#define EQ_Character__GetEnduranceRegen_x                          0x4E6DA0
#define EQ_Character__GetManaRegen_x                               0x4E71E0
#define EQ_Character__Max_Endurance_x                              0x680740
#define EQ_Character__Max_HP_x                                     0x4D9930
#define EQ_Character__Max_Mana_x                                   0x680520
#define EQ_Character__doCombatAbility_x                            0x6832B0
#define EQ_Character__UseSkill_x                                   0x4E83B0
#define EQ_Character__GetConLevel_x                                0x678880
#define EQ_Character__IsExpansionFlag_x                            0x5D1D60
#define EQ_Character__TotalEffect_x                                0x4CD6A0
#define EQ_Character__GetPCSpellAffect_x                           0x4CA050
#define EQ_Character__SpellDuration_x                              0x4C9A90
#define EQ_Character__MySpellDuration_x                            0x4B6DC0
#define EQ_Character__GetAdjustedSkill_x                           0x4DCC50
#define EQ_Character__GetBaseSkill_x                               0x4DDBF0
#define EQ_Character__CanUseItem_x                                 0x4E1040
#define EQ_Character__CanMedOnHorse_x                              0x4E7EF0

//ProfileManager
#define ProfileManager__GetCurrentProfile_x                        0x915B70

//PlayerClient (to us known as EQPlayer)
#define PlayerClient__GetPcClient_x                                0x698960

//PcClient
#define PcClient__vftable_x                                        0xB4CEE0
#define PcClient__PcClient_x                                       0x675B00

//CCharacterListWnd
#define CCharacterListWnd__SelectCharacter_x                       0x4C0190
#define CCharacterListWnd__EnterWorld_x                            0x4BFB60
#define CCharacterListWnd__Quit_x                                  0x4BF880
#define CCharacterListWnd__UpdateList_x                            0x4BFD50

// EQ_Item (ItemClient)
#define EQ_Item__CanDrop_x                                         0x658000
#define EQ_Item__CreateItemTagString_x                             0x8EDD50
#define EQ_Item__IsStackable_x                                     0x8F2F10
#define EQ_Item__GetImageNum_x                                     0x8EFA40
#define EQ_Item__CreateItemClient_x                                0x656FA0
#define EQ_Item__GetItemValue_x                                    0x8F0C90
#define EQ_Item__ValueSellMerchant_x                               0x8F4C80
#define EQ_Item__IsKeyRingItem_x                                   0x8F26E0
#define EQ_Item__CanGoInBag_x                                      0x658120
#define EQ_Item__IsEmpty_x                                         0x8F20B0
#define EQ_Item__GetMaxItemCount_x                                 0x8F1080
#define EQ_Item__GetHeldItem_x                                     0x8EF900
#define EQ_Item__CanGemFitInSlot_x                                 0x8ED540

// EQ_LoadingS 
#define EQ_LoadingS__SetProgressBar_x                              0x5794F0
#define EQ_LoadingS__Array_x                                       0xD9AD30

// EQ_PC 
#define EQ_PC__DestroyHeldItemOrMoney_x                            0x681470
#define EQ_PC__GetAlternateAbilityId_x                             0x8FEE60
#define EQ_PC__GetCombatAbility_x                                  0x8FF3E0
#define EQ_PC__GetCombatAbilityTimer_x                             0x8FF450
#define EQ_PC__GetItemRecastTimer_x                                0x6838B0
#define EQ_PC__HasLoreItem_x                                       0x6791D0
#define EQ_PC__AlertInventoryChanged_x                             0x678140
#define EQ_PC__GetPcZoneClient_x                                   0x6A9080
#define EQ_PC__RemoveMyAffect_x                                    0x687120
#define EQ_PC__GetKeyRingItems_x                                   0x8FFF40
#define EQ_PC__GetItemContainedRealEstateIds_x                     0x8FFAA0
#define EQ_PC__GetNonArchivedOwnedRealEstates_x                    0x900120

// EQItemList 
#define EQItemList__EQItemList_x                                   0x5D80C0
#define EQItemList__add_object_x                                   0x6085F0
#define EQItemList__add_item_x                                     0x5D86A0
#define EQItemList__delete_item_x                                  0x5D86F0
#define EQItemList__FreeItemList_x                                 0x5D8600

// EQMisc
#define EQMisc__GetActiveFavorCost_x                               0x5545D0

// EQPlayer 
#define EQPlayer__ChangeBoneStringSprite_x                         0x69A390
#define EQPlayer__dEQPlayer_x                                      0x68CC40
#define EQPlayer__DoAttack_x                                       0x6A2DB0
#define EQPlayer__EQPlayer_x                                       0x68D490
#define EQPlayer__SetNameSpriteState_x                             0x691A50
#define EQPlayer__SetNameSpriteTint_x                              0x692910
#define PlayerBase__HasProperty_j_x                                0x9EA230
#define EQPlayer__IsTargetable_x                                   0x9EA790
#define EQPlayer__CanSee_x                                         0x9EA580
#define EQPlayer__CanSee1_x                                        0x9EA650
#define PlayerBase__GetVisibilityLineSegment_x                     0x9EA2F0

//PlayerZoneClient
#define PlayerZoneClient__ChangeHeight_x                           0x6A6B70
#define PlayerZoneClient__GetLevel_x                               0x6A90C0
#define PlayerZoneClient__IsValidTeleport_x                        0x609AC0
#define PlayerZoneClient__LegalPlayerRace_x                        0x5714B0

//EQPlayerManager
#define EQPlayerManager__GetSpawnByID_x                            0x69D540
#define EQPlayerManager__GetSpawnByName_x                          0x69D5F0
#define EQPlayerManager__GetPlayerFromPartialName_x                0x69D680

// KeyPressHandler
#define KeypressHandler__Get_x                                     0x65B930
#define KeypressHandler__AttachAltKeyToEqCommand_x                 0x65BA00
#define KeypressHandler__AttachKeyToEqCommand_x                    0x65BA40
#define KeypressHandler__ClearCommandStateArray_x                  0x65CF00
#define KeypressHandler__HandleKeyDown_x                           0x65CF20
#define KeypressHandler__HandleKeyUp_x                             0x65CFC0
#define KeypressHandler__SaveKeymapping_x                          0x65D570

// MapViewMap 
#define MapViewMap__Clear_x                                        0x7B9D00
#define MapViewMap__SaveEx_x                                       0x7BD23F
#define MapViewMap__SetZoom_x                                      0x7C2E70

// PlayerPointManager
#define PlayerPointManager__GetAltCurrency_x                       0x913A00

// StringTable 
#define StringTable__getString_x                                   0x90E750

// PcZoneClient
#define PcZoneClient__GetPcSkillLimit_x                            0x686D70
#define PcZoneClient__RemovePetEffect_x                            0x6873D0
#define PcZoneClient__HasAlternateAbility_x                        0x680380
#define PcZoneClient__GetCurrentMod_x                              0x4EBD50
#define PcZoneClient__GetModCap_x                                  0x4EBC50
#define PcZoneClient__CanEquipItem_x                               0x680A40
#define PcZoneClient__GetItemByID_x                                0x683DE0
#define PcZoneClient__RemoveBuffEffect_x                           0x687480
#define PcZoneClient__BandolierSwap_x                              0x681A20
#define PcZoneClient__GetLinkedSpellReuseTimer_x                   0x683850

//Doors
#define EQSwitch__UseSwitch_x                                      0x60E6C0

//IconCache
#define IconCache__GetIcon_x                                       0x7498A0

//CContainerMgr
#define CContainerMgr__OpenContainer_x                             0x740410
#define CContainerMgr__CloseContainer_x                            0x740730
#define CContainerMgr__OpenExperimentContainer_x                   0x741290

//CQuantityWnd
#define CQuantityWnd__Open_x                                       0x819170

//CHelpWnd
#define CHelpWnd__SetFile_x                                        0x650660

//CLootWnd
#define CLootWnd__LootAll_x                                        0x7AEFC0
#define CLootWnd__RequestLootSlot_x                                0x7AE1E0

//EQ_Spell
#define EQ_Spell__GetSpellLevelNeeded_x                            0x5A3A80
#define EQ_Spell__SpellAffects_x                                   0x5A3F80
#define EQ_Spell__SpellAffectBase_x                                0x5A3CA0
#define EQ_Spell__GetSpellAffectBySlot_x                           0x4D10A0
#define EQ_Spell__GetSpellAffectByIndex_x                          0x4D1050
#define EQ_Spell__IsSPAStacking_x                                  0x5A4D30
#define EQ_Spell__IsSPAIgnoredByStacking_x                         0x5A4180
#define EQ_Spell__IsDegeneratingLevelMod_x                         0x5A4D40
#define EQ_Spell__IsLullSpell_x                                    0x5A4570
#define __IsResEffectSpell_x                                       0x4D0850

//EQSpellStrings
#define EQSpellStrings__GetString_x                                0x4B16B0

//EQ_Affect
#define EQ_Affect__GetAffectData_x                                 0x91E4F0
#define EQ_Affect__SetAffectData_x                                 0x91EAC0

//CTargetWnd
#define CTargetWnd__GetBuffCaster_x                                0x865CE0
#define CTargetWnd__WndNotification_x                              0x865480
#define CTargetWnd__RefreshTargetBuffs_x                           0x8657E0
#define CTargetWnd__HandleBuffRemoveRequest_x                      0x864260

//CTaskWnd
#define CTaskWnd__UpdateTaskTimers_x                               0x86A840
#define CTaskWnd__ConfirmAbandonTask_x                             0x86D8F0

//CTaskManager
#define CTaskManager__GetEntry_x                                   0x552180
#define CTaskManager__HandleMessage_x                              0x550050
#define CTaskManager__GetTaskStatus_x                              0x552230
#define CTaskManager__GetElementDescription_x                      0x5522B0

//EqSoundManager
#define EqSoundManager__WavePlay_x                                 0x59E6B0
#define EqSoundManager__PlayScriptMp3_x                            0x59E8B0
#define EqSoundManager__SoundAssistPlay_x                          0x6C4240
#define EqSoundManager__WaveInstancePlay_x                         0x6C3730

//CCombatSkillsSelectWnd
#define CCombatSkillsSelectWnd__ShouldDisplayThisSkill_x           0x541F70

//CTextureAnimation
#define CTextureAnimation__SetCurCell_x                            0x9A38C0
#define CTextureAnimation__Draw_x                                  0x9A3B00
#define CTextureAnimation__AddBlankFrame_x                         0x9A36E0

//CTAFrameDraw
#define CTAFrameDraw__Draw_x                                       0x99F5F0

//CAltAbilityData
#define CAltAbilityData__GetMercCurrentRank_x                      0x581AF0
#define CAltAbilityData__GetMercMaxRank_x                          0x581A80
#define CAltAbilityData__GetMaxRank_x                              0x575E40

//CTargetRing
#define CTargetRing__Cast_x                                        0x64DE70

//CharacterBase
#define CharacterBase__GetMemorizedSpell_x                         0x656DF0
#define CharacterBase__CreateItemGlobalIndex_x                     0x6445F0
//this is a guess testing is needed
#define CharacterBase__GetItemPossession_x                         0x77DF50
#define CharacterBase__GetItemByGlobalIndex_x                      0x926070
#define CharacterBase__GetItemByGlobalIndex1_x                     0x9260C0
//#define CharacterBase__GetEffectId_x                               

//CCastSpellWnd
#define CCastSpellWnd__ForgetMemorizedSpell_x                      0x725340
#define CCastSpellWnd__IsBardSongPlaying_x                         0x725C00
#define CCastSpellWnd__RefreshSpellGemButtons_x                    0x725CB0

//messages
#define msg_spell_worn_off_x                                       0x5C95E0
#define msg_new_text_x                                             0x5BD150
#define __msgTokenTextParam_x                                      0x5CBA40
#define msgTokenText_x                                             0x5CBE50

//SpellManager
#define SpellManager__vftable_x                                    0xB37538
#define SpellManager__SpellManager_x                               0x6C7E70
#define Spellmanager__LoadTextSpells_x                             0x6C8770
#define SpellManager__GetSpellByGroupAndRank_x                     0x6C8040

//CCollisionInfoTargetVisibility
#define CCollisionInfoTargetVisibility__CCollisionInfoTargetVisibility_x   0x9EEAA0

//ItemGlobalIndex
#define ItemGlobalIndex__IsKeyRingLocation_x                       0x780180
#define ItemGlobalIndex__ItemGlobalIndex_x                         0x5D0180
#define ItemGlobalIndex__IsEquippedLocation_x                      0x6709E0
#define ItemGlobalIndex__IsValidIndex_x                            0x5D1F20

//ItemBaseContainer
#define ItemBaseContainer__ItemBaseContainer_x                     0x91EF80
#define ItemBaseContainer__CreateItemGlobalIndex_x                 0x91F2D0

//CLargeDialogWnd
#define CLargeDialogWnd__Open_x                                    0x7A7120

//CCursorAttachment
#define CCursorAttachment__AttachToCursor_x                        0x745160
#define CCursorAttachment__AttachToCursor1_x                       0x7451A0
#define CCursorAttachment__Deactivate_x                            0x746730

//CSidlManagerBase
#define CSidlManagerBase__CreateTabWnd_x                           0x9951B0
#define CSidlManagerBase__CreatePageWnd_x                          0x9949B0
//int
#define CSidlManagerBase__FindButtonDrawTemplate_x                 0x98FE90
//CXStr
#define CSidlManagerBase__FindButtonDrawTemplate1_x                0x98FE20

//CEQSuiteTextureLoader
#define CEQSuiteTextureLoader__GetDefaultUIPath_x                  0x9B4FB0
#define CEQSuiteTextureLoader__GetTexture_x                        0x9B4C30

//CFindItemWnd
#define CFindItemWnd__CFindItemWnd_x                               0x522010
#define CFindItemWnd__WndNotification_x                            0x522EC0
#define CFindItemWnd__Update_x                                     0x523B10
#define CFindItemWnd__PickupSelectedItem_x                         0x5216E0

//IString
#define IString__Append_x                                          0x557FC0

//Camera
#define CDisplay__cameraType_x                                     0xEDEE50
#define EverQuest__Cameras_x                                       0xDAE05C

//LootFiltersManager
#define LootFiltersManager__AddItemLootFilter_x                    0x52CCF0
#define LootFiltersManager__GetItemFilterData_x                    0x52C620
#define LootFiltersManager__RemoveItemLootFilter_x                 0x52C650
#define LootFiltersManager__SetItemLootFilter_x                    0x52C860

//COptionsWnd
#define COptionsWnd__FillChatFilterList_x                          0x805BB0

//CResolutionHandler__UpdateResolution_x
#define CResolutionHandler__UpdateResolution_x                     0x9F4760
#define CResolutionHandler__GetWindowedStyle_x                     0x6BE700

//CColorPickerWnd
#define CColorPickerWnd__Open_x                                    0x73CDC0

//CDistillerInfo
#define CDistillerInfo__GetIDFromRecordNum_x                       0x929D30
#define CDistillerInfo__Instance_x                                 0x929C70

//CGroupWnd
#define CGroupWnd__WndNotification_x                               0x75FA80
#define CGroupWnd__UpdateDisplay_x                                 0x75ECE0

//ItemBase
#define ItemBase__IsLore_x                                         0x8F2780
#define ItemBase__IsLoreEquipped_x                                 0x8F27F0

//EQPlacedItemManager
#define EQPlacedItemManager__Instance_x                            0x608550
#define EQPlacedItemManager__GetItemByGuid_x                       0x608690
#define EQPlacedItemManager__GetItemByRealEstateAndRealEstateItemIds_x 0x6086F0

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B2E80
#define RealEstateManagerClient__GetItemByRealEstateAndItemIds_x   0x6B7750

//CFactionWnd
#define CFactionWnd__CFactionWnd_x                                 0x517A90

//FactionManagerClient
#define FactionManagerClient__Instance_x                           0x502720
#define FactionManagerClient__HandleFactionMessage_x               0x502F40
//work in progress, these needs to be investigated
#define FactionManagerClient__GetFactionStanding_x                 0x503760
#define FactionManagerClient__GetMaxFaction_x                      0x50377F
#define FactionManagerClient__GetMinFaction_x                      0x503730

//BaseProfile (PCHARINFO2)
#define BaseProfile__GetItemPossession_x                           0x50F3E0

//ArrayClass
#define ArrayClass__DeleteElement_x                                0x976320

//AggroMeterManagerClient
#define AggroMeterManagerClient__Instance_x                        0x49E3D0

//ClientSOIManager
#define ClientSOIManager__GetSingleton_x                           0x50F650

//MercenaryAlternateAdvancementManagerClient
#define MercenaryAlternateAdvancementManagerClient__Instance_x     0x580CB0

//CTargetManager
#define CTargetManager__Get_x                                      0x6CBE00

//RealEstateManagerClient
#define RealEstateManagerClient__Instance_x                        0x6B2E80

//CBroadcast (returns what we called pinstCTextOverlay_x)
#define CBroadcast__Get_x                                          0x4AC720

//EQGroundItemListManager
#define EQGroundItemListManager__Instance_x                        0x5D85A0

//EverQuestinfo
#define EverQuestinfo__IsItemPending_x                             0xE4B6F0

//CAAWnd
#define CAAWnd__ShowAbility_x                                      0x6E94B0
#define CAAWnd__UpdateSelected_x                                   0x6E5B50
#define CAAWnd__Update_x                                           0x6E87E0

//CXRect
#define CXRect__operator_and_x                                     0x754F50

//CUnSerializeBuffer
#define CUnSerializeBuffer__GetString_x                            0x47D200

//
#define __eq_delete_x                                              0x9F4D45
#define __eq_new_x                                                 0x9F52B4

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

