//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "H5ServiceDelegate.h"
#import "PPChatThirdPartyAccountDataDelegate.h"

@class DTViewController, H5WebViewController, MBProgressHUD, NSDate, NSDictionary, NSString, PPChatCacheDelegate, PPChatDataController, PPChatMessage, PPChatPublicAccount, PPChatSetting, PPChatThirdPartyAccount, UIViewController;

@interface PPChatContext : NSObject <H5ServiceDelegate, PPChatThirdPartyAccountDataDelegate>
{
    _Bool _needProxy;
    _Bool _isDirectFromDetail;
    _Bool _isAnimating;
    _Bool _isBacked;
    _Bool _isH5SmartShowToolbar;
    _Bool _isClear;
    _Bool _hasPPChat;
    _Bool _h5ApiRegistered;
    _Bool _isShouldAppendPrefixInAlipaysLink;
    int _actionEnum;
    NSString *_userIconUrl;
    NSString *_channelPackageId;
    H5WebViewController *_h5WebViewController;
    NSDate *_userLastActiveDate;
    NSString *_publicIdThatCannotFormAPublicAccount;
    PPChatPublicAccount *_publicAccount;
    PPChatSetting *_settingAccount;
    PPChatThirdPartyAccount *_thirdPartyAccount;
    PPChatMessage *_lastestMsg;
    NSDictionary *_lauchOption;
    NSString *_sourceId;
    NSString *_downloadUrl;
    UIViewController *_restoreController;
    DTViewController *_rtController;
    NSString *_publicName;
    CDUnknownBlockType _shareBlock;
    NSString *_publicBizType;
    NSString *_memo;
    NSString *_userId;
    NSString *_appVersion;
    PPChatCacheDelegate *_cacheDelegate;
    MBProgressHUD *_progressHUD;
    UIViewController *_topController;
    PPChatDataController *_dataController;
    NSDate *_preStartTime;
    NSDictionary *_shareDict;
    NSString *_shareChannel;
}

@property(nonatomic) _Bool isShouldAppendPrefixInAlipaysLink; // @synthesize isShouldAppendPrefixInAlipaysLink=_isShouldAppendPrefixInAlipaysLink;
@property(retain, nonatomic) NSString *shareChannel; // @synthesize shareChannel=_shareChannel;
@property(retain, nonatomic) NSDictionary *shareDict; // @synthesize shareDict=_shareDict;
@property(nonatomic) _Bool h5ApiRegistered; // @synthesize h5ApiRegistered=_h5ApiRegistered;
@property(nonatomic) _Bool hasPPChat; // @synthesize hasPPChat=_hasPPChat;
@property(nonatomic) _Bool isClear; // @synthesize isClear=_isClear;
@property(nonatomic) _Bool isH5SmartShowToolbar; // @synthesize isH5SmartShowToolbar=_isH5SmartShowToolbar;
@property(retain, nonatomic) NSDate *preStartTime; // @synthesize preStartTime=_preStartTime;
@property(retain, nonatomic) PPChatDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak UIViewController *topController; // @synthesize topController=_topController;
@property(nonatomic) __weak MBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) PPChatCacheDelegate *cacheDelegate; // @synthesize cacheDelegate=_cacheDelegate;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *publicBizType; // @synthesize publicBizType=_publicBizType;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(retain, nonatomic) NSString *publicName; // @synthesize publicName=_publicName;
@property(nonatomic) int actionEnum; // @synthesize actionEnum=_actionEnum;
@property(nonatomic) __weak DTViewController *rtController; // @synthesize rtController=_rtController;
@property(nonatomic) __weak UIViewController *restoreController; // @synthesize restoreController=_restoreController;
@property(nonatomic) _Bool isBacked; // @synthesize isBacked=_isBacked;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSDictionary *lauchOption; // @synthesize lauchOption=_lauchOption;
@property(nonatomic) _Bool isDirectFromDetail; // @synthesize isDirectFromDetail=_isDirectFromDetail;
@property(nonatomic) _Bool needProxy; // @synthesize needProxy=_needProxy;
@property(retain, nonatomic) PPChatMessage *lastestMsg; // @synthesize lastestMsg=_lastestMsg;
@property(retain, nonatomic) PPChatThirdPartyAccount *thirdPartyAccount; // @synthesize thirdPartyAccount=_thirdPartyAccount;
@property(retain, nonatomic) PPChatSetting *settingAccount; // @synthesize settingAccount=_settingAccount;
@property(retain, nonatomic) PPChatPublicAccount *publicAccount; // @synthesize publicAccount=_publicAccount;
@property(retain, nonatomic) NSString *publicIdThatCannotFormAPublicAccount; // @synthesize publicIdThatCannotFormAPublicAccount=_publicIdThatCannotFormAPublicAccount;
@property(retain, nonatomic) NSDate *userLastActiveDate; // @synthesize userLastActiveDate=_userLastActiveDate;
@property(nonatomic) __weak H5WebViewController *h5WebViewController; // @synthesize h5WebViewController=_h5WebViewController;
@property(retain, nonatomic) NSString *channelPackageId; // @synthesize channelPackageId=_channelPackageId;
@property(retain, nonatomic) NSString *userIconUrl; // @synthesize userIconUrl=_userIconUrl;
- (void).cxx_destruct;
- (void)shareToChannel:(id)arg1 withType:(id)arg2;
- (id)getShareInfoByChannel:(id)arg1;
- (_Bool)isNotPermit;
- (void)exitApp:(id)arg1 animated:(_Bool)arg2;
- (void)sendNotify;
- (_Bool)startAppWithUrl:(id)arg1;
- (void)startAppCheck:(id)arg1 withOption:(id)arg2 animated:(_Bool)arg3;
- (void)startApp:(id)arg1 withOption:(id)arg2 animated:(_Bool)arg3;
- (void)userLastActiveDate:(id)arg1;
- (void)safepayDidFinishWithDict:(id)arg1;
- (id)match:(id)arg1 withPattern:(id)arg2 index:(int)arg3;
- (_Bool)serviceSeedingEventDidComeWithController:(id)arg1 event:(int)arg2 paramDict:(id)arg3;
- (void)notifyLastMessage;
- (void)notifyThirdPartyAccountsChange;
- (void)notifyFollow;
- (void)notifyUnfollow;
- (void)postNotifcation:(id)arg1 params:(id)arg2;
- (void)thirdPartyAccountDataRequestAddingUriFailWithError:(id)arg1;
- (void)thirdPartyAccountDataDidLoadAddingUri:(id)arg1;
- (void)contextClear;
- (void)changePublicAccout:(id)arg1;
- (void)addThirdPartyAccount;
- (void)webViewControllerCheckedForUrl:(id)arg1 shareInfo:(id)arg2;
- (void)webViewControllerForceForUrl:(id)arg1 hasPPChat:(_Bool)arg2;
- (void)webViewControllerForUrl:(id)arg1;
- (void)unregisterH5Api:(id)arg1;
- (void)registerH5Api:(id)arg1 H5Service:(id)arg2;
- (void)webViewControllerForUrlInternel:(id)arg1 withH5Options:(id)arg2 shareInfo:(id)arg3 isChecked:(_Bool)arg4 isForced:(_Bool)arg5;
- (id)getDefaultShareContentForSource:(id)arg1;
- (id)getShareContentForWeibo:(id)arg1 title:(id)arg2 publicName:(id)arg3;
- (CDUnknownBlockType)shareHandlerForUrl:(id)arg1 shareInfo:(id)arg2 bizType:(id)arg3;
- (void)dealloc;
- (void)clearDataForPublicId:(id)arg1;
- (void)onH5ShareChannelSelect:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

