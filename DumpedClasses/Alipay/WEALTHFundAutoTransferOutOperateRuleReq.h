//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WEALTHToString.h"

@class NSString, WEALTHBankCardForFixedRedeem;

@interface WEALTHFundAutoTransferOutOperateRuleReq : WEALTHToString
{
    NSString *_ruleId;
    WEALTHBankCardForFixedRedeem *_bankCard;
    NSString *_amount;
    NSString *_day;
    NSString *_memo;
}

@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *day; // @synthesize day=_day;
@property(retain, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(retain, nonatomic) WEALTHBankCardForFixedRedeem *bankCard; // @synthesize bankCard=_bankCard;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
- (void).cxx_destruct;

@end

