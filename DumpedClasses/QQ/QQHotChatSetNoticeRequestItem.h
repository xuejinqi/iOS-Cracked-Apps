//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSString;

@interface QQHotChatSetNoticeRequestItem : SAMRequestItem
{
    NSString *_hotGroupId;
    NSString *_groupNotice;
    NSString *_jumpingUrl;
}

- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

// Remaining properties
@property(retain, nonatomic) NSString *groupNotice; // @dynamic groupNotice;
@property(retain, nonatomic) NSString *hotGroupId; // @dynamic hotGroupId;
@property(retain, nonatomic) NSString *jumpingUrl; // @dynamic jumpingUrl;

@end

