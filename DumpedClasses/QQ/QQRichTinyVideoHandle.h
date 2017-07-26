//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQMessageModel, QQRichTinyVideoClips, QQRichTinyVideoProcessor, QQViewController;

@interface QQRichTinyVideoHandle : NSObject
{
    _Bool _asyncMerge;
    QQViewController *_parentViewController;
    int _accType;
    _Bool _async;
    QQRichTinyVideoClips *_videoClips;
    NSString *_thumbnailMd5;
    QQMessageModel *_msgModel;
    int _xo;
    struct CGSize _thumbnailSize;
    _Bool _isSendMsg;
    int _chatSessionType;
    QQRichTinyVideoProcessor *_processor;
    CDUnknownBlockType _complete_handle;
}

@property(nonatomic) int chatSessionType; // @synthesize chatSessionType=_chatSessionType;
@property(nonatomic) _Bool isSendMsg; // @synthesize isSendMsg=_isSendMsg;
@property(copy, nonatomic) CDUnknownBlockType complete_handle; // @synthesize complete_handle=_complete_handle;
@property(retain, nonatomic) QQRichTinyVideoProcessor *processor; // @synthesize processor=_processor;
- (void)genThumbFinish;
- (void)willStartGenThumb;
- (void)compressFinish;
- (void)willStartCompress;
- (_Bool)updateVideoInfoToDB;
- (id)sendingMsgModel;
- (void)setMsgModelDetailAndSave:(id)arg1;
- (void)doInsertShortVideo;
- (_Bool)insertAIOCell:(id)arg1;
- (id)videoMsgModelClassName;
- (unsigned long long)getVideoBusinessType;
- (id)getVideoThumbFilePath:(id)arg1;
- (id)getMsgContenct;
- (int)getSessionType;
- (_Bool)updateMsgInfo:(id)arg1;
- (_Bool)callbackComplete:(int)arg1 widthMd5:(id)arg2;
- (_Bool)onMergeVideoFailed;
- (_Bool)onMergeVideoFinish;
- (_Bool)renameThumb;
- (_Bool)saveVideoThumb;
- (_Bool)saveCompressedShortVideo;
- (id)getVideoFilePath;
- (_Bool)isVideoFileExist;
- (_Bool)genThumbnail;
- (_Bool)isVideoThumbFileExist:(id)arg1;
- (id)getVideoThumb;
- (void)onVideoProcessEvent:(id)arg1 tag:(long long)arg2 status:(int)arg3;
- (_Bool)mergeVideo;
- (id)genTmpVideoPath;
- (id)processorClassName;
- (_Bool)startProcess;
- (void)dealloc;
- (id)initWithTinyVideoClips:(id)arg1 andQQViewController:(id)arg2;

// Remaining properties
@property(nonatomic) int accType; // @dynamic accType;
@property(nonatomic) _Bool async; // @dynamic async;
@property(nonatomic) _Bool asyncMerge; // @dynamic asyncMerge;
@property(retain, nonatomic) QQViewController *parentViewController; // @dynamic parentViewController;
@property(retain, nonatomic) NSString *thumbnailMd5; // @dynamic thumbnailMd5;
@property(retain, nonatomic) QQRichTinyVideoClips *videoClips; // @dynamic videoClips;

@end

