//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FaceDetectorFeature, NSArray;

@interface AnalyzingModel : NSObject
{
    FaceDetectorFeature *_feature;
    NSArray *_faceData;
}

@property(retain, nonatomic) NSArray *faceData; // @synthesize faceData=_faceData;
@property(retain, nonatomic) FaceDetectorFeature *feature; // @synthesize feature=_feature;
- (void).cxx_destruct;
- (float)distanceA:(struct CGPoint)arg1 B:(struct CGPoint)arg2;
- (float)distanceFrom:(int)arg1 to:(int)arg2;
- (id)initWithFaceFeature:(id)arg1 stablizer:(id)arg2;
- (id)initWithFaceFeature:(id)arg1;

@end

