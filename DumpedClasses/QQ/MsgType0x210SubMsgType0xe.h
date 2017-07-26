//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MsgType0x210SubMsgType0xe : NSObject
{
    unsigned int _srcAppId;
    unsigned int _srcInstId;
    unsigned int _dstAppId;
    unsigned int _dstInstId;
    long long _dstUin;
    long long _sessionid;
    unsigned int _operate;
    unsigned int _seq;
    unsigned int _code;
    NSString *_strMsg;
    int _xo;
}

+ (id)parseFromMsgBodyPack:(struct MsgType0x210SubMsgType0xe *)arg1;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(nonatomic) unsigned int code; // @dynamic code;
@property(nonatomic) unsigned int dstAppId; // @dynamic dstAppId;
@property(nonatomic) unsigned int dstInstId; // @dynamic dstInstId;
@property(nonatomic) long long dstUin; // @dynamic dstUin;
@property(nonatomic) unsigned int operate; // @dynamic operate;
@property(nonatomic) unsigned int seq; // @dynamic seq;
@property(nonatomic) long long sessionid; // @dynamic sessionid;
@property(nonatomic) unsigned int srcAppId; // @dynamic srcAppId;
@property(nonatomic) unsigned int srcInstId; // @dynamic srcInstId;
@property(retain, nonatomic) NSString *strMsg; // @dynamic strMsg;

@end

