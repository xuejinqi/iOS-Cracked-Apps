//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface SyncLoginResp : JceObjectV2
{
    long long jcev2_p_0_r_result;
    NSString *jcev2_p_1_r_loginkey;
    NSString *jcev2_p_2_r_picurl;
    NSString *jcev2_p_3_r_sid;
    NSString *jcev2_p_4_r_wapsid;
    NSString *jcev2_p_5_r_extmsg;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_extmsg, setter=setJce_extmsg:) NSString *jcev2_p_5_r_extmsg; // @synthesize jcev2_p_5_r_extmsg;
@property(retain, nonatomic, getter=jce_wapsid, setter=setJce_wapsid:) NSString *jcev2_p_4_r_wapsid; // @synthesize jcev2_p_4_r_wapsid;
@property(retain, nonatomic, getter=jce_sid, setter=setJce_sid:) NSString *jcev2_p_3_r_sid; // @synthesize jcev2_p_3_r_sid;
@property(retain, nonatomic, getter=jce_picurl, setter=setJce_picurl:) NSString *jcev2_p_2_r_picurl; // @synthesize jcev2_p_2_r_picurl;
@property(retain, nonatomic, getter=jce_loginkey, setter=setJce_loginkey:) NSString *jcev2_p_1_r_loginkey; // @synthesize jcev2_p_1_r_loginkey;
@property(nonatomic, getter=jce_result, setter=setJce_result:) long long jcev2_p_0_r_result; // @synthesize jcev2_p_0_r_result;
- (void)dealloc;
- (id)init;

@end

