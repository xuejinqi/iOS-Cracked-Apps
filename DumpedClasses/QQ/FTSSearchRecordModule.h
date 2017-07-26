//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSSearchRecordDelegate.h"

@class NSMutableArray, NSRecursiveLock, NSString;

@interface FTSSearchRecordModule : NSObject <FTSSearchRecordDelegate>
{
    NSMutableArray *_searchRecords;
    NSString *_lastKeyword;
    NSRecursiveLock *_searchRecordLock;
    NSString *_currentUin;
}

- (void).cxx_destruct;
- (void)setLastSearchKeyword:(id)arg1;
- (id)getLastSearchKeyword;
- (void)sortSearchRecords;
- (void)deleteSearchRecord:(id)arg1;
- (void)clickSearchRecord:(id)arg1;
- (id)getAllSearchRecords;
- (void)asyncSaveSearchRecord;
- (_Bool)verifySearchRecord:(id)arg1;
- (void)verifySearchRecords;
- (void)syncLoadSearchRecord;
- (id)searchKeywordPath;
- (id)searchRecordPath;
- (id)searchRecordDir;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

