//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSMutableDictionary;

@interface QQRecommendFriendsExposureDatabase : NSObject
{
    FMDatabase *_db;
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (void)close;
- (void)clearDataWithUin:(long long)arg1;
- (id)readDataWithUin:(unsigned long long)arg1;
- (void)persist;
- (id)parseRecord:(id)arg1;
- (void)addExposure:(id)arg1;
- (void)insertRecordWithFriend:(id)arg1;
- (id)keyWithExposure:(id)arg1;
- (void)createTables;
- (void)dealloc;
- (id)init;

@end

