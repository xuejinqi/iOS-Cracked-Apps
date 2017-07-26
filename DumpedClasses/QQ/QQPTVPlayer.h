//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QQRichViewPlayerDelegte.h"

@class NSString, QQAIOPTVMsgModel, QQRichVideoPlayer;

@interface QQPTVPlayer : NSObject <QQRichViewPlayerDelegte, QQAudioSessionManagerDelegate>
{
    id <QQPTVPlayerDelegate> _delegate;
    QQAIOPTVMsgModel *_curAIOPTVMsgModel;
    QQRichVideoPlayer *_richPlayer;
    NSString *_playFile;
}

+ (void)resetPTVPlayer;
+ (id)defaultPTVPlayer;
@property(copy, nonatomic) NSString *playFile; // @synthesize playFile=_playFile;
@property(retain, nonatomic) QQRichVideoPlayer *richPlayer; // @synthesize richPlayer=_richPlayer;
@property(retain, nonatomic) QQAIOPTVMsgModel *curAIOPTVMsgModel; // @synthesize curAIOPTVMsgModel=_curAIOPTVMsgModel;
@property(nonatomic) id <QQPTVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDeactiveWithSystem;
- (void)onAudioSessionDeactive;
- (void)onAudioSessionActive;
- (void)onIntterruptEnd;
- (void)onIntterruptBegin;
- (void)setAudioSessionAmbientSoundMix;
- (void)setAudioSessionPlayback;
- (void)onPlayerWillStartPlay:(id)arg1;
- (void)onPlayerEnd:(id)arg1;
- (void)onPlayer:(id)arg1 playStatusChange:(int)arg2;
- (void)stop;
- (void)playVideoEnd:(_Bool)arg1;
- (id)currentPlayFile;
- (void)play;
- (_Bool)releaseAudioSession;
- (_Bool)requestAudioSession;
- (void)play:(id)arg1;
- (void)loadFile:(id)arg1;
- (double)currentPos;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

