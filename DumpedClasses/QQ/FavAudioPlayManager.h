//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQPttPlayerDelegate.h"

@class AudioModel, FavAudioPlayer, NSString, QQPttPlayer, QQSilkPlayer;

@interface FavAudioPlayManager : NSObject <QQPttPlayerDelegate>
{
    QQPttPlayer *_pttPlayer;
    AudioModel *_audioModel;
    id <FavAudioPlayManagerDelegate> _delegate;
    _Bool _isInit;
    FavAudioPlayer *_favAudioPlayer;
    QQSilkPlayer *_silkPlayer;
}

+ (id)getInstance;
@property(retain, nonatomic) QQSilkPlayer *silkPlayer; // @synthesize silkPlayer=_silkPlayer;
@property(nonatomic) id <FavAudioPlayManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AudioModel *audioModel; // @synthesize audioModel=_audioModel;
@property(retain, nonatomic) QQPttPlayer *pttPlayer; // @synthesize pttPlayer=_pttPlayer;
- (void)onPttPlayError:(int)arg1;
- (void)onPttPlayStart:(id)arg1;
- (void)onPttPlayFinish:(id)arg1;
- (void)onUpdateDetail:(id)arg1;
- (void)onPttPlayFinish;
- (struct CGRect)getVoiceRouteBtnFrame;
- (id)getRouteTipParentView;
- (id)getVoiceRouteBtnParentView;
- (void)onAutoPlay:(id)arg1;
- (id)getPttList;
- (_Bool)canPlay:(id)arg1;
- (void)stop;
- (_Bool)play:(id)arg1;
- (id)getCellModel:(id)arg1;
- (void)destroyAudio;
- (_Bool)initAudioWithQQSilkPlayer;
- (_Bool)initAudio;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

