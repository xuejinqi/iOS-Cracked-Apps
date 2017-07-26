//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQImageTableViewController.h"

#import "QQImagePickerBottomBarDelegate.h"
#import "QQImageSend2TroopAlbumBottomBarDelegate.h"
#import "QQRichShortVideoPreviewViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSMutableArray, NSString, QQAssetView, QQImagePickerBottomBar, QQImageSend2TroopAlbumBottomBar, UIPanGestureRecognizer;

@interface QQMultiImageTableViewController : QQImageTableViewController <UINavigationControllerDelegate, QQRichShortVideoPreviewViewControllerDelegate, QQImagePickerBottomBarDelegate, QQImageSend2TroopAlbumBottomBarDelegate>
{
    int _maxSelectedCount;
    _Bool _showsOriginalPhotoSend;
    _Bool _bInNearFile;
    float _maxHWProportion;
    float _minHWProportion;
    float _maxHPixels;
    float _maxWPixels;
    float _maxSize;
    QQImagePickerBottomBar *_bottomBar;
    QQImageSend2TroopAlbumBottomBar *_troopAlbumBottomBar;
    NSString *_sendButtonTitle;
    NSMutableArray *_deselectedList;
    NSMutableArray *_selectedListBakup;
    UIPanGestureRecognizer *_pan;
    struct CGPoint _startPoint;
    long long _gestureAngleState;
    int _panLastIndex;
    int _panBeginIndex;
    NSMutableArray *_allChangedIndexArray;
    _Bool _selectMode;
    _Bool _hasGroupAlbumUploadPermission;
    long long _maxVideoNum;
    long long _maxVideoDur;
    _Bool _isSupportFlashPic;
    _Bool _isShowSend2TroopAlbumBar;
    _Bool _isNeedSpecialLogicForAVFloatBar;
    _Bool _disablePhotoPreviewOnClick;
    _Bool _isFlash;
    _Bool _onPanGesture;
    int _totalMaxCount;
    long long _curTroopCode;
    NSMutableArray *_selectedAlbumBarInfo;
    QQAssetView *_lastSelectedAssetView;
    NSMutableArray *_checkAvailableCompleteBlockArrays;
}

@property(retain, nonatomic) NSMutableArray *checkAvailableCompleteBlockArrays; // @synthesize checkAvailableCompleteBlockArrays=_checkAvailableCompleteBlockArrays;
@property(retain, nonatomic) QQAssetView *lastSelectedAssetView; // @synthesize lastSelectedAssetView=_lastSelectedAssetView;
@property(nonatomic) _Bool onPanGesture; // @synthesize onPanGesture=_onPanGesture;
@property(nonatomic) _Bool isFlash; // @synthesize isFlash=_isFlash;
@property(nonatomic) _Bool disablePhotoPreviewOnClick; // @synthesize disablePhotoPreviewOnClick=_disablePhotoPreviewOnClick;
@property(nonatomic) int totalMaxCount; // @synthesize totalMaxCount=_totalMaxCount;
@property(nonatomic) _Bool isNeedSpecialLogicForAVFloatBar; // @synthesize isNeedSpecialLogicForAVFloatBar=_isNeedSpecialLogicForAVFloatBar;
@property(retain, nonatomic) NSMutableArray *selectedAlbumBarInfo; // @synthesize selectedAlbumBarInfo=_selectedAlbumBarInfo;
@property(nonatomic) _Bool isShowSend2TroopAlbumBar; // @synthesize isShowSend2TroopAlbumBar=_isShowSend2TroopAlbumBar;
@property(nonatomic) long long curTroopCode; // @synthesize curTroopCode=_curTroopCode;
@property(nonatomic) _Bool isSupportFlashPic; // @synthesize isSupportFlashPic=_isSupportFlashPic;
- (void)refreshSelectedView:(id)arg1 withOriIndex:(int)arg2;
- (_Bool)canRememberUpload:(long long)arg1 groupCode:(long long)arg2;
- (_Bool)isItemIndexSelected:(long long)arg1;
- (id)getAssetViewByIndex:(int)arg1;
- (void)changeSelectRange;
- (void)addChangedIndexInArray:(long long)arg1;
- (void)changeAssetViewState:(id)arg1;
- (void)setSelect:(_Bool)arg1 rangeFrom:(long long)arg2 to:(long long)arg3;
- (long long)itemIndexAtPosition:(struct CGPoint)arg1;
- (void)handlePan:(id)arg1;
- (void)installGestures;
- (void)QQImagePickerBottomBarSendButtonDidClick;
- (void)QQImagePickerBottomBarSizeButtonDidClick:(_Bool)arg1;
- (void)cleanIsAllSelectedPhotoLessThanCompleteBlock;
- (void)isAllSelectedPhotoLessThan:(long long)arg1 curIndex:(int)arg2;
- (void)isAllSelectedPhotoLessThan:(long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)getSelectedPhotoSizeStringForOriginalCompleteBlock:(CDUnknownBlockType)arg1;
- (void)cleanGetSelectedPhotoSizeCompleteBlock;
- (void)getSelectedPhotoSizeCursize:(long long)arg1 curIndex:(int)arg2;
- (void)getSelectedPhotoSizeCompleteBlock:(CDUnknownBlockType)arg1;
- (void)QQImagePickerBottomBarEditButtonDidClick;
- (void)QQImagePickerBottomBarPreviewButtonDidClick;
- (void)resetBottomBarState;
- (_Bool)isSelectedVideo;
- (void)previewControllerDidSelected:(id)arg1;
- (void)QQAssetViewDidPreviewPhotoAct:(id)arg1;
- (void)QQAssetViewDidPreviewPhoto:(id)arg1;
- (_Bool)isMix;
- (void)QQAssetViewDidSelectPhotoAfterCheck:(id)arg1 downloaded:(_Bool)arg2;
- (void)cleanCheckAssetAvailableCompleteBlock:(id)arg1;
- (void)cleanAllCheckAssetAvailableCompleteBlock;
- (void)checkAssetAvailable:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)QQAssetViewDidSelectPhoto:(id)arg1;
- (id)getCurrentSelectedFeedModel;
- (_Bool)getCurrentCheckBoxState;
- (void)uploadToGroupAlbumBlocked;
- (void)QQImageSend2TroopAlbumBottomBarDidSelectCheckBox:(id)arg1 withFeedModel:(id)arg2;
- (_Bool)QQImageSend2TroopAlbumShouldAllowChangeAlbum;
- (void)removeAssetFromDeselectList:(id)arg1;
- (void)removeAssetFromList:(id)arg1;
- (_Bool)isAssetSelected:(id)arg1;
- (void)scrollToEnd;
- (double)_assetContentOffsetYWithIndex:(int)arg1;
- (void)onLeftButtonClick:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setAppearence;
- (void)pResetFlashBtnSentState:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setAlbumListStatus;
- (void)loadView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableArray *deselectedList; // @dynamic deselectedList;
@property(readonly) unsigned long long hash;
@property(nonatomic) int maxSelectedCount; // @dynamic maxSelectedCount;
@property(retain, nonatomic) NSMutableArray *selectedListBakup; // @dynamic selectedListBakup;
@property(retain, nonatomic) NSString *sendButtonTitle; // @dynamic sendButtonTitle;
@property(readonly) Class superclass;

@end

