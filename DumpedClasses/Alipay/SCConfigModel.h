//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSNumber, NSString;

@interface SCConfigModel : NSObject <NSCoding>
{
    NSString *_userId;
    NSString *_province;
    NSString *_area;
    NSString *_exposedAlipayAccount;
    NSNumber *_hasExposedAlipayAccount;
    NSString *_slogan;
    NSNumber *_isShowMsgDetail;
    NSNumber *_isSoundEnabled;
    NSNumber *_isVibrateEnabled;
    NSNumber *_isAddMeNeedConfirm;
    NSNumber *_isSearchByPhoneEnabled;
    NSNumber *_isSearchByTbEnabled;
    NSNumber *_isSearchByEmailEnabled;
    NSNumber *_isAllowRecommendFriend2Me;
    NSNumber *_hasPhone;
    NSNumber *_hasTbName;
    NSNumber *_hasEmail;
    NSNumber *_isReceiverModeEnabled;
    NSNumber *_isOpenMyFriends;
    NSNumber *_isOpenMyAge;
    NSNumber *_canModifyAge;
    NSNumber *_canModifyGender;
    NSNumber *_isPublicRealName;
    NSNumber *_receiveSocialPush;
    NSNumber *_isAllowStrangerSeeMy10Feeds;
    NSNumber *_isAllowHimSeeMyFeeds;
    NSNumber *_isNotSeeHisFeeds;
    NSArray *_extSwitchs;
    NSNumber *_isRecvBirthRemind;
}

@property(retain, nonatomic) NSNumber *isRecvBirthRemind; // @synthesize isRecvBirthRemind=_isRecvBirthRemind;
@property(retain, nonatomic) NSArray *extSwitchs; // @synthesize extSwitchs=_extSwitchs;
@property(retain, nonatomic) NSNumber *isNotSeeHisFeeds; // @synthesize isNotSeeHisFeeds=_isNotSeeHisFeeds;
@property(retain, nonatomic) NSNumber *isAllowHimSeeMyFeeds; // @synthesize isAllowHimSeeMyFeeds=_isAllowHimSeeMyFeeds;
@property(retain, nonatomic) NSNumber *isAllowStrangerSeeMy10Feeds; // @synthesize isAllowStrangerSeeMy10Feeds=_isAllowStrangerSeeMy10Feeds;
@property(retain, nonatomic) NSNumber *receiveSocialPush; // @synthesize receiveSocialPush=_receiveSocialPush;
@property(retain, nonatomic) NSNumber *isPublicRealName; // @synthesize isPublicRealName=_isPublicRealName;
@property(retain, nonatomic) NSNumber *canModifyGender; // @synthesize canModifyGender=_canModifyGender;
@property(retain, nonatomic) NSNumber *canModifyAge; // @synthesize canModifyAge=_canModifyAge;
@property(retain, nonatomic) NSNumber *isOpenMyAge; // @synthesize isOpenMyAge=_isOpenMyAge;
@property(retain, nonatomic) NSNumber *isOpenMyFriends; // @synthesize isOpenMyFriends=_isOpenMyFriends;
@property(retain, nonatomic) NSNumber *isReceiverModeEnabled; // @synthesize isReceiverModeEnabled=_isReceiverModeEnabled;
@property(retain, nonatomic) NSNumber *hasEmail; // @synthesize hasEmail=_hasEmail;
@property(retain, nonatomic) NSNumber *hasTbName; // @synthesize hasTbName=_hasTbName;
@property(retain, nonatomic) NSNumber *hasPhone; // @synthesize hasPhone=_hasPhone;
@property(retain, nonatomic) NSNumber *isAllowRecommendFriend2Me; // @synthesize isAllowRecommendFriend2Me=_isAllowRecommendFriend2Me;
@property(retain, nonatomic) NSNumber *isSearchByEmailEnabled; // @synthesize isSearchByEmailEnabled=_isSearchByEmailEnabled;
@property(retain, nonatomic) NSNumber *isSearchByTbEnabled; // @synthesize isSearchByTbEnabled=_isSearchByTbEnabled;
@property(retain, nonatomic) NSNumber *isSearchByPhoneEnabled; // @synthesize isSearchByPhoneEnabled=_isSearchByPhoneEnabled;
@property(retain, nonatomic) NSNumber *isAddMeNeedConfirm; // @synthesize isAddMeNeedConfirm=_isAddMeNeedConfirm;
@property(retain, nonatomic) NSNumber *isVibrateEnabled; // @synthesize isVibrateEnabled=_isVibrateEnabled;
@property(retain, nonatomic) NSNumber *isSoundEnabled; // @synthesize isSoundEnabled=_isSoundEnabled;
@property(retain, nonatomic) NSNumber *isShowMsgDetail; // @synthesize isShowMsgDetail=_isShowMsgDetail;
@property(retain, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(retain, nonatomic) NSNumber *hasExposedAlipayAccount; // @synthesize hasExposedAlipayAccount=_hasExposedAlipayAccount;
@property(retain, nonatomic) NSString *exposedAlipayAccount; // @synthesize exposedAlipayAccount=_exposedAlipayAccount;
@property(retain, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

