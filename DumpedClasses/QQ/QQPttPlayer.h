//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioRouteChangeProtocol.h"
#import "IQQAmrPlayerDelegate.h"
#import "QQAudioProximitySensorProtocol.h"
#import "QQAudioSessionManagerDelegate.h"
#import "QQVoiceRouteChangeBtnDelegate.h"

@class CMAccelerometerData, NSMutableSet, NSObject<IPttPlayerInterface>, NSString, QQAIOMsgModel, QQPTTPlaybackVolumeMonitor, QQVoiceRouteChangeBtn;

@interface QQPttPlayer : NSObject <AudioRouteChangeProtocol, IQQAmrPlayerDelegate, QQVoiceRouteChangeBtnDelegate, QQAudioProximitySensorProtocol, QQAudioSessionManagerDelegate>
{
    _Bool _forceStop;
    QQVoiceRouteChangeBtn *_voiceChangeBtn;
    int _audioRouteType;
    int _lastRouteType;
    _Bool _replayFlag;
    _Bool _continuePlay;
    _Bool _isPlaying;
    CMAccelerometerData *_accelerometerdata;
    _Bool _isPause;
    float _lastPlayTime;
    float _offsetTime;
    _Bool skipToBegin;
    _Bool _playingAnother;
    NSMutableSet *_dataset;
    QQAIOMsgModel *_playModel;
    int _xo;
    id <QQPttPlayerDelegate> _delegate;
    NSObject<IPttPlayerInterface> *_player;
    QQPTTPlaybackVolumeMonitor *_volumeMonitor;
}

+ (void)stopAll;
@property(retain, nonatomic) QQPTTPlaybackVolumeMonitor *volumeMonitor; // @synthesize volumeMonitor=_volumeMonitor;
@property(retain, nonatomic) NSObject<IPttPlayerInterface> *player; // @synthesize player=_player;
@property(nonatomic) id <QQPttPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createCustomBtn;
- (void)stopVolumeMonitor;
- (void)startVolumeMonitor;
- (void)onProximitySensorStateChange:(_Bool)arg1;
- (void)onVoiceRouteChangeBtnClicked;
- (_Bool)isPlaying;
- (void)destroy;
- (void)onPlayEnd:(id)arg1 userInfo:(id)arg2;
- (void)onPlayBegin:(id)arg1;
- (struct CGSize)getVoiceChangeBtnSize;
- (void)setVoiceChangeBtnFrame:(struct CGRect)arg1;
- (void)layoutVoiceChangeButtonWithOriginY:(double)arg1;
- (_Bool)pause;
- (void)stop;
- (void)stop:(_Bool)arg1;
- (void)onAudioSessionActive;
- (void)onIntterruptBegin;
- (void)onOutputDeviceChanged:(int)arg1;
- (void)createVoiceRouteChangeBtn;
- (void)onPttPlayEnd:(id)arg1 userInfo:(id)arg2;
- (void)notifyEnd:(id)arg1;
- (id)getNextModel;
- (void)hideVoiceRouteBtn;
- (void)showVoiceRouteBtn;
- (void)playPtt:(id)arg1;
- (void)play:(id)arg1 AndResetStopFlag:(_Bool)arg2;
- (void)play:(id)arg1 async:(_Bool)arg2;
- (void)playBlock:(id)arg1;
- (id)createPlayer:(id)arg1;
- (void)setRoute;
- (void)onPlayError:(id)arg1;
- (void)setVoiceChangeBtnAndSensorState:(int)arg1;
- (void)showPlayStartTips:(int)arg1 lastType:(int)arg2;
- (void)setReadForModel:(id)arg1;
- (void)setAutoLockScreen;
- (void)stopAutoLockScreen;
- (void)replay;
- (id)getCurrentPtt;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableSet *dataset; // @dynamic dataset;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QQAIOMsgModel *playModel; // @dynamic playModel;
@property(readonly) Class superclass;

@end

