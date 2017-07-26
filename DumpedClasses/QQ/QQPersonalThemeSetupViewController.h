//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQApplePayManagerDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "QQPersonalThemeAsynUrlImageViewDelegate.h"
#import "QQPersonalThemeDataManagerDelegate.h"
#import "QQPersonalThemeMallSelectedDelegate.h"
#import "QQPersonalThemeScrollViewDelegate.h"

@class NSString, QQPersonalThemeDataManager, QQPersonalThemeHorizontalTableView, QQPersonalThemeScrollView, QQPersonalThemeSelectionIndicatorView, UIImageView, UIView;

@interface QQPersonalThemeSetupViewController : QQViewController <QQMultiImagePickerControllerDelegate, QQPersonalThemeScrollViewDelegate, QQApplePayManagerDelegate, QQPersonalThemeMallSelectedDelegate, QQPersonalThemeAsynUrlImageViewDelegate, QQPersonalThemeDataManagerDelegate>
{
    QQPersonalThemeScrollView *scrollView;
    QQPersonalThemeSelectionIndicatorView *_selectionIndicator;
    UIView *_guideMaskView;
    UIImageView *_scrollGaussBackView;
    UIView *_scrollGaussMaskView;
    int uploadPicType;
    int payType;
    QQPersonalThemeHorizontalTableView *bgmallTableView;
    QQPersonalThemeHorizontalTableView *styleMallTableView;
    long long currentMallSelectIndex;
    QQPersonalThemeDataManager *dataManager;
    _Bool styleMallShow;
    _Bool gotoPay;
}

+ (id)imageForBunldeSourceByName:(id)arg1;
- (void)finishSetupCurrentMallBackground;
- (void)finishSetupCurrentStyle;
- (void)requireReloadStyleListWithArray:(id)arg1;
- (void)requireReloadBgListWithArray:(id)arg1;
- (id)currentStyleList;
- (id)currentBgList;
- (void)saveDIYThemeAuthFaildWithMsg:(id)arg1 withRetCode:(long long)arg2;
- (void)setDIYThemeFailed;
- (void)showThemeEffectNow;
- (void)showThemeNow;
- (void)leftButtonClick:(id)arg1;
- (void)paySuperVip;
- (void)payByUserTypeIsSvip:(_Bool)arg1;
- (void)yellowTipPayButtonPress;
- (_Bool)isSupportRightDragToGoBack;
- (void)changeTryOnBgID:(unsigned long long)arg1;
- (void)changeBgID:(unsigned long long)arg1;
- (void)scrollToView:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)uploadPic;
- (void)setupSelctionView;
- (void)didFinishLoadImage:(id)arg1 result:(id)arg2;
- (void)setupScrollView;
- (void)selectDefaultStyle:(id)arg1;
- (void)selectStyleData:(id)arg1;
- (void)setRecentViewMask:(id)arg1;
- (void)selectMallData:(id)arg1;
- (void)imageSelected:(id)arg1;
- (void)restore;
- (void)selectDefault;
- (void)openAlbum;
- (void)saveBg:(id)arg1 view:(id)arg2;
- (void)setupBottomBarView;
- (void)selectMallAtIndex:(long long)arg1;
- (void)tapOnBottomBarItem:(id)arg1;
- (void)setupStylemallView;
- (void)setupBgmallView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)righButtonPressed;
- (void)setupNavigationBar;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

