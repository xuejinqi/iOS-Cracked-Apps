//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KBCONTENTApiResult.h"

@class KBCONTENTContentDetail, KBCONTENTPraiseCountInfo, NSArray;

@interface KBCONTENTContentDetailQueryResp : KBCONTENTApiResult
{
    int _userFollowStatus;
    int _replyCount;
    KBCONTENTContentDetail *_contentDetail;
    NSArray *_mentionedShops;
    NSArray *_recommendedShops;
    NSArray *_recommendedContents;
    KBCONTENTPraiseCountInfo *_praiseCountInfo;
}

+ (Class)recommendedContentsElementClass;
+ (Class)recommendedShopsElementClass;
+ (Class)mentionedShopsElementClass;
@property(nonatomic) int replyCount; // @synthesize replyCount=_replyCount;
@property(nonatomic) int userFollowStatus; // @synthesize userFollowStatus=_userFollowStatus;
@property(retain, nonatomic) KBCONTENTPraiseCountInfo *praiseCountInfo; // @synthesize praiseCountInfo=_praiseCountInfo;
@property(retain, nonatomic) NSArray *recommendedContents; // @synthesize recommendedContents=_recommendedContents;
@property(retain, nonatomic) NSArray *recommendedShops; // @synthesize recommendedShops=_recommendedShops;
@property(retain, nonatomic) NSArray *mentionedShops; // @synthesize mentionedShops=_mentionedShops;
@property(retain, nonatomic) KBCONTENTContentDetail *contentDetail; // @synthesize contentDetail=_contentDetail;
- (void).cxx_destruct;

@end

