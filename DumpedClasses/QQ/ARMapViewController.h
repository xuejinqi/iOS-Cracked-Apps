//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QARMapBaseViewController.h"

#import "ARMapOperationDelegate.h"
#import "ActionSheetDataDelegate.h"
#import "LbsSendPackResultViewDelegate.h"
#import "QQAudioSessionManagerDelegate.h"
#import "UIActionSheetDelegate.h"

@class ARMapTaskQueue, AVAudioPlayer, LbsPackShareInfo, LbsSendPackResultView, MapGameView, NSOperationQueue, NSString, QQWebShareActionSheet, QUIAlertView, TencentLBSLocation, UIButton;

@interface ARMapViewController : QARMapBaseViewController <QQAudioSessionManagerDelegate, ActionSheetDataDelegate, LbsSendPackResultViewDelegate, UIActionSheetDelegate, ARMapOperationDelegate>
{
    MapGameView *_gpview;
    ARMapTaskQueue *_taskQueue;
    unsigned int _viewShowStatus;
    _Bool _isMapLoaded;
    _Bool _isAppearing;
    unsigned long long _sourceType;
    double _loadBegin;
    _Bool _hasEnterMapView;
    _Bool _needForceRequestPOIList;
    AVAudioPlayer *_audioPlayer;
    QUIAlertView *_curfewAlert;
    _Bool _bEnterVCWithNavBar;
    _Bool _hasPresentedVC;
    UIButton *_entranceButton;
    _Bool _isCacheLocation;
    _Bool _needCheckWIFIAppear;
    _Bool _needCheckWIFINewGuider;
    _Bool _isScreenKeepLive;
    QQWebShareActionSheet *_starImgShareSheet;
    LbsPackShareInfo *_lbsPackShareInfo;
    QQWebShareActionSheet *_lbsPackShareSheet;
    LbsSendPackResultView *_sendPackResultView;
    NSString *_lbsPackId;
    NSString *_serverErrString;
    NSOperationQueue *_avplayerQueue;
    TencentLBSLocation *_initialLocation;
}

@property(nonatomic) _Bool isScreenKeepLive; // @synthesize isScreenKeepLive=_isScreenKeepLive;
@property(nonatomic) _Bool needCheckWIFINewGuider; // @synthesize needCheckWIFINewGuider=_needCheckWIFINewGuider;
@property(nonatomic) _Bool needCheckWIFIAppear; // @synthesize needCheckWIFIAppear=_needCheckWIFIAppear;
@property(nonatomic) _Bool isCacheLocation; // @synthesize isCacheLocation=_isCacheLocation;
@property(retain, nonatomic) TencentLBSLocation *initialLocation; // @synthesize initialLocation=_initialLocation;
@property(retain, nonatomic) NSOperationQueue *avplayerQueue; // @synthesize avplayerQueue=_avplayerQueue;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(copy, nonatomic) NSString *serverErrString; // @synthesize serverErrString=_serverErrString;
@property(retain, nonatomic) NSString *lbsPackId; // @synthesize lbsPackId=_lbsPackId;
@property(retain, nonatomic) LbsSendPackResultView *sendPackResultView; // @synthesize sendPackResultView=_sendPackResultView;
@property(retain, nonatomic) QQWebShareActionSheet *lbsPackShareSheet; // @synthesize lbsPackShareSheet=_lbsPackShareSheet;
@property(retain, nonatomic) LbsPackShareInfo *lbsPackShareInfo; // @synthesize lbsPackShareInfo=_lbsPackShareInfo;
@property(retain, nonatomic) QQWebShareActionSheet *starImgShareSheet; // @synthesize starImgShareSheet=_starImgShareSheet;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showMenuSheet;
- (void)addMenuButton;
- (void)willEnterVCWithNavBar;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (id)getDataForConfig:(id)arg1;
- (void)lbsSendPackResultViewShareButtonDidClick:(id)arg1;
- (void)lbsSendPackResultViewDidCancel:(id)arg1;
- (void)showSendPackSuccessView:(id)arg1;
- (void)shareLbsPackWithInfo:(id)arg1;
- (void)reportEnterMap;
- (_Bool)shouldPlayBackgroundMusic;
- (void)onARMapNewGuideViewBtnTappedNofi:(id)arg1;
- (void)onIntterruptEnd;
- (void)onIntterruptBegin;
- (void)onAudioSessionDeactive;
- (void)onAudioSessionActive;
- (void)stopBackgroundMusic;
- (void)pauseBackgroundMusic;
- (void)playBackgroundMusic;
- (void)createBackgroundMusic;
- (void)didEnterBackground:(id)arg1;
- (void)didEnterforeground:(id)arg1;
- (void)checkActivityGreeting;
- (void)onRedpackageEntry;
- (void)handleEntranceButtonStateNotification:(id)arg1;
- (void)onMapLoadSucceed;
- (void)onMapViewPrepared;
- (void)gameViewExitGame;
- (_Bool)isGameRunning;
- (_Bool)isGameViewReadyToPlay;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)operationDidCancel:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)settingWifiAlertIfNeeded;
- (void)gotoSettingWifi;
- (_Bool)canGoToSettingWiFi;
- (_Bool)isWiFiEnabled;
- (void)showCurfewAlertIfNotExist;
- (void)didFinishCurfew:(id)arg1;
- (void)didStartCurfew:(id)arg1;
- (void)markNeedForceRequestPoiList:(id)arg1;
- (void)handleVideoChatEnd;
- (void)handleServerAlert:(id)arg1;
- (void)onRightBtnClick:(id)arg1;
- (void)handleClickLeftButton:(id)arg1;
- (void)stopUpdating;
- (void)startUpdating;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showButtons;
- (void)hideButtons;
- (void)didUpdateLocations:(id)arg1;
- (void)didUpdateHeading:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)enterARMap;
- (void)setInitialLocation:(id)arg1 isCache:(_Bool)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (id)initWithSourceType:(unsigned long long)arg1 lbsPackId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

