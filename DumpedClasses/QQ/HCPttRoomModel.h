//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSArray;

@interface HCPttRoomModel : QQModel <NSCopying>
{
    unsigned long long _lastest_msg_seq;
    NSArray *_seatInfoArray;
}

@property(retain, nonatomic) NSArray *seatInfoArray; // @synthesize seatInfoArray=_seatInfoArray;
@property(nonatomic) unsigned long long lastest_msg_seq; // @synthesize lastest_msg_seq=_lastest_msg_seq;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

