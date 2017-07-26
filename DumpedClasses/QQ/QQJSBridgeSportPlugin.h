//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "QQMultiImagePickerControllerDelegate.h"
#import "QQRichMediaPickerControllerDelegate.h"
#import "QQRichShortVideoProcessorDelegate.h"
#import "QQTextFieldDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSDictionary, NSMutableArray, NSString, NSURL, QQTextField, UIView;

@interface QQJSBridgeSportPlugin : QQWebViewPluginQQBizBase <QQMultiImagePickerControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, QQTextFieldDelegate, QQRichMediaPickerControllerDelegate, UIActionSheetDelegate, QQRichShortVideoProcessorDelegate>
{
    long long _groupID;
    UIView *_commentBgView;
    UIView *_commentMaskView;
    QQTextField *_commentTextField;
    _Bool _haveShowCommentToastView;
    long long _maxLength;
    NSDictionary *_requestQuery;
    NSURL *_videoURL;
    NSMutableArray *_videoViewList;
    NSMutableArray *_vidList;
}

+ (id)cDJBHash;
@property(retain, nonatomic) NSMutableArray *vidList; // @synthesize vidList=_vidList;
@property(retain, nonatomic) NSMutableArray *videoViewList; // @synthesize videoViewList=_videoViewList;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) NSDictionary *requestQuery; // @synthesize requestQuery=_requestQuery;
- (void)showAlertView;
- (id)createDictionaryWithImageID:(id)arg1 data:(id)arg2 local:(id)arg3;
- (id)getTTUrlCache:(id)arg1;
- (id)getSportLocalDicByGroupID:(long long)arg1;
- (id)getCompressImagePathWithLocal:(id)arg1 assetArray:(id)arg2 orImage:(id)arg3;
- (void)setUploadFinishFlagWithType:(id)arg1 feedsID:(id)arg2 vid:(id)arg3 groupID:(long long)arg4;
- (id)sendRequestWithParas:(id)arg1 type:(int)arg2;
- (id)createRequestWithParams:(id)arg1 type:(int)arg2;
- (double)durationWithVideoURL:(id)arg1;
- (id)saveThumbImageWithVideoURL:(id)arg1 groupID:(long long)arg2;
- (void)generateVideoInfoWithVideoURL:(id)arg1 groupID:(long long)arg2;
- (void)richMediaPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (id)dicToJSON:(id)arg1;
- (void)didTapOnCommentMaskView:(id)arg1;
- (void)sendComment:(id)arg1;
- (_Bool)QQTextField:(id)arg1 didSendText:(id)arg2 showText:(id)arg3;
- (_Bool)textView:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)growingTextViewDidChangeSelection:(id)arg1;
- (id)subStringWith:(id)arg1 ToIndex:(long long)arg2;
- (_Bool)growingTextViewInputReturnKey:(id)arg1;
- (void)richMediaPickerControllerDidCancel:(id)arg1;
- (void)compressVideoWithURL:(id)arg1 GroupID:(long long)arg2 Callback:(CDUnknownBlockType)arg3;
- (void)uploadVideoWithParam:(id)arg1 groupID:(long long)arg2;
- (void)openTinyVideo;
- (void)initVideoRecordViewController;
- (_Bool)canStartVideoRecord;
- (void)initCameraPickerController;
- (void)presentPickerControllerWithSelected:(id)arg1;
- (void)initQQMultiImagePickerController;
- (void)didReceiveNetworkStatusChangedWithNotification:(id)arg1;
- (_Bool)isVidListHasVideoID:(id)arg1;
- (id)videoViewWithVid:(id)arg1;
- (id)currentHiddenView;
- (long long)indexOfVid:(id)arg1;
- (void)initListenerCallbacks;
- (void)initVideoViews;
- (void)updatePlayerStateWithCmd:(long long)arg1 Dic:(id)arg2;
- (void)pluckVideoWithDic:(id)arg1;
- (void)pinVideoWithDic:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_stopVideo:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_pauseVideo:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_playVideo:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_pluckVideo:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_pinVideo:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_deleteUploadVideo:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_uploadVideoList:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_uploadVideoCount:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_deleteGroup:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_deletePicture:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_uploadGroup:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_getVideoInfo:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_shortVideo:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_getPicture:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_openPhoto:(id)arg1;
- (void)handleJsBridgeRequest_healthSport_comment:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

