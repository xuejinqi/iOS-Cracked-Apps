//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSSet, NSString, UIScrollView;

@interface QZPageScrollView : UIView <UIScrollViewDelegate>
{
    struct CGPoint _dragStartOffset;
    UIView *_lastChangeView;
    NSMutableDictionary *_indexVideoDic;
    NSMutableSet *_reuseSet;
    UIView *_curView;
    long long _curViewIndex;
    UIView *_lastCurView;
    long long _lastIndex;
    _Bool _refreshing;
    UIScrollView *_scrollView;
    long long _curIndex;
    id <QZPageScrollViewProtocol> _delegate;
    long long _pageCount;
    long long _mode;
    double _scrollDuration;
    NSSet *_notReuseSet;
}

@property(retain, nonatomic) NSSet *notReuseSet; // @synthesize notReuseSet=_notReuseSet;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration=_scrollDuration;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) __weak id <QZPageScrollViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)postDidScrollEnd;
- (void)updateIndex;
- (void)scrollToPrevious:(_Bool)arg1;
- (void)scrollToNext:(_Bool)arg1;
- (void)scrollToIndex:(long long)arg1 animation:(_Bool)arg2;
- (void)removeChildView:(id)arg1;
- (id)currentView;
- (id)getViewWithIndex:(long long)arg1;
- (id)setupViewAtIndex:(long long)arg1;
- (void)setupWithIndex:(long long)arg1;
- (void)refresh;
- (void)willMoveToWindow:(id)arg1;
- (void)addPageCount:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 model:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

