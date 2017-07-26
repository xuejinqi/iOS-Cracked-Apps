//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface QQSetupRelatedViewController : QQViewController <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    NSMutableArray *_dataHeads;
    NSMutableArray *_dataSources;
    NSMutableArray *_dataFoots;
    UITableView *_tableView;
    _Bool _isFromAIO;
}

@property(nonatomic) _Bool isFromAIO; // @synthesize isFromAIO=_isFromAIO;
- (void)heightedCellForOneSecondWithCell:(id)arg1 itemKey:(id)arg2 indexPath:(id)arg3;
- (void)jumpLightWebsit;
- (void)pushRemindListViewController;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)restoreData;
- (void)restoreDataAfterViewDidLoad;
- (void)viewDidLoad;
- (void)createTableView:(struct CGRect)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *dataFoots; // @dynamic dataFoots;
@property(retain, nonatomic) NSMutableArray *dataHeads; // @dynamic dataHeads;
@property(retain, nonatomic) NSMutableArray *dataSources; // @dynamic dataSources;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UITableView *tableView; // @dynamic tableView;

@end

