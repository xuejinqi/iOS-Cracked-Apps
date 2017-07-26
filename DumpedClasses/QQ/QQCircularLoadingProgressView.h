//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGradientCircularLoadingView.h"

@class CAShapeLayer, QQProgressLabel;

@interface QQCircularLoadingProgressView : QQGradientCircularLoadingView
{
    _Bool _digitLabelHidden;
    float _progress;
    CAShapeLayer *_trackLayer;
    CAShapeLayer *_progressLayer;
    QQProgressLabel *_progressLabel;
}

@property(retain, nonatomic) QQProgressLabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *trackLayer; // @synthesize trackLayer=_trackLayer;
@property(nonatomic) _Bool digitLabelHidden; // @synthesize digitLabelHidden=_digitLabelHidden;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)setProgress:(float)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)setProgressColor:(id)arg1;
- (void)setTrackColor:(id)arg1;
- (void)dealloc;
- (id)initWithCenter:(struct CGPoint)arg1 radius:(double)arg2 width:(double)arg3;

@end

