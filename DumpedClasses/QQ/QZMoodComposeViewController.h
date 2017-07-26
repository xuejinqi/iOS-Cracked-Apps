//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneViewController.h"

#import "GAEmojiTextViewDelegate.h"
#import "IQZUrlDownloaderDelegate.h"
#import "MQZoneMoodEditInputCellDelegate.h"
#import "MQZonePhotoViewDelegate.h"
#import "QQTabMenuDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "QZMoodEditVideoCellDelegate.h"
#import "QZMoodTagEventListControllerDelegate.h"
#import "QZPhotoGifRecommendViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MQZMoodEditRecentPhotoesCell, MQZoneMoodEditBatchGeoCell, MQZoneMoodEditInputCell, MQZonePhotoView, MQZoneSelectQualityButton, NSDictionary, NSMutableArray, NSString, QUIActionSheet, QZComposerDraftManager, QZComposerPermissionCell, QZComposerQualityCell, QZComposerTagEventCell, QZFloatingPictureView, QZMoodComposeViewPresenter, QZMoodEditVideoCell, UITableView, UITableViewCell;

@interface QZMoodComposeViewController : QZoneViewController <IQZUrlDownloaderDelegate, QZMoodEditVideoCellDelegate, MQZoneMoodEditInputCellDelegate, MQZonePhotoViewDelegate, QZPhotoGifRecommendViewControllerDelegate, QZMoodTagEventListControllerDelegate, UIActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, QUIActionSheetDelegate, UIScrollViewDelegate, QQTabMenuDelegate, UIGestureRecognizerDelegate, GAEmojiTextViewDelegate>
{
    _Bool _hasInitData;
    QUIActionSheet *_actionSheet;
    QZMoodEditVideoCell *_videoCell;
    MQZMoodEditRecentPhotoesCell *_recentPhotoCell;
    QZFloatingPictureView *_easterEggImageCell;
    MQZoneSelectQualityButton *_selectQualityButton;
    QZComposerPermissionCell *_permissionCell;
    QZComposerTagEventCell *_tagEventCell;
    UITableViewCell *_tagEventCellTableCell;
    long long _photoLBSRequestID;
    long long _photoChainRequestID;
    long long _tagEventPreGetID;
    _Bool _disableLBSInfo;
    _Bool _isShowKeyBoard;
    UITableView *_tableView;
    NSMutableArray *_tableDatasource;
    _Bool _forbidChangeTag;
    _Bool _useNewUploadSDK;
    _Bool _isAdvPulled;
    _Bool _isAdvReported;
    _Bool _canceledOpenPermissionAlert;
    double _keyBoardHeight;
    _Bool _supportDraft;
    _Bool _isQQShare;
    _Bool _waitNet;
    _Bool _waitWifi;
    id <QZMoodComposeViewControllerDelegate> _composeViewControllerDelegate;
    QZMoodComposeViewPresenter *_viewModel;
    MQZonePhotoView *_photoCell;
    MQZoneMoodEditInputCell *_inputCell;
    NSString *_advTraceInfo;
    NSDictionary *_advDict;
    QZComposerQualityCell *_qualityCell;
    MQZoneMoodEditBatchGeoCell *_batchGeoCell;
    QZComposerDraftManager *_draftManager;
    long long _videoQuality;
    long long _photoQuality;
    CDUnknownBlockType _onPressPostButton;
}

@property(copy, nonatomic) CDUnknownBlockType onPressPostButton; // @synthesize onPressPostButton=_onPressPostButton;
@property(nonatomic) _Bool waitWifi; // @synthesize waitWifi=_waitWifi;
@property(nonatomic) _Bool waitNet; // @synthesize waitNet=_waitNet;
@property(nonatomic) long long photoQuality; // @synthesize photoQuality=_photoQuality;
@property(nonatomic) long long videoQuality; // @synthesize videoQuality=_videoQuality;
@property(retain, nonatomic) QZComposerDraftManager *draftManager; // @synthesize draftManager=_draftManager;
@property(retain, nonatomic) MQZoneMoodEditBatchGeoCell *batchGeoCell; // @synthesize batchGeoCell=_batchGeoCell;
@property(retain, nonatomic) QZComposerQualityCell *qualityCell; // @synthesize qualityCell=_qualityCell;
@property(retain, nonatomic) NSDictionary *advDict; // @synthesize advDict=_advDict;
@property(retain, nonatomic) NSString *advTraceInfo; // @synthesize advTraceInfo=_advTraceInfo;
@property(nonatomic) _Bool isQQShare; // @synthesize isQQShare=_isQQShare;
@property(nonatomic) _Bool supportDraft; // @synthesize supportDraft=_supportDraft;
@property(retain, nonatomic) MQZoneMoodEditInputCell *inputCell; // @synthesize inputCell=_inputCell;
@property(retain, nonatomic) MQZonePhotoView *photoCell; // @synthesize photoCell=_photoCell;
@property(readonly) QZMoodComposeViewPresenter *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <QZMoodComposeViewControllerDelegate> composeViewControllerDelegate; // @synthesize composeViewControllerDelegate=_composeViewControllerDelegate;
- (void).cxx_destruct;
- (void)stopVideoCellPlayback;
- (void)startVideoCellPlayback;
- (void)onYellowDiamondH5FloatClose:(id)arg1;
- (void)onNotifyGetPhotoChainInfo:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)onNotifyGetURLInfo:(id)arg1;
- (id)getJSUgcRightsParam;
- (void)setJSUgcRightsParam:(id)arg1;
- (void)jumpToActiveFeedViewController;
- (void)postMood;
- (_Bool)showPermissionAlert;
- (id)makeOtherInfo;
- (void)checkCurrentQuality;
- (void)clickPostButton;
- (void)pressPostButton:(id)arg1;
- (void)checkNeedWaitWifi;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)backToThirdApp;
- (void)thirdAppPostClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertDiscardDrafts;
- (void)alertSaveDrafts;
- (void)saveDraft;
- (_Bool)isDataChanged;
- (void)refreshWithCurrentViewModel;
- (_Bool)hasMoodDraft;
- (void)initData;
- (void)updateMoodTime:(id)arg1;
- (void)report_mobileqboss;
- (void)refreshAdvUIWithImage:(id)arg1;
- (void)requestQBossPhotoAdvWithId:(int)arg1;
- (void)photoCellCheckPhotoState:(id)arg1 photoList:(id)arg2;
- (void)updatephotoCell:(id)arg1 photoList:(id)arg2;
- (void)photoCellChangeHeight:(id)arg1 heightOffset:(double)arg2;
- (void)photoCellBecomeActive:(id)arg1;
- (void)inputCellNeedGetUrlInfo:(id)arg1;
- (void)inputCellCheckTextState:(id)arg1 text:(id)arg2;
- (void)inputCellBecomeActive:(id)arg1;
- (void)inputCellFinishEdit:(id)arg1 text:(id)arg2;
- (_Bool)inputCell:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)keepCursorVisible;
- (void)inputCell:(id)arg1 textDidChange:(id)arg2;
- (void)videoCellLoadCover:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)previewButtonClick;
- (void)enterPOIInfoList;
- (void)setWeatherInfo:(id)arg1;
- (void)setPhotoPOIInfo:(id)arg1;
- (void)parseGPSInfoInImages:(id)arg1;
- (id)GPSInfoInImagePickerModels:(id)arg1;
- (void)setupVideoPoiInfo;
- (void)onNotifyFetchWeatherInfo:(id)arg1;
- (long long)onNotifyFetchPOIList:(id)arg1;
- (void)onKeyboardWillShowNotify:(id)arg1;
- (void)initNotificationObservers:(id)arg1;
- (void)requestPhotoChain;
- (_Bool)checkPostBtnState;
- (void)adjustUI;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)removeRecentPhotoesCell;
- (void)showRecentlyRecentPhotoesCellWithAssets:(id)arg1;
- (void)scanRecentlyCapturedPhotos;
- (void)showEasterEggImagePicker:(long long)arg1 keyword:(id)arg2;
- (void)addEasterEggImageInfo:(id)arg1;
- (void)onMoodImagePickerSelectImage:(id)arg1;
- (void)showEasterEggImageCellIfNeeded;
- (void)hideEasterEggImageCell;
- (void)alertDeleteTagEvent;
- (void)selectTag:(id)arg1;
- (void)setTag:(id)arg1;
- (void)clickTagEvent;
- (long long)preGetTagEvent;
- (void)gifRecommendViewControllerNoResultPopOut;
- (_Bool)canSelectRecommendGif;
- (void)onSelectGifPath:(id)arg1;
- (void)onSelectGifImages:(id)arg1 ration:(double)arg2;
- (void)createTagEventCell;
- (void)createBatchGeoCell;
- (void)createVideoCell;
- (void)createPhotoCell;
- (void)createInputCell;
- (void)textViewDidChangeContentSize:(id)arg1 contentSize:(struct CGSize)arg2;
- (void)startPreUpload:(id)arg1;
- (void)hideWhenSroll;
- (void)clickMaskBtn;
- (_Bool)isSupportRightDragToGoBack;
- (void)checkSaveDraft;
- (void)clickLeftButton;
- (void)leftButtonClick:(id)arg1;
- (void)onForeOffLine:(id)arg1;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)reloadSection:(long long)arg1 row:(long long)arg2;
- (id)cellPermission;
- (id)cellQuality;
- (id)cellTagEvent;
- (id)cellLBS;
- (id)cellInputTextMedia;
- (double)heightForTag;
- (double)heightForLBS;
- (double)heightForInputTextMedia;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)rightButtonTitle;
- (id)getTitle;
- (void)refreshDatasource;
- (id)createTableView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContent:(id)arg1 andImages:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

