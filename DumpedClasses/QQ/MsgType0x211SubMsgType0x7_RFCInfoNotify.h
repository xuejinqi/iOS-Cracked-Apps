//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface MsgType0x211SubMsgType0x7_RFCInfoNotify : NSObject
{
    unsigned long long _sessionId;
    NSData *_bytes_TokenKey;
    unsigned int _svrIp;
    unsigned int _svrPort;
    unsigned long long _svrTaskId;
    int _xo;
}

+ (id)parseFromMsgBodyPack:(struct CPBMessageDecoder *)arg1;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSData *bytes_TokenKey; // @dynamic bytes_TokenKey;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int svrIp; // @dynamic svrIp;
@property(nonatomic) unsigned int svrPort; // @dynamic svrPort;
@property(nonatomic) unsigned long long svrTaskId; // @dynamic svrTaskId;

@end

