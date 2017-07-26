//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NAMDynamicConfigProtocol.h"

@class NSString;

@interface NAConfigManager : NSObject <NAMDynamicConfigProtocol>
{
    id <APConfigService> _configService;
}

@property(retain, nonatomic) id <APConfigService> configService; // @synthesize configService=_configService;
- (void).cxx_destruct;
- (id)stringValue:(id)arg1;
- (_Bool)enableDownloadAll;
- (_Bool)enableSyncPatch;
- (_Bool)enableMassDownload;
- (_Bool)enablePreferLocal;
- (_Bool)needStorageSizeLimit:(unsigned long long)arg1;
- (_Bool)enableDebugModeFlag;
- (_Bool)enableNebulaLoadingAnimation;
- (_Bool)enableNebulaHandler;
- (_Bool)enablePresetlist;
- (_Bool)enableTinyPubResDegrade;
- (_Bool)enableCommonResourceDegrade;
- (_Bool)enableStableRpc;
- (int)prepareWaitMS;
- (_Bool)needDownloadWhenSync;
- (void)networkStatusChanged:(id)arg1;
- (void)registerNetwork;
- (_Bool)coverInstall;
- (unsigned long long)networkStatus;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

