//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface DTPushServiceConfigManager : NSObject
{
    NSMutableDictionary *_dict;
    NSRecursiveLock *_lock;
}

+ (id)shareDTPushServiceConfigManager;
- (void).cxx_destruct;
- (id)pathForPlist;
@property(retain, nonatomic) NSString *fileVersion;
- (id)getLastAlertTime;
- (void)setLastAlertTime:(id)arg1;
- (id)init;

@end

