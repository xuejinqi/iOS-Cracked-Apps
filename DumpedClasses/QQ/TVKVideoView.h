//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayerItemVideoOutput, CAEAGLLayer, EAGLContext, TVKPlayerLayerView, VRGLView;

@interface TVKVideoView : UIView
{
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    float mAngleX;
    float mAngleY;
    _Bool isCurrentVRVideo;
    TVKPlayerLayerView *playLayerView0;
    TVKPlayerLayerView *playLayerView1;
    VRGLView *vrLayerView;
    AVPlayerItemVideoOutput *vrVideoOutput;
    long long _playerIndex;
}

@property long long playerIndex; // @synthesize playerIndex=_playerIndex;
@property(nonatomic) _Bool isCurrentVRVideo; // @synthesize isCurrentVRVideo;
@property(retain, nonatomic) AVPlayerItemVideoOutput *vrVideoOutput; // @synthesize vrVideoOutput;
@property(retain, nonatomic) VRGLView *vrLayerView; // @synthesize vrLayerView;
@property(retain, nonatomic) TVKPlayerLayerView *playLayerView1; // @synthesize playLayerView1;
@property(retain, nonatomic) TVKPlayerLayerView *playLayerView0; // @synthesize playLayerView0;
- (void).cxx_destruct;
- (id)getVideoFillMode;
- (void)setBgColor:(id)arg1;
- (void)setVideoFillMode:(id)arg1;
- (void)switchPlayerViewWithPlayer:(long long)arg1 withPlayer:(id)arg2;
- (void)switchPlayer1WithPlayer:(id)arg1;
- (void)switchPlayer0WithPlayer:(id)arg1;
- (void)resetPlayerOfPlayerView;
- (_Bool)changePlayerWithIndex:(long long)arg1 withSysVersionIs43Later:(_Bool)arg2 withPlayer:(id)arg3 withAirplayEffect:(_Bool)arg4;
- (void)setVRLayerViews:(id)arg1;
- (void)changePlayerviewPlayer:(id)arg1;
- (void)changePlayerViewFitStyle:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (Class)layerClass;
- (void)resetPlayerViewSizeStyle;

@end

