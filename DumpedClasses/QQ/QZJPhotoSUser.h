//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QZJPhotoSUser : JceObjectV2
{
    int _jcev2_p_2_o_timestamp;
    int _jcev2_p_3_o_from;
    long long _jcev2_p_0_o_uin;
    NSString *_jcev2_p_1_o_nickname;
    NSString *_jcev2_p_4_o_uinkey;
    NSString *_jcev2_p_5_o_logo;
}

+ (id)jceType;
@property(retain, nonatomic, getter=jce_logo, setter=setJce_logo:) NSString *jcev2_p_5_o_logo; // @synthesize jcev2_p_5_o_logo=_jcev2_p_5_o_logo;
@property(retain, nonatomic, getter=jce_uinkey, setter=setJce_uinkey:) NSString *jcev2_p_4_o_uinkey; // @synthesize jcev2_p_4_o_uinkey=_jcev2_p_4_o_uinkey;
@property(nonatomic, getter=jce_from, setter=setJce_from:) int jcev2_p_3_o_from; // @synthesize jcev2_p_3_o_from=_jcev2_p_3_o_from;
@property(nonatomic, getter=jce_timestamp, setter=setJce_timestamp:) int jcev2_p_2_o_timestamp; // @synthesize jcev2_p_2_o_timestamp=_jcev2_p_2_o_timestamp;
@property(retain, nonatomic, getter=jce_nickname, setter=setJce_nickname:) NSString *jcev2_p_1_o_nickname; // @synthesize jcev2_p_1_o_nickname=_jcev2_p_1_o_nickname;
@property(nonatomic, getter=jce_uin, setter=setJce_uin:) long long jcev2_p_0_o_uin; // @synthesize jcev2_p_0_o_uin=_jcev2_p_0_o_uin;
- (void).cxx_destruct;
- (id)init;

@end

