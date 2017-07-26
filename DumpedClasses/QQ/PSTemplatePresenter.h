//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQLayerAnimatorDelegate.h"

@class NSArray, NSString, QQLayerAnimator, UIImageView, UIView;

@interface PSTemplatePresenter : NSObject <QQLayerAnimatorDelegate>
{
    UIView *_superView;
    struct CGRect _frame;
    unsigned long long _templeteId;
    unsigned long long _backageImageResourceType;
    unsigned long long _animationImageType;
    float _repeatCount;
    double _animationKeyFrameInterval;
    id <PSTemplatePresenterDelegate> _delegate;
    int _xo;
    struct CGRect _dynamicScaleRect;
    _Bool _isDyanmic;
    long long _animationState;
    QQLayerAnimator *_layerAnimator;
    UIImageView *_backgroundView;
    NSArray *_animationImages;
    UIView *_dynamicView;
}

- (void).cxx_destruct;
- (void)loadTemplateImages;
- (void)loadDynamicInfo;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)stopAnimating;
- (void)loadStaticContent;
- (void)beginAnimating;
- (void)setNeedsDynamicLayer;
- (_Bool)isScaleRectValid:(struct CGRect)arg1;
@property(nonatomic) struct CGRect frame; // @dynamic frame;
@property(nonatomic) __weak UIView *superView; // @dynamic superView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long animationImageType; // @dynamic animationImageType;
@property(retain, nonatomic) NSArray *animationImages; // @dynamic animationImages;
@property(nonatomic) double animationKeyFrameInterval; // @dynamic animationKeyFrameInterval;
@property(nonatomic) unsigned long long backageImageResourceType; // @dynamic backageImageResourceType;
@property(retain, nonatomic) UIImageView *backgroundView; // @dynamic backgroundView;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PSTemplatePresenterDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak UIView *dynamicView; // @dynamic dynamicView;
@property(readonly) unsigned long long hash;
@property(nonatomic) float repeatCount; // @dynamic repeatCount;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long templeteId; // @dynamic templeteId;

@end

