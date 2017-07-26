//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class COMFeed, NSArray, NSString;

@interface COMQueryFeedDetailInfoResp : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) _Bool canReply; // @dynamic canReply;
@property(nonatomic) _Bool canShare; // @dynamic canShare;
@property(nonatomic) long long detailOpSet; // @dynamic detailOpSet;
@property(retain, nonatomic) COMFeed *feed; // @dynamic feed;
@property(readonly) _Bool hasCanReply; // @dynamic hasCanReply;
@property(readonly) _Bool hasCanShare; // @dynamic hasCanShare;
@property(readonly) _Bool hasDetailOpSet; // @dynamic hasDetailOpSet;
@property(readonly) _Bool hasFeed; // @dynamic hasFeed;
@property(readonly) _Bool hasIsAdmin; // @dynamic hasIsAdmin;
@property(readonly) _Bool hasIsForbiddenReply; // @dynamic hasIsForbiddenReply;
@property(readonly) _Bool hasLastReplyId; // @dynamic hasLastReplyId;
@property(readonly) _Bool hasMemo; // @dynamic hasMemo;
@property(readonly) _Bool hasMySceneName; // @dynamic hasMySceneName;
@property(readonly) _Bool hasPb_hasJoined; // @dynamic hasPb_hasJoined;
@property(readonly) _Bool hasPb_hasMore; // @dynamic hasPb_hasMore;
@property(readonly) _Bool hasRefuseReplyTip; // @dynamic hasRefuseReplyTip;
@property(readonly) _Bool hasResultStatus; // @dynamic hasResultStatus;
@property(readonly) _Bool hasShowForbiddenReply; // @dynamic hasShowForbiddenReply;
@property(nonatomic) _Bool isAdmin; // @dynamic isAdmin;
@property(nonatomic) _Bool isForbiddenReply; // @dynamic isForbiddenReply;
@property(retain, nonatomic) NSString *lastReplyId; // @dynamic lastReplyId;
@property(retain, nonatomic) NSString *memo; // @dynamic memo;
@property(retain, nonatomic) NSString *mySceneName; // @dynamic mySceneName;
@property(nonatomic) _Bool pb_hasJoined; // @dynamic pb_hasJoined;
@property(nonatomic) _Bool pb_hasMore; // @dynamic pb_hasMore;
@property(retain, nonatomic) NSArray *praiseList; // @dynamic praiseList;
@property(retain, nonatomic) NSString *refuseReplyTip; // @dynamic refuseReplyTip;
@property(retain, nonatomic) NSArray *replyList; // @dynamic replyList;
@property(retain, nonatomic) NSString *resultStatus; // @dynamic resultStatus;
@property(retain, nonatomic) NSArray *rewardList; // @dynamic rewardList;
@property(nonatomic) _Bool showForbiddenReply; // @dynamic showForbiddenReply;

@end

