//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSMItemElementBaseView.h"

@class CALayer, NSString, QQEmotionLabel, UIImageView, UIView;

@interface QQNewShareMessageCommentView : QQSMItemElementBaseView
{
    QQEmotionLabel *_commentContent;
    UIView *_commentBack;
    UIImageView *_commentIcon;
    UIView *_iconContainer;
    NSString *_commentString;
    int _style;
    CALayer *_animationLayer;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)startAnimation;
- (void)layoutCommentSubviews;
- (void)setShowCommentWithComment:(id)arg1 maxShowWidth:(double)arg2;
- (void)setCommentContentWithTitle:(id)arg1 commentStyle:(int)arg2 actionDelegate:(id)arg3 actionEvent:(id)arg4 maxWidth:(double)arg5;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

