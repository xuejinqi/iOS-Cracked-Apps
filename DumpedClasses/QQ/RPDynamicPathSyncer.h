//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface RPDynamicPathSyncer : NSObject
{
}

- (void)restoreNumRedPotBusiToCache:(id)arg1;
- (void)restorePathsToCache:(id)arg1;
- (id)nowNumRedPots;
- (id)nowAppInfos;
- (void)storeNumRedPotToDisk:(id)arg1;
- (void)storeToDisk:(id)arg1;
@property(readonly, nonatomic) NSArray *previouslyAppInfos;
- (id)previouslyNumRedPots;
- (id)dynamicNumRedPotSyncerKey;
- (id)dynamicSyncerKey;

@end

