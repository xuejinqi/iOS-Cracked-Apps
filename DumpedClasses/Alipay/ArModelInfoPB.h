//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class GiftUserViewInfoPB, LocationPB, NSData, NSString;

@interface ArModelInfoPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) _Bool available; // @dynamic available;
@property(retain, nonatomic) NSString *bizNo; // @dynamic bizNo;
@property(nonatomic) long long createTime; // @dynamic createTime;
@property(retain, nonatomic) GiftUserViewInfoPB *creator; // @dynamic creator;
@property(readonly) _Bool hasAvailable; // @dynamic hasAvailable;
@property(readonly) _Bool hasBizNo; // @dynamic hasBizNo;
@property(readonly) _Bool hasCreateTime; // @dynamic hasCreateTime;
@property(readonly) _Bool hasCreator; // @dynamic hasCreator;
@property(readonly) _Bool hasLimiter; // @dynamic hasLimiter;
@property(readonly) _Bool hasLocation; // @dynamic hasLocation;
@property(readonly) _Bool hasPfBytes; // @dynamic hasPfBytes;
@property(readonly) _Bool hasPicFeatures; // @dynamic hasPicFeatures;
@property(readonly) _Bool hasPreviewPicUrl; // @dynamic hasPreviewPicUrl;
@property(readonly) _Bool hasRemark; // @dynamic hasRemark;
@property(readonly) _Bool hasSign; // @dynamic hasSign;
@property(readonly) _Bool hasState; // @dynamic hasState;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(readonly) _Bool hasUnAvailableReason; // @dynamic hasUnAvailableReason;
@property(retain, nonatomic) NSString *limiter; // @dynamic limiter;
@property(retain, nonatomic) LocationPB *location; // @dynamic location;
@property(retain, nonatomic) NSData *pfBytes; // @dynamic pfBytes;
@property(retain, nonatomic) NSString *picFeatures; // @dynamic picFeatures;
@property(retain, nonatomic) NSString *previewPicUrl; // @dynamic previewPicUrl;
@property(retain, nonatomic) NSString *remark; // @dynamic remark;
@property(retain, nonatomic) NSString *sign; // @dynamic sign;
@property(retain, nonatomic) NSString *state; // @dynamic state;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) NSString *unAvailableReason; // @dynamic unAvailableReason;

@end

