//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TallyView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UITableView;

@interface TallyDropDownList : TallyView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool isClick;
    _Bool isWorking;
    _Bool _isDisplay;
    NSMutableArray *listArray;
    UITableView *listView;
    UIButton *pressBtn;
    id <TallyDropDownListDelegate> delegate;
    UIButton *arrowBtn;
    long long selectedIndex;
    struct CGRect viewRect;
}

@property(nonatomic) _Bool isDisplay; // @synthesize isDisplay=_isDisplay;
@property(nonatomic) _Bool isWorking; // @synthesize isWorking;
@property(nonatomic) _Bool isClick; // @synthesize isClick;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex;
@property(retain, nonatomic) UIButton *arrowBtn; // @synthesize arrowBtn;
@property(nonatomic) __weak id <TallyDropDownListDelegate> delegate; // @synthesize delegate;
@property(nonatomic) struct CGRect viewRect; // @synthesize viewRect;
@property(retain, nonatomic) UIButton *pressBtn; // @synthesize pressBtn;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)update;
- (long long)focusIndexWithTitle:(id)arg1;
- (void)updateList;
- (void)updateTitle;
- (void)setCurrentTitle:(id)arg1;
- (id)currentTitle;
- (void)display:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reset;
- (void)closeDropMenuList:(_Bool)arg1;
- (long long)retunMenuHeight;
- (void)layout;
- (void)removeAll;
- (void)addItem:(id)arg1 title:(id)arg2;
- (void)pressBtnOnClick:(id)arg1;
- (_Bool)isOpen;
- (void)releaseUI;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

