//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "PagingScrollViewDataSource.h"
#import "PagingScrollViewDelegate.h"
#import "QQActivateFriendsMemorialDayViewDelegate.h"
#import "QQFriendSelectedViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSMutableArray, NSString, PagingScrollView, QQActivateFriendsMemorialDaySharedView, QQActivateFriendsModel, QQFriendSelectedViewController, QQPageControl;

@interface QQActivateFriendsViewController : QQViewController <UIActionSheetDelegate, PagingScrollViewDataSource, PagingScrollViewDelegate, QQActivateFriendsMemorialDayViewDelegate, QQFriendSelectedViewControllerDelegate>
{
    PagingScrollView *_pagingScrollView;
    QQPageControl *_pageControl;
    QQActivateFriendsModel *_currentModel;
    NSMutableArray *_locationViewFriendList;
    NSMutableArray *_birthdayViewFriendList;
    NSMutableArray *_memorialViewFriendList;
    int _xo;
    _Bool _pushTag;
    QQActivateFriendsMemorialDaySharedView *_sharedView;
    QQFriendSelectedViewController *_fileSelectedViewController;
}

@property(retain, nonatomic) QQFriendSelectedViewController *fileSelectedViewController; // @synthesize fileSelectedViewController=_fileSelectedViewController;
- (void)shareToFriendSuccess;
- (void)shareToFriendCancelled;
- (void)clickSharedFriendButton:(id)arg1;
- (void)clickCheckDetailButton:(id)arg1;
- (id)handleTime:(id)arg1 isDay:(_Bool)arg2;
- (id)getCheckDetailUrl:(id)arg1;
- (void)loadMemorialViewData;
- (void)loadBirthdayViewData;
- (void)SetAccpetAFMsgSwitch:(id)arg1;
- (void)GetAccpetAFMsgSwitch:(id)arg1;
- (void)sindGiftFinished:(id)arg1;
- (void)receivedActivateFriendsRefreshNotification:(id)arg1;
- (void)receivedProfileChangedNotification:(id)arg1;
- (void)changeCollectionViewPage:(id)arg1;
- (void)pagingScrollView:(id)arg1 didScrollToItemAtIndex:(long long)arg2;
- (id)pagingScrollView:(id)arg1 viewForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInPagingScrollView:(id)arg1;
- (void)showActionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleSheetEvent;
- (void)loadLocationViewData;
- (void)reloadData;
- (void)loadData;
- (void)loadPageControl;
- (void)loadPagingScrollView;
- (void)loadRightButton;
- (void)refreshAfterPushTimeOut;
- (_Bool)isSupportRightDragToGoBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSMutableArray *birthdayViewFriendList; // @dynamic birthdayViewFriendList;
@property(retain, nonatomic) QQActivateFriendsModel *currentModel; // @dynamic currentModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *locationViewFriendList; // @dynamic locationViewFriendList;
@property(copy, nonatomic) NSMutableArray *memorialViewFriendList; // @dynamic memorialViewFriendList;
@property(retain, nonatomic) QQPageControl *pageControl; // @dynamic pageControl;
@property(retain, nonatomic) PagingScrollView *pagingScrollView; // @dynamic pagingScrollView;
@property(readonly) Class superclass;

@end

