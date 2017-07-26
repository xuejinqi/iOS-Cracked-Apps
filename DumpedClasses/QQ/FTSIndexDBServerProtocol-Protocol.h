//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, IndexSearchResultModel, NSArray, NSSet, NSString, QQMessageModel;

@protocol FTSIndexDBServerProtocol <NSObject>
+ (QQMessageModel *)ConvertIndexSearchResultModelToQQMessageModel:(IndexSearchResultModel *)arg1;
- (long long)MySessionType;
- (long long)MyFilterType;
- (QQMessageModel *)getMsg:(NSString *)arg1 conversationUin:(NSString *)arg2 inDb:(FMDatabase *)arg3;
- (NSArray *)getSearchResults:(NSArray *)arg1 keyWord:(NSString *)arg2;
- (NSArray *)getSearchResultsList:(NSArray *)arg1 isNeedExtSearch:(_Bool)arg2;

@optional
- (NSSet *)getExtSearchResultList:(NSArray *)arg1 inDB:(FMDatabase *)arg2;
@end

