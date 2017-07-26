//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface QQSideAccountEngine : NSObject <IEngineDispatchDelegate>
{
    id <QQSideAccountDelegate> _delegate;
}

+ (id)shareInstance;
@property(nonatomic) id <QQSideAccountDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)reportSideAccountStatus:(int)arg1 cmd:(int)arg2 bindUin:(unsigned long long)arg3 key:(id)arg4 afterLogOut:(_Bool)arg5;
- (void)handleBindUinMsgReadedConfirm:(int)arg1 cookie:(id)arg2;
- (void)handleSideAccountPushIsBind:(_Bool)arg1 uin:(long long)arg2 bindUin:(long long)arg3 time:(unsigned int)arg4;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)requestSideAccountMessage:(long long)arg1 syncFlag:(int)arg2 cookie:(id)arg3;
- (_Bool)requestLoginedAccountsUnreadInfo:(id)arg1 withReqType:(int)arg2;
- (_Bool)requestUinMsgReadedConfirm:(id)arg1 WithBindUin:(long long)arg2;
- (_Bool)requestUinMsgReadedConfirm:(id)arg1;
- (_Bool)requestBindRelationShip;
- (_Bool)requestUnbind:(long long)arg1;
- (_Bool)requestBind:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

