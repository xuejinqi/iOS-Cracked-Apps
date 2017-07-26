//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQPhotoDelegate.h"

@class NSDictionary, NSString, QQCircularProgressView, QQPublicAccountFaceWallPhoto, QQPublicAccountImageView, UIButton, UIImage;

@interface QQPublicAccountFaceImageView : UIView <QQPhotoDelegate>
{
    QQPublicAccountImageView *_imageView;
    UIImage *_failImage;
    NSString *_imageUrl;
    QQPublicAccountFaceWallPhoto *_urlPhoto;
    _Bool _isDownLoadSuccess;
    QQCircularProgressView *_progressView;
    UIView *_verifyingView;
    id <PubAccountFaceWallImageDelegate> _faceWallImageDelegate;
    _Bool _isNeedDisplayProcessView;
    _Bool _isRoundImage;
    NSDictionary *_configInfo;
    UIButton *_imageButton;
    _Bool _isCustomBackGroundImage;
    int _xo;
}

- (_Bool)imageValide;
- (_Bool)isSupportRightDragToGoBack;
- (void)imageClick:(id)arg1;
- (void)setBackgroudImage:(id)arg1;
- (id)faceWallImage;
- (void)hideVerifyingView;
- (void)showVerifyingView;
- (void)updateProgressView:(double)arg1;
- (void)showProgressLoading;
- (void)hideProgressView;
- (void)showProgressView;
- (void)notifyAsynLoadImageFail:(id)arg1;
- (void)notifyAsynLoadImageSuccess:(id)arg1;
- (void)notifyDownloadThumbFail:(id)arg1;
- (void)notifyDownloadThumbSuccess:(id)arg1;
- (void)notifyNetWorkError:(id)arg1;
- (void)notifyDownloadFail:(id)arg1;
- (void)notifyDownloadSuccess:(id)arg1;
- (void)notifyDownloadProgress:(id)arg1;
- (void)showFailImage;
- (void)showImage:(id)arg1;
- (void)loadImage;
@property(retain, nonatomic) NSString *imageUrl; // @dynamic imageUrl;
- (void)dealloc;
- (void)layoutSubviews;
@property(nonatomic) _Bool isRoundImage; // @dynamic isRoundImage;
- (id)initWithFrameNoDefaultImage:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 defaultImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) NSDictionary *configInfo; // @dynamic configInfo;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) id <PubAccountFaceWallImageDelegate> faceWallImageDelegate; // @dynamic faceWallImageDelegate;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIButton *imageButton; // @dynamic imageButton;
@property(nonatomic) _Bool isCustomBackGroundImage; // @dynamic isCustomBackGroundImage;
@property(nonatomic) _Bool isDownLoadSuccess; // @dynamic isDownLoadSuccess;
@property(nonatomic) _Bool isNeedDisplayProcessView; // @dynamic isNeedDisplayProcessView;
@property(readonly) Class superclass;

@end

