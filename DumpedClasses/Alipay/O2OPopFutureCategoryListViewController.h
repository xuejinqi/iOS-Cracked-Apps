//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OPopFutureBaseListViewController.h"

@class NSArray, O2OPageMenuItem, O2OPageMenuView, O2OPopFutureCategoryListModel, O2OPopFutureListViewDataSource, O2OPopFutureListViewDelegate, UIImageView, UILabel, UIView, UIViewController;

@interface O2OPopFutureCategoryListViewController : O2OPopFutureBaseListViewController
{
    _Bool _fromKoubeiHomePage;
    _Bool _hasSelected;
    O2OPopFutureCategoryListModel *_categoryModel;
    O2OPopFutureListViewDataSource *_ds;
    O2OPageMenuView *_categoryPageMenu;
    O2OPageMenuItem *_categoryMenuItem;
    NSArray *_blocks;
    NSArray *_tabLists;
    UIView *_contentView;
    NSArray *_menuItems;
    O2OPopFutureListViewDelegate *_dl;
    CDUnknownBlockType _block;
    UIImageView *_bottomLogoView;
    UILabel *_popeyeTipView;
    double _tableViewOffsetY;
}

@property(nonatomic) double tableViewOffsetY; // @synthesize tableViewOffsetY=_tableViewOffsetY;
@property(retain, nonatomic) UILabel *popeyeTipView; // @synthesize popeyeTipView=_popeyeTipView;
@property(retain, nonatomic) UIImageView *bottomLogoView; // @synthesize bottomLogoView=_bottomLogoView;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) O2OPopFutureListViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool hasSelected; // @synthesize hasSelected=_hasSelected;
@property(retain, nonatomic) NSArray *tabLists; // @synthesize tabLists=_tabLists;
@property(retain, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(nonatomic) __weak O2OPageMenuItem *categoryMenuItem; // @synthesize categoryMenuItem=_categoryMenuItem;
@property(nonatomic) __weak O2OPageMenuView *categoryPageMenu; // @synthesize categoryPageMenu=_categoryPageMenu;
@property(nonatomic) _Bool fromKoubeiHomePage; // @synthesize fromKoubeiHomePage=_fromKoubeiHomePage;
@property(retain, nonatomic) O2OPopFutureListViewDataSource *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) O2OPopFutureCategoryListModel *categoryModel; // @synthesize categoryModel=_categoryModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupContentView;
- (void)registerRequestComplateion:(CDUnknownBlockType)arg1;
- (void)layoutBottomLogoView;
- (_Bool)canShowModel:(id)arg1;
- (void)showModel:(id)arg1;
- (_Bool)isFirstRequest;
- (void)handleError:(id)arg1;
- (void)renderData:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak UIViewController *parentViewController;

@end

