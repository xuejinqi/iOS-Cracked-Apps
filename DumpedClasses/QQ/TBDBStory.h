//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabaseQueue, NSObject<OS_dispatch_queue>, TBDBTableFriendInfo, TBDBTableStoryInfo, TBDBTableUtilCaches, TBDBTableVideoInfo;

@interface TBDBStory : NSObject
{
    NSObject<OS_dispatch_queue> *_handleDBQueue;
    FMDatabaseQueue *_databaseQueue;
    TBDBTableStoryInfo *_tableStoryInfo;
    TBDBTableFriendInfo *_tableFriendInfo;
    TBDBTableUtilCaches *_tableUtilCaches;
    TBDBTableVideoInfo *_tableVideoInfo;
}

+ (id)sharedInstance;
- (void)changeAccount:(id)arg1;
- (id)getDBPath:(id)arg1;
- (void)doInitNotification;
- (void)doInitDBObject;
- (void)doInitData;
- (void)dealloc;
- (id)init;
- (id)getBatchVideoInfoWithVid:(id)arg1;
- (void)updateVideoInfoWithModel:(id)arg1;
- (void)deleteStoryInfoWithVid:(id)arg1;
- (void)deleteStoryInfoWithUid:(id)arg1 withPullType:(id)arg2;
- (id)getStoryInfoWithUid:(id)arg1 withPullType:(id)arg2;
- (void)updateStoryInfoWithModel:(id)arg1 withPullType:(id)arg2 withModel:(id)arg3;
- (void)deleteAllUtilCachesWithType:(unsigned int)arg1 withUnionID:(id)arg2;
- (void)deleteUtilCaches:(unsigned int)arg1 withKey:(id)arg2 withUnionID:(id)arg3;
- (id)getUtilCaches:(unsigned int)arg1 withUnionID:(id)arg2;
- (void)updateUtilCachesWithModel:(unsigned int)arg1 withKey:(id)arg2 withUnionID:(id)arg3 withModel:(id)arg4;

@end

