//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray;

@interface SensorDataPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *acceleration; // @dynamic acceleration;
@property(retain, nonatomic) NSArray *gyroscope; // @dynamic gyroscope;
@property(readonly) _Bool hasLight; // @dynamic hasLight;
@property(readonly) _Bool hasPressure; // @dynamic hasPressure;
@property(nonatomic) float light; // @dynamic light;
@property(nonatomic) float pressure; // @dynamic pressure;

@end

