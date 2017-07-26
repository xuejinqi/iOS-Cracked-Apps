//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QZoneBannerDelegate.h"

@class NSString, NSTimer, QZoneBannerBaseView;

@interface QZoneBannerContainer : UIView <QZoneBannerDelegate>
{
    NSTimer *_timer;
    QZoneBannerBaseView *_bannerView;
    _Bool _isViewAppear;
    id <QZoneBannerContainerDelegate> _delegate;
}

@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(nonatomic) __weak id <QZoneBannerContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeBannerForType:(long long)arg1;
- (void)clickBanner:(id)arg1;
- (void)onTimer:(id)arg1;
- (void)stopTimer;
- (void)createTimer:(long long)arg1 bannerInfo:(id)arg2;
- (void)removeBannerView;
- (void)updateBannerView;
- (_Bool)shouldRemoveBannerView;
- (Class)bannerViewClass:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

