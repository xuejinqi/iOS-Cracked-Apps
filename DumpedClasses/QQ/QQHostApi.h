//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQHostApi : NSObject
{
    id <QQBizDelegate> _hostApiDelegate;
}

+ (_Bool)rdmDataRport:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5 reportImmediately:(_Bool)arg6;
+ (id)getUinAndSID;
+ (id)getNetworkStatus;
+ (_Bool)SearchQQuinInQQAccount:(id)arg1;
+ (id)getWTLoginSDK;
+ (id)APICaller;
+ (_Bool)isPassViewShow;
+ (_Bool)isLogin;
+ (_Bool)addNewDataReportLog:(id)arg1 opType:(id)arg2 opName:(id)arg3;
+ (_Bool)addDataReportLog:(id)arg1;
+ (_Bool)gotoQRCodeScanPage:(id)arg1;
+ (id)getUISkinsImage_navigationViewImage:(id)arg1;
+ (id)getUISkinsImage_IconImageForName:(id)arg1 cache:(_Bool)arg2;
+ (id)getAccountList;
+ (id)getAccountKey:(id)arg1;
+ (id)getKey;
+ (id)getGroupInfo:(id)arg1;
+ (id)getUserInfo;
+ (id)QQCleanTips;
+ (id)QQLoadingTips:(id)arg1;
+ (id)QQTips:(id)arg1 success:(_Bool)arg2;
+ (id)QQAlart:(long long)arg1 button:(id)arg2 title:(id)arg3 message:(id)arg4 delegate:(id)arg5 tag:(long long)arg6;
+ (_Bool)showCoupon:(id)arg1;
+ (_Bool)showUserSummary:(id)arg1;
+ (_Bool)showMarketFace:(id)arg1;
+ (_Bool)showChatAvatarSetting:(id)arg1;
+ (_Bool)sendMsg:(id)arg1 toPublicAccount:(unsigned long long)arg2 inNavigationController:(id)arg3;
+ (_Bool)showPublicAccountCard:(id)arg1 navigationController:(id)arg2;
+ (_Bool)shareQRCodeContent:(id)arg1;
+ (_Bool)shareQRCodeCard:(id)arg1;
+ (_Bool)gotoGroupPage:(id)arg1;
+ (_Bool)gotoFriendPageAfter:(id)arg1 isOpenWpa:(int)arg2;
+ (_Bool)gotoFriendPage:(id)arg1 isOpenWpa:(int)arg2;
+ (_Bool)setDelegate:(id)arg1;
+ (id)GetInstance;
@property(retain, nonatomic) id <QQBizDelegate> hostApiDelegate; // @synthesize hostApiDelegate=_hostApiDelegate;
- (void).cxx_destruct;
- (void)protocol:(id)arg1 forwardInvocation:(id)arg2;

@end

