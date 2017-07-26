//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, QQARCommonConfigModel;

@interface QQARCommonConfigManager : NSObject
{
    _Bool _disableCloudByJS;
    NSObject<OS_dispatch_queue> *_arCommonConfigQueue;
    QQARCommonConfigModel *_configModel;
}

+ (id)GetInstance;
@property(nonatomic) _Bool disableCloudByJS; // @synthesize disableCloudByJS=_disableCloudByJS;
@property(retain) QQARCommonConfigModel *configModel; // @synthesize configModel=_configModel;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *arCommonConfigQueue; // @synthesize arCommonConfigQueue=_arCommonConfigQueue;
- (void).cxx_destruct;
- (_Bool)isARCloudEnabled;
- (id)getScanHighIconPathByScanModel:(id)arg1;
- (id)getScanIconPathByScanModel:(id)arg1;
- (void)resetConfigManager;
- (void)onLoginOutNotify:(id)arg1;
- (void)onLoginSuccess;
- (void)onConfigDataReadyNotify:(id)arg1;
- (void)clearARConfig;
- (void)clearAllLocalData;
- (void)updateModel:(id)arg1;
- (id)sharedFormatter;
- (void)localModel;
- (id)getScanResourceDir;
- (id)getConfigDir:(_Bool)arg1;
- (void)saveConfigModelToLocal:(id)arg1;
- (id)flagPath;
- (id)xmlPath;
- (id)configPath;
- (_Bool)isEnabledWithBegin:(id)arg1 end:(id)arg2;
- (_Bool)scanOCRPortNeedHidden:(id)arg1;
- (_Bool)scanPortNeedHidden:(id)arg1;
- (_Bool)userGuideWordingNeedShow:(id)arg1;
- (id)init;
- (void)dealloc;

@end

