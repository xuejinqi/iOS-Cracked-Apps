//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseDownloadTask.h"

@class NSMutableData, NSString, PicDecrypt, ProgressiveJpgDownloadingInfo, RichMediaTransferProgressInfo;

@interface QQPicDownloadTask : QQBaseDownloadTask
{
    _Bool _isNeedEncryptImage;
    _Bool _isNeedSvrEncryptImageData;
    _Bool _isNeedEncryptImageDownloadUrl;
    unsigned int _atleastDownloadLen;
    unsigned int _atleastShowLen;
    int _picSize;
    int _httpStatusCode;
    unsigned long long _getPicSizeType;
    long long _eDownloadMode;
    unsigned long long _msgTime;
    unsigned long long _imgFileType;
    PicDecrypt *_picDecrypt;
    unsigned long long _leftDownloadDataLen;
    unsigned long long _localFileSize;
    unsigned long long _duplicateDownloadDataLen;
    RichMediaTransferProgressInfo *_progressInfo;
    ProgressiveJpgDownloadingInfo *_progressiveJpgInfo;
    NSMutableData *_responseData;
    NSString *_trackUuid;
}

@property(retain, nonatomic) NSString *trackUuid; // @synthesize trackUuid=_trackUuid;
@property(nonatomic) int httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(retain) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) ProgressiveJpgDownloadingInfo *progressiveJpgInfo; // @synthesize progressiveJpgInfo=_progressiveJpgInfo;
@property(retain, nonatomic) RichMediaTransferProgressInfo *progressInfo; // @synthesize progressInfo=_progressInfo;
@property(nonatomic) unsigned long long duplicateDownloadDataLen; // @synthesize duplicateDownloadDataLen=_duplicateDownloadDataLen;
@property unsigned long long localFileSize; // @synthesize localFileSize=_localFileSize;
@property unsigned long long leftDownloadDataLen; // @synthesize leftDownloadDataLen=_leftDownloadDataLen;
@property(retain, nonatomic) PicDecrypt *picDecrypt; // @synthesize picDecrypt=_picDecrypt;
@property(nonatomic) _Bool isNeedEncryptImageDownloadUrl; // @synthesize isNeedEncryptImageDownloadUrl=_isNeedEncryptImageDownloadUrl;
@property(nonatomic) _Bool isNeedSvrEncryptImageData; // @synthesize isNeedSvrEncryptImageData=_isNeedSvrEncryptImageData;
@property(nonatomic) unsigned long long imgFileType; // @synthesize imgFileType=_imgFileType;
@property(nonatomic) unsigned long long msgTime; // @synthesize msgTime=_msgTime;
@property int picSize; // @synthesize picSize=_picSize;
@property(nonatomic) unsigned int atleastShowLen; // @synthesize atleastShowLen=_atleastShowLen;
@property(nonatomic) unsigned int atleastDownloadLen; // @synthesize atleastDownloadLen=_atleastDownloadLen;
@property(nonatomic) long long eDownloadMode; // @synthesize eDownloadMode=_eDownloadMode;
@property(nonatomic) unsigned long long getPicSizeType; // @synthesize getPicSizeType=_getPicSizeType;
@property(nonatomic) _Bool isNeedEncryptImage; // @synthesize isNeedEncryptImage=_isNeedEncryptImage;
- (id)getReportUUid;
- (void)reportBrokenDl:(_Bool)arg1;
- (void)reportImageDecryptError:(id)arg1;
- (void)reportImageDecode:(_Bool)arg1;
- (id)getHttpCookieHeaders:(id)arg1;
- (float)getPicDownloadProcess;
- (void)saveOfflinePicFileData:(_Bool)arg1;
- (id)getDownloadData;
- (_Bool)runHttpGetImageAgain;
- (id)truncateValidDataByReceiveData:(id)arg1;
- (long long)actualStartPositionOfDownloadData:(id)arg1 compareHasDownloadDataSize:(id)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)sessionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)didFailWithErrorOnRequestThread:(id)arg1;
- (void)sessionDidFinishLoadingOnRequestThread:(id)arg1;
- (_Bool)checkInvalidRedirectError:(id)arg1;
- (void)didReceiveDataOnRequestThread:(id)arg1;
- (void)didReceiveResponseOnRequestThread:(id)arg1;
- (void)cancelOnRequestThread;
- (_Bool)checkResumeBrokenDl;
- (_Bool)checkEncryptImage;
- (void)startDownloadConnection:(id)arg1;
- (void)startDownloadOnThread;
- (void)startDownload;
- (void)dealloc;
- (id)init;
- (_Bool)mosaicPicData:(id)arg1;
- (_Bool)encryptPicData:(id)arg1;
- (_Bool)encryptDownloadUrl;

@end

