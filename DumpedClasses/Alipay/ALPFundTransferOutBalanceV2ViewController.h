//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWTableController.h"

@class APInputBoxCell, APWealthFooterView, DTRpcAsyncCaller, NSString;

@interface ALPFundTransferOutBalanceV2ViewController : WWTableController
{
    NSString *_token;
    NSString *_balanceAmount;
    NSString *_transferOutQuotaAmount;
    NSString *_transferOutQuotaString;
    APInputBoxCell *_outMoneyCell;
    APWealthFooterView *_tailView;
    DTRpcAsyncCaller *_startVerifyIdentityRPCCaller;
    NSString *_securityId;
    NSString *_verifyId;
}

@property(copy, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(copy, nonatomic) NSString *securityId; // @synthesize securityId=_securityId;
@property(retain, nonatomic) DTRpcAsyncCaller *startVerifyIdentityRPCCaller; // @synthesize startVerifyIdentityRPCCaller=_startVerifyIdentityRPCCaller;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updateTitleLabelWidth;
- (void)doOutClick;
- (void)oldVerifyIdentityProcess;
- (void)callbackProcess:(id)arg1;
- (void)verifyIdentitySecondCheckProcess;
- (void)verifyIdentityProcess;
- (void)prepareForVerifyIdentityProcess;
- (_Bool)checkAmountValid:(id)arg1;
- (void)gotoInit;
- (id)buildQuotaText:(id)arg1 value:(id)arg2;
- (id)r;
- (void)updateRpcData:(id)arg1;
- (void)updateTransferOutTip;
- (void)enableTailButton:(_Bool)arg1;
- (id)tableView;
- (id)init;

@end

