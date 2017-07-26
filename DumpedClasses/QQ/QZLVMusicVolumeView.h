//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface QZLVMusicVolumeView : UIView
{
    UIView *_bgView;
    UILabel *_voiceLabel;
    UIImageView *_voiceLineView1;
    UIImageView *_voiceLineView2;
    UIImageView *_voiceButton2;
    UIImageView *_voiceButton;
    UILabel *_musicLabel;
    UIImageView *_musicLineView1;
    UIImageView *_musicLineView2;
    UIImageView *_musicButton2;
    UIImageView *_musicButton;
    _Bool _isAdjustedVoice;
    _Bool _isAdjustedMusic;
}

- (void).cxx_destruct;
- (void)updateVolumeMusic:(double)arg1 moving:(_Bool)arg2;
- (void)updateVolumeVoice:(double)arg1 moving:(_Bool)arg2;
- (void)bgViewTapped:(id)arg1;
- (void)musicButtonPan:(id)arg1;
- (void)voiceButtonPan:(id)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)configUIWithFrame:(struct CGRect)arg1;
- (id)initWithPoint:(struct CGPoint)arg1;

@end

