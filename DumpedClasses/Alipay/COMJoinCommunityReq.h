//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface COMJoinCommunityReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *communityId; // @dynamic communityId;
@property(retain, nonatomic) NSString *fromUserId; // @dynamic fromUserId;
@property(readonly) _Bool hasCommunityId; // @dynamic hasCommunityId;
@property(readonly) _Bool hasFromUserId; // @dynamic hasFromUserId;
@property(readonly) _Bool hasSourceId; // @dynamic hasSourceId;
@property(retain, nonatomic) NSString *sourceId; // @dynamic sourceId;

@end

