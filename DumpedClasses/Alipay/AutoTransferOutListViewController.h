//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AutoTransferBaseTableViewController.h"

#import "AutoTransferRuleCellButtonClickDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AUBarButtonItem, NSString, WEALTHFundAutoTransferOutApplyResult;

@interface AutoTransferOutListViewController : AutoTransferBaseTableViewController <UITableViewDataSource, UITableViewDelegate, AutoTransferRuleCellButtonClickDelegate>
{
    _Bool _ruleEditing;
    _Bool _needReload;
    AUBarButtonItem *_editBarItem;
    AUBarButtonItem *_finishBarItem;
    long long _listCount;
    WEALTHFundAutoTransferOutApplyResult *_resultData;
}

@property(retain, nonatomic) WEALTHFundAutoTransferOutApplyResult *resultData; // @synthesize resultData=_resultData;
@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(nonatomic) long long listCount; // @synthesize listCount=_listCount;
@property(nonatomic) _Bool ruleEditing; // @synthesize ruleEditing=_ruleEditing;
@property(retain, nonatomic) AUBarButtonItem *finishBarItem; // @synthesize finishBarItem=_finishBarItem;
@property(retain, nonatomic) AUBarButtonItem *editBarItem; // @synthesize editBarItem=_editBarItem;
- (void).cxx_destruct;
- (void)gotoRuleResultWithReq:(id)arg1;
- (void)gotoNewRulePageWithReq:(id)arg1;
- (void)reloadDataJumpToAddWhenZeroRules:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)setDataForRuleCell:(id)arg1 section:(long long)arg2;
- (id)addRuleCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isAddRuleSection:(long long)arg1;
- (id)ruleForIndex:(long long)arg1;
- (void)titleViewClickInCell:(id)arg1;
- (void)editButtonClickInCell:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteButtonClickInCell:(id)arg1;
- (void)editModeSwitch;
- (void)initUI;
- (void)initData;
- (void)back;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidFirstAppear:(_Bool)arg1;
- (void)viewWillDestroy;
- (void)didReceiveMemoryWarning;
- (void)setRefreshPage;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

