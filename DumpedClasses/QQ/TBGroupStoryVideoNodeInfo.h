//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface TBGroupStoryVideoNodeInfo : QQModel
{
    unsigned int _likeCount;
    unsigned int _commentCount;
    unsigned int _unionIDRole;
    NSString *_storyId;
    NSString *_vid;
    unsigned long long _uin;
    NSString *_uinonID;
    NSString *_coverUrl;
    NSString *_downloadUrl;
}

+ (id)createWithQQStory:(const struct GroupStoryVideoNodeInfo *)arg1;
@property(nonatomic) unsigned int unionIDRole; // @synthesize unionIDRole=_unionIDRole;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) unsigned int likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *uinonID; // @synthesize uinonID=_uinonID;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
- (void)dealloc;

@end

