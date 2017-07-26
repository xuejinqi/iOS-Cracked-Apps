//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFlashPicEffect.h"

@class UIImageView;

@interface QQFlashPicEffectShake : QQFlashPicEffect
{
    double _tPreFrame;
    long long _playCount;
    UIImageView *_bkImageView;
    UIImageView *_aImageView;
    UIImageView *_sImageView;
}

@property(retain, nonatomic) UIImageView *sImageView; // @synthesize sImageView=_sImageView;
@property(retain, nonatomic) UIImageView *aImageView; // @synthesize aImageView=_aImageView;
@property(retain, nonatomic) UIImageView *bkImageView; // @synthesize bkImageView=_bkImageView;
- (void)playAnimation;
- (void)stopAnimation;
- (void)play;
- (void)setup;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2;

@end

