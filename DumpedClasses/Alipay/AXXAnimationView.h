//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVAudioPlayer, AXXHeaderView, AXXPeopleFindBtn, AXXRemainView, NSMutableArray, UILabel;

@interface AXXAnimationView : UIView
{
    double _maxScale;
    double _startScale;
    _Bool _isPlaySounding;
    NSMutableArray *_animationLayerArray;
    _Bool _hasPostTriggerNotification;
    _Bool _isAnimating;
    id <AXXAnimationViewDelegate> _delegate;
    UILabel *_statusTextLabel;
    AXXRemainView *_tailView;
    AVAudioPlayer *_audioPlayer;
    AXXPeopleFindBtn *_centerBtn;
    long long _style;
    AXXHeaderView *_headerView;
    struct CGPoint _animationCenter;
}

@property(retain, nonatomic) AXXHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) AXXPeopleFindBtn *centerBtn; // @synthesize centerBtn=_centerBtn;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(retain, nonatomic) AXXRemainView *tailView; // @synthesize tailView=_tailView;
@property(retain, nonatomic) UILabel *statusTextLabel; // @synthesize statusTextLabel=_statusTextLabel;
@property(nonatomic) struct CGPoint animationCenter; // @synthesize animationCenter=_animationCenter;
@property(nonatomic) __weak id <AXXAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetHasPostTriggerNotification:(_Bool)arg1;
- (void)goRecognize;
- (void)audioPlayerEndInterruption:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)layoutSubviews;
- (void)showErrorText:(id)arg1 dismissAfter:(long long)arg2;
- (void)showStatusText:(id)arg1;
- (_Bool)isPlayingSound;
- (void)stopSound;
- (void)playSoundLoop;
- (void)playSound;
- (void)stopAnimation;
- (void)playAnimation;
- (void)didTouchUpInside:(id)arg1;
- (void)didClickBtn:(id)arg1;
- (void)clickBtnCanceled:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

