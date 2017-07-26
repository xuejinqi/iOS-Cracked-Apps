//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAsset, AVAssetReader, AVAssetReaderAudioMixOutput, AVAssetReaderVideoCompositionOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVAudioMix, AVVideoComposition, NSArray, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface SDAVAssetExportSession : NSObject
{
    id <SDAVAssetExportSessionDelegate> _delegate;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    AVAudioMix *_audioMix;
    NSString *_outputFileType;
    NSURL *_outputURL;
    NSDictionary *_videoSettings;
    NSDictionary *_audioSettings;
    _Bool _shouldOptimizeForNetworkUse;
    NSArray *_metadata;
    float _progress;
    long long _status;
    int _xo;
    AVAssetReaderAudioMixOutput *_audioOutput;
    AVAssetReaderVideoCompositionOutput *_videoOutput;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    NSError *_error;
    double duration;
    CDStruct_1b6d18a9 lastSamplePresentationTime;
    AVAssetReader *_reader;
    AVAssetWriter *_writer;
    AVAssetWriterInputPixelBufferAdaptor *_videoPixelBufferAdaptor;
    NSObject<OS_dispatch_queue> *_inputQueue;
    CDUnknownBlockType _completionHandler;
    CDStruct_e83c9415 _timeRange;
}

+ (id)exportSessionWithAsset:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *inputQueue; // @synthesize inputQueue=_inputQueue;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (void).cxx_destruct;
- (void)reset;
- (void)cancelExport;
@property(readonly, nonatomic) long long status; // @dynamic status;
@property(readonly, nonatomic) NSError *error; // @dynamic error;
- (void)complete;
- (void)finish;
- (id)buildDefaultVideoComposition;
- (_Bool)encodeReadySamplesFromOutput:(id)arg1 toInput:(id)arg2;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) AVAsset *asset; // @dynamic asset;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @dynamic audioInput;
@property(copy, nonatomic) AVAudioMix *audioMix; // @dynamic audioMix;
@property(retain, nonatomic) AVAssetReaderAudioMixOutput *audioOutput; // @dynamic audioOutput;
@property(copy, nonatomic) NSDictionary *audioSettings; // @dynamic audioSettings;
@property(nonatomic) __weak id <SDAVAssetExportSessionDelegate> delegate; // @dynamic delegate;
@property(copy, nonatomic) NSArray *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *outputFileType; // @dynamic outputFileType;
@property(copy, nonatomic) NSURL *outputURL; // @dynamic outputURL;
@property(nonatomic) float progress; // @dynamic progress;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @dynamic shouldOptimizeForNetworkUse;
@property(copy, nonatomic) AVVideoComposition *videoComposition; // @dynamic videoComposition;
@property(retain, nonatomic) AVAssetWriterInput *videoInput; // @dynamic videoInput;
@property(retain, nonatomic) AVAssetReaderVideoCompositionOutput *videoOutput; // @dynamic videoOutput;
@property(copy, nonatomic) NSDictionary *videoSettings; // @dynamic videoSettings;

@end

