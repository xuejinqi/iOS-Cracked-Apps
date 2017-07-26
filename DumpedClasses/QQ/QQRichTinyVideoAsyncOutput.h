//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureVideoDataOutput, NSObject<OS_dispatch_queue>, NSObject<QQRichTinyVideoAsyncOutputDelegate>, NSString;

@interface QQRichTinyVideoAsyncOutput : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _running;
    NSObject<QQRichTinyVideoAsyncOutputDelegate> *_delegate;
    long long _videoCaptureOrientation;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureAudioDataOutput *_audioDataOutput;
    NSObject<OS_dispatch_queue> *_videoOutputWorkingQueue;
    NSObject<OS_dispatch_queue> *_audioOutputWorkingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioOutputWorkingQueue; // @synthesize audioOutputWorkingQueue=_audioOutputWorkingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoOutputWorkingQueue; // @synthesize videoOutputWorkingQueue=_videoOutputWorkingQueue;
@property(retain, nonatomic) AVCaptureAudioDataOutput *audioDataOutput; // @synthesize audioDataOutput=_audioDataOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(nonatomic) long long videoCaptureOrientation; // @synthesize videoCaptureOrientation=_videoCaptureOrientation;
@property(nonatomic) NSObject<QQRichTinyVideoAsyncOutputDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withInfo:(id)arg2;
- (void)asyncHandleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2;
- (long long)sampleBufferOrientation:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)disconnectAudio:(id)arg1;
- (_Bool)connectAudioToCaptureSession:(id)arg1;
- (_Bool)disconnectVideo:(id)arg1;
- (_Bool)setVideoCaptureOrientationImpl;
- (_Bool)shouldVideoStabilizationSupported;
- (_Bool)connectVideoToCaptureSession:(id)arg1 withPixelFormatType:(unsigned int)arg2;
- (_Bool)connectVideoToCaptureSession:(id)arg1;
- (id)createAudioOutput;
- (id)createVideioOutput:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

