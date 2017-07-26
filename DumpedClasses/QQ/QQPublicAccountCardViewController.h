//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPACardViewController.h"

#import "QQPAProfileCardSubscribeTableViewDelegate.h"
#import "QQPublicAccountHeaderViewDelegate.h"
#import "UserSummaryTouchControlDelegate.h"

@class NSDictionary, NSString, QQPAProfileCardSubscribeTableView, QQPASubscribeHeaderView;

@interface QQPublicAccountCardViewController : QQPACardViewController <QQPublicAccountHeaderViewDelegate, QQPAProfileCardSubscribeTableViewDelegate, UserSummaryTouchControlDelegate>
{
    NSDictionary *_simpleInfo;
    NSDictionary *_detailInfo;
    QQPASubscribeHeaderView *_headerView;
    QQPAProfileCardSubscribeTableView *_tableView;
}

- (void).cxx_destruct;
- (void)onClickMoreInfoBtn;
- (void)onClickFollowBtn;
- (void)fetchMoreDynamicInfo;
- (void)onClickDynamicMsgCell:(id)arg1;
- (void)tableViewWillEndDragging;
- (void)tableViewDidScroll;
- (void)shareBtnClicked;
- (void)CloseViewController;
- (void)updateCardDynamicInfoWithCache;
- (void)updateCardDynamicInfo;
- (void)onUpdateCardDynamicInfoByDb:(id)arg1;
- (void)onUpdateCardDynamicInfoByReceived:(id)arg1;
- (_Bool)loadData;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithCardModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

