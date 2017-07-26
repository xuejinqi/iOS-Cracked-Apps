//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BlueTaskThread, NSCondition, NSMutableArray, NSString;

@interface FavListSearcher : NSObject
{
    id <FavListSearcherDelegate> _delegate;
    BlueTaskThread *_taskthread;
    NSCondition *_condition;
    _Bool _isWorking;
    NSMutableArray *_resultList;
    NSMutableArray *_searchCacheList;
    NSString *_keyword;
    int _searchClass;
    unsigned int _filterFolder;
    unsigned long long _expectCount;
    _Bool _firstSearch;
    unsigned long long _lastSearchFavId;
    int _searchType;
    _Bool _isAsync;
    unsigned long long _pageSize;
}

@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;
- (int)doWorkWithCallThread:(id)arg1;
- (_Bool)isWorking;
- (void)callback:(id)arg1;
- (void)stop:(_Bool)arg1;
- (void)finishSearch;
- (void)continueSearch;
- (void)doSearch;
- (void)searchNextPage;
- (void)start:(id)arg1 class:(int)arg2 folder:(unsigned int)arg3 searchType:(int)arg4 isAsync:(_Bool)arg5;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

