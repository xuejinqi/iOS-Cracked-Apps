//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

#import "QQVideoCircleProgressDelegate.h"
#import "TinyVideoCellPlayViewDelegate.h"

@class CALayer, NSString, QQAIOTinyVideoCellPlayView, QQAIOTinyVideoCellThumbView, QQAIOVideoCellPlayBtnView, QQAnimatedRevealMaskView, QQTwinkleCircleProgressView, UIImageView;

@interface QQAIOTinyVideoCellView : QQAIOCommonCellView <TinyVideoCellPlayViewDelegate, QQVideoCircleProgressDelegate>
{
    struct CGSize _thumbSize;
    NSString *_videoPath;
    QQAIOTinyVideoCellThumbView *_thumbView;
    QQTwinkleCircleProgressView *_progressView;
    QQAIOTinyVideoCellPlayView *_playView;
    QQAnimatedRevealMaskView *_maskView;
    QQAIOVideoCellPlayBtnView *_buttonView;
    UIImageView *_hdView;
    CALayer *_highlightLayer;
    CALayer *_borderLayer;
    _Bool _shouldShowPlayView;
    id <TinyVideoCellViewDelegate> _delegate;
}

@property(nonatomic) _Bool shouldShowPlayView; // @synthesize shouldShowPlayView=_shouldShowPlayView;
@property(nonatomic) id <TinyVideoCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)voiceSetData:(id)arg1;
- (void)menuActionDelete:(id)arg1;
- (void)showToastWithString:(id)arg1;
- (void)resumeDwonloadOrUpload;
- (void)pauseDownloadOrUpload;
- (void)viewDidAppear;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)play;
- (void)playUnmuted:(id)arg1;
- (void)play:(id)arg1;
- (id)playView;
- (id)progressView;
- (id)cellThumbView;
- (void)showPlayView:(_Bool)arg1;
- (void)tinyVideoCellPlayViewPlayStatusChange:(unsigned long long)arg1;
- (void)showAndPlayVideo;
- (_Bool)tinyVideoCellPlayViewShouldPlay:(id)arg1;
- (void)showThumbView:(_Bool)arg1;
- (void)layoutThumb;
- (void)setFailTipsText:(id)arg1;
- (void)setProgress:(double)arg1 withAnimation:(_Bool)arg2;
- (void)setProgress:(double)arg1;
- (void)showPlayButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showProgress:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showProgress:(_Bool)arg1;
- (void)showMask:(_Bool)arg1 animated:(_Bool)arg2;
- (id)thumbImage;
- (void)setThumb:(id)arg1;
@property(nonatomic) struct CGSize thumbSize; // @dynamic thumbSize;
- (struct CGRect)thumbRect;
- (id)getMenuItems;
- (_Bool)canFavorite;
- (_Bool)canForward;
- (_Bool)canShowPopupMenu;
- (_Bool)shouldDisplayMsgSendFail;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateBorderLayer:(struct CGRect)arg1 isSelf:(_Bool)arg2;
- (id)bubbleMask:(_Bool)arg1;
- (void)adjustCellViewCenter;
- (void)willDrawBubble;
- (struct CGRect)getThumbViewFrame;
- (void)setFrame:(struct CGRect)arg1;
- (void)preparePaopao:(id)arg1;
- (void)dealloc;
- (id)getAIOCellThumbViewName;
- (double)getProgressViewRadiusDiff;
- (double)getProgressViewMideRadius;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *videoPath; // @dynamic videoPath;

@end

