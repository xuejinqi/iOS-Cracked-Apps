//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class BizDataPB, DeviceDataPB, NSString;

@interface ReportRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) BizDataPB *bizData; // @dynamic bizData;
@property(retain, nonatomic) DeviceDataPB *deviceData; // @dynamic deviceData;
@property(retain, nonatomic) NSString *extBizData; // @dynamic extBizData;
@property(retain, nonatomic) NSString *extDeviceData; // @dynamic extDeviceData;
@property(readonly) _Bool hasBizData; // @dynamic hasBizData;
@property(readonly) _Bool hasDeviceData; // @dynamic hasDeviceData;
@property(readonly) _Bool hasExtBizData; // @dynamic hasExtBizData;
@property(readonly) _Bool hasExtDeviceData; // @dynamic hasExtDeviceData;

@end

