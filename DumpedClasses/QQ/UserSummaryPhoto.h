//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView;

@interface UserSummaryPhoto : UIView
{
    UIImageView *_photoView;
    NSString *_url;
    _Bool _isTypeVideo;
    int _xo;
}

- (void).cxx_destruct;
- (void)setPhoto:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)layoutMyPhotoViewFrame;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool isTypeVideo; // @dynamic isTypeVideo;
@property(retain, nonatomic) UIImageView *photoView; // @dynamic photoView;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

