//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, NSTimer, UIImageView;

@interface QQFaceEditMaskView : UIView <UIGestureRecognizerDelegate>
{
    double _orignStickerWidth;
    double _orignStickerHeight;
    double _minStickerWidth;
    double _maxStickerWidth;
    unsigned long long _stickerEmojiType;
    double _nowWidth;
    double _nowHeight;
    double _totalAngle;
    _Bool _isMoving;
    _Bool _isClickCancel;
    _Bool _isClickSend;
    _Bool _isClickBackground;
    _Bool _isScrolling;
    struct CGPoint _lastSingleTocuhPoint;
    NSTimer *_scrollTimer;
    UIImageView *_emojiView;
    UIImageView *_sendView;
    UIImageView *_cancelView;
    id _delegate;
    id _data;
    struct CGRect _backButtonRect;
    struct CGRect _inputBarRect;
}

@property(nonatomic) unsigned long long stickerEmojiType; // @synthesize stickerEmojiType=_stickerEmojiType;
@property(nonatomic) double totalAngle; // @synthesize totalAngle=_totalAngle;
@property(nonatomic) double nowHeight; // @synthesize nowHeight=_nowHeight;
@property(nonatomic) double nowWidth; // @synthesize nowWidth=_nowWidth;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) struct CGRect inputBarRect; // @synthesize inputBarRect=_inputBarRect;
@property(nonatomic) struct CGRect backButtonRect; // @synthesize backButtonRect=_backButtonRect;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *cancelView; // @synthesize cancelView=_cancelView;
@property(retain, nonatomic) UIImageView *sendView; // @synthesize sendView=_sendView;
@property(retain, nonatomic) UIImageView *emojiView; // @synthesize emojiView=_emojiView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)moveEditViewByEmojiView;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)rotationView:(id)arg1;
- (void)pinchView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onAutoScroll:(id)arg1;
- (void)autoScrollChatTable:(id)arg1 touch:(id)arg2;
- (void)hideEditControlView;
- (void)showEditControlView;
- (void)dealloc;
- (void)clearControlFlag;
- (id)initWithFrame:(struct CGRect)arg1 stickerType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

