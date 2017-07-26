//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "QZFeedVideoViewDelegate.h"

@class NSString, QZFeedVideoView, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface QZVideoFloatingWindow : UIWindow <QZFeedVideoViewDelegate>
{
    long long _videoType;
    QZFeedVideoView *_videoView;
    int _xo;
    _Bool _isSetFrame;
    UIButton *_closeBtn;
    UILabel *_willPlayNextNoteLabel;
    UIView *_eventView;
    UITapGestureRecognizer *_tapGuestGesture;
    UIPanGestureRecognizer *_panGR;
    struct CGPoint _point;
    UIImageView *_shadowView;
    int _fwPosition;
    id <QZVideoFloatingWindowDelegate> _delegate;
    CDUnknownBlockType _showPlayNextVideoNotecompleteBlock;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType showPlayNextVideoNotecompleteBlock; // @synthesize showPlayNextVideoNotecompleteBlock=_showPlayNextVideoNotecompleteBlock;
@property(nonatomic) id <QZVideoFloatingWindowDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QZFeedVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
- (void)updateUIWithCompleteBlock:(CDUnknownBlockType)arg1 needAnimation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

