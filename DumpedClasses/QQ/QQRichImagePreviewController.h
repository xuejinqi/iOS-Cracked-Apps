//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQMultiImagePreviewController.h"

#import "PhotoEditDelegate.h"

@class NSString;

@interface QQRichImagePreviewController : QQMultiImagePreviewController <PhotoEditDelegate>
{
    _Bool _originalImgMode;
    _Bool _flashImgMode;
    id <QQRichImagePreviewDelegate> _photoPreviewDelegate;
}

@property(nonatomic) _Bool flashImgMode; // @synthesize flashImgMode=_flashImgMode;
@property(nonatomic) _Bool originalImgMode; // @synthesize originalImgMode=_originalImgMode;
@property(nonatomic) __weak id <QQRichImagePreviewDelegate> photoPreviewDelegate; // @synthesize photoPreviewDelegate=_photoPreviewDelegate;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)photoEditor:(id)arg1 didFinishWithImage:(id)arg2 asset:(id)arg3 shouldOpenDoodle:(_Bool)arg4 hasEdited:(_Bool)arg5;
- (void)photoEditorDidCancel:(id)arg1;
- (void)onLeftButtonClick:(id)arg1;
- (void)showPhotoEditView:(id)arg1;
- (void)QQImagePickerBottomBarFlashButtonDidClick:(_Bool)arg1;
- (void)QQImagePickerBottomBarSizeButtonDidClick:(_Bool)arg1;
- (void)QQImagePickerBottomBarSendButtonDidClick;
- (void)QQImagePickerBottomBarEditButtonDidClick;
- (void)resetBottomBarState;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

