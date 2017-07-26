//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QZVideoPlayerToolbar, UIButton, UITapGestureRecognizer;

@interface QQReadInJoyVideoStateView : UIView
{
    UIView *playerStateView;
    UIView *videoControlView;
    QZVideoPlayerToolbar *slider;
    _Bool isSlideChanged;
    _Bool _isLandscape;
    _Bool _showZoomButton;
    int _playerState;
    double _duration;
    double _currentPlayTime;
    UIButton *_playButton;
    UIButton *_volumeControlBtn;
    id <QQReadInJoyVideoStateDelegate> _delegate;
    UITapGestureRecognizer *_tapRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(nonatomic) _Bool showZoomButton; // @synthesize showZoomButton=_showZoomButton;
@property(nonatomic) id <QQReadInJoyVideoStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *volumeControlBtn; // @synthesize volumeControlBtn=_volumeControlBtn;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(nonatomic) double currentPlayTime; // @synthesize currentPlayTime=_currentPlayTime;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) int playerState; // @synthesize playerState=_playerState;
- (id)slider;
- (void)resetSlider;
- (void)setZoomStateIn:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setViewByPlayerState:(int)arg1;
- (void)changeFullscreenStateAction:(id)arg1;
- (void)sliderEndSeek;
- (void)sliderValueChanged:(id)arg1;
- (void)sliderBeginSeek;
- (_Bool)isDraggingSlider;
- (void)onReplay;
- (void)onPause;
- (void)onPlay;
- (void)playButtonDidClick:(id)arg1;
- (void)onSingleTapOnVideo;
- (void)setControlViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPlayerStateViewHidden:(_Bool)arg1;
- (void)setSliderHidden:(_Bool)arg1;
- (void)setVolumeMute;
- (void)muteChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

