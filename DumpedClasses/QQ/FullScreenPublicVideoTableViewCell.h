//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenVideoTableViewCell.h"

#import "FullVideoStateViewDelegate.h"
#import "QQReadInJoyVideoCellShareDelegate.h"
#import "QQReadInJoyVideoViewDelegate.h"

@class NSString, QQReadInJoyVideoView, UIButton;

@interface FullScreenPublicVideoTableViewCell : FullScreenVideoTableViewCell <QQReadInJoyVideoCellShareDelegate, QQReadInJoyVideoViewDelegate, FullVideoStateViewDelegate>
{
    _Bool _reloadVideoSouce;
    QQReadInJoyVideoView *_videoView;
    UIButton *_followButton;
    CDUnknownBlockType _followCompletion;
    id <BarrageWebViewDelegate> _barrageViewdelegate;
}

@property(nonatomic) __weak id <BarrageWebViewDelegate> barrageViewdelegate; // @synthesize barrageViewdelegate=_barrageViewdelegate;
@property(nonatomic, getter=isReloadVideoSouce) _Bool reloadVideoSouce; // @synthesize reloadVideoSouce=_reloadVideoSouce;
@property(copy, nonatomic) CDUnknownBlockType followCompletion; // @synthesize followCompletion=_followCompletion;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) QQReadInJoyVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (void)mediaPlayer:(id)arg1 didChangeStateTo:(int)arg2;
- (void)barrageViewPlayStateChange:(int)arg1;
- (void)mediaPlayer:(id)arg1 progressUpdated:(double)arg2 duration:(double)arg3;
- (void)onPlayVideoErrorWithErrorCode:(long long)arg1;
- (void)playerView:(id)arg1 parentView:(id)arg2 onEnterFullScreen:(_Bool)arg3;
- (void)onNatureSizeLoaded:(struct CGSize)arg1;
- (void)onEndPlayVideo;
- (void)onStopPlayVideo:(double)arg1 currentImage:(id)arg2 articleID:(unsigned long long)arg3;
- (void)onStopPlayVideo:(double)arg1 currentImage:(id)arg2;
- (void)onStartPlayVideo;
- (_Bool)shouldPlayVideo:(id)arg1;
- (void)onSliderEndSeek;
- (id)playCountView;
- (void)onViewDoubleTap;
- (void)onPlayButtonDidClick:(id)arg1;
- (void)onViewSingleTap;
- (void)tapOnLikeButton:(id)arg1;
- (_Bool)shouldActiveFullScreen;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dismissBiuGuidanceAnimated:(_Bool)arg1;
- (void)showBiuGuidance;
- (void)showVideoInfo;
- (void)setVideoCoverContentMode:(long long)arg1;
- (void)setVideoGravityMode:(id)arg1;
- (void)setStateViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setStateViewHidden;
- (void)setCenterButtonSelected:(_Bool)arg1;
- (_Bool)isPlayingVideo;
- (void)stopVideo;
- (void)pauseVideo;
- (void)resumePlayVideo;
- (void)setVideoPlayMode:(int)arg1;
- (void)playVideo;
- (void)followButtonDidClick:(id)arg1;
- (void)updateFollow;
- (void)setVideoTitlePlayCount;
- (void)setCommentCount:(unsigned long long)arg1;
- (void)setCellStyle:(unsigned long long)arg1;
- (void)setCellModel:(id)arg1;
- (void)resetVideoView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setFullScreen:(_Bool)arg1;
- (id)getVideoviewInfo;
- (id)getVideoId;
- (int)getVideoState;
- (void)setBarrageViewDelegate:(id)arg1;
- (id)getBarrageViewParent;
- (struct CGSize)getVideoSize;
- (void)setMuted:(_Bool)arg1;
- (_Bool)isStateViewSelected;
- (id)getVideoStatusView;
- (id)getVideoView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

