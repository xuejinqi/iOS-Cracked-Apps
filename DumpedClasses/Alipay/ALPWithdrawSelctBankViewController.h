//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APWealthBaseController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ALPWithdrawHomeViewController, APWealthBaseTableView, KABAOPRODBankInfo, NSArray, NSString;

@interface ALPWithdrawSelctBankViewController : APWealthBaseController <UITableViewDataSource, UITableViewDelegate>
{
    APWealthBaseTableView *_tableView;
    NSArray *_bankInfoList;
    ALPWithdrawHomeViewController *_delegate;
    KABAOPRODBankInfo *_selctBankcardInfo;
    NSString *_tipsInfo;
}

@property(copy, nonatomic) NSString *tipsInfo; // @synthesize tipsInfo=_tipsInfo;
@property(retain, nonatomic) KABAOPRODBankInfo *selctBankcardInfo; // @synthesize selctBankcardInfo=_selctBankcardInfo;
@property(nonatomic) __weak ALPWithdrawHomeViewController *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *bankInfoList; // @synthesize bankInfoList=_bankInfoList;
@property(retain, nonatomic) APWealthBaseTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)handleAddBankCardResult:(id)arg1;
- (void)pressAddNewCard;
- (void)okClicked;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithBankInfoList:(id)arg1 tipsInfo:(id)arg2;
- (id)initWithBankInfoList:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

