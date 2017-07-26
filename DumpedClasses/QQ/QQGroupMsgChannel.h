//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "IPushTransMsgHandleDelegate.h"

@class NSString, QQGroupMsgHandler;

@interface QQGroupMsgChannel : NSObject <IEngineDispatchDelegate, IPushTransMsgHandleDelegate>
{
    QQGroupMsgHandler *_groupMsgHandler;
}

+ (id)getInstance;
@property(readonly, nonatomic) QQGroupMsgHandler *groupMsgHandler; // @synthesize groupMsgHandler=_groupMsgHandler;
- (id)parseOnlinePush:(struct PbPushMsg *)arg1;
- (void)handlePushTransMsg:(struct PbMsgInfo *)arg1 withType:(unsigned int)arg2 subType:(unsigned int)arg3 playSound:(_Bool *)arg4;
- (_Bool)handleOfflinePush:(const struct SvcResponsePbPullGroupMsgProxy *)arg1 seqId:(int)arg2 cmd:(const char *)arg3 contextData:(id)arg4;
- (_Bool)handleOnlinePush:(struct PbPushMsg *)arg1 seqId:(int)arg2 cmd:(const char *)arg3;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)parseOfflineGroupMsg:(const struct PbGetGroupMsgResp *)arg1;
- (void)notifyError:(id)arg1;
- (void)dealloc;
- (void)doInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

