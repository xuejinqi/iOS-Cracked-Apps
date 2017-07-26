//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, NSString;

@interface VideoRingPlayer : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_audioPlayer;
    _Bool _isSoundPlaying;
    _Bool _keepVibrate;
    int _vibTimes;
    double _interval;
    unsigned int _soundId;
    CDUnknownBlockType _delayedRingBlock;
    int _xo;
}

+ (id)GetInstance;
- (void)stopGettingMuteState;
- (void)muteAudioPlayEnd:(double)arg1;
- (_Bool)playMuteAudioToGetState;
- (void)stopVibrate;
- (void)startVibrate;
- (void)vibrate;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stopVoice;
- (void)stopAudio:(_Bool)arg1;
- (void)pauseAudio;
- (void)playAudio:(id)arg1 andLoopTime:(int)arg2 andVolume:(int)arg3;
- (void)playAudio:(id)arg1 andLoopTime:(int)arg2;
- (void)playVoice:(id)arg1;
- (void)playFile:(id)arg1;
- (void)playReqAudio:(id)arg1 andLoopTime:(int)arg2 andVolum:(int)arg3;
- (void)playAudioInner:(id)arg1 andLoopTime:(int)arg2 andVolum:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isSoundPlaying; // @dynamic isSoundPlaying;
@property(nonatomic) _Bool keepVibrate; // @dynamic keepVibrate;
@property(readonly) Class superclass;
@property(nonatomic) int vibTimes; // @dynamic vibTimes;

@end

