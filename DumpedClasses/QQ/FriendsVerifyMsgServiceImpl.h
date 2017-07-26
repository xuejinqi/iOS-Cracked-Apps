//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "IFriendsVerifyMsgService.h"
#import "IIncrUpdateDelegate.h"
#import "IMsgObserver.h"
#import "QuickReplyTaskDelegate.h"

@class FriendsVerifyMsgInfo, FriendsVerifyMsgStructMsgModle, NSMutableArray, NSMutableDictionary, NSString;

@interface FriendsVerifyMsgServiceImpl : NSObject <QuickReplyTaskDelegate, IFriendsVerifyMsgService, IEngineDispatchDelegate, IMsgObserver, IIncrUpdateDelegate>
{
    NSMutableDictionary *_requestDic;
    NSMutableDictionary *_requestStructMsgDic;
    NSMutableDictionary *_requestActionDic;
    NSMutableArray *_friendsVerifyMsgModleList;
    NSMutableArray *_nextPageFriendsVerifyMsgModleList;
    FriendsVerifyMsgInfo *_friendsVerifyMsgInfo;
    NSMutableDictionary *_pushFriendsVerifyMsgPeerUinTimeDic;
    _Bool _isLastPage;
    NSMutableArray *_addFriendList;
    _Bool _alreadySendFriendsAndGroupReq;
    NSMutableDictionary *_pushAddAcceptedMsgPeerUinTimeDic;
    NSMutableDictionary *_pushPobinMsgPeerUinTimeDic;
    NSMutableDictionary *_pushFriendsVerifyCloneInfoModelDic;
    NSMutableDictionary *_pushFriendsVerifyCloneTipsDicForDup;
    FriendsVerifyMsgStructMsgModle *_clearModel;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)didRecievedMsgFriendsVerifyMsgParser:(char *)arg1 dataLength:(int)arg2 msgSeq:(int)arg3;
- (void)notifyRespPBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3;
- (void)getReqPBBuffer:(char **)arg1 buffEnd:(char **)arg2;
- (void)reflashFriendsVerifyMsgListOnLoginSuccess;
- (void)requestLatestVerifyMsgListOnLoginOnMainThread;
- (void)cleanStepBeforeRequestLatestFriendsVerifyMsg;
- (void)requestLatestVerifyMsgListOnLogin;
- (void)requestLatestFriendsVerifyMsgListOnPushOnMainThread;
- (void)requestLatestFriendsVerifyMsgListOnPush;
- (void)getFriendListDelay;
- (void)mainThreadGetFriendList;
- (_Bool)isOldFriendsVerifyMsg:(int)arg1;
- (_Bool)isNeedUpdateFriendsList:(int)arg1;
- (void)updateFriendsList:(int)arg1 uin:(unsigned long long)arg2;
- (id)parseTLVList:(const char *)arg1 offSet:(int)arg2;
- (id)getTLVInfo:(const char *)arg1 msgType:(int)arg2;
- (id)handleMsg:(const Msg_f948e9b8 *)arg1;
- (_Bool)isFriendsVerifyCloneTipsDuplicate:(id)arg1;
- (void)showFriendsVerifyCloneTips:(id)arg1;
- (void)respFriendsVerifyMsgPushUpdate:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsgFriendsVerifyMsgAction:(CDStruct_7895f40e)arg1;
- (void)didRecievedMsgFriendsVerifyMsgReadOrClean:(CDStruct_7895f40e)arg1;
- (void)didRecievedMsgNextFriendsVerifyMsg:(CDStruct_7895f40e)arg1;
- (void)didRecievedMsgFriendsVerifyMsg:(CDStruct_7895f40e)arg1;
- (void)didRecievedMsgFriendsVerifyMsgDelete:(CDStruct_7895f40e)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)isConnected;
- (void)postUpdateUnreadCount;
- (void)quickReplyRequestFailed:(int)arg1;
- (void)quickReplyRequestSuccess:(id)arg1 seq:(int)arg2 buffer:(id)arg3;
- (int)requestFriendsVerifyMsgAction:(id)arg1 Action:(id)arg2;
- (int)requestFriendsVerifyMsgCleanWithCleanSeq;
- (int)requestFriendsVerifyMsgDeleteWithCleanSeqWithFriendVerifyModel:(id)arg1;
- (int)requestFriendsVerifyMsgCleanSingle:(id)arg1;
- (int)requestFriendsVerifyMsgClean;
- (int)requestFriendsVerifyMsgRead;
- (void)loadAddAcceptedMsgPeerUinTimeDic;
- (void)saveAddAcceptedMsgPeerUinTimeDic;
- (int)requestAddAcceptedMsgReportMsgReadStateForUin:(id)arg1;
- (int)requestOldFriendsVerifyMsgReportMsgReadState;
- (int)requestNextPageFriendsVerifyMsgList;
- (int)requestLatestVerifyMsgList:(id)arg1;
- (int)requestLatestFriendsVerifyMsgList:(id)arg1;
- (void)reportTValueOfFriendsVerifyCloneInfoForUin:(id)arg1 read:(_Bool)arg2 reply:(_Bool)arg3;
- (void)saveFriendsVerifyCloneInfoModelDic;
- (void)loadFriendsVerifyCloneInfoModelDic;
- (void)savePushPobinMsgPeerUinTimeDic;
- (void)loadPushPobinMsgPeerUinTimeDic;
- (void)savePushFriendsVerifyMsgPeerUinTimeDic;
- (void)loadPushFriendsVerifyMsgPeerUinTimeDic;
- (void)saveFriendsVerifyMsgModleList;
- (void)loadFriendsVerifyMsgModleList;
- (void)saveFriendsVerifyMsgInfo;
- (void)loadFriendsVerifyMsgInfo;
- (_Bool)isLastPageInFriendsVerifyMsgModleList;
- (_Bool)whetherSendFriendsAndGroupVerifyMsgReq;
- (id)getSafeMsgDisplay;
- (unsigned int)getFriVerifyMsgIsOver;
- (unsigned int)getSafeFriendsVerifyMsgUnReadCount;
- (unsigned int)getFriendsVerifyMsgUnReadCount;
- (id)getNextPageFriendsVerifyMsgModleList;
- (id)getSafeAllFriendsVerifyMsgModleList;
- (id)getAllFriendsVerifyMsgModleList;
- (void)friendsVerifyMsgReload;
- (void)friendsVerifyMsgClear;
- (void)resetFriendsVerifyMsgList:(id)arg1;
- (void)cleanUpFriendsVerifyMsgListWithArray:(id)arg1;
- (void)cleanUpFriendsVerifyMsgList;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

