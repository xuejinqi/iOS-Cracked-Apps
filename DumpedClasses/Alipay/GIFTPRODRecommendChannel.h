//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIFTPRODToString.h"

@class NSDictionary, NSString;

@interface GIFTPRODRecommendChannel : GIFTPRODToString
{
    NSString *_channelType;
    NSString *_channelName;
    NSString *_availableLimit;
    NSString *_instId;
    NSString *_bankName;
    NSString *_bankLogUrl;
    NSString *_cardNo;
    NSString *_cardLast4No;
    NSString *_assignedChannel;
    NSString *_bizProduct;
    NSDictionary *_extInfos;
}

+ (Class)extInfosElementClass;
@property(retain, nonatomic) NSDictionary *extInfos; // @synthesize extInfos=_extInfos;
@property(retain, nonatomic) NSString *bizProduct; // @synthesize bizProduct=_bizProduct;
@property(retain, nonatomic) NSString *assignedChannel; // @synthesize assignedChannel=_assignedChannel;
@property(retain, nonatomic) NSString *cardLast4No; // @synthesize cardLast4No=_cardLast4No;
@property(retain, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
@property(retain, nonatomic) NSString *bankLogUrl; // @synthesize bankLogUrl=_bankLogUrl;
@property(retain, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(retain, nonatomic) NSString *instId; // @synthesize instId=_instId;
@property(retain, nonatomic) NSString *availableLimit; // @synthesize availableLimit=_availableLimit;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain, nonatomic) NSString *channelType; // @synthesize channelType=_channelType;
- (void).cxx_destruct;

@end

