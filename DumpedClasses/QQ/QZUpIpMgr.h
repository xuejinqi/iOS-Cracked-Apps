//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface QZUpIpMgr : NSObject
{
    NSMutableArray *ipList;
    long long ipIndex;
    NSMutableArray *_badIpList;
    NSMutableArray *_badPortList;
    NSMutableDictionary *_cacheData;
}

+ (id)getIpMgrWithIpCategory:(int)arg1;
@property(retain) NSMutableDictionary *cacheData; // @synthesize cacheData=_cacheData;
@property long long ipIndex; // @synthesize ipIndex;
@property(retain) NSMutableArray *ipList; // @synthesize ipList;
- (void).cxx_destruct;
- (_Bool)isInBadIpList:(id)arg1;
- (void)addBadIpList:(id)arg1;
- (void)removeLatestIp:(id)arg1;
- (void)updateLatestIp:(id)arg1;
- (void)update:(id)arg1 result:(long long)arg2 domainIp:(id)arg3;
- (id)getIp;
- (void)restLatestIpWhenEnvirChanged;
- (void)reset;
- (id)wifiOptimunIp;
- (id)backupIp;
- (id)domainIpFromDNSMgr;
- (id)domainName;
- (id)optimumIp;
- (id)getFileTypeKey;
- (_Bool)didTestEnviromentLoaded;
- (id)latestIpPath;
- (id)getLatestApnKey;
- (id)getLatestIpDict;
- (_Bool)testEnviromentIsOpen;
- (void)switchToTestIP;
- (void)removeBlackListConfig;
- (void)initBlackListConfig;
- (void)writeToFile;
- (void)removeDataForKey:(id)arg1;
- (void)setDataForKey:(id)arg1 data:(id)arg2;
- (void)initIPList:(id)arg1 latestIpList:(id)arg2;
- (id)getIpList:(id)arg1 iptype:(long long)arg2 apn:(long long)arg3 existIpList:(id)arg4 domain:(id)arg5;
- (void)load;
- (id)init;

@end

