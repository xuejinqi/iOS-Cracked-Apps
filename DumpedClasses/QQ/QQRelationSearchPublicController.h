//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AddBaseController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray, NSString, ODRefreshControl;

@interface QQRelationSearchPublicController : AddBaseController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    NSMutableArray *_accountModels;
    ODRefreshControl *_refreshControl;
    _Bool _firstAppear;
    _Bool _loadingAppear;
}

+ (id)segmentTitle;
- (void)setLoadFail;
- (void)setInprogress:(_Bool)arg1;
- (void)startLoading;
- (void)handleUpdateListCompled:(id)arg1;
- (void)requestCondSearch;
- (void)dropRefresh;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)showOfficalAccountDetailWithUin:(long long)arg1 account_flag:(unsigned int)arg2;
- (void)showOfficalAccountDetail:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)reloadData;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)setEntryData;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

