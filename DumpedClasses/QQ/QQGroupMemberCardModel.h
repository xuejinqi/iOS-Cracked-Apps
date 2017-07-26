//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class NSString, StoryInfoModel;

@interface QQGroupMemberCardModel : QQGroupPropertyModel
{
    NSString *_speciaTitle;
    unsigned long long _speciaTitleExpireTime;
}

@property(nonatomic) unsigned long long speciaTitleExpireTime; // @synthesize speciaTitleExpireTime=_speciaTitleExpireTime;
- (void).cxx_destruct;
- (_Bool)specialTitleExpire;
@property(copy, nonatomic) NSString *speciaTitle; // @synthesize speciaTitle=_speciaTitle;
- (_Bool)isSpeciaTitleAvailable;
- (id)init;

// Remaining properties
@property(nonatomic) int VIPLevel; // @dynamic VIPLevel;
@property(nonatomic) int age; // @dynamic age;
@property(nonatomic) long long cachedTime; // @dynamic cachedTime;
@property(nonatomic) long long distance; // @dynamic distance;
@property(nonatomic) int gender; // @dynamic gender;
@property(copy, nonatomic) NSString *groupCode; // @dynamic groupCode;
@property(copy, nonatomic) NSString *groupMemberUin; // @dynamic groupMemberUin;
@property(nonatomic) unsigned int groupType; // @dynamic groupType;
@property(copy, nonatomic) NSString *groupUin; // @dynamic groupUin;
@property(nonatomic) _Bool isAllowModifyGroupRemark; // @dynamic isAllowModifyGroupRemark;
@property(nonatomic) _Bool isAnnualVIP; // @dynamic isAnnualVIP;
@property(nonatomic) _Bool isCreditWarnning; // @dynamic isCreditWarnning;
@property(nonatomic) _Bool isFriend; // @dynamic isFriend;
@property(nonatomic) _Bool isShielded; // @dynamic isShielded;
@property(nonatomic) _Bool isSpeekConcerned; // @dynamic isSpeekConcerned;
@property(nonatomic) _Bool isSuperVIP; // @dynamic isSuperVIP;
@property(nonatomic) _Bool isVIP; // @dynamic isVIP;
@property(nonatomic) long long joinGroupTime; // @dynamic joinGroupTime;
@property(nonatomic) _Bool locationShared; // @dynamic locationShared;
@property(nonatomic) long long memberGroupRole; // @dynamic memberGroupRole;
@property(copy, nonatomic) NSString *nick; // @dynamic nick;
@property(copy, nonatomic) NSString *provinceAndCity; // @dynamic provinceAndCity;
@property(retain, nonatomic) StoryInfoModel *storyInfo; // @dynamic storyInfo;

@end

