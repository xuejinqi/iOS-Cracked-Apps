//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQView.h"

@class SpriteView, UIButton, UIImageView;

@interface SpritePreviewView : QQView
{
    SpriteView *_spriteView;
    UIImageView *_contentView;
    UIButton *_closeBtn;
    id <SpritePreviewCloseDelegate> _spriteCloseDelegate;
}

+ (id)customLineWithWidth:(double)arg1;
@property(nonatomic) id <SpritePreviewCloseDelegate> spriteCloseDelegate; // @synthesize spriteCloseDelegate=_spriteCloseDelegate;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SpriteView *spriteView; // @synthesize spriteView=_spriteView;
- (void)onCloseClick:(id)arg1;
- (void)animationDidLoad;
- (void)initAvatarViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)baseUIInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

