//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray;

@interface TBGroupDynamicVideoItem : QQModel
{
    unsigned int _videoTotalCount;
    unsigned long long _groupId;
    NSArray *_groupRecentVideoList;
}

+ (id)createWithQQStory:(const struct GroupDynamicVideoItem *)arg1;
@property(retain, nonatomic) NSArray *groupRecentVideoList; // @synthesize groupRecentVideoList=_groupRecentVideoList;
@property(nonatomic) unsigned int videoTotalCount; // @synthesize videoTotalCount=_videoTotalCount;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
- (void)dealloc;
- (id)groupRecentVidList;

@end

