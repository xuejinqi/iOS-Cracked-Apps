//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichOperatorBase.h"

@class NSString, NSTimer, QQAsset, SDAVAssetExportSession, UIImage;

@interface QQRichShortVideoProcessor : QQRichOperatorBase
{
    id <QQRichShortVideoProcessorDelegate> _theDelegate;
    NSTimer *_timer;
    UIImage *_thumbnail;
    NSString *_compressedMp4Path;
    NSString *_md5;
    QQAsset *_alasset;
    _Bool _isQQTribe;
    double _shortVideoOptimizationMaxLongSide;
    double _shortVideoOptimizationABR;
    double _shortVideoOptimizationMinDuration;
    double _shortVideoOptimizationConstantParam;
    double _shortVideoOptimizationMaxFPS;
    double _shortVideoOptimizationAudioBitRate;
    SDAVAssetExportSession *_exportSession;
    struct CGSize _videoSize;
    _Bool _shouldOptimizeForNetworkUse;
    int _sessionType;
}

@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) id <QQRichShortVideoProcessorDelegate> theDelegate; // @synthesize theDelegate=_theDelegate;
- (_Bool)isSourceVideoCompressed:(id)arg1;
- (void)updateDpc:(id)arg1;
- (id)description;
- (id)getFileMd5Burst:(id)arg1;
- (void)showProgress;
- (void)stopTimer;
- (void)startTimer;
- (void)getVideoProgress;
- (_Bool)isFinish;
- (_Bool)cancel;
- (_Bool)canCancel;
- (_Bool)execut;
- (void)onVideoExportComplete:(id)arg1 status:(long long)arg2 handle:(CDUnknownBlockType)arg3;
- (struct CGAffineTransform)validTranformWithTransform:(struct CGAffineTransform)arg1 originSize:(struct CGSize)arg2;
- (struct CGSize)getSizeWithTransform:(struct CGAffineTransform)arg1 inputSize:(struct CGSize)arg2;
- (_Bool)compressMov2Mp4:(CDUnknownBlockType)arg1;
- (id)scaleThumb:(id)arg1;
- (_Bool)genVideoThumbnail;
- (void)removeTmpFile;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(retain, nonatomic) QQAsset *alasset; // @dynamic alasset;
@property(retain, nonatomic) NSString *compressedMp4Path; // @dynamic compressedMp4Path;
@property(nonatomic) _Bool isQQTribe; // @dynamic isQQTribe;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) double shortVideoOptimizationABR; // @dynamic shortVideoOptimizationABR;
@property(nonatomic) double shortVideoOptimizationMaxLongSide; // @dynamic shortVideoOptimizationMaxLongSide;
@property(nonatomic) double shortVideoOptimizationMinDuration; // @dynamic shortVideoOptimizationMinDuration;
@property(retain, nonatomic) UIImage *thumbnail; // @dynamic thumbnail;

@end

