//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QQWalletWalletGetPaySuccessInfoReq : JceObjectV2
{
    _Bool _jcev2_p_8_o_bBindCard;
    _Bool _jcev2_p_9_o_bBalance;
    _Bool _jcev2_p_10_o_bPayAgent;
    int _jcev2_p_2_o_iPayAmount;
    int _jcev2_p_4_o_iPlatForm;
    int _jcev2_p_7_o_iOrderAmount;
    int _jcev2_p_11_o_iDefaultPayModel;
    long long _jcev2_p_0_o_lUin;
    NSString *_jcev2_p_1_o_sSpId;
    NSString *_jcev2_p_3_o_sOrderId;
    NSString *_jcev2_p_5_o_sQQVersion;
    NSString *_jcev2_p_6_o_sExtInfo;
}

+ (id)jceType;
@property(nonatomic, getter=jce_iDefaultPayModel, setter=setJce_iDefaultPayModel:) int jcev2_p_11_o_iDefaultPayModel; // @synthesize jcev2_p_11_o_iDefaultPayModel=_jcev2_p_11_o_iDefaultPayModel;
@property(nonatomic, getter=jce_bPayAgent, setter=setJce_bPayAgent:) _Bool jcev2_p_10_o_bPayAgent; // @synthesize jcev2_p_10_o_bPayAgent=_jcev2_p_10_o_bPayAgent;
@property(nonatomic, getter=jce_bBalance, setter=setJce_bBalance:) _Bool jcev2_p_9_o_bBalance; // @synthesize jcev2_p_9_o_bBalance=_jcev2_p_9_o_bBalance;
@property(nonatomic, getter=jce_bBindCard, setter=setJce_bBindCard:) _Bool jcev2_p_8_o_bBindCard; // @synthesize jcev2_p_8_o_bBindCard=_jcev2_p_8_o_bBindCard;
@property(nonatomic, getter=jce_iOrderAmount, setter=setJce_iOrderAmount:) int jcev2_p_7_o_iOrderAmount; // @synthesize jcev2_p_7_o_iOrderAmount=_jcev2_p_7_o_iOrderAmount;
@property(retain, nonatomic, getter=jce_sExtInfo, setter=setJce_sExtInfo:) NSString *jcev2_p_6_o_sExtInfo; // @synthesize jcev2_p_6_o_sExtInfo=_jcev2_p_6_o_sExtInfo;
@property(retain, nonatomic, getter=jce_sQQVersion, setter=setJce_sQQVersion:) NSString *jcev2_p_5_o_sQQVersion; // @synthesize jcev2_p_5_o_sQQVersion=_jcev2_p_5_o_sQQVersion;
@property(nonatomic, getter=jce_iPlatForm, setter=setJce_iPlatForm:) int jcev2_p_4_o_iPlatForm; // @synthesize jcev2_p_4_o_iPlatForm=_jcev2_p_4_o_iPlatForm;
@property(retain, nonatomic, getter=jce_sOrderId, setter=setJce_sOrderId:) NSString *jcev2_p_3_o_sOrderId; // @synthesize jcev2_p_3_o_sOrderId=_jcev2_p_3_o_sOrderId;
@property(nonatomic, getter=jce_iPayAmount, setter=setJce_iPayAmount:) int jcev2_p_2_o_iPayAmount; // @synthesize jcev2_p_2_o_iPayAmount=_jcev2_p_2_o_iPayAmount;
@property(retain, nonatomic, getter=jce_sSpId, setter=setJce_sSpId:) NSString *jcev2_p_1_o_sSpId; // @synthesize jcev2_p_1_o_sSpId=_jcev2_p_1_o_sSpId;
@property(nonatomic, getter=jce_lUin, setter=setJce_lUin:) long long jcev2_p_0_o_lUin; // @synthesize jcev2_p_0_o_lUin=_jcev2_p_0_o_lUin;
- (void)dealloc;
- (id)init;

@end

