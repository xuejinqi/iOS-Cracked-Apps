//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APContactBaseViewController.h"

@class APBarButtonItem, DTRpcAsyncCaller, NSArray, SocialCommonErrorView;

@interface APContactUnusualViewController : APContactBaseViewController
{
    DTRpcAsyncCaller *_rpcCaller;
    DTRpcAsyncCaller *_rpcCaller_getList;
    APBarButtonItem *_item;
    NSArray *_contacts;
}

@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) APBarButtonItem *item; // @synthesize item=_item;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller_getList; // @synthesize rpcCaller_getList=_rpcCaller_getList;
@property(retain, nonatomic) DTRpcAsyncCaller *rpcCaller; // @synthesize rpcCaller=_rpcCaller;
- (void).cxx_destruct;
- (void)didClickRightBarBtnItem:(id)arg1;
- (void)rpcToRemoveUnusualList:(id)arg1;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (void)commonView:(id)arg1 didClickRightMenuBtnForItem:(id)arg2 cell:(id)arg3;
- (id)manageBtnTitlesInCommonView:(id)arg1 item:(id)arg2;
- (_Bool)highlightRightManageBtnInCommonView:(id)arg1 item:(id)arg2;
- (void)errorViewShow:(_Bool)arg1 error:(id)arg2;
- (void)didSelectContactInfo:(id)arg1;
- (void)judgeToShowUnusualAlert;
- (void)handleContactDataReslutWithResponseVO:(id)arg1;
- (void)reloadContacts;
- (void)setupSelectView;
- (void)loadContact;
- (void)resumeWithOptions:(id)arg1;
- (void)setupRightBarBtnItem;
- (void)back;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configWithDict:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SocialCommonErrorView *errorView;

@end

