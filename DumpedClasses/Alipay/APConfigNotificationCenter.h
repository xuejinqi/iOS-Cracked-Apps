//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRecursiveLock;

@interface APConfigNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_postQueue;
    NSMutableDictionary *_observerMap;
    NSRecursiveLock *_observerLock;
}

+ (id)defaultCenter;
@property(retain, nonatomic) NSRecursiveLock *observerLock; // @synthesize observerLock=_observerLock;
@property(retain, nonatomic) NSMutableDictionary *observerMap; // @synthesize observerMap=_observerMap;
- (void).cxx_destruct;
- (void)postNotificationConfigs:(id)arg1;
- (void)postNotificationKey:(id)arg1 value:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 key:(id)arg2;
- (_Bool)addObserver:(id)arg1 key:(id)arg2;
- (id)init;

@end

