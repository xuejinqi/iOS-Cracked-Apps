//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBizNetworkLogicDelegate.h"

@class NSString;

@interface TBStoryActivityMgr : NSObject <TBBizNetworkLogicDelegate>
{
    unsigned long long _topicId;
    id <TBStoryActivityMgrDelegate> _delegate;
}

@property(nonatomic) __weak id <TBStoryActivityMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleRspActivityList:(id)arg1 withRequestModel:(id)arg2 withLocalErr:(id)arg3;
- (void)handleRspActivityInfo:(id)arg1 withRequestModel:(id)arg2 withLocalErr:(id)arg3;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)requestActivityCardList:(_Bool)arg1;
- (void)loadMoreActivityCardList;
- (void)refreshActivityCardList;
- (id)getActivityCardListCache;
- (void)requestActivityInfo:(unsigned long long)arg1;
- (id)getActivityInfoCache;
- (id)initWithTopicId:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

