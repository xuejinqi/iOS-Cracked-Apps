//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BLYDevice : NSObject
{
    _Bool _developmentDevice;
    float _freeDiskSpace;
    float _totalDiskSpace;
    float _freeMemeory;
    float _totalMemeory;
    NSString *_qIMEI;
    NSString *_deviceIdentifier;
    NSString *_deviceName;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_systemVersionCode;
    NSString *_hardwareModel;
    NSString *_cpuArch;
    unsigned long long _jailbrokenStatus;
}

+ (id)hardwareFingerPrint;
+ (id)countryCode;
+ (id)languageList;
+ (unsigned long long)cpuCount;
+ (id)systemBootTime;
+ (double)systemUpTime;
+ (id)idfv;
+ (_Bool)isJailBreak;
+ (id)totalMemeory;
+ (id)freeMemeory;
+ (id)totalDiskSpace;
+ (id)freeDiskSpace;
+ (id)systemVersion;
+ (id)systemName;
+ (id)deviceName;
+ (id)qIMEIFromKeychain;
+ (id)deviceIDFromKeychain;
+ (id)generateDeviceID;
+ (id)currentDevice;
@property(nonatomic) unsigned long long jailbrokenStatus; // @synthesize jailbrokenStatus=_jailbrokenStatus;
@property(nonatomic) float totalMemeory; // @synthesize totalMemeory=_totalMemeory;
@property(nonatomic) float freeMemeory; // @synthesize freeMemeory=_freeMemeory;
@property(nonatomic) float totalDiskSpace; // @synthesize totalDiskSpace=_totalDiskSpace;
@property(nonatomic) float freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
@property(copy, nonatomic) NSString *cpuArch; // @synthesize cpuArch=_cpuArch;
@property(copy, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(copy, nonatomic) NSString *systemVersionCode; // @synthesize systemVersionCode=_systemVersionCode;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic, getter=isDevelopmentDevice) _Bool developmentDevice; // @synthesize developmentDevice=_developmentDevice;
- (void).cxx_destruct;
- (_Bool)isJailbroken;
- (id)getThreadInfo;
- (id)getProcessMemoryInfo;
- (id)getHostMemoryUsage;
- (id)fullSystemVersion;
@property(copy, nonatomic) NSString *qIMEI; // @synthesize qIMEI=_qIMEI;

@end

