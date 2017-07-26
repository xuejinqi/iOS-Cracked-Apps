//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIImageView, UITableView, UIView;

@interface QQVipComicDropDownMenu : UIWindow <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *_dataSource;
    UITableView *_tableView;
    UIButton *_maskButton;
    UIImageView *_backgroudView;
    UIView *_containView;
    UIWindow *_coverWindow;
    _Bool _isDropDirectionDown;
    struct CGPoint _initAnchorPoint;
    _Bool _isLateral;
    id <QQVipComicDropDownMenuDelegate> _delegate;
}

@property(nonatomic) _Bool isLateral; // @synthesize isLateral=_isLateral;
@property(nonatomic) __weak id <QQVipComicDropDownMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)hideView;
- (void)hideViewWithoutAnimation;
- (void)popAnimation:(double)arg1;
- (void)updateBackGroudViewAnchorPoint;
- (void)showViewAtPosition:(struct CGPoint)arg1;
- (void)adjustViewAtPosition:(struct CGPoint)arg1;
- (void)didMaskButtonClicked:(id)arg1;
- (void)addMenuItem:(id)arg1 cellId:(int)arg2;
- (double)tableViewHeight;
- (void)createCoverWindow;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

