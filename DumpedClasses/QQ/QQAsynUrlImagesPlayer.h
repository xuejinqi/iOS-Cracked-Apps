//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSMutableArray, NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout, UIImage, UIPageControl;

@interface QQAsynUrlImagesPlayer : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _autoScroll;
    _Bool _hidePageControl;
    double _scrollIntervalTime;
    id <QQAsynUrlImagesPlayerDelegae> _delegate;
    id <QQAsynUrlImagesPlayerIndictorPattern> _indicatorPattern;
    NSArray *_images;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flow;
    NSTimer *_timer;
    UIPageControl *_indicatorView;
    NSMutableArray *_dataArray;
    double _previousOffsetX;
    UIImage *_placeHolder;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIImage *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(nonatomic) double previousOffsetX; // @synthesize previousOffsetX=_previousOffsetX;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UIPageControl *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UICollectionViewFlowLayout *flow; // @synthesize flow=_flow;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) __weak id <QQAsynUrlImagesPlayerIndictorPattern> indicatorPattern; // @synthesize indicatorPattern=_indicatorPattern;
@property(nonatomic) __weak id <QQAsynUrlImagesPlayerDelegae> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hidePageControl; // @synthesize hidePageControl=_hidePageControl;
@property(nonatomic) double scrollIntervalTime; // @synthesize scrollIntervalTime=_scrollIntervalTime;
@property(nonatomic) _Bool autoScroll; // @synthesize autoScroll=_autoScroll;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)longPressToDo:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)showImageAtIndex:(long long)arg1;
- (void)removeTimer;
- (void)imageTapAction:(CDUnknownBlockType)arg1;
- (void)addNetWorkImages:(id)arg1 placeholder:(id)arg2;
- (void)addLocalImages:(id)arg1;
- (void)nextImage;
- (void)addTimer;
- (void)addCollectionView;
- (void)addOwnViews;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;
- (void)removeFromSuperview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

