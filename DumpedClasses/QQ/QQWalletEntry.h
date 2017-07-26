//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QQWalletMarket, QQWalletRedPoint, QQWalletText;

@interface QQWalletEntry : JceObjectV2
{
    long long _walletPoint;
}

+ (id)redPointPathForEntryType:(unsigned long long)arg1;
+ (id)jceType;
@property(nonatomic) long long walletPoint; // @synthesize walletPoint=_walletPoint;
- (_Bool)ifShowMarketIcon;
- (_Bool)isTextAvaliable;
- (_Bool)isEntryAvaliable;

// Remaining properties
@property(retain, nonatomic, getter=jce_url, setter=setJce_url:) NSString *jcev2_p_0_o_url; // @dynamic jcev2_p_0_o_url;
@property(retain, nonatomic, getter=jce_text, setter=setJce_text:) QQWalletText *jcev2_p_1_o_text; // @dynamic jcev2_p_1_o_text;
@property(nonatomic, getter=jce_type, setter=setJce_type:) unsigned int jcev2_p_2_o_type; // @dynamic jcev2_p_2_o_type;
@property(retain, nonatomic, getter=jce_market, setter=setJce_market:) QQWalletMarket *jcev2_p_3_o_market; // @dynamic jcev2_p_3_o_market;
@property(retain, nonatomic, getter=jce_iconUrl, setter=setJce_iconUrl:) NSString *jcev2_p_4_o_iconUrl; // @dynamic jcev2_p_4_o_iconUrl;
@property(retain, nonatomic, getter=jce_entryName, setter=setJce_entryName:) NSString *jcev2_p_5_o_entryName; // @dynamic jcev2_p_5_o_entryName;
@property(retain, nonatomic, getter=jce_redPoint, setter=setJce_redPoint:) QQWalletRedPoint *jcev2_p_6_o_redPoint; // @dynamic jcev2_p_6_o_redPoint;

@end

