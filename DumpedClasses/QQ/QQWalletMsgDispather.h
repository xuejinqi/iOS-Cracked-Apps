//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface QQWalletMsgDispather : NSObject
{
    NSMutableDictionary *_messages;
    NSDate *_lastCacheTime;
}

+ (id)shareManager;
@property(retain, nonatomic) NSDate *lastCacheTime; // @synthesize lastCacheTime=_lastCacheTime;
@property(retain, nonatomic) NSMutableDictionary *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (void)removeMsgesIfNeeded:(id)arg1;
- (_Bool)isDuplicatedMsg:(const void *)arg1 nLenght:(int)arg2;
- (void)didReceivedOfflineMsg:(struct CPBMessageDecoder *)arg1;
- (void)didReceivedOnlineMsg:(struct CPBMessageDecoder *)arg1;
- (void)didReceived2DBarCodeMsg:(const void *)arg1 nLength:(int)arg2;
- (void)didReceivedMsgOrigin:(const void *)arg1 nLength:(int)arg2 isOnline:(_Bool)arg3;
- (id)init;

@end

