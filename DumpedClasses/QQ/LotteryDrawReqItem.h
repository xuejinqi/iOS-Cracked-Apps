//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSString;

@interface LotteryDrawReqItem : SAMRequestItem
{
    unsigned int _group_type;
    unsigned int _group_id;
    unsigned int _network;
    unsigned long long _myuin;
    unsigned int _cmdType;
    unsigned int _sequence;
    unsigned int _promotion_id;
    NSString *_signature;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;
- (void)modifyPromotionID:(unsigned int)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned int group_id; // @dynamic group_id;
@property(nonatomic) unsigned int group_type; // @dynamic group_type;
@property(nonatomic) unsigned int network; // @dynamic network;

@end

