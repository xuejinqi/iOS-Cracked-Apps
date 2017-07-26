//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PhotoBrowserViewControllerDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "QQRichMediaPickerControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, QQBaseChatUIOperation, UIWindow;

@interface QQBaseChatImage : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PhotoBrowserViewControllerDelegate, QQMultiImagePickerControllerDelegate, UIAlertViewDelegate, QQRichMediaPickerControllerDelegate>
{
    QQBaseChatUIOperation *_chatUIOperation;
    _Bool _isLimitMsgView;
    id _PhotoSelected;
    UIWindow *_showWindow;
    _Bool _hasShortVideoPreview;
    UIWindow *_keyWindow;
    _Bool _isFastSendPic;
    int _uploadFrom;
    int _xo;
}

@property(nonatomic) _Bool hasShortVideoPreview; // @synthesize hasShortVideoPreview=_hasShortVideoPreview;
- (void)ptvPickerDidFinishPickingMedia:(id)arg1;
- (void)richMediaPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)richMediaPickerControllerDidCancel:(id)arg1;
- (id)getChatType;
- (id)save:(id)arg1 uuid:(id)arg2 compressAsJpg:(_Bool)arg3 bsecretfile:(_Bool)arg4 useMd5Name:(_Bool)arg5;
- (void)imageSelectedWithOrigin:(id)arg1 bodyType:(int)arg2;
- (id)GetPreviewImageToSend;
- (void)imageSelectedWithBodyType:(id)arg1 bodyType:(int)arg2;
- (void)receiveProcessImage:(id)arg1;
- (void)onEndVideoSession:(id)arg1;
- (void)onAcceptVideoCall:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDiskFull:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didClickPhoto:(id)arg2 isSelected:(_Bool)arg3;
- (void)showSendOriginPhotoToLargeAlert;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didSelectOriginalPhotoList:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectBigPhotoList:(id)arg2;
- (_Bool)isPublicPlatform;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoListWithNoPreUpload:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSendFlashPicsNoPreUpload:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectedFlashBtn:(_Bool)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSendCameraPhoto:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSendEditedPhoto:(id)arg2;
- (void)commitPreuploadPhoto:(id)arg1 scaleMode:(int)arg2 withTimestamp:(long long)arg3;
- (void)asyncSendPhotoList:(id)arg1 scaleMode:(int)arg2 withAni:(_Bool)arg3;
- (void)asyncSendPhotoList:(id)arg1 scaleMode:(int)arg2;
- (void)reportUIImagePickerDevice:(id)arg1;
- (void)onMultiAudioChatReqNotification:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)photoBrowserViewContoller:(id)arg1 didSelectImage:(id)arg2;
- (void)ActionBrowsePhotos:(id)arg1 isMultiForward:(_Bool)arg2;
- (void)ActionBrowsePhotos:(id)arg1;
- (void)ActionBrowseFlashPic:(id)arg1 inCurrViewContr:(id)arg2;
- (struct CGRect)getOriginalRectForPhoto:(id)arg1 atIndex:(int)arg2 thumbRegion:(struct CGRect *)arg3 clipRect:(struct CGRect *)arg4;
- (void)dealloc;
- (id)initWithBaseChatUIOperation:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) QQBaseChatUIOperation *chatUIOperation; // @dynamic chatUIOperation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFastSendPic; // @dynamic isFastSendPic;
@property(nonatomic) UIWindow *keyWindow; // @dynamic keyWindow;
@property(retain, nonatomic) UIWindow *showWindow; // @dynamic showWindow;
@property(readonly) Class superclass;
@property(nonatomic) int uploadFrom; // @dynamic uploadFrom;

@end

