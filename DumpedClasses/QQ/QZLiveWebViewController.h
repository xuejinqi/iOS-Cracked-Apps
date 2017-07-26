//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneWebViewController.h"

#import "IAccountChangedObsever.h"
#import "QQAudioSessionManagerDelegate.h"
#import "QZLivehybridDelegate.h"

@class CTCallCenter, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, QZAvatarView, QZJNsQqradioProtocolLiveShowRoomInfo, QZLiveStatistic, QZRTMPPlayer, QZScreenShotShareView, UIButton, UIPanGestureRecognizer;

@interface QZLiveWebViewController : QZoneWebViewController <QZLivehybridDelegate, IAccountChangedObsever, QQAudioSessionManagerDelegate>
{
    NSString *_currentAddress;
    QZRTMPPlayer *_RTMPPlayer;
    _Bool _isAudioSessionObtain;
    _Bool _isAudioSessionBeInterrupted;
    unsigned long long _lastStatus;
    _Bool _isCloseReportToLP;
    NSString *_uin;
    long long _currentRequestID;
    _Bool _isPushed;
    NSString *_url;
    _Bool _isOldStatusBarHidden;
    _Bool _isOldNavigationBarHidden;
    CTCallCenter *_callCenter;
    unsigned long long _eventIndex;
    unsigned int _reportTTTIndex;
    NSTimer *_timer;
    _Bool _isShowWeb;
    _Bool _isNeedHiden;
    double _webCenterPointX;
    UIPanGestureRecognizer *_gestureRecognizer;
    unsigned long long playChoiceOnMobileNet;
    NSTimer *alterTimer;
    _Bool _isAllow;
    UIButton *_closeButton;
    _Bool _networkAlertDisplayed;
    _Bool _hasEnteredRoom;
    _Bool _blFirstAppear;
    unsigned long long _type;
    QZJNsQqradioProtocolLiveShowRoomInfo *_roomInfo;
    CDUnknownBlockType _getOwnerUinBlock;
    QZScreenShotShareView *_shareView;
    NSString *_shareUrl;
    NSString *_nickName;
    _Bool _closed;
    QZLiveStatistic *_statistic;
    NSDictionary *_registerLiveQuery;
    NSObject<OS_dispatch_queue> *_playerQueue;
    long long _roomID;
    QZAvatarView *_avatarView;
}

+ (long long)exitRoom:(id)arg1;
+ (long long)enterRoom:(id)arg1;
+ (void)showLiveWebViewIfNeeded:(id)arg1 forStyle:(long long)arg2 roomId:(unsigned long long)arg3 animated:(_Bool)arg4 rootViewcontroller:(id)arg5;
+ (void)load;
@property(readonly) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) __weak QZAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) long long roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playerQueue; // @synthesize playerQueue=_playerQueue;
@property(retain, nonatomic) NSDictionary *registerLiveQuery; // @synthesize registerLiveQuery=_registerLiveQuery;
@property(retain, nonatomic) QZLiveStatistic *statistic; // @synthesize statistic=_statistic;
- (void).cxx_destruct;
- (void)removeSuperLikeMusic;
- (void)removeObserveForNetworkChange;
- (void)addObserveForNetworkChange;
- (_Bool)isLivePlay;
- (_Bool)shouldReportTTT;
- (void)reportBasicInfoToTTT;
- (void)reportTimedInfoToTTT;
- (void)removeReportTTTTimer;
- (void)createReportTTTTimer;
- (void)logLiveResult;
- (void)logEnterLiveTimeCost;
- (void)reportEndRelated;
- (void)reportStartRelated;
- (void)reportWhenLiveEnd;
- (void)reportWhenClickClose;
- (void)reportFetchRoomInfo;
- (void)reportViewAppear;
- (void)reportWhenEnterLive;
- (void)createstatisticWithRoomID:(long long)arg1;
- (void)clickFeedToContinueLiveOrCancel;
- (void)requestEnterRoom;
- (void)onAccountLogin;
- (void)onAccountLogout;
- (void)updateRTMPURL:(CDUnknownBlockType)arg1;
- (void)showAlert;
- (void)cancleDelay;
- (void)onNetworkReachabilityChange:(id)arg1;
- (double)getDelayTime;
- (void)dispatchToJs:(unsigned long long)arg1;
- (void)dispatchToJsOperationCode:(unsigned long long)arg1;
- (void)playerStatusChanged:(id)arg1;
- (struct CGRect)webViewRectByStyleAndOrientation;
- (void)pause;
- (void)close;
- (void)close:(_Bool)arg1;
- (void)onCloseBtnClicked;
- (void)closeRightButton:(id)arg1;
- (void)createCloseButton;
- (void)onReceiveQQVideoReq;
- (void)updateAudioPlayState;
- (void)onAudioSessionDeactive;
- (void)onAudioSessionActive;
- (void)willEnterForeground;
- (void)onIntterruptEnd;
- (void)onIntterruptBegin;
- (void)releaseQQAudioDevice;
- (_Bool)requestQQAudioDevice;
- (void)userDidTakeScreenshot:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)isSupportRightDragToGoBack;
- (void)handlePanGestureRecognizer:(id)arg1;
- (void)isAllowClean:(id)arg1;
- (void)onFirstViewDidAppear;
- (void)onEnterRoomSucess;
- (void)preCreatePlayerIfNeed;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)h5LoadFinish;
- (void)createFilterBg;
- (void)leftButtonClick:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)loadRequest:(id)arg1;
- (id)initWith:(id)arg1 forStyle:(long long)arg2 roomId:(unsigned long long)arg3;
- (void)openOtherVideo2:(id)arg1;
- (void)loadH5Finish:(id)arg1;
- (void)pauseLive:(id)arg1;
- (void)stopLive:(id)arg1;
- (void)playLive:(id)arg1;
- (void)checkLiveState:(id)arg1;
- (void)registerLiveState:(id)arg1;
- (void)showPlayer;
- (long long)createRTMPPlayerWithUrl:(id)arg1;
- (long long)initPlayer:(id)arg1;
- (void)removePlayer;
- (void)playVideo:(id)arg1 forceReplay:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

