#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: INTLCore

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "INTLCore_structs.hpp"


namespace SDK
{

// Class INTLCore.INTLBaseUserWidget
// 0x0008 (0x0280 - 0x0278)
class UINTLBaseUserWidget final : public UUserWidget
{
public:
	uint8                                         Pad_278[0x8];                                      // 0x0278(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"INTLBaseUserWidget">();
	}
	static class UINTLBaseUserWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UINTLBaseUserWidget>();
	}
};
static_assert(alignof(UINTLBaseUserWidget) == 0x000008, "Wrong alignment on UINTLBaseUserWidget");
static_assert(sizeof(UINTLBaseUserWidget) == 0x000280, "Wrong size on UINTLBaseUserWidget");

// Class INTLCore.INTLOutputUtility
// 0x0000 (0x0028 - 0x0028)
class UINTLOutputUtility final : public UBlueprintFunctionLibrary
{
public:
	static void FormatAuthRet(const struct FINTLAuthResult& Ret, bool* IsSuccess, class FText* ErrorMsg);
	static void FormatBaseRet(const struct FINTLBaseResult& Ret, bool* IsSuccess, class FText* ErrorMsg);
	static void FormatNoticeRet(const struct FINTLNoticeResult& Ret, bool* IsSuccess, class FText* ErrorMsg);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"INTLOutputUtility">();
	}
	static class UINTLOutputUtility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UINTLOutputUtility>();
	}
};
static_assert(alignof(UINTLOutputUtility) == 0x000008, "Wrong alignment on UINTLOutputUtility");
static_assert(sizeof(UINTLOutputUtility) == 0x000028, "Wrong size on UINTLOutputUtility");

// Class INTLCore.INTLPluginObserver
// 0x0000 (0x0028 - 0x0028)
class IINTLPluginObserver final : public IInterface
{
public:
	void OnAccountResult(const struct FINTLAccountResult& Ret);
	void OnAdjustAttrsChangedResult(const struct FINTLAdjustAttrsChangedResult& Ret);
	void OnAuthBaseResult(const struct FINTLBaseResult& Ret);
	void OnAuthResult(const struct FINTLAuthResult& Ret);
	void OnComplianceResult(const struct FINTLComplianceResult& Ret);
	void OnCustomerResult(const struct FINTLCustomerResult& Ret);
	void OnCutoutResult(const struct FCutoutInfoResult& Ret);
	void OnDeepLinkResult(const struct FINTLBaseResult& Ret);
	void OnDetectNetworkResult(const struct FINTLDetectNetworkResult& Ret);
	void OnDeviceLevelResult(const struct FINTLDeviceLevelResult& Ret);
	void OnDirTreeResult(const struct FINTLDirTreeResult& Ret);
	void OnDismissLoginUI(bool Canceled);
	void OnDNSResult(const struct FINTLDNSResult& Ret);
	void OnExtendResult(const struct FINTLExtendResult& Ret);
	void OnFriendBaseResult(const struct FINTLBaseResult& Ret);
	void OnFriendResult(const struct FINTLFriendResult& Ret);
	void OnGroupReqInfoResult(const struct FINTLBaseResult& Ret);
	void OnIDTokenResult(const struct FINTLIDTokenResult& Ret);
	void OnIPInfoResult(const struct FINTLLBSIPInfoResult& Ret);
	void OnLIBindRewardReult(const struct FINTLLIBindRewardResult& Ret);
	void OnNoticeRequestData(const struct FINTLNoticeResult& Ret);
	void OnPermissionResult(const struct FINTLPermissionResult& Ret);
	void OnPushBaseResult(const struct FINTLBaseResult& Ret);
	void OnPushResult(const struct FINTLPushResult& Ret);
	void OnStartUdpSocketResult(const struct FINTLStartUdpSocketResult& Ret);
	void OnUpdateOptionalRepoInitResult(const struct FINTLUpdateOptionalRepoInitResult& Ret);
	void OnUpdateProgressResult(const struct FINTLUpdateProgress& Ret);
	void OnUpdateResult(const struct FINTLUpdateResult& Ret);
	void OnUpdateStartRepoNewVersionInfoResult(const struct FINTLUpdateStartRepoNewVersionInfo& Ret);
	void OnWebSocketResult(const struct FINTLWebSocketResult& Ret);
	void OnWebViewResult(const struct FINTLWebViewResult& Ret);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"INTLPluginObserver">();
	}
	static class IINTLPluginObserver* GetDefaultObj()
	{
		return GetDefaultObjImpl<IINTLPluginObserver>();
	}
};
static_assert(alignof(IINTLPluginObserver) == 0x000008, "Wrong alignment on IINTLPluginObserver");
static_assert(sizeof(IINTLPluginObserver) == 0x000028, "Wrong size on IINTLPluginObserver");

// Class INTLCore.INTLSDKAPI
// 0x0000 (0x0028 - 0x0028)
class UINTLSDKAPI final : public UBlueprintFunctionLibrary
{
public:
	static void AccountLoginWithLIPASS(const EINTLLoginChannel Channel, const class FString& Permissions, const class FString& ExtraJson);
	static void AddLocalNotification(const class FString& Channel, const struct FINTLLocalNotification& LocalNotification);
	static void AddLocalNotificationIOS(const class FString& Channel, const struct FINTLLocalNotificationIOS& LocalNotification);
	static void AddObserver(TScriptInterface<class IINTLPluginObserver> Observer);
	static void AuthLoginWithThirdChannel();
	static bool AutoLogin();
	static bool AutoLoginForLI();
	static bool Bind(const EINTLLoginChannel Channel, const class FString& Permissions, const class FString& ExtraJson);
	static void BindUsePluginCache();
	static bool BindWithLoggedinChannel();
	static void BindWithThirdChannel();
	static bool BuildMapWithLoggedinChannel();
	static void CallJS(const class FString& JsonJsParam);
	static void CancelAccountDeletion();
	static void CancelLIAccountDeletion();
	static void CancelLogin(const class FString& Channel, const class FString& Extra_json);
	static bool ChangeIsReceiveEmail(int32 Recv_email);
	static bool CheckActiveUser();
	static TArray<struct FINTLUpdateOptionalRepoFilesStatus> CheckOptionalRepoFiles(int32 RepoID, const TArray<class FString>& FilesPath);
	static void CheckPermissionStatus(const TArray<EPermissionType>& PermissionTypeArray);
	static void CheckTracking();
	static void CheckTwoFALoginForLI(const class FString& Two_fa_confirm_code, const class FString& Two_fa_verify_code, const class FString& Two_fa_li_email);
	static void ClearLocalNotifications(const class FString& Channel);
	static bool ClearUserStorage(const class FString& Sub_dir);
	static int32 ClosePlayStationErrorDialog();
	static void CloseWebSocket(const class FString& URL);
	static void CollectionResume();
	static void CollectionStop();
	static void ComplianceCommitBirthday(const int32 BirthdayYear, const int32 BirthdayMonth, const int32 BirthdayDay);
	static class FString ComplianceGetConsoleCreditCardVerifyUrl();
	static class FString ComplianceGetConsoleRealNameVerifyUrl(const class FString& Region);
	static bool ComplianceInit();
	static bool ComplianceInitWithParams(const class FString& GameId, const class FString& OpenID, const class FString& Token, const int32 ChannelID);
	static void ComplianceMultiSetStatusWithAdultCheckStatus(const class FString& OpenID, const class FString& Otoken, const class FString& Region, const int32 AdultCheckStatus, const int32 CompareAge, const int32 CertificateType, const class FString& ExtraJson, const int32 ChannelID);
	static void ComplianceMultiSetStatusWithAge(const class FString& OpenID, const class FString& Otoken, const class FString& Region, const int32 Age, const int32 CertificateType, const class FString& ExtraJson, const int32 ChannelID);
	static void ComplianceMultiSetStatusWithBirthday(const class FString& OpenID, const class FString& Otoken, const class FString& Region, const class FString& Birthday, const int32 CertificateType, const class FString& ExtraJson, const int32 ChannelID);
	static void ComplianceQueryCountryConfig(const class FString& Region, const int32 ChannelID);
	static void ComplianceQueryStrategy(const class FString& Region);
	static void ComplianceQueryUserInfo();
	static void ComplianceQueryUserStatus();
	static void ComplianceSendConsoleEmail(const class FString& Email, const int32 Scene, const class FString& URL, const class FString& UserName);
	static void ComplianceSendEmail(const class FString& Email, const class FString& UserName);
	static void ComplianceSetAdulthood(EComplianceAgeStatus Status);
	static void ComplianceSetEUAgreeStatus(EComplianceAgreeStatus Status);
	static void ComplianceSetParentCertificateStatus(EComplianceParentCertificateStatus Status);
	static void ComplianceSetUserInfoWithAgeStatus(const class FString& Region, EComplianceAgeStatus Status);
	static void ComplianceSetUserInfoWithBirthAge(const class FString& Region, const int32 BirthAge);
	static void ComplianceSetUserInfoWithBirthday(const class FString& Region, const int32 BirthdayYear, const int32 BirthdayMonth, const int32 BirthdayDay);
	static bool ComplianceSetUserProfile(const class FString& GameId, const class FString& OpenID, const class FString& Token, const int32 ChannelID, const class FString& Region);
	static void ComplianceVerifyCreditCard();
	static void ComplianceVerifyParentAndCertificate();
	static void ComplianceVerifyRealName();
	static void CreateWebSocket(const class FString& URL, const class FString& QueryJson, const class FString& HeaderJson);
	static void DeleteLocalNotifications(const class FString& Key);
	static void DeleteTag(const class FString& Channel, const class FString& Tag);
	static void DismissLoginUI(const bool Canceled);
	static int32 DownloadOptionalRepoFiles(int32 RepoID, int32 DownloadPriority, const TArray<class FString>& FilesPath, bool Isbig);
	static void EnterGame();
	static void EnterGameFailed(const struct FINTLAuthResult& Ret);
	static class FString ExtendInvoke(const EINTLLoginChannel Channel, const class FString& ExtendMethodName, const class FString& ParamsJson);
	static class FString Fetch();
	static void FlushINTLEvents();
	static void GenerateTransferCode(const class FString& Password);
	static class FString GetAuthDeviceInfo();
	static class FString GetAuthEncryptData();
	static bool GetAuthResult(struct FINTLAuthResult* LoginRet);
	static class FString GetChannelVersion(const class FString& Channel);
	static class FString GetConfig(const class FString& Key, const class FString& DefaultVal, const class FString& Project);
	static class FString GetCurrentAppVersion();
	static class FString GetCurrentResourceVersion();
	static class FString GetDeviceInfo(const class FString& Extra_json);
	static int32 GetDeviceLevel();
	static class FString GetEncryptUrl(const class FString& URL);
	static struct FINTLAuthResult GetFINTLAuthResult();
	static bool GetIDTokenResult(struct FINTLIDTokenResult* JwtRet);
	static class FString GetInstanceID(const class FString& Channel);
	static class FString GetInstanceIDAsync(const class FString& Channel);
	static class FString GetIpByHost(const class FString& Host);
	static void GetLIUidAndTokenForAdultCert();
	static class FString GetRewardExtraJson();
	static class FString GetSDKVersion();
	static int32 GetStoreChannel();
	static class FString GetUserStorage();
	static void GotoSystemSetting(const TArray<EPermissionType>& PermissionTypeArray);
	static void Init();
	static void InitAnalytics();
	static void InitCustomer(struct FINTLCustomerUserProfile* UserProfile);
	static void InitFirebaseSDK();
	static bool IsAppInstalled(const class FString& Channel, const class FString& ExtraJson);
	static bool LaunchAccountUI(const int32 Type, const class FString& ExtraJson);
	static void LaunchLoginUI();
	static void LoadCutoutData();
	static void LogCrashInfo(EINTLCrashLevel Level, const class FString& Tag, const class FString& Log);
	static bool Login(const EINTLLoginChannel Channel, const class FString& Permissions, const class FString& ExtraJson);
	static void LoginChannelOnly(const EINTLLoginChannel Channel, const class FString& Permissions, const class FString& ExtraJson);
	static void LoginChannelWithLIPASS(const EINTLLoginChannel Channel, const class FString& Permissions, const class FString& ExtraJson);
	static bool LoginForLI(const EINTLLoginChannel Channel, const class FString& Permissions, const class FString& ExtraJson);
	static void LoginUsePluginCache(int32 Request_mode);
	static bool LoginWithBoundChannel(const EINTLLoginChannel Channel, const class FString& LoginMode);
	static bool LoginWithChannel(const EINTLLoginChannel Channel, const class FString& LoginMode);
	static bool LoginWithConfirmCode(const int32 ActionType, const class FString& ConfirmCode, const class FString& ExtraJson);
	static void LoginWithConfirmCodeForMail(const class FString& ChannelID, const class FString& ConfirmCode, const class FString& ExtraJson);
	static bool LoginWithMappedChannel(const EINTLLoginChannel Channel, const class FString& LoginMode, const class FString& Permissions);
	static bool LoginWithPassword(const EINTLLoginChannel Channel, const class FString& Account, const class FString& Password, const class FString& PhoneAreaCode, const class FString& PermissionList, const int32 SupportCaptcha, const int32 MachineCheckType, const class FString& TencentResponse, const class FString& GoogleResponse);
	static bool LoginWithVerifyCode(const EINTLLoginChannel Channel, const class FString& Account, const class FString& Password, const class FString& VerifyCode, const class FString& PhoneAreaCode, const class FString& PermissionList, const uint8 OnlyLoginType);
	static bool Logout(const EINTLLoginChannel Channel, const bool ChannelOnly);
	static void MarkSessionClosed();
	static void MarkSessionLoad(const class FString& SessionName, const class FString& Extra_json);
	static bool ModifyAccountWithLoginState(const class FString& OldPhoneAreaCode, const class FString& NewAccount, const class FString& NewAccountVerifyCode, const class FString& NewPhoneAreaCode, const class FString& ExtraJson);
	static bool ModifyAccountWithPassword(const class FString& OldAccount, const class FString& OldPhoneAreaCode, const class FString& Password, const class FString& NewAccount, const class FString& NewAccountVerifyCode, const class FString& NewPhoneAreaCode, const class FString& ExtraJson);
	static bool ModifyAccountWithVerifyCode(const class FString& OldAccount, const class FString& OldAccountVerifyCode, const class FString& OldPhoneAreaCode, const class FString& NewAccount, const class FString& NewAccountVerifyCode, const class FString& NewPhoneAreaCode, const class FString& ExtraJson);
	static void ModifyDataProtectionAcceptance(const class FString& PPVersion, const class FString& TOSVersion);
	static bool ModifyDownloadPriority(int32 RepoID, int32 TaskId, int32 DownloadPriority);
	static bool ModifyLegalDocumentsAcceptedVersion(const class FString& AcceptedVersionsJson);
	static bool ModifyProfile(const struct FINTLAccountProfile& UserProfile);
	static class FString NoticeRequestData(const class FString& Region, const class FString& LangType, const class FString& ExtraJson);
	static bool OnTickEvent();
	static void OpenUnreadMessage(const class FString& Uid, const class FString& Push_token);
	static void OpenUrl(const class FString& URL, EINTLWebViewOrientation ScreenOrientation, bool FullScreenEnable, bool EncryptEnable, bool SystemBrowserEnable, const class FString& ExtraJson);
	static void PostFrameTimeInSession(float DeltaSeconds);
	static void PostNetworkLatencyInSession(int32 LatencyMs);
	static bool QueryAccountProfile();
	static bool QueryAccountRegistrationInfo();
	static bool QueryActiveUser();
	static bool QueryBindInfo();
	static void QueryBindRewardStatus(const class FString& EventId);
	static bool QueryCanBind(const int32 ChannelID, const int32 AccountPlatType, const class FString& Account, const class FString& PhoneAreaCode, const class FString& ExtraJson);
	static void QueryDataProtectionAcceptance();
	static void QueryDeviceLevel();
	static void QueryDirNode(int32 TreeId, int32 NodeID);
	static void QueryDirTree(int32 TreeId);
	static bool QueryFriends(const EINTLLoginChannel Channel, const int32 Page, const int32 Count, const bool IsInGame, const class FString& ExtraJson);
	static void QueryIDToken();
	static void QueryIpByHost(const class FString& Host);
	static void QueryIsEEA(const class FString& Region);
	static bool QueryIsReceiveEmail(const class FString& Account, const class FString& PhoneAreaCode, const class FString& ExtraJson);
	static bool QueryLegalDocumentsAcceptedVersion();
	static void QueryLoginRecord();
	static bool QueryNeedUpgradeAndProvisionInfo();
	static bool QueryRegisterStatus(const class FString& Account, const class FString& PhoneAreaCode, const class FString& ExtraJson);
	static void QueryRewardListStatus(const class FString& EventIds, const class FString& ExtraJson);
	static void QueryTransferCode();
	static bool QueryUserInfo();
	static void QueryUserInfoWithOpenId(const class FString& OpenID, const bool& Is_openid, const int32& Channel_id);
	static void QueryUserNameStatus(const class FString& UserName);
	static bool QueryVerifyCodeStatus(const class FString& Account, const class FString& VerifyCode, const EVerifyCodeType CodeType, const class FString& PhoneAreaCode, const class FString& ExtraJson);
	static bool Register(const class FString& Account, const class FString& Password, const class FString& VerifyCode, const class FString& PhoneAreaCode, const struct FINTLAccountProfile& UserProfile);
	static void RegisterPush(const class FString& Channel, const class FString& Account);
	static bool RemoveCustomConfigKey(const class FString& Key, const class FString& Project);
	static void RemoveHostCache(const class FString& Host);
	static void RemoveObserver(TScriptInterface<class IINTLPluginObserver> Observer);
	static void ReportBinary(const class FString& EventName, const class FString& Data, int32 Length, const class FString& SpecificChannel);
	static void ReportCustomEventStep(const class FString& EventName, int32 Step, const class FString& StepName, bool Result, int32 ErrorCode, const TMap<class FString, class FString>& ParamsMap);
	static void ReportEvent(const class FString& EventName, const TMap<class FString, class FString>& ParamsMap, const class FString& SpecificChannel, const class FString& ExtraJson);
	static void ReportException(int32 Type, const class FString& ExceptionName, const class FString& ExceptionMsg, const class FString& ExceptionStack, const TMap<class FString, class FString>& ExtInfo);
	static void ReportFunnel(EFINTLFunnelStep Step_name, int32 Error_code);
	static void ReportFunnelCustomEvent(const class FString& L1_event_name, const class FString& L2_event_name, int32 Error_code);
	static void ReportFunnelCustomEventWithCustomField(const class FString& L1_event_name, const class FString& L2_event_name, int32 Error_code, const TMap<class FString, class FString>& Params_map);
	static void ReportFunnelWithCustomField(EFINTLFunnelStep Step_name, int32 Error_code, const TMap<class FString, class FString>& Params_map);
	static void ReportLoginStep(int32 Step, const class FString& StepName, bool Result, int32 ErrorCode, const TMap<class FString, class FString>& ParamsMap);
	static void ReportPayStep(int32 Step, const class FString& StepName, bool Result, int32 ErrorCode, const TMap<class FString, class FString>& ParamsMap);
	static void ReportRevenue(const class FString& EventName, const class FString& Currency, const class FString& RevenueValue, const TMap<class FString, class FString>& ParamsMap, const class FString& SpecificChannel, const class FString& ExtraJson);
	static void RequestAccountInfo(const class FString& ExtraJson);
	static void RequestBindDataForAccount(const class FString& Uid, const class FString& Token, const class FString& ExtraJson);
	static void RequestGetRecentLoginDays(const class FString& RecentDay, const class FString& ExtraJson);
	static void RequestIPInfo();
	static void RequestPermission(const TArray<EPermissionType>& PermissionTypeArray);
	static void RequestTracking();
	static void RequestTrackingAuthorization();
	static bool RequestVerifyCode(const class FString& Account, const EVerifyCodeType CodeType, const class FString& PhoneAreaCode, const class FString& ExtraJson, const int32 OnlyLoginType);
	static bool ResetGuest();
	static bool ResetPasswordWithOldPassword(const class FString& Account, const class FString& OldPassword, const class FString& PhoneAreaCode, const class FString& NewPassword, const class FString& ExtraJson);
	static bool ResetPasswordWithVerifyCode(const class FString& Account, const class FString& VerifyCode, const class FString& PhoneAreaCode, const class FString& NewPassword, const class FString& ExtraJson);
	static void Restart();
	static void RestartAnalytics();
	static void RevokeChannelToken();
	static void SendBindReward(const class FString& EventId, const class FString& ExtraJson);
	static bool SendMessage(const struct FINTLFriendReqInfo& Info, const class FString& Channel);
	static void SendWebSocketMsg(const class FString& URL, const class FString& Msg_content);
	static void SetAccountInfo(const EINTLLoginChannel Channel, const int32 ChannelID, const class FString& LangType, const int32 AccountPlatType);
	static void SetAppVersion(const class FString& AppVersion);
	static bool SetAuthEncryptData(const class FString& Auth_data, bool Overwrite);
	static void SetBackgroundUpdateNotificationContentTitle(const class FString& Title);
	static void SetCrashSightAppVersion(const class FString& AppVersion);
	static void SetCrashUserId(const class FString& UserId);
	static void SetCrashUserValue(const class FString& Key, const class FString& Value);
	static void SetDefaultSharedStorageDirectory(const class FString& Dir);
	static void SetDefaultUserStorageDirectory(const class FString& Dir);
	static void SetDeviceLevel(int32 Level);
	static void SetDNSRegion(const class FString& Region);
	static void SetLILoginInfo(const class FString& Uid, const class FString& Token, const class FString& Account);
	static void SetLogPath(const class FString& Log_path);
	static void SetMaxDownloadSpeed(int32 Speed);
	static bool SetProvision(const class FString& UserAgreedGameTos, const class FString& UserAgreedGamePP, const class FString& UserAgreedLiPP, const class FString& UserAgreedLiDt, const class FString& UserAgreedLiTos, const int32 IsRecvEmail);
	static void SetRewardExtraJson(const class FString& ExtraJson);
	static void SetSessionExtraParam(const class FString& Extra_json);
	static void SetTag(const class FString& Channel, const class FString& Tag);
	static void SetWebSocketHeartbeatInterval(const class FString& URL, int32 Interval);
	static bool Share(const struct FINTLFriendReqInfo& Info, const class FString& Channel);
	static bool ShowAccountPicker();
	static void ShowAllFAQSections();
	static void ShowFaqSection(const class FString& SectionID);
	static void ShowGroupAgreementWindow(const class FString& Channel);
	static void ShowGroupChatRoom(const struct FINTLGroupReqInfo& Req_info, const class FString& Channel);
	static int32 ShowPlayStationErrorDialog(int32 ErrorCode, const class FString& Message);
	static void ShowRatingAlert();
	static void ShowSingleFAQ(const class FString& FaqId);
	static void Shutdown();
	static void StartDetectNetwork(const class FString& ID);
	static class FString StartTraceRoute(const class FString& ID);
	static void StartUdpSocket(const class FString& ID, int32 Count, const class FString& ExtraJson);
	static void StopAnalytics();
	static class FString StopTraceRoute();
	static bool TabGetExpInfoByLayerCode(struct FINTLTabExpEntity* Entity, const class FString& LayerCode, const bool IsReport);
	static bool TabGetExpInfoByName(struct FINTLTabExpEntity* Entity, const class FString& ExpName, const bool IsReport);
	static void TabInit(const class FString& Guid, const class FString& SceneId, const bool IsAutoPoll, const bool IsAutoReport);
	static void TabRefresh();
	static void TabStart();
	static void TabSwitchGuid(const class FString& Guid);
	static int32 TestJudgeCustomDeviceLevel(const class FString& ParseJson);
	static bool ToggleBackgroundUpdate(bool Enable);
	static void TransferAccount(const class FString& TransferCode, const class FString& Password);
	static bool Unbind(const EINTLLoginChannel Channel, const class FString& Uid, const class FString& ExtraJson);
	static void UnregisterPush(const class FString& Channel);
	static bool UpdateCfg(const class FString& Key, const class FString& DefaultVal, const class FString& Project);
	static bool UpdateConfig(const TMap<class FString, class FString>& Cfg, const class FString& Project);
	static bool UpdateContinue(int32 RepoID);
	static void UpdateLanguage(const class FString& Lan);
	static bool UpdateStart(const struct FINTLUpdateInitInfo& Info);
	static bool UpdateStop(int32 RepoID, int32 TaskId);
	static void UpdateUserInfo(struct FINTLCustomerUserProfile* UserProfile);
	static void UpgradeSaccToLI();

	void SetConsent(EFINTLConsentStatus Status, const class FString& Types, const class FString& SpecificChannel);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"INTLSDKAPI">();
	}
	static class UINTLSDKAPI* GetDefaultObj()
	{
		return GetDefaultObjImpl<UINTLSDKAPI>();
	}
};
static_assert(alignof(UINTLSDKAPI) == 0x000008, "Wrong alignment on UINTLSDKAPI");
static_assert(sizeof(UINTLSDKAPI) == 0x000028, "Wrong size on UINTLSDKAPI");

// Class INTLCore.INTLUtility
// 0x0000 (0x0028 - 0x0028)
class UINTLUtility final : public UBlueprintFunctionLibrary
{
public:
	static void AddSystemBrowserFireWallRule(int32 Port, const class FString& RuleName);
	static void ForceCrash();
	static int32 GetNewToastOrder();
	static int32 RefreshCurToastCnt(int32 ChangeCnt);
	static bool Regular(const class FString& Str, const class FString& Reg);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"INTLUtility">();
	}
	static class UINTLUtility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UINTLUtility>();
	}
};
static_assert(alignof(UINTLUtility) == 0x000008, "Wrong alignment on UINTLUtility");
static_assert(sizeof(UINTLUtility) == 0x000028, "Wrong size on UINTLUtility");

}

