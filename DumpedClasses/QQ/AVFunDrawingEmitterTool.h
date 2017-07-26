//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBezierPath.h"

#import "AVFunDrawingTool.h"

@class NSMutableArray, NSString, UIColor;

@interface AVFunDrawingEmitterTool : UIBezierPath <AVFunDrawingTool>
{
    struct CGPath *path;
    NSMutableArray *_emitterLayersArray;
    struct CGPoint *pathPoints;
    double *pathArray;
    int pathlen;
    int pathIndex;
    UIColor *_lineColor;
    double _lineAlpha;
}

@property(retain, nonatomic) NSMutableArray *emitterLayersArray; // @synthesize emitterLayersArray=_emitterLayersArray;
@property(nonatomic) double lineAlpha; // @synthesize lineAlpha=_lineAlpha;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void)dealloc;
- (void)curveFactorization:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 controlPoint:(struct CGPoint)arg3 count:(int)arg4;
- (double)bezMaker:(int)arg1 k:(int)arg2 t:(double)arg3;
- (double)realPow:(double)arg1 k:(int)arg2;
- (double)comp:(int)arg1 k:(int)arg2;
- (void)draw;
- (id)generteEmitterLayer:(struct CGPoint)arg1;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (id)newEmitterLayers;
- (struct CGRect)addPathPoint:(struct CGPoint)arg1 withPreviousPoint:(struct CGPoint)arg2 withCurrentPoint:(struct CGPoint)arg3;
- (void)moveFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double lineWidth;
@property(readonly) Class superclass;

@end

