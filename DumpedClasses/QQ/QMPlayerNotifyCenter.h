//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QMusicAudioSessionDelegate.h"
#import "QMusicPlayerDelegate.h"
#import "QQAudioSessionManagerDelegate.h"
#import "SDWebImageManagerDelegate.h"

@class NSString, NSTimer;

@interface QMPlayerNotifyCenter : NSObject <QMusicPlayerDelegate, QMusicAudioSessionDelegate, SDWebImageManagerDelegate, QQAudioSessionManagerDelegate>
{
    NSTimer *_timer;
    double _startBufferringTime;
    double _endBufferringTime;
    _Bool _inBufferring;
    _Bool _firstBufferring;
    double _totalBufferringTime;
    unsigned long long _totalBufferringCount;
    _Bool _isPauseByAudioSession;
}

+ (id)instance;
@property(nonatomic) _Bool isPauseByAudioSession; // @synthesize isPauseByAudioSession=_isPauseByAudioSession;
- (void).cxx_destruct;
- (void)stopMusicGene;
- (void)releaseAudioDevice;
- (_Bool)requestAudioDevice;
- (void)onAudioSessionDeactive;
- (void)onAudioSessionActive;
- (void)onIntterruptBegin;
- (_Bool)QMusicSetAudioSessionActive:(_Bool)arg1 error:(id *)arg2;
- (_Bool)QMusicSetAudioSessionMixWithError:(id *)arg1;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2 forURL:(id)arg3;
- (void)downloadPlayingSongAlbum;
- (void)downloadSongAlbum:(id)arg1;
- (void)notifyProgressTimer;
- (void)notifyPlayerEvent:(int)arg1;
- (void)clearDataToReport;
- (void)musicPlayerSongWillPlay:(id)arg1;
- (void)musicPlayerSongWillStop:(id)arg1;
- (void)musicPlayerError:(int)arg1 errDic:(id)arg2;
- (void)musicPlayerSong:(id)arg1 event:(int)arg2;
- (void)restoreQQPlayerState:(int)arg1 song:(id)arg2;
- (void)notifyQQPlayerState:(int)arg1 song:(id)arg2;
- (id)getUserInfoState:(long long)arg1 song:(id)arg2;
- (id)createExternalDownloader;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

