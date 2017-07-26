//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OPBaseListViewController.h"

#import "O2OPMyOrderModelDelegate.h"
#import "O2OPMyOrderSubVCProtocol.h"

@class APExceptionView, NSString, O2OPMyOrderDataSource, O2OPMyOrderDelegate, O2OPMyOrderModel, O2OPTableFooterView, UIViewController;

@interface O2OPMyOrderListViewController : O2OPBaseListViewController <O2OPMyOrderModelDelegate, O2OPMyOrderSubVCProtocol>
{
    _Bool _needAutoLoad;
    _Bool _needRefresh;
    _Bool _isPullRefresh;
    _Bool _shouldShowBottomLogo;
    _Bool _isNotFirstPageDidShow;
    unsigned long long _displayOrderStatus;
    UIViewController *_containerVC;
    O2OPMyOrderDelegate *_myOrderDelegate;
    O2OPMyOrderDataSource *_myOrderDataSource;
    O2OPMyOrderModel *_orderListModel;
    APExceptionView *_errorView;
    O2OPTableFooterView *_logoFooterView;
}

@property(nonatomic) _Bool isNotFirstPageDidShow; // @synthesize isNotFirstPageDidShow=_isNotFirstPageDidShow;
@property(retain, nonatomic) O2OPTableFooterView *logoFooterView; // @synthesize logoFooterView=_logoFooterView;
@property(nonatomic) _Bool shouldShowBottomLogo; // @synthesize shouldShowBottomLogo=_shouldShowBottomLogo;
@property(nonatomic) _Bool isPullRefresh; // @synthesize isPullRefresh=_isPullRefresh;
@property(nonatomic) _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(retain, nonatomic) APExceptionView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool needAutoLoad; // @synthesize needAutoLoad=_needAutoLoad;
@property(retain, nonatomic) O2OPMyOrderModel *orderListModel; // @synthesize orderListModel=_orderListModel;
@property(retain, nonatomic) O2OPMyOrderDataSource *myOrderDataSource; // @synthesize myOrderDataSource=_myOrderDataSource;
@property(retain, nonatomic) O2OPMyOrderDelegate *myOrderDelegate; // @synthesize myOrderDelegate=_myOrderDelegate;
@property(nonatomic) __weak UIViewController *containerVC; // @synthesize containerVC=_containerVC;
@property(nonatomic) unsigned long long displayOrderStatus; // @synthesize displayOrderStatus=_displayOrderStatus;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)checkBottomIconWithToDeleteCellHeight:(double)arg1;
- (void)checkBottomIcon;
- (void)removeBottomLogoView;
- (id)footerViewNoResultWithModel:(id)arg1;
- (id)footerViewError:(id)arg1 withModel:(id)arg2;
- (id)footerViewLoadingWithModel:(id)arg1;
- (id)footerViewCompleteWithModel:(id)arg1;
- (_Bool)modelShouldRaise1002Exception:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showNoResult:(id)arg1;
- (void)doShowEmpty:(id)arg1;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)endShowLoding;
- (void)showLoading:(id)arg1;
- (void)showErrorView:(int)arg1 title:(id)arg2;
- (void)removeErrorView;
- (_Bool)isShowingErrorView;
- (void)pageWillHidden;
- (void)pageDidShow;
- (id)displayTitle;
- (void)pullRefreshDidTrigger;
- (void)markNeedRefresh;
- (void)deleteOrder:(id)arg1 visible:(_Bool)arg2;
- (void)refreshOrder:(id)arg1 visible:(_Bool)arg2;
- (id)statusStr;
- (void)load;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithContainerVC:(id)arg1 initialModel:(id)arg2 status:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

