//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QBDomainWhiteListReq : JceObjectV2
{
    int jcev2_p_0_r_iDomainTime;
    NSString *jcev2_p_1_r_sQUA;
    NSString *jcev2_p_2_r_sGUID;
    NSString *jcev2_p_3_o_sQua2ExInfo;
    NSString *jcev2_p_4_o_sContentMd5;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_sContentMd5, setter=setJce_sContentMd5:) NSString *jcev2_p_4_o_sContentMd5; // @synthesize jcev2_p_4_o_sContentMd5;
@property(retain, nonatomic, getter=jce_sQua2ExInfo, setter=setJce_sQua2ExInfo:) NSString *jcev2_p_3_o_sQua2ExInfo; // @synthesize jcev2_p_3_o_sQua2ExInfo;
@property(retain, nonatomic, getter=jce_sGUID, setter=setJce_sGUID:) NSString *jcev2_p_2_r_sGUID; // @synthesize jcev2_p_2_r_sGUID;
@property(retain, nonatomic, getter=jce_sQUA, setter=setJce_sQUA:) NSString *jcev2_p_1_r_sQUA; // @synthesize jcev2_p_1_r_sQUA;
@property(nonatomic, getter=jce_iDomainTime, setter=setJce_iDomainTime:) int jcev2_p_0_r_iDomainTime; // @synthesize jcev2_p_0_r_iDomainTime;
- (void).cxx_destruct;
- (id)init;

@end

