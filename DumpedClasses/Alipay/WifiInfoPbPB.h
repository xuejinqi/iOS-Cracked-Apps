//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface WifiInfoPbPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(readonly) _Bool hasRssi; // @dynamic hasRssi;
@property(readonly) _Bool hasSsid; // @dynamic hasSsid;
@property(readonly) _Bool hasWifiMac; // @dynamic hasWifiMac;
@property(nonatomic) double rssi; // @dynamic rssi;
@property(retain, nonatomic) NSString *ssid; // @dynamic ssid;
@property(retain, nonatomic) NSString *wifiMac; // @dynamic wifiMac;

@end

