//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString;

@interface QZJPhotoClusterIdentifyFaceReq : JceObjectV2
{
    _Bool _jcev2_p_4_o_is_demo;
    unsigned int _jcev2_p_0_o_op_uin;
    NSArray *_jcev2_p_1_o_feature__b0x9i_VONSNumber;
    long long _jcev2_p_2_o_mode;
    NSString *_jcev2_p_3_o_img;
}

+ (id)jceType;
@property(nonatomic, getter=jce_is_demo, setter=setJce_is_demo:) _Bool jcev2_p_4_o_is_demo; // @synthesize jcev2_p_4_o_is_demo=_jcev2_p_4_o_is_demo;
@property(retain, nonatomic, getter=jce_img, setter=setJce_img:) NSString *jcev2_p_3_o_img; // @synthesize jcev2_p_3_o_img=_jcev2_p_3_o_img;
@property(nonatomic, getter=jce_mode, setter=setJce_mode:) long long jcev2_p_2_o_mode; // @synthesize jcev2_p_2_o_mode=_jcev2_p_2_o_mode;
@property(retain, nonatomic, getter=jce_feature, setter=setJce_feature:) NSArray *jcev2_p_1_o_feature__b0x9i_VONSNumber; // @synthesize jcev2_p_1_o_feature__b0x9i_VONSNumber=_jcev2_p_1_o_feature__b0x9i_VONSNumber;
@property(nonatomic, getter=jce_op_uin, setter=setJce_op_uin:) unsigned int jcev2_p_0_o_op_uin; // @synthesize jcev2_p_0_o_op_uin=_jcev2_p_0_o_op_uin;
- (void).cxx_destruct;
- (id)init;

@end

