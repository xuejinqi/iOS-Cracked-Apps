//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class APTableView, NSArray, NSString, PPAddPublicAccountService;

@interface PPCatagroyListViewController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isNotShowSearchBar;
    APTableView *_tableView;
    NSArray *_dataSource;
    PPAddPublicAccountService *_service;
}

@property(retain, nonatomic) PPAddPublicAccountService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool isNotShowSearchBar; // @synthesize isNotShowSearchBar=_isNotShowSearchBar;
@property(retain, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithIsNotShowSearchBar:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

