//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AddFriendSendMessageViewController, NSArray, NSMutableArray, NSString, UILabel, UITableView, UIViewController;

@interface QQPotentialFriendsViewController : QQViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_dataSource;
    UITableView *_tableView;
    UILabel *_noDataLabel;
    _Bool _isFromBabyQ;
    UIViewController *_entranceViewController;
    AddFriendSendMessageViewController *_addFriendSendMessageViewController;
}

@property(retain, nonatomic) AddFriendSendMessageViewController *addFriendSendMessageViewController; // @synthesize addFriendSendMessageViewController=_addFriendSendMessageViewController;
@property(nonatomic) _Bool isFromBabyQ; // @synthesize isFromBabyQ=_isFromBabyQ;
@property(nonatomic) __weak UIViewController *entranceViewController; // @synthesize entranceViewController=_entranceViewController;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setNoDataLabelVisible:(_Bool)arg1;
- (void)didReceivedNewFriendAcceptAddNotification:(id)arg1;
- (void)didReceivedAddFriendResponse:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

