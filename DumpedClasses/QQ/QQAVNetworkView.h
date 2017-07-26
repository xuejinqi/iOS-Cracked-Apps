//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImageView, UILabel;

@interface QQAVNetworkView : UIView
{
    UIImageView *_netWorkSignal;
    UILabel *_netWorkTip;
    int _networkLevel;
    NSMutableArray *_imageCache;
    _Bool _isHiddenForever;
    long long _contentAlignment;
}

- (void)renderImageWithColor:(id)arg1;
- (void)invalidateLayout;
- (void)setHidden:(_Bool)arg1;
- (void)setHiddenForever;
- (int)getNetworkLevel;
- (void)updateNetwork:(int)arg1 withTip:(id)arg2;
- (void)setLightContentColor:(_Bool)arg1;
- (void)setContentAlignment:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

