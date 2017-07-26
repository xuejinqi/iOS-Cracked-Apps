//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QAVAudioCtrl, QAVCloudSpearEngineCtrl, QAVContextStartParam, QAVCustomSpearEngineCtrl, QAVRoomMulti, QAVVideoCtrl;

@interface QAVContext : NSObject
{
    QAVContextStartParam *_param;
    long long _state;
    QAVRoomMulti *_room;
    QAVAudioCtrl *_audioCtrl;
    QAVVideoCtrl *_videoCtrl;
    QAVCloudSpearEngineCtrl *_cloudSpearCtrl;
    QAVCustomSpearEngineCtrl *_customSpearCtrl;
}

+ (id)getVersion;
+ (id)CreateContext;
@property(readonly, nonatomic) QAVCustomSpearEngineCtrl *customSpearCtrl; // @synthesize customSpearCtrl=_customSpearCtrl;
@property(readonly, nonatomic) QAVCloudSpearEngineCtrl *cloudSpearCtrl; // @synthesize cloudSpearCtrl=_cloudSpearCtrl;
@property(readonly, nonatomic) QAVVideoCtrl *videoCtrl; // @synthesize videoCtrl=_videoCtrl;
@property(readonly, nonatomic) QAVAudioCtrl *audioCtrl; // @synthesize audioCtrl=_audioCtrl;
@property(readonly, nonatomic) QAVRoomMulti *room; // @synthesize room=_room;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) QAVContextStartParam *param; // @synthesize param=_param;
- (void)setAppVersion:(id)arg1;
- (void)switchRoom:(int)arg1;
- (long long)exitRoom;
- (void)enterRoom:(id)arg1 delegate:(id)arg2;
- (long long)stop;
- (void)startWithParam:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)destroy;

@end

