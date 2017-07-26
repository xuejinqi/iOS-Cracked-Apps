//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQRedPointTableViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, UITableView, UIView;

@interface FAAssistantViewController : QQViewController <UITableViewDelegate, UITableViewDataSource, QQRedPointTableViewControllerDelegate>
{
    UITableView *_tableView;
    UIView *_timBannerView;
}

- (void)hideTimBannerView:(_Bool)arg1;
- (void)updateTimBannerClickSetting:(_Bool)arg1;
- (void)onTimBannerClicked:(id)arg1;
- (void)onTimBannerClose:(id)arg1;
- (void)showTimBannerView;
- (void)loadTimBannerView;
- (void)hideRedPointWithSubId:(int)arg1;
- (int)weiyunRedPointType;
- (id)pathStringWithSubId:(int)arg1;
- (id)redPointShowInfoWithSubId:(int)arg1;
- (void)reportBusRedPointWithSubID:(int)arg1 ActionType:(long long)arg2;
- (id)tableView:(id)arg1 redPointPathForIndex:(id)arg2;
- (id)redPointTableView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)ActionOpenMpFile;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadTable;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

