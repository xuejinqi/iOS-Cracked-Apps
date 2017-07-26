//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage;

@interface QQMessageReadTagView : UIView
{
    UIImage *_image;
    NSString *_mReadCountText;
    long long _unreadCount;
    _Bool _highlighted;
    _Bool _needShowCount;
    _Bool _isSupportThreeDigit;
    _Bool _bVipIcon;
    int _xo;
}

@property(nonatomic) _Bool isSupportThreeDigit; // @synthesize isSupportThreeDigit=_isSupportThreeDigit;
@property(nonatomic) _Bool needShowCount; // @synthesize needShowCount=_needShowCount;
@property(nonatomic) _Bool bVipIcon; // @synthesize bVipIcon=_bVipIcon;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (_Bool)isHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)getFitSize;
- (void)setUnreadString:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

