//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, NSMutableArray, NSString, SFNormalAlertControl, SFShareRangeSelection, UITableView, UIView;

@interface SFShareRangeViewController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_dataArray;
    NSMutableArray *_sectionTitles;
    CDUnknownBlockType _finishCallback;
    NSIndexPath *_selectionPath;
    UITableView *_tableView;
    UIView *_headerView;
    SFNormalAlertControl *_normalAlertControl;
    SFShareRangeSelection *_originSel;
}

+ (void)addTagsForItem:(id)arg1 type:(int)arg2 tags:(id)arg3;
@property(retain, nonatomic) SFShareRangeSelection *originSel; // @synthesize originSel=_originSel;
@property(retain, nonatomic) SFNormalAlertControl *normalAlertControl; // @synthesize normalAlertControl=_normalAlertControl;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSIndexPath *selectionPath; // @synthesize selectionPath=_selectionPath;
@property(copy, nonatomic) CDUnknownBlockType finishCallback; // @synthesize finishCallback=_finishCallback;
@property(retain, nonatomic) NSMutableArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)itemForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)back;
- (void)exitMySelf;
- (id)generateSelectedList;
- (id)currentSelectedSection;
- (_Bool)selectAtIndexPath:(id)arg1;
- (void)finishAction:(id)arg1;
- (void)setBarItem;
- (void)configWithSelection:(id)arg1;
- (id)generateSelectionInfo;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

