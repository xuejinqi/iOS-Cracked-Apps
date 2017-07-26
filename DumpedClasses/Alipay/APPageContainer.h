//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIPageControl, UIScrollView;

@interface APPageContainer : UIView <UIScrollViewDelegate>
{
    UIPageControl *_indicatorView;
    UIScrollView *_scrollContainer;
    NSMutableArray *_pages;
    long long _currentPage;
}

@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;
@property(retain, nonatomic) UIScrollView *scrollContainer; // @synthesize scrollContainer=_scrollContainer;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)addPage:(id)arg1 withTag:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 bizType:(id)arg2 dotColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

