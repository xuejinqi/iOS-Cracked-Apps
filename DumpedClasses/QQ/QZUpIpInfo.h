//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneModel.h"

@class NSString;

@interface QZUpIpInfo : QZoneModel
{
}

- (id)getDomain;
- (id)ipInfo;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIpInfo:(id)arg1;
- (id)initWithIp:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *carrierName; // @dynamic carrierName;
@property(nonatomic) long long carrierType; // @dynamic carrierType;
@property(retain, nonatomic) NSString *domain; // @dynamic domain;
@property(retain, nonatomic) NSString *ip; // @dynamic ip;
@property(nonatomic) long long ipStatus; // @dynamic ipStatus;
@property(nonatomic) long long ipType; // @dynamic ipType;
@property(nonatomic) long long ipValue; // @dynamic ipValue;
@property(nonatomic) int port; // @dynamic port;
@property(nonatomic) long long protocol; // @dynamic protocol;

@end

