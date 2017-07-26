//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQProtoBufferService : NSObject
{
    NSMutableDictionary *_callbacks;
}

+ (id)sharedService;
- (void)invokeCallbackWithSeq:(int)arg1 message:(id)arg2 errorCode:(id)arg3;
- (void)handleTCSignalChannelError:(id)arg1;
- (void)handleTCSignalChannelDidReceiveResponse:(id)arg1;
- (void)cancelSending:(int)arg1;
- (unsigned int)sendData:(id)arg1 withCmd:(id)arg2 observer:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (unsigned int)sendMessage:(struct MessageLite *)arg1 withCmd:(id)arg2 observer:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (_Bool)parseMessage:(struct MessageLite *)arg1 fromData:(id)arg2;
- (id)serialize:(struct MessageLite *)arg1;
- (void)dealloc;
- (id)init;

@end

