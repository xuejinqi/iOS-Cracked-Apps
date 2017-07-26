//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface TCSignalChannelService : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_sigKeyForCmd;
}

+ (void)removeChannelObserver:(id)arg1 forCmd:(id)arg2;
+ (void)addChannelObserver:(id)arg1 forCmd:(id)arg2 success:(SEL)arg3 fail:(SEL)arg4;
+ (id)RegisteredCommands;
+ (id)GetInstance;
@property(retain, nonatomic) NSMutableDictionary *sigKeyForCmd; // @synthesize sigKeyForCmd=_sigKeyForCmd;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)handleRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)cancelSending:(int)arg1;
- (_Bool)sendDataWithNullKey:(id)arg1 withCmd:(id)arg2 uin:(id)arg3 pSeq:(int *)arg4 timeOut:(int)arg5;
- (_Bool)sendData:(id)arg1 withCmd:(id)arg2 uin:(id)arg3 pSeq:(int *)arg4 timeOut:(int)arg5;
- (_Bool)sendData:(id)arg1 withCmd:(id)arg2 pSeq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (_Bool)sendOidbData:(id)arg1 withCmd:(id)arg2 pSeq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5 answerFlag:(BOOL)arg6;
- (void)uninit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

