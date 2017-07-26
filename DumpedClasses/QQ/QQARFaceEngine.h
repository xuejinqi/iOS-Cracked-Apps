//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, QQARFaceHandler;

@interface QQARFaceEngine : NSObject
{
    NSObject<OS_dispatch_queue> *_processQueue;
    double _lastFrameTime;
    _Bool _hasGetResponse;
    _Bool _pauseRecog;
    _Bool _isInProcess;
    id <QQARFaceRecogProtocol> _delegate;
    long long _faceRecogState;
    NSMutableArray *_pretreatList;
    NSMutableArray *_starRecogResult;
    QQARFaceHandler *_faceHandler;
}

@property(retain, nonatomic) QQARFaceHandler *faceHandler; // @synthesize faceHandler=_faceHandler;
@property(retain, nonatomic) NSMutableArray *starRecogResult; // @synthesize starRecogResult=_starRecogResult;
@property(retain, nonatomic) NSMutableArray *pretreatList; // @synthesize pretreatList=_pretreatList;
@property(nonatomic) long long faceRecogState; // @synthesize faceRecogState=_faceRecogState;
@property(nonatomic) __weak id <QQARFaceRecogProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (vector_be8cf01e)getFaceFeatureWithRectId:(int)arg1;
- (_Bool)stopFaceTracking;
- (_Bool)resumeFaceTracking;
- (_Bool)pauseFaceTracking;
- (void)frameBufferUpdate:(id)arg1;
- (_Bool)checkLocalRecogState;
- (_Bool)startLocalFaceRecog;
- (_Bool)starFaceRecogResponse:(id)arg1;
- (void)dealloc;
- (void)resetData;
- (void)faceResourceReady;
- (id)init;

@end

