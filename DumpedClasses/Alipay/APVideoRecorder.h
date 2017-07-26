//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "APAudioSessionManagerDelegate.h"
#import "APBeautyManagerDelegate.h"
#import "APMVideoWriterDelegate.h"
#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "CLLocationManagerDelegate.h"
#import "RecorderLightDarkViewDelegate.h"

@class APBeautyManager, APMRecorderFocusView, APMTextureView, APMVideoPreviewViewContainer, APMVideoWriter, APVideoExportSetting, APVideoRemoteInfo, AVCaptureAudioDataOutput, AVCaptureConnection, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, CLLocation, CLLocationManager, CMMotionManager, EAGLContext, NSDate, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSTimer, RecorderLightDarkView, RecorderLoadingView, UIImage, UILabel;

@interface APVideoRecorder : UIView <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, APMVideoWriterDelegate, APAudioSessionManagerDelegate, RecorderLightDarkViewDelegate, APBeautyManagerDelegate, CLLocationManagerDelegate>
{
    _Bool _allowedToUseGPU;
    _Bool _enableBeautyMode;
    _Bool _willCompressWhenInterrupted;
    _Bool _enableZoom;
    _Bool _envirnomentDark;
    _Bool _sessionInited;
    _Bool _isStoppingRunningCalled;
    _Bool _isStoppingRecordingCalled;
    _Bool _isBackgroundImageUpdated;
    _Bool _deviceAuthorized;
    _Bool _remoteNeedReport;
    _Bool _enableRotation;
    _Bool _isCanceled;
    _Bool _isRecording;
    _Bool _cameraLoaded;
    _Bool _hasShownZoomDisableTips;
    _Bool _shouldShowLightDarkView;
    _Bool _cameraDidStartRunning;
    _Bool _needClearBlurAnimation;
    _Bool _isDetectFace;
    unsigned long long _flashMode;
    APVideoExportSetting *_exportSetting;
    unsigned long long _maxRecordedSeconds;
    unsigned long long _capturingMode;
    long long _currentPosition;
    unsigned long long _lowLightMode;
    double _beautyLevel;
    UIImage *_loadingImage;
    unsigned long long _recordingOrientationDetectMode;
    long long _recordingOrientation;
    id <APVideoRecorderDelegate> _delegate;
    unsigned long long _torchMode;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    AVCaptureVideoDataOutput *_captureVideoDataOutput;
    AVCaptureAudioDataOutput *_captureAudioDataOutput;
    AVCaptureConnection *_audioConnection;
    AVCaptureConnection *_videoConnection;
    APMVideoWriter *_videoWriter;
    long long _videoOrientation;
    long long _orientationFromMotionManager;
    CMMotionManager *_motionManager;
    AVCaptureStillImageOutput *_stillImageOutput;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<OS_dispatch_queue> *_videoDataOutputQueue;
    NSObject<OS_dispatch_queue> *_audioDataOutputQueue;
    NSTimer *_recorderTimer;
    CDUnknownBlockType _recordHandler;
    CDUnknownBlockType _runningHandler;
    long long _animationFinishCalledTimes;
    NSDate *_lastUpdateTimeOfLoadingImageBackground;
    NSMutableDictionary *_cloudDarkValueConfigDic;
    APMVideoPreviewViewContainer *_previewContainer;
    RecorderLoadingView *_loadingView;
    APMRecorderFocusView *_focusView;
    struct APMTextureView *_preview;
    UILabel *_zoomTipLabel;
    NSTimer *_zoomTipTimer;
    RecorderLightDarkView *_lightDarkView;
    UILabel *_zoomDisableTipsLabel;
    NSTimer *_zoomDisableTipsTimer;
    unsigned long long _retryCount;
    CDUnknownBlockType _recordingCompleteAction;
    APBeautyManager *_beautyManager;
    EAGLContext *_context;
    NSOperationQueue *_motionMonitorQueue;
    NSString *_materialPath;
    unsigned long long _fileType;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    NSDate *_widgetInitStartTime;
    NSDate *_widgetInitReadyTime;
    NSDate *_cameraOpenStartTime;
    NSDate *_cameraOpenCompleteTime;
    NSDate *_cameraImageShowTime;
    NSDate *_videoRecordStartTime;
    NSDate *_videoFirstFrameEncodeTime;
    NSDate *_videoRecordStopTime;
    NSDate *_videoStoreInCacheTime;
    APVideoRemoteInfo *_videoRemoteInfo;
    struct CGSize _cameraSize;
    struct CGSize _previewSize;
    struct CGSize _exportSize;
    struct _opaque_pthread_mutex_t _lock;
}

@property(retain, nonatomic) APVideoRemoteInfo *videoRemoteInfo; // @synthesize videoRemoteInfo=_videoRemoteInfo;
@property(retain, nonatomic) NSDate *videoStoreInCacheTime; // @synthesize videoStoreInCacheTime=_videoStoreInCacheTime;
@property(retain, nonatomic) NSDate *videoRecordStopTime; // @synthesize videoRecordStopTime=_videoRecordStopTime;
@property(retain, nonatomic) NSDate *videoFirstFrameEncodeTime; // @synthesize videoFirstFrameEncodeTime=_videoFirstFrameEncodeTime;
@property(retain, nonatomic) NSDate *videoRecordStartTime; // @synthesize videoRecordStartTime=_videoRecordStartTime;
@property(retain, nonatomic) NSDate *cameraImageShowTime; // @synthesize cameraImageShowTime=_cameraImageShowTime;
@property(retain, nonatomic) NSDate *cameraOpenCompleteTime; // @synthesize cameraOpenCompleteTime=_cameraOpenCompleteTime;
@property(retain, nonatomic) NSDate *cameraOpenStartTime; // @synthesize cameraOpenStartTime=_cameraOpenStartTime;
@property(retain, nonatomic) NSDate *widgetInitReadyTime; // @synthesize widgetInitReadyTime=_widgetInitReadyTime;
@property(retain, nonatomic) NSDate *widgetInitStartTime; // @synthesize widgetInitStartTime=_widgetInitStartTime;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) unsigned long long fileType; // @synthesize fileType=_fileType;
@property(nonatomic) _Bool isDetectFace; // @synthesize isDetectFace=_isDetectFace;
@property(retain, nonatomic) NSString *materialPath; // @synthesize materialPath=_materialPath;
@property(nonatomic) struct _opaque_pthread_mutex_t lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSOperationQueue *motionMonitorQueue; // @synthesize motionMonitorQueue=_motionMonitorQueue;
@property(nonatomic) _Bool needClearBlurAnimation; // @synthesize needClearBlurAnimation=_needClearBlurAnimation;
@property(nonatomic) _Bool cameraDidStartRunning; // @synthesize cameraDidStartRunning=_cameraDidStartRunning;
@property(nonatomic) struct CGSize exportSize; // @synthesize exportSize=_exportSize;
@property(nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(nonatomic) struct CGSize cameraSize; // @synthesize cameraSize=_cameraSize;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) APBeautyManager *beautyManager; // @synthesize beautyManager=_beautyManager;
@property(copy, nonatomic) CDUnknownBlockType recordingCompleteAction; // @synthesize recordingCompleteAction=_recordingCompleteAction;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) _Bool shouldShowLightDarkView; // @synthesize shouldShowLightDarkView=_shouldShowLightDarkView;
@property(retain, nonatomic) NSTimer *zoomDisableTipsTimer; // @synthesize zoomDisableTipsTimer=_zoomDisableTipsTimer;
@property(retain, nonatomic) UILabel *zoomDisableTipsLabel; // @synthesize zoomDisableTipsLabel=_zoomDisableTipsLabel;
@property(nonatomic) _Bool hasShownZoomDisableTips; // @synthesize hasShownZoomDisableTips=_hasShownZoomDisableTips;
@property(retain, nonatomic) RecorderLightDarkView *lightDarkView; // @synthesize lightDarkView=_lightDarkView;
@property(retain, nonatomic) NSTimer *zoomTipTimer; // @synthesize zoomTipTimer=_zoomTipTimer;
@property(retain, nonatomic) UILabel *zoomTipLabel; // @synthesize zoomTipLabel=_zoomTipLabel;
@property(retain, nonatomic) APMTextureView *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) APMRecorderFocusView *focusView; // @synthesize focusView=_focusView;
@property(retain, nonatomic) RecorderLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) APMVideoPreviewViewContainer *previewContainer; // @synthesize previewContainer=_previewContainer;
@property(retain, nonatomic, getter=getCloudDarkValueConfigDic) NSMutableDictionary *cloudDarkValueConfigDic; // @synthesize cloudDarkValueConfigDic=_cloudDarkValueConfigDic;
@property(retain, nonatomic) NSDate *lastUpdateTimeOfLoadingImageBackground; // @synthesize lastUpdateTimeOfLoadingImageBackground=_lastUpdateTimeOfLoadingImageBackground;
@property(nonatomic) _Bool cameraLoaded; // @synthesize cameraLoaded=_cameraLoaded;
@property(nonatomic) long long animationFinishCalledTimes; // @synthesize animationFinishCalledTimes=_animationFinishCalledTimes;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) _Bool enableRotation; // @synthesize enableRotation=_enableRotation;
@property(nonatomic) _Bool remoteNeedReport; // @synthesize remoteNeedReport=_remoteNeedReport;
@property(nonatomic, getter=isDeviceAuthorized) _Bool deviceAuthorized; // @synthesize deviceAuthorized=_deviceAuthorized;
@property(nonatomic) _Bool isBackgroundImageUpdated; // @synthesize isBackgroundImageUpdated=_isBackgroundImageUpdated;
@property(nonatomic) _Bool isStoppingRecordingCalled; // @synthesize isStoppingRecordingCalled=_isStoppingRecordingCalled;
@property(nonatomic) _Bool isStoppingRunningCalled; // @synthesize isStoppingRunningCalled=_isStoppingRunningCalled;
@property(nonatomic) _Bool sessionInited; // @synthesize sessionInited=_sessionInited;
@property(copy, nonatomic) CDUnknownBlockType runningHandler; // @synthesize runningHandler=_runningHandler;
@property(copy, nonatomic) CDUnknownBlockType recordHandler; // @synthesize recordHandler=_recordHandler;
@property(retain, nonatomic) NSTimer *recorderTimer; // @synthesize recorderTimer=_recorderTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioDataOutputQueue; // @synthesize audioDataOutputQueue=_audioDataOutputQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoDataOutputQueue; // @synthesize videoDataOutputQueue=_videoDataOutputQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue; // @synthesize sessionQueue=_sessionQueue;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) long long orientationFromMotionManager; // @synthesize orientationFromMotionManager=_orientationFromMotionManager;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(retain, nonatomic) APMVideoWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(retain, nonatomic) AVCaptureConnection *videoConnection; // @synthesize videoConnection=_videoConnection;
@property(retain, nonatomic) AVCaptureConnection *audioConnection; // @synthesize audioConnection=_audioConnection;
@property(retain, nonatomic) AVCaptureAudioDataOutput *captureAudioDataOutput; // @synthesize captureAudioDataOutput=_captureAudioDataOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *captureVideoDataOutput; // @synthesize captureVideoDataOutput=_captureVideoDataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *audioDeviceInput; // @synthesize audioDeviceInput=_audioDeviceInput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoDeviceInput; // @synthesize videoDeviceInput=_videoDeviceInput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool envirnomentDark; // @synthesize envirnomentDark=_envirnomentDark;
@property(nonatomic) unsigned long long torchMode; // @synthesize torchMode=_torchMode;
@property(nonatomic) __weak id <APVideoRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long recordingOrientation; // @synthesize recordingOrientation=_recordingOrientation;
@property(nonatomic) unsigned long long recordingOrientationDetectMode; // @synthesize recordingOrientationDetectMode=_recordingOrientationDetectMode;
@property(nonatomic) _Bool enableZoom; // @synthesize enableZoom=_enableZoom;
@property(retain, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(nonatomic) _Bool willCompressWhenInterrupted; // @synthesize willCompressWhenInterrupted=_willCompressWhenInterrupted;
@property(nonatomic) double beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) _Bool enableBeautyMode; // @synthesize enableBeautyMode=_enableBeautyMode;
@property(nonatomic) unsigned long long lowLightMode; // @synthesize lowLightMode=_lowLightMode;
@property(nonatomic) long long currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) unsigned long long capturingMode; // @synthesize capturingMode=_capturingMode;
@property(nonatomic) unsigned long long maxRecordedSeconds; // @synthesize maxRecordedSeconds=_maxRecordedSeconds;
- (void).cxx_destruct;
@property(retain, nonatomic) APVideoExportSetting *exportSetting; // @synthesize exportSetting=_exportSetting;
- (void)layoutSubviews;
- (_Bool)isDark;
@property(nonatomic) unsigned long long flashMode; // @synthesize flashMode=_flashMode;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (_Bool)changeCameraFlashMode:(unsigned long long)arg1;
- (void)changeDeviceProperty:(CDUnknownBlockType)arg1;
- (void)focusWithMode:(long long)arg1 exposureMode:(long long)arg2 atPoint:(struct CGPoint)arg3 monitorSubjectAreaChange:(_Bool)arg4;
- (void)setFocusCursorWithPoint:(struct CGPoint)arg1;
- (void)statusBarOrientationChange:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)removeNotificationForBackgroundHandling;
- (void)addNotificationForBackgroundHandling;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)sessionDidStopRunning:(id)arg1;
- (void)sessionDidStartRunning:(id)arg1;
- (void)sessionRuntimeError:(id)arg1;
- (void)areaDidChange:(id)arg1;
- (void)removeNotificationFromStillOutput;
- (void)addNotificationToStillOutput;
- (void)removeNotificationToCaptureSession:(id)arg1;
- (void)addNotificationToCaptureSession:(id)arg1;
- (void)removeNotificationFromCaptureDevice:(id)arg1;
- (void)addNotificationToCaptureDevice:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)parseMaterialRenderInfo:(id)arg1;
- (struct CGRect)calcZoomDiableTipsLabelFrame;
- (struct CGRect)calcZoomTipLabelFrame;
- (void)parseMotionAcceleration:(CDStruct_31142d93)arg1;
- (void)stopLocationUpdate;
- (void)startLocationUpdate;
- (void)finishMonitorMotion;
- (void)beginMonitorMotion;
- (void)updateLoadingImageBackground;
- (_Bool)needUpdateLoadingImageBackground;
- (id)getLoadingImageBackground;
- (id)getCreateDateForPath:(id)arg1;
- (id)getStorePathForLoadingImageBackground;
- (id)getIdForLoadingImageBackground;
- (struct CGSize)getPreviewSizeFromCameraSize:(struct CGSize)arg1;
- (void)resetBeautyManager;
- (void)initBeautyManager:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)isSizeChanged:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)isOnPhoneCall;
- (void)handleVideo:(id)arg1;
- (_Bool)isLowLightBrightness:(double)arg1;
- (double)getBrightnessFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)actionFinished;
- (void)clearBlurAnimtation;
- (void)switchCaptureModeAnimation;
- (void)cleanTempVideoFile:(id)arg1;
- (void)switchCameraInternal:(CDUnknownBlockType)arg1;
- (void)switchCameraAnimationWithStartedBlock:(CDUnknownBlockType)arg1;
- (void)hideZoomDisableTips;
- (void)showZoomDisableTips;
- (void)hideZoomTip;
- (void)showZoomTip;
- (_Bool)isZoomSupported;
- (void)zoom;
- (void)runTakingPictureAnimation;
- (struct CGPoint)getCaptureDevicePointForPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)focusAndExposeTap:(id)arg1;
- (void)stopRecording:(_Bool)arg1;
- (void)startRecording;
- (void)endLoading;
- (void)beginLoading;
- (void)layoutItems;
- (id)getCameraDeviceWithPosition:(long long)arg1;
- (void)requestCameraPermission:(CDUnknownBlockType)arg1;
- (id)getQualityWithPosition:(long long)arg1;
- (void)setCapturePresetQuality:(id)arg1;
- (void)uninitVideoOutput;
- (void)uninitVideoInput;
- (void)uninitAudioOutput;
- (void)uninitAudioInput;
- (void)uninitCaptureSession;
- (void)updateVideoConnection;
- (void)updateAudioSessionWithMode:(unsigned long long)arg1;
- (void)updateAudioConnection;
- (_Bool)initVideoOutput;
- (_Bool)initAudioOutput;
- (_Bool)initAudioInput;
- (_Bool)initVideoInput;
- (_Bool)initCaptureSession;
- (_Bool)isRecorderRunning;
- (void)restoreAudioSession;
- (void)configAudioSession;
- (void)beautyManager:(id)arg1 texture:(unsigned int)arg2 renderinfo:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
- (void)lightDarkButtonTouched:(_Bool)arg1;
- (void)audioSessionManagerReceivePauseCommand:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)videoWriterDidFinishWriting:(id)arg1;
- (void)videoWriter:(id)arg1 didFailWithError:(id)arg2;
- (struct CGAffineTransform)transformFromVideoBufferOrientationToOrientation:(long long)arg1 withAutoMirroring:(_Bool)arg2;
- (void)setVideoFilterId:(id)arg1;
- (void)setSeletedMaterialId:(id)arg1;
- (struct CGSize)getExpectedPictureSizeFromImage:(id)arg1;
- (void)takePicture:(CDUnknownBlockType)arg1;
- (void)stopRecording;
- (void)cancelRecording;
- (void)startRecording:(CDUnknownBlockType)arg1;
- (void)stopRunning;
- (void)startRunning:(CDUnknownBlockType)arg1;
- (void)switchCamera:(CDUnknownBlockType)arg1;
- (void)setFlashMode:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setCapturingMode:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)doInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

