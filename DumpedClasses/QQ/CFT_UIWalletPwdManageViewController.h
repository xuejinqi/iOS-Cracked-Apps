//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface CFT_UIWalletPwdManageViewController : CFT_UICustomNaviBarViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hadResetPass;
    _Bool _hadModifyPass;
    int _gotQWalletuserInfo;
    UITableView *_tableView;
    NSMutableArray *_titleArray;
    long long _selIndex;
}

+ (id)getViewController;
@property(nonatomic) _Bool hadModifyPass; // @synthesize hadModifyPass=_hadModifyPass;
@property(nonatomic) _Bool hadResetPass; // @synthesize hadResetPass=_hadResetPass;
@property(nonatomic) int gotQWalletuserInfo; // @synthesize gotQWalletuserInfo=_gotQWalletuserInfo;
@property(nonatomic) long long selIndex; // @synthesize selIndex=_selIndex;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)dealloc;
- (void)qwallet_userinfo;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

