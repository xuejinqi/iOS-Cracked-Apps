//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVMutableComposition, AVMutableCompositionTrack, AVMutableVideoComposition, AVMutableVideoCompositionInstruction, AVMutableVideoCompositionLayerInstruction, NSArray, NSString, SDAVAssetExportSession;

@interface QQRichMp4Merge : NSObject
{
    _Bool _cropAndScale;
    _Bool _removeAudio;
    int _videoTimeScale;
    unsigned int _audioChannelNum;
    AVMutableCompositionTrack *_mutableCompositionVideoTrack;
    AVMutableCompositionTrack *_mutableCompositionAudioTrack;
    AVMutableComposition *_mixComposition;
    AVMutableVideoComposition *_videoComposition;
    AVMutableVideoCompositionInstruction *_videoCompositionInstruction;
    AVMutableVideoCompositionLayerInstruction *_videoCompositionLayerInstruction;
    NSArray *_sourceURL;
    NSArray *_sourceOrientations;
    NSString *_outputPath;
    unsigned long long _videoBitrate;
    unsigned long long _audioSampleRate;
    unsigned long long _audioEncodeBitrate;
    SDAVAssetExportSession *_exportSession;
    CDUnknownBlockType _callback;
    struct CGSize _videoOrgSize;
    struct CGSize _targetSize;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool removeAudio; // @synthesize removeAudio=_removeAudio;
@property(retain, nonatomic) SDAVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(nonatomic) unsigned long long audioEncodeBitrate; // @synthesize audioEncodeBitrate=_audioEncodeBitrate;
@property(nonatomic) unsigned long long audioSampleRate; // @synthesize audioSampleRate=_audioSampleRate;
@property(nonatomic) unsigned int audioChannelNum; // @synthesize audioChannelNum=_audioChannelNum;
@property(nonatomic) unsigned long long videoBitrate; // @synthesize videoBitrate=_videoBitrate;
@property(nonatomic) _Bool cropAndScale; // @synthesize cropAndScale=_cropAndScale;
@property(retain, nonatomic) NSString *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(retain, nonatomic) NSArray *sourceOrientations; // @synthesize sourceOrientations=_sourceOrientations;
@property(retain, nonatomic) NSArray *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) struct CGSize videoOrgSize; // @synthesize videoOrgSize=_videoOrgSize;
@property(nonatomic) int videoTimeScale; // @synthesize videoTimeScale=_videoTimeScale;
@property(retain, nonatomic) AVMutableVideoCompositionLayerInstruction *videoCompositionLayerInstruction; // @synthesize videoCompositionLayerInstruction=_videoCompositionLayerInstruction;
@property(retain, nonatomic) AVMutableVideoCompositionInstruction *videoCompositionInstruction; // @synthesize videoCompositionInstruction=_videoCompositionInstruction;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) AVMutableComposition *mixComposition; // @synthesize mixComposition=_mixComposition;
@property(retain, nonatomic) AVMutableCompositionTrack *mutableCompositionAudioTrack; // @synthesize mutableCompositionAudioTrack=_mutableCompositionAudioTrack;
@property(retain, nonatomic) AVMutableCompositionTrack *mutableCompositionVideoTrack; // @synthesize mutableCompositionVideoTrack=_mutableCompositionVideoTrack;
- (void)onAVAudioSessionMediaServicesWereResetNotification:(id)arg1;
- (_Bool)MergeImpl;
- (_Bool)doMerge:(CDUnknownBlockType)arg1;
- (_Bool)initSomeThing;
- (void)cleanAll;
- (_Bool)buildExportSession;
- (_Bool)buildVideoCompositionInstruction;
- (_Bool)buildVideoCompositionLayerInstructionWithCropAndScale;
- (double)getVideoCompositionTranslateOffsetYviaScaleVideoHeight:(double)arg1 targetHeight:(double)arg2;
- (_Bool)buildVideoCompositionLayerInstructionScale;
- (_Bool)buildVideoCompositionLayerInstruction;
- (struct CGSize)getTransformedSize:(struct CGSize)arg1;
- (_Bool)buildVideoComposition;
- (_Bool)buildMixCompositoin;
- (_Bool)startMerge:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

