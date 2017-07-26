//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQMessageProcessor.h"
#import "SimpleAlertViewDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, NSTimer;

@interface MSFProtocolManager : NSObject <SimpleAlertViewDelegate, IQQMessageProcessor>
{
    NSTimer *timer;
    int packForSig;
    NSTimer *_pushActTimer;
    _Bool show;
    _Bool _isGetSigList;
    NSMutableDictionary *_sigListDic;
    _Bool _shouldNotGetGroupList;
    NSString *_uinToModiRemark;
    NSString *_modiRemarkStr;
    NSString *_forceOfflineTitle;
    NSString *_forceOfflineTips;
    NSDictionary *_loginEventSuccessParam;
    _Bool _launchedByWatch;
    int _xo;
}

+ (id)GetInstance;
@property(nonatomic) _Bool show; // @synthesize show;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer;
- (void)notifyRespPBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3 type:(int)arg4 seqId:(int)arg5;
- (void)getReqPBBuffer:(char **)arg1 buffEnd:(char **)arg2 seqId:(int)arg3 type:(int)arg4;
- (id)processMsgEncapsulation:(id)arg1;
- (void)newShareMessageReport:(id)arg1;
- (void)onPacketError:(id)arg1;
- (void)msfSendAndRecvRequestResult:(id)arg1;
- (void)AnswerAddedFriend:(long long)arg1 addUin:(long long)arg2 myAllowFlag:(int)arg3 groupid:(int)arg4 refuseReason:(id)arg5;
- (void)SetOnlineStatusForVersionForth;
- (void)appendSendingFailedMsg:(long long)arg1 msgContent:(id)arg2 errorCode:(int)arg3 errorMsg:(id)arg4 sendType:(int)arg5;
- (void)OnMSFNetworkApnStateNotification:(id)arg1;
- (void)OnMSFNetworkStateNotification:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (void)ActionRequestOffline:(id)arg1;
- (void)notifyQQKickOffline;
- (void)RequestForceOffline:(const char *)arg1 tips:(const char *)arg2;
- (void)GetOLFriendStatucForTabClickWithFrequencyControl:(int)arg1;
- (void)EnterBackGround;
- (void)ActionPushSerCmdSet:(id)arg1;
- (void)sendAPNSConfig:(int)arg1;
- (void)ActionOnAnswerAddedFriendResponse:(id)arg1;
- (void)DeleteFriend:(id)arg1;
- (void)startAddFriendWithOpenID:(id)arg1 appID:(id)arg2 sourceID:(int)arg3 sourceSubID:(int)arg4;
- (void)StartAddSearchFriend:(id)arg1 sourceID:(int)arg2 sourceSubID:(int)arg3;
- (void)StartAddContactFriend:(id)arg1;
- (void)StartAddFriend:(id)arg1;
- (int)StartAddFriend:(id)arg1 sourceID:(int)arg2 sourceSubID:(int)arg3;
- (void)ContactBatchAddFriend:(id)arg1 message:(id)arg2 pkgIndex:(int)arg3 sourceID:(int)arg4 sourceSubID:(int)arg5 resultArray:(id)arg6;
- (void)AddFriendWithUin:(long long)arg1 openID:(id)arg2 appID:(id)arg3 message:(id)arg4 addUinSetting:(int)arg5 myAllowFlag:(int)arg6 group:(int)arg7 autoAdd:(_Bool)arg8 sig:(id)arg9 sourceID:(int)arg10 sourceSubID:(int)arg11 bothwayFriend:(_Bool)arg12 remark:(id)arg13 isShowMyCard:(_Bool)arg14;
- (int)AddFriend:(long long)arg1 addUin:(long long)arg2 message:(id)arg3 addUinSetting:(int)arg4 myAllowFlag:(int)arg5 group:(int)arg6 autoAdd:(_Bool)arg7 sig:(id)arg8 sourceID:(int)arg9 sourceSubID:(int)arg10 phoneCode:(id)arg11 bothwayFriend:(_Bool)arg12 remark:(id)arg13 isShowMyCard:(_Bool)arg14;
- (void)AddFriendFromGroup:(long long)arg1 addUin:(long long)arg2 message:(id)arg3 addUinSetting:(int)arg4 myAllowFlag:(int)arg5 group:(int)arg6 autoAdd:(_Bool)arg7 sig:(id)arg8 sourceID:(int)arg9 sourceSubID:(int)arg10 groupUin:(unsigned long long)arg11 remark:(id)arg12 isShowMyCard:(_Bool)arg13;
- (void)RequestCheckFriend:(id)arg1;
- (void)RequestFullInfo:(id)arg1;
- (void)RequestOnlineFriendsWithObject:(id)arg1;
- (void)RequestOnlineFriends:(int)arg1;
- (void)RequestBuddyList:(int)arg1 uinList:(id)arg2;
- (void)stopHeartBeat;
- (void)startHeartBeat;
- (void)GetGroupMemberRemark:(id)arg1;
- (void)ActionGetGroupMemberRemark:(id)arg1;
- (void)SendGroupFilter:(_Bool)arg1;
- (void)RequestGetGroupListOnLogin;
- (int)RequestGetGroupListManually;
- (int)RequestGetGroupList;
- (void)onAccountLogout:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)ActionOnContactBatchAddFriendResponse:(id)arg1;
- (void)ActionOnAddFriendResponse:(id)arg1;
- (void)ActionOnUserAddFriendSettingResponse:(id)arg1;
- (void)ActionOnDeleteFriendResponse:(id)arg1;
- (void)ActionCheckFriend:(id)arg1;
- (void)ActionHeartBeat;
- (void)ActionGetGroupInfo:(id)arg1;
- (void)delaySaveGroupExInfo;
- (void)ActionGetMyInfo:(id)arg1;
- (void)SaveAccostMsgToDataBase:(id)arg1;
- (void)SaveQQMsgToDataBase:(id)arg1;
- (void)SaveQQMsgToDataBase:(id)arg1 sound:(_Bool)arg2 postNotification:(_Bool)arg3;
- (void)SaveQQMsgToDataBase:(id)arg1 sound:(_Bool)arg2;
- (void)ActionUpdateContactFriendStatus:(id)arg1 uin:(long long)arg2;
- (void)callBackModifyRemark:(id)arg1;
- (void)notifyModifyRemarkError;
- (void)ModifyFriendRemark:(id)arg1;
- (void)delayMotifyFriendRemark:(id)arg1 remark:(id)arg2;
- (void)ActionPushHeartBeat;
- (void)ActionValidateInBackground;
- (void)getGroupListWithFrequencyControl;
- (void)setShouldGetGroupList;
- (void)onGetGroupListSuccess;
- (void)onLoginProxySuccess;
- (void)onLoginEventLostWhenKickOffline:(id)arg1;
- (void)onLoginEventLost:(id)arg1;
- (void)onLoginEventFail:(id)arg1;
- (void)onLoginEventSuccessWithUserNotChange:(id)arg1;
- (void)onLoginEventSuccess:(id)arg1;
- (void)loginSuccessForWebViewAndOffline;
- (void)loginSuccessForStuffPhase:(id)arg1;
- (void)loginSuccessForPublicAccountPahse;
- (void)loginSuccessForPushbannerPahse;
- (void)loginSuccessForFriendListLoadPhase;
- (void)loginSuccessForQZoneLoadPhase;
- (void)loginSuccessForContactsPhase;
- (void)loginSuccessForLoginViewPhase;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool launchedByWatch; // @dynamic launchedByWatch;
@property(retain, nonatomic) NSDictionary *loginEventSuccessParam; // @dynamic loginEventSuccessParam;
@property(retain, nonatomic) NSTimer *pushActTimer; // @dynamic pushActTimer;
@property(retain, nonatomic) NSMutableDictionary *sigListDic; // @dynamic sigListDic;
@property(readonly) Class superclass;

@end

