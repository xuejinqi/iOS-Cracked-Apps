//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AnalyzingFaceModel, FaceFeatureStablizer, NSMutableArray;

@interface AnalyzingFaceManager : NSObject
{
    _Bool _lastDetectResult;
    int _lastDetectStat;
    AnalyzingFaceModel *_analyzingFaceModel;
    NSMutableArray *_faceStack;
    FaceFeatureStablizer *_stablizer;
    double _lastDetectTime;
}

+ (void)reMarkFeatureVersion2:(float (*)[2])arg1;
+ (void)reMarkFeature:(float (*)[2])arg1;
@property(nonatomic) _Bool lastDetectResult; // @synthesize lastDetectResult=_lastDetectResult;
@property(nonatomic) int lastDetectStat; // @synthesize lastDetectStat=_lastDetectStat;
@property(nonatomic) double lastDetectTime; // @synthesize lastDetectTime=_lastDetectTime;
@property(retain, nonatomic) FaceFeatureStablizer *stablizer; // @synthesize stablizer=_stablizer;
@property(retain, nonatomic) NSMutableArray *faceStack; // @synthesize faceStack=_faceStack;
@property(retain, nonatomic) AnalyzingFaceModel *analyzingFaceModel; // @synthesize analyzingFaceModel=_analyzingFaceModel;
- (void).cxx_destruct;
- (void)reMarkFeatureVersion2:(float (*)[2])arg1;
- (void)reMarkFeature:(float (*)[2])arg1;
- (_Bool)analyzingRightWink;
- (_Bool)analyzingLeftWink;
- (_Bool)analyzingKiss;
- (_Bool)analyzingNod;
- (_Bool)analyzingShookHead;
- (double)pointPairToBearingDegrees:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (_Bool)analyzingJumpEyebrow;
- (_Bool)analyzingOpenMouth;
- (_Bool)detectFaceStat:(int)arg1;
- (double)getLastModelFaceWidth;
- (void)getLastModelPitch:(double *)arg1 yaw:(double *)arg2 roll:(double *)arg3;
- (struct CGSize)getFeatureImageSize;
- (void)getFeaturePointsVersion2:(float [94][2])arg1;
- (void)getFeaturePoints:(float [90][2])arg1;
- (void)clearFaceFeatures;
- (void)inputFaceFeature:(id)arg1;
- (void)dealloc;
- (id)init;

@end

