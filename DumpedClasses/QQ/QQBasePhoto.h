//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString, UIImage;

@interface QQBasePhoto : NSObject
{
    UIImage *_image;
    UIImage *_thumbImage;
    struct CGRect _thumbRect;
    NSString *_caption;
    double _progress;
    int _gifStatus;
    long long _fileSize;
    id <QQPhotoDelegate> _delegate;
    NSString *_photoPath;
    NSString *_thumbPath;
    _Bool _isDownloading;
    _Bool _isDownloadingThumb;
    _Bool _isNolongerUse;
    _Bool _isLoadingInProgress;
    NSLock *_loadLock;
    _Bool _isTinyVideo;
    int _xo;
    _Bool _isPTV;
    _Bool _isDynamicVideo;
    _Bool _isGroupFilePic;
    _Bool _isQZVideo;
    _Bool _isQzonePic;
    _Bool _isFilePic;
    _Bool _isFlashPic;
    _Bool _needUseArkHttp;
    long long _imageOrientation;
    struct CGSize _imageSize;
}

+ (id)photoWithPath:(id)arg1;
@property(nonatomic, getter=getImageOrientation) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(nonatomic, getter=getImageSize) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool needUseArkHttp; // @synthesize needUseArkHttp=_needUseArkHttp;
@property(nonatomic) _Bool isFlashPic; // @synthesize isFlashPic=_isFlashPic;
@property(nonatomic) _Bool isFilePic; // @synthesize isFilePic=_isFilePic;
@property(nonatomic) _Bool isQzonePic; // @synthesize isQzonePic=_isQzonePic;
@property(nonatomic) _Bool isQZVideo; // @synthesize isQZVideo=_isQZVideo;
@property(nonatomic) _Bool isGroupFilePic; // @synthesize isGroupFilePic=_isGroupFilePic;
@property(nonatomic) _Bool isDynamicVideo; // @synthesize isDynamicVideo=_isDynamicVideo;
@property(nonatomic) _Bool isPTV; // @synthesize isPTV=_isPTV;
@property _Bool isLoadingInProgress; // @synthesize isLoadingInProgress=_isLoadingInProgress;
@property _Bool isNolongerUse; // @synthesize isNolongerUse=_isNolongerUse;
@property _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(nonatomic) id <QQPhotoDelegate> delegate; // @synthesize delegate=_delegate;
@property long long fileSize; // @synthesize fileSize=_fileSize;
@property double progress; // @synthesize progress=_progress;
@property(retain, nonatomic, getter=getPhotoPath) NSString *photoPath; // @synthesize photoPath=_photoPath;
- (_Bool)isNeedAsyncLoad;
- (void)reloadPhoto;
- (void)cancelDownloadPhoto;
- (void)downloadThumbPhoto;
- (void)downloadPhoto;
- (_Bool)isJpgComplete;
- (void)releaseImage;
- (id)getTmpImage;
- (id)getThumbImage;
- (void)asynLoadImage;
- (id)getImageRawEx;
- (id)getJpegImageRaw;
- (int)getImageScaleDenom;
- (_Bool)isIphone4EarlyDevice;
- (id)getImageRaw;
- (id)getImage;
- (void)isGifBlock:(CDUnknownBlockType)arg1;
- (_Bool)isGif;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *caption; // @dynamic caption;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) _Bool isTinyVideo; // @dynamic isTinyVideo;
@property(retain, nonatomic) NSString *thumbPath; // @dynamic thumbPath;
@property(nonatomic) struct CGRect thumbRect; // @dynamic thumbRect;

@end

