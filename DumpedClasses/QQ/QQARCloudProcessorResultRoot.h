//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, QQARCloudProcessorResultFaceStar, QQARCloudProcessorResultMarker, QQARCloudProcessorResultOCR, QQARCloudProcessorResultObject;

@interface QQARCloudProcessorResultRoot : NSObject
{
    int _businessType;
    NSDate *_selectImgTime;
    NSString *_sessionId;
    long long _recogType;
    QQARCloudProcessorResultMarker *_markerInfo;
    QQARCloudProcessorResultObject *_objectInfo;
    QQARCloudProcessorResultFaceStar *_faceStarInfo;
    QQARCloudProcessorResultOCR *_ocrInfo;
}

@property(retain, nonatomic) QQARCloudProcessorResultOCR *ocrInfo; // @synthesize ocrInfo=_ocrInfo;
@property(retain, nonatomic) QQARCloudProcessorResultFaceStar *faceStarInfo; // @synthesize faceStarInfo=_faceStarInfo;
@property(retain, nonatomic) QQARCloudProcessorResultObject *objectInfo; // @synthesize objectInfo=_objectInfo;
@property(retain, nonatomic) QQARCloudProcessorResultMarker *markerInfo; // @synthesize markerInfo=_markerInfo;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) long long recogType; // @synthesize recogType=_recogType;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSDate *selectImgTime; // @synthesize selectImgTime=_selectImgTime;
- (void).cxx_destruct;
- (void)dealloc;
- (void)printLog;

@end

