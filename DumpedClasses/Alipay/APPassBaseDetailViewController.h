//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ALPOperationModel, APExceptionView, APPassFrontView, APTableView, AUBarButtonItem, KABAOPRODPassInfo, NSArray, NSString, UIColor;

@interface APPassBaseDetailViewController : O2OViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _pageHasCacheData;
    _Bool _viewShowing;
    _Bool _observing;
    APExceptionView *_netErrorView;
    APTableView *_tableView;
    KABAOPRODPassInfo *_passInfo;
    NSString *_passId;
    NSString *_type;
    NSString *_partnerId;
    NSString *_serialNumber;
    UIColor *_themeColor;
    NSArray *_tableViewData;
    long long _operationPageIndex;
    APPassFrontView *_headerView;
    ALPOperationModel *_operationModel;
    AUBarButtonItem *_backBarButtonItem;
}

@property(nonatomic) _Bool observing; // @synthesize observing=_observing;
@property(nonatomic) _Bool viewShowing; // @synthesize viewShowing=_viewShowing;
@property(retain, nonatomic) AUBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) ALPOperationModel *operationModel; // @synthesize operationModel=_operationModel;
@property(retain, nonatomic) APPassFrontView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long operationPageIndex; // @synthesize operationPageIndex=_operationPageIndex;
@property(retain, nonatomic) NSArray *tableViewData; // @synthesize tableViewData=_tableViewData;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(nonatomic) _Bool pageHasCacheData; // @synthesize pageHasCacheData=_pageHasCacheData;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(retain, nonatomic) KABAOPRODPassInfo *passInfo; // @synthesize passInfo=_passInfo;
@property(retain, nonatomic) APTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) APExceptionView *netErrorView; // @synthesize netErrorView=_netErrorView;
- (void).cxx_destruct;
- (void)updateNavigation;
- (void)updateTheme;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)checkScrollable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)runActionWithData:(id)arg1;
- (void)runDeleteAction;
- (void)exchangeEnd:(id)arg1;
- (void)exchangeStart;
- (void)reloadFromRPCByNetErrorRetry;
- (void)handleNetError:(id)arg1 result:(id)arg2;
- (void)handleError:(id)arg1 result:(id)arg2;
- (void)handleData:(id)arg1;
- (void)queryDetailRPC;
- (void)deletePassRPC;
- (void)operationPageChange:(id)arg1;
- (void)actionOperationsButtonClicked;
- (void)reloadData;
- (void)reloadDataBarButtonItem;
- (id)createFrontViewByPassType;
- (void)loadTableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (id)initWithPassBaseInfo:(id)arg1;
- (id)initWithPassInfo:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

