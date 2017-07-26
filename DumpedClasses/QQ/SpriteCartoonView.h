//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView;

@interface SpriteCartoonView : UIView
{
    UIActivityIndicatorView *_loadingView;
    UIImageView *_spriteView;
    _Bool _isSelf;
    int _subType;
    UIImageView *_imageView;
}

- (void)animationSettings;
- (void)bindImage;
- (void)setSpriteFrame:(struct CGRect)arg1;
- (void)hideLoadingAnimation;
- (void)showLoadingAnimation;
- (void)stopSpriteAnimation;
- (void)startSpriteAnimation;
- (void)setSubType:(int)arg1 msgFrom:(_Bool)arg2;
- (void)dealloc;

@end

