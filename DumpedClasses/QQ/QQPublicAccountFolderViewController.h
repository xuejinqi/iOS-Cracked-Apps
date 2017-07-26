//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQMoreOptionTableViewCellScrollStateDelegate.h"
#import "QQPubAccMessageFolderCellDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, QQPublicAccountFolderListEngine, QQPublicAccountTriangleBubbleView, UIImageView, UILongPressGestureRecognizer, UITableView, UITapGestureRecognizer, UIView;

@interface QQPublicAccountFolderViewController : QQViewController <UITableViewDataSource, UITableViewDelegate, QQPubAccMessageFolderCellDelegate, QQMoreOptionTableViewCellScrollStateDelegate, UIGestureRecognizerDelegate>
{
    NSArray *_suggestList;
    _Bool isSuggestView;
    UITableView *_tableView;
    QQPublicAccountFolderListEngine *_listEngine;
    UILongPressGestureRecognizer *_touchGestureRecognizer;
    NSMutableArray *_leftSwipMsgKeyArray;
    NSMutableSet *_reportData;
    double _enterTickCount;
    _Bool _IsFolderPerformanceViewLoadMeasured;
    double _FolderPerformanceInitTime;
    QQPublicAccountTriangleBubbleView *_findMoreGuideView;
    _Bool _isHaveEnterBackground;
    _Bool _isDrawFinished;
    _Bool _hasInsertMeMsgVC;
    _Bool _formIndependentTab;
    _Bool _isViewShowing;
    long long _folderType;
    long long _unreadCount;
    UIImageView *_rightRedPointView;
    UIView *_tipsView;
    NSArray *_dataSource;
    UITapGestureRecognizer *_tapToTopRegnizer;
}

+ (_Bool)biuFeedsSwitch;
+ (id)biuFeedsName;
+ (id)biuFeedsWebUrl;
+ (_Bool)shouldBiuFeedsShow;
@property(retain, nonatomic) UITapGestureRecognizer *tapToTopRegnizer; // @synthesize tapToTopRegnizer=_tapToTopRegnizer;
@property(nonatomic) _Bool isViewShowing; // @synthesize isViewShowing=_isViewShowing;
@property(retain, nonatomic, getter=getPublicAccountDataSource) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool formIndependentTab; // @synthesize formIndependentTab=_formIndependentTab;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIImageView *rightRedPointView; // @synthesize rightRedPointView=_rightRedPointView;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) long long folderType; // @synthesize folderType=_folderType;
- (void)gotoWebView:(id)arg1;
- (id)getTableViewDataSource;
- (id)getInteractDataSource;
- (id)getSystemDataSource;
- (void)_setBiuUI;
- (void)_on0xc5BiuTipNoti;
- (void)setFriendsBiuRedPoint:(_Bool)arg1;
- (void)setFriendsBiuAvatar:(id)arg1;
- (void)TabController:(id)arg1 didUnSelect:(id)arg2 to:(id)arg3;
- (void)TabController:(id)arg1 didSelect:(id)arg2 from:(id)arg3;
- (void)onClickTitleBar;
- (void)folderScrollToTop;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)showTipsIfNeeded;
- (void)tableView:(id)arg1 removeModelInRowAtIndexPath:(id)arg2;
- (void)removeTouchGesture:(id)arg1;
- (void)tableView:(id)arg1 scrollBackToCenterStateInRowAtIndexPath:(id)arg2;
- (_Bool)isMessageTabInLeftSwipState;
- (void)clearLeftSwipMsgKeyArray;
- (void)leftSwipTouchDown;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)tableView:(id)arg1 scrollToLeftSwipStateInRowAtIndexPath:(id)arg2;
- (_Bool)isFolderModelInLeftArray:(id)arg1;
- (_Bool)isFolderModelInLeftArrayQQReadinjoyMsgModel:(id)arg1;
- (id)getFolderCellModelKey:(id)arg1;
- (void)reportPublicAccountInfo:(_Bool)arg1 andModel:(id)arg2;
- (void)updateAccountModel:(id)arg1 withTopState:(_Bool)arg2;
- (void)OnClickDeleteCellWithUin:(id)arg1 andIsFollow:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)folderCellWithTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getCellID:(id)arg1 msgType:(long long *)arg2;
- (id)replaceFolderModelIfNeed:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadFolderData;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)refreshFolderViewDataAtOnce;
- (void)refreshFolderViewDataAfterDelay;
- (void)hideHeaderView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)gotoMoreSubscribePage;
- (void)onExitFolder;
- (void)gotoPublicAccountSearchPage:(id)arg1;
- (void)onNeedReloadMessage:(id)arg1;
- (void)_asyncCheckUpdateOfflinePackageForSubscriptionCenter;
- (void)PublicAccountUpdataMsgHandle:(id)arg1;
- (void)dissmissNetWorkErrorTips:(id)arg1;
- (void)reportDataOnQuit;
- (void)configTableview;
- (void)SetSubViews;
- (void)insetMeMsgVc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onTapEnded;
- (void)dealloc;
- (void)loadView;
- (id)init;
- (id)messageView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

