//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIPageControl, UIScrollView;

@interface KDCycleBannerView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _scrollViewBounces;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    NSArray *_datasourceImages;
    unsigned long long _currentSelectedPage;
    CDUnknownBlockType _completeBlock;
    _Bool _continuous;
    id <KDCycleBannerViewDataource> _datasource;
    id <KDCycleBannerViewDelegate> _delegate;
    unsigned long long _autoPlayTimeInterval;
}

@property(nonatomic) unsigned long long autoPlayTimeInterval; // @synthesize autoPlayTimeInterval=_autoPlayTimeInterval;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) __weak id <KDCycleBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <KDCycleBannerViewDataource> datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
- (void)singleTapGestureRecognizer:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)autoSwitchBannerView;
- (void)setSwitchPage:(long long)arg1 animated:(_Bool)arg2 withUserInterface:(_Bool)arg3;
- (void)setCurrentPage:(long long)arg1 animated:(_Bool)arg2;
- (void)moveToTargetPosition:(double)arg1 withAnimated:(_Bool)arg2;
- (void)reloadDataWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)loadData;
- (void)initializePageControl;
- (void)initializeScrollView;
- (void)initAutoSwitchTimer;
- (void)initialize;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

