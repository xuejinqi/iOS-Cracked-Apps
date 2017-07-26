//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IPacketSendResultHandler.h"

@class NSMutableArray, NSString;

@interface QQCustomTipsPbProxy : NSObject <IPacketSendResultHandler>
{
    NSString *_readConfirmLicense;
    NSMutableArray *_pushSeqs;
}

+ (id)sharedInstance;
- (void)notifyMsgSentResult:(id)arg1 result:(int)arg2;
- (void)readedConfirmReport:(id)arg1 seq:(unsigned int)arg2;
- (void)dealloc;
- (id)getReadConfirmLicense;
- (_Bool)didRecievedDiscussGroupCustomTipsRsp:(char *)arg1 bufferLen:(unsigned int)arg2 seq:(unsigned int)arg3 readConfirmParams:(id)arg4;
- (_Bool)didRecievedCustomTipsRsp:(char *)arg1 bufferLen:(unsigned int)arg2 seq:(unsigned int)arg3 readConfirmParams:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

