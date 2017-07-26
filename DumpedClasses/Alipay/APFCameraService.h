//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSError, NSObject<OS_dispatch_queue>, NSString;

@interface APFCameraService : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate>
{
    NSObject<OS_dispatch_queue> *videoDataOutputQueue;
    NSObject<OS_dispatch_queue> *audioDataOutputQueue;
    AVCaptureVideoDataOutput *videoOutput;
    AVCaptureAudioDataOutput *audioOutput;
    id <APFCameraServiceDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_cameraPreviewLayer;
    NSError *_cameraInitError;
    NSString *_cameraInitErrorDesc;
}

@property(retain, nonatomic) NSString *cameraInitErrorDesc; // @synthesize cameraInitErrorDesc=_cameraInitErrorDesc;
@property(retain, nonatomic) NSError *cameraInitError; // @synthesize cameraInitError=_cameraInitError;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *cameraPreviewLayer; // @synthesize cameraPreviewLayer=_cameraPreviewLayer;
@property(nonatomic) __weak id <APFCameraServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)initFrontCameraWith:(id)arg1;
- (_Bool)setupAVCaptureWithSession:(id)arg1;
- (_Bool)setupAudioWithSession:(id)arg1;
- (_Bool)setupAVCapturePreviewWithSession:(id)arg1 onView:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)stopCamera;
- (void)resumeCamera;
- (void)pauseCamera;
- (_Bool)initCameraLayerwithView:(id)arg1 withMIC:(_Bool)arg2;
- (id)initWithSuperView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

