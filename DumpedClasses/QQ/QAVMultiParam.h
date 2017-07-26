//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface QAVMultiParam : NSObject
{
    _Bool _createRoom;
    _Bool _enableMic;
    _Bool _enableSpeaker;
    _Bool _enableHdAudio;
    _Bool _enableHwEnc;
    _Bool _enableHwDec;
    unsigned int _relationId;
    long long _audioCategory;
    unsigned long long _authBits;
    NSData *_authBuffer;
    NSString *_controlRole;
    long long _videoRecvMode;
    long long _screenRecvMode;
}

@property(nonatomic) _Bool enableHwDec; // @synthesize enableHwDec=_enableHwDec;
@property(nonatomic) _Bool enableHwEnc; // @synthesize enableHwEnc=_enableHwEnc;
@property(nonatomic) _Bool enableHdAudio; // @synthesize enableHdAudio=_enableHdAudio;
@property(nonatomic) _Bool enableSpeaker; // @synthesize enableSpeaker=_enableSpeaker;
@property(nonatomic) _Bool enableMic; // @synthesize enableMic=_enableMic;
@property(nonatomic) long long screenRecvMode; // @synthesize screenRecvMode=_screenRecvMode;
@property(nonatomic) long long videoRecvMode; // @synthesize videoRecvMode=_videoRecvMode;
@property(nonatomic) _Bool createRoom; // @synthesize createRoom=_createRoom;
@property(copy, nonatomic) NSString *controlRole; // @synthesize controlRole=_controlRole;
@property(copy, nonatomic) NSData *authBuffer; // @synthesize authBuffer=_authBuffer;
@property(nonatomic) unsigned long long authBits; // @synthesize authBits=_authBits;
@property(nonatomic) unsigned int relationId; // @synthesize relationId=_relationId;
@property(nonatomic) long long audioCategory; // @synthesize audioCategory=_audioCategory;

@end

