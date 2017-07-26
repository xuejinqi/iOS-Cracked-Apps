//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AROnlineVideoDelegate.h"

@class ARCameraFrame, ARVideoTask, NSArray, NSMutableArray, NSMutableDictionary, NSString, SimpleAudioEngine;

@interface ARRenderingEngine : NSObject <AROnlineVideoDelegate>
{
    struct GAPlatformiOS *_platform;
    struct ARIdleGame *_idleGame;
    struct AR3DGame *_3dGame;
    SimpleAudioEngine *_audioEngine;
    struct ARVideoGame *_videoGame;
    NSMutableArray *_videoTasks;
    NSMutableDictionary *_players;
    ARVideoTask *_currentVideoTask;
    ARCameraFrame *_videoFrame;
    _Bool _restartIdleGameAnimation;
    _Bool _isContentHidden;
    _Bool _lineVisible;
    float _scanEdgeEnd;
    id <ARRenderingEngineDelegate> _delegate;
}

@property(nonatomic) _Bool lineVisible; // @synthesize lineVisible=_lineVisible;
@property(nonatomic) float scanEdgeEnd; // @synthesize scanEdgeEnd=_scanEdgeEnd;
@property(nonatomic) __weak id <ARRenderingEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isContentHidden; // @synthesize isContentHidden=_isContentHidden;
- (void).cxx_destruct;
- (id)getPlayerFromCache:(id)arg1;
- (void)setCameraProjectionMatrix:(float *)arg1;
- (void)setCameraModelMatrix:(float *)arg1;
- (void)stop;
- (void)advanceToNextVideo;
- (void)OnVideoFinish:(id)arg1;
- (void)OnTXVideoDeocde:(struct CGSize)arg1 y:(id)arg2 uvSize:(struct CGSize)arg3 uv:(id)arg4 adapter:(id)arg5;
- (void)localVideoEnd:(id)arg1;
- (void)onPlayerItemEnd:(id)arg1;
- (void)playVideoTask:(id)arg1;
- (void)startPlayVideo:(id)arg1;
- (void)onContentsEnd;
- (void)startPlay3dScene:(id)arg1 audio:(id)arg2;
- (void)frame;
- (void)setCameraFrameYData:(id)arg1 yDimensions:(struct CGSize)arg2 uvData:(id)arg3 yDimensions:(struct CGSize)arg4;
@property(readonly, nonatomic, getter=getVideoTasks) NSArray *videoTasks;
@property(readonly, nonatomic, getter=getCurrentVideoTask) ARVideoTask *currentVideoTask;
- (void)dealloc;
- (id)initWithDisplayDimensions:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

