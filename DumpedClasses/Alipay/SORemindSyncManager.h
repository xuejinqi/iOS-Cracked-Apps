//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SORemindSyncManager : NSObject
{
    NSMutableArray *_syncKeys;
}

+ (void)updateOptionWithRemindSyncPayload:(id)arg1;
+ (void)updateORewardWithRemindSyncPayload:(id)arg1;
+ (void)updateWithRemindSyncPayload:(id)arg1;
@property(retain, nonatomic) NSMutableArray *syncKeys; // @synthesize syncKeys=_syncKeys;
- (void).cxx_destruct;
- (void)responseSORemindSyncUCFCOMS:(id)arg1;
- (void)dealloc;
- (id)init;

@end

