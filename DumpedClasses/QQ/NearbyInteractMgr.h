//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NearbyInteractMgr : NSObject
{
}

+ (id)shareInstance;
- (void)parseMsgType0x210SubMsgType0xd7:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3;
- (void)msgType0x210_0xd7Received:(id)arg1;
- (void)updateBoxInfo:(id)arg1;
- (void)boxInfoUpdateSucced:(id)arg1;
- (void)reqNearbyInteractMyBoxInfo:(int)arg1;
- (void)deleteBoxWithType:(unsigned long long)arg1;
- (void)onAccountChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

