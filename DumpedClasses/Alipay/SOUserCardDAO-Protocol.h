//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDAOProtocol.h"

@class APDAOResult, NSArray, NSDate, NSNumber, NSString;

@protocol SOUserCardDAO <APDAOProtocol>
- (NSArray *)daoSelectCardListWithBizNos:(NSArray *)arg1 bizTypes:(NSArray *)arg2 sceneCodes:(NSArray *)arg3;
- (NSArray *)daoSelectCardListWithUserId:(NSString *)arg1 fromDate:(NSDate *)arg2 limit:(NSNumber *)arg3;
- (APDAOResult *)daoCleanCardWithUserId:(NSString *)arg1;
- (APDAOResult *)daoUpdateCardList:(NSArray *)arg1;
- (NSArray *)daoSelectCardListWithClientIdList:(NSArray *)arg1;
- (APDAOResult *)daoDeleteCardWithUserIdList:(NSArray *)arg1;
- (APDAOResult *)daoDeleteCardWithClientIdList:(NSArray *)arg1;
- (APDAOResult *)daoInsertCardList:(NSArray *)arg1;
@end

