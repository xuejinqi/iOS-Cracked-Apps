//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, TBErrorInfo, TBFeedFeatureModel, TBRspGetUserGuide;

@protocol TBStoryMgrDelegate <NSObject>
- (void)onHandleError:(TBErrorInfo *)arg1;
- (void)onRefreshData;
- (void)onCompleteFeedList:(_Bool)arg1;
- (void)onCompleteTodayFeedInfo:(TBFeedFeatureModel *)arg1;
- (void)onCompleteUserSelfInfo:(NSDictionary *)arg1;
- (void)onCompleteGuideModel:(TBRspGetUserGuide *)arg1 withErrorInfo:(TBErrorInfo *)arg2;
- (void)onCompleteVideoList:(NSArray *)arg1 withError:(TBErrorInfo *)arg2;
- (void)onCompleteVideoList:(NSDictionary *)arg1;
@end

