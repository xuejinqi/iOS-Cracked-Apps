//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OFNodeListItem.h"

@class NSArray, NSString;

@interface ALPMainPassListItem : O2OFNodeListItem
{
    _Bool _canPresent;
    _Bool _isRead;
    _Bool _isInvalid;
    int _privilegeType;
    NSString *_passId;
    NSString *_partnerId;
    NSString *_serialNumber;
    NSString *_itemLogId;
    NSString *_type;
    NSString *_childType;
    NSString *_logo;
    NSString *_logoText;
    NSString *_secondLogoText;
    NSString *_bottomText;
    NSString *_backgroundColor;
    NSString *_status;
    NSString *_icon;
    NSString *_assets;
    NSString *_isPassShare;
    NSString *_shareNickName;
    NSString *_shareHeadImg;
    NSString *_shareUserId;
    NSString *_shareNickNameText;
    NSString *_shareCancel;
    NSString *_minus;
    NSArray *_tags;
    id _spmVC;
    NSString *_remarkTip;
    NSString *_backgroundImage;
    NSString *_groupType;
    NSString *_sectionId;
    NSString *_sectionTitle;
}

+ (id)nodeForItem:(id)arg1 Store:(id)arg2 Context:(id)arg3;
+ (id)createItemWithDto:(id)arg1 groupType:(id)arg2;
+ (id)itemWithDto:(id)arg1 groupType:(id)arg2 isInvalid:(_Bool)arg3;
+ (id)itemWithDto:(id)arg1 groupType:(id)arg2;
@property(nonatomic) _Bool isInvalid; // @synthesize isInvalid=_isInvalid;
@property(copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(copy, nonatomic) NSString *sectionId; // @synthesize sectionId=_sectionId;
@property(copy, nonatomic) NSString *groupType; // @synthesize groupType=_groupType;
@property(copy, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) NSString *remarkTip; // @synthesize remarkTip=_remarkTip;
@property(nonatomic) id spmVC; // @synthesize spmVC=_spmVC;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *minus; // @synthesize minus=_minus;
@property(retain, nonatomic) NSString *shareCancel; // @synthesize shareCancel=_shareCancel;
@property(retain, nonatomic) NSString *shareNickNameText; // @synthesize shareNickNameText=_shareNickNameText;
@property(retain, nonatomic) NSString *shareUserId; // @synthesize shareUserId=_shareUserId;
@property(retain, nonatomic) NSString *shareHeadImg; // @synthesize shareHeadImg=_shareHeadImg;
@property(retain, nonatomic) NSString *shareNickName; // @synthesize shareNickName=_shareNickName;
@property(retain, nonatomic) NSString *isPassShare; // @synthesize isPassShare=_isPassShare;
@property(nonatomic) _Bool isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) NSString *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool canPresent; // @synthesize canPresent=_canPresent;
@property(nonatomic) int privilegeType; // @synthesize privilegeType=_privilegeType;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *bottomText; // @synthesize bottomText=_bottomText;
@property(retain, nonatomic) NSString *secondLogoText; // @synthesize secondLogoText=_secondLogoText;
@property(retain, nonatomic) NSString *logoText; // @synthesize logoText=_logoText;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *childType; // @synthesize childType=_childType;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *itemLogId; // @synthesize itemLogId=_itemLogId;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
- (void).cxx_destruct;
- (void)updateModel;
- (float)itemHeight;
- (int)bizType;
- (void)autoKVCBinding:(id)arg1;

@end

