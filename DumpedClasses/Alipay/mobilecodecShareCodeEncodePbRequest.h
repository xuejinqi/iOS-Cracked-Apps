//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, mobilecodecShareCodeData;

@interface mobilecodecShareCodeEncodePbRequest : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizLinkedId; // @dynamic bizLinkedId;
@property(retain, nonatomic) NSString *bizType; // @dynamic bizType;
@property(readonly) _Bool hasBizLinkedId; // @dynamic hasBizLinkedId;
@property(readonly) _Bool hasBizType; // @dynamic hasBizType;
@property(readonly) _Bool hasShareCodeData; // @dynamic hasShareCodeData;
@property(retain, nonatomic) mobilecodecShareCodeData *shareCodeData; // @dynamic shareCodeData;

@end

