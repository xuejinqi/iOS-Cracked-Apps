//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCardBaseViewController.h"

#import "BEESmilePullRefreshViewDelegate.h"
#import "CCardResendRemindViewDelegate.h"
#import "NTLCardEmptyViewDelegate.h"
#import "NTLHeadViewDelegate.h"
#import "NTLLoadErroViewDelegate.h"
#import "NTLPopMenuRouteManagerDelegate.h"
#import "SocialRemindHeadViewDelegate.h"

@class BEESmilePullRefreshView, CBCardMonitor, CSPublishFeed, NSDate, NSString, NTLCardEmptyView, NTLCardLoadingView, NTLDataManager, NTLDeleteEmptyView, NTLHeadView, NTLLoadErroView, NTLPopMenuRouteManager;

@interface NTLFeedsCardViewController : CCardBaseViewController <BEESmilePullRefreshViewDelegate, SocialRemindHeadViewDelegate, NTLPopMenuRouteManagerDelegate, CCardResendRemindViewDelegate, NTLLoadErroViewDelegate, NTLHeadViewDelegate, NTLCardEmptyViewDelegate>
{
    _Bool _viewInAppear;
    _Bool _dataDirty;
    _Bool _hasBackupCards;
    _Bool _canDelayRefresh;
    _Bool _isRefreshing;
    _Bool _hasRefreshed;
    _Bool _firstLauch;
    BEESmilePullRefreshView *_refreshView;
    NTLPopMenuRouteManager *_popMenuRouteManager;
    NSDate *_lastUpdateDate;
    NTLHeadView *_tableHeadView;
    NSDate *_lastCacheDate;
    NSString *_mode;
    NTLDataManager *_cardDataManager;
    NTLLoadErroView *_loadErroView;
    NTLCardEmptyView *_emptyView;
    NTLDeleteEmptyView *_deleteEmptyView;
    NTLCardLoadingView *_cardLoadingView;
    CSPublishFeed *_publishFeedActionSheet;
    CBCardMonitor *_cardMonitor;
}

+ (void)ntlFeedCardVCDealloc;
+ (id)shareNTLFeedCardVC;
@property(nonatomic) _Bool firstLauch; // @synthesize firstLauch=_firstLauch;
@property(nonatomic) _Bool hasRefreshed; // @synthesize hasRefreshed=_hasRefreshed;
@property(retain, nonatomic) CBCardMonitor *cardMonitor; // @synthesize cardMonitor=_cardMonitor;
@property(retain, nonatomic) CSPublishFeed *publishFeedActionSheet; // @synthesize publishFeedActionSheet=_publishFeedActionSheet;
@property(retain, nonatomic) NTLCardLoadingView *cardLoadingView; // @synthesize cardLoadingView=_cardLoadingView;
@property(retain, nonatomic) NTLDeleteEmptyView *deleteEmptyView; // @synthesize deleteEmptyView=_deleteEmptyView;
@property(retain, nonatomic) NTLCardEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) NTLLoadErroView *loadErroView; // @synthesize loadErroView=_loadErroView;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(retain, nonatomic) NTLDataManager *cardDataManager; // @synthesize cardDataManager=_cardDataManager;
@property(copy, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSDate *lastCacheDate; // @synthesize lastCacheDate=_lastCacheDate;
@property(retain, nonatomic) NTLHeadView *tableHeadView; // @synthesize tableHeadView=_tableHeadView;
@property(nonatomic) _Bool canDelayRefresh; // @synthesize canDelayRefresh=_canDelayRefresh;
@property(nonatomic) _Bool hasBackupCards; // @synthesize hasBackupCards=_hasBackupCards;
@property(nonatomic) _Bool dataDirty; // @synthesize dataDirty=_dataDirty;
@property(nonatomic) _Bool viewInAppear; // @synthesize viewInAppear=_viewInAppear;
@property(retain, nonatomic) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property(retain, nonatomic) NTLPopMenuRouteManager *popMenuRouteManager; // @synthesize popMenuRouteManager=_popMenuRouteManager;
@property(retain, nonatomic) BEESmilePullRefreshView *refreshView; // @synthesize refreshView=_refreshView;
- (void).cxx_destruct;
- (_Bool)shouldReportABTestAction;
- (void)ntlCardEmptyViewPublishButtonClicked;
- (void)updateManager:(id)arg1 finishUpdateCards:(id)arg2 param:(id)arg3;
- (void)updateManager:(id)arg1 updatingCard:(id)arg2 param:(id)arg3;
- (_Bool)enableCardUpdateManager;
- (void)accessibilityDidClickPopMenu:(id)arg1;
- (void)popMenuRouteManager:(id)arg1 deleteDBAndUICardsWithClientIds:(id)arg2;
- (void)respondClick:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)smileRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (id)smileTitleInSmilePullRefreshView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)didChangeFrame:(struct CGRect)arg1 originFrame:(struct CGRect)arg2;
- (void)resendRemindViewDidClean:(id)arg1;
- (void)resendRemindViewDidRetry:(id)arg1;
- (void)retryRefreshCard;
- (void)btnSendTouchHandler:(id)arg1;
- (void)showDelete2LoadMoreView;
- (void)showRetryView;
- (void)showLoadMore;
- (void)addCardLoadingView;
- (void)addDeleteEmptyView;
- (void)addLoadErroView;
- (void)addEmptyView;
- (_Bool)checkAutoRefresh;
- (void)showActionSheetWithBiz:(id)arg1;
- (void)loadLocalMockData;
- (void)deleteCardsWithClientIds:(id)arg1;
- (void)deleteDBAndUICardsWithClientIds:(id)arg1;
- (void)updateSendFailWithFailCount:(unsigned long long)arg1;
- (void)removeBackgroundNoti;
- (void)addBackGroundNoti;
- (void)checkAndChangeDisplayView:(id)arg1 isSuccessful:(_Bool)arg2 isSync:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)refreshLoadMoreView;
- (void)handleLoadMoreFinished:(id)arg1;
- (void)loadMoreCard;
- (void)refreshNTimeLineFeedsFromNetwork;
- (void)handleInitLocalCardData:(id)arg1 sync:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (id)getLastCardIdInCardList:(id)arg1;
- (void)initLocalCardDataWithSync:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)checkLBSAuthStatus;
- (void)refreshTimeStamp;
- (void)resetResourceUI;
- (void)showEmptyView;
- (void)showLoadingView:(_Bool)arg1;
- (void)handleUserInfoChangeRefresh;
- (void)refreshSendingWithClientCardId:(id)arg1;
- (void)goToRemindList;
- (void)setTableViewContentOffset:(id)arg1 source:(id)arg2;
- (void)setTableViewContentInset:(id)arg1 source:(id)arg2;
- (void)updateWithCCards:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateTitle;
- (void)updateSendFail;
- (void)updateUnread;
- (void)handleDataRefreshWithSync:(_Bool)arg1;
- (void)cc_loadCardDataAfterResortPlugin:(id)arg1;
- (void)loadCardData:(id)arg1 loadType:(int)arg2 insertIndex:(long long)arg3 sync:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (void)onClickMFLongAttributeLabel:(id)arg1 state:(int)arg2;
- (void)checkLoadMoreCard;
- (void)dealloc;
- (void)setupUI;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadCardTemplates;
- (id)pageType;
- (id)logBizs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

