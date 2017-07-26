//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQOpenIDManager : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_pendingRequests;
}

+ (id)pathname;
+ (id)instance;
- (void)load;
- (void)save;
- (id)getOpenIDForUin:(id)arg1 appid:(id)arg2;
- (void)setOpenID:(id)arg1 forRequestID:(int)arg2;
- (void)setRequestID:(int)arg1 appid:(id)arg2 uin:(id)arg3;
- (void)setOpenID:(id)arg1 forUin:(id)arg2 andAppid:(id)arg3;
- (void)ActionRequestOpenKey:(id)arg1;
- (void)RequestOpenKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

