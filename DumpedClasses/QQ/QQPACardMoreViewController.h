//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, QQPACardViewController, UITableView;

@interface QQPACardMoreViewController : QQViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    unsigned long long _puin;
    QQPACardViewController *_paCardVC;
    NSArray *_moreInfoArray;
}

@property(retain, nonatomic) NSArray *moreInfoArray; // @synthesize moreInfoArray=_moreInfoArray;
@property(nonatomic) __weak QQPACardViewController *paCardVC; // @synthesize paCardVC=_paCardVC;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setNightModeIfNeed;
- (void)updateMoreInfoArray:(id)arg1;
- (void)updateData;
- (void)viewDidLoad;
- (void)loadView;
- (void)PublicAccountUpdataMsgHandle:(id)arg1;
- (void)dealloc;
- (id)initWithPuin:(unsigned long long)arg1 paCardVC:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

