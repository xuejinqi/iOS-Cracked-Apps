//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CrashReporter : NSObject
{
    _Bool _atsSupportEnable;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isATSSupportEnabled) _Bool atsSupportEnable; // @synthesize atsSupportEnable=_atsSupportEnable;
- (_Bool)cleanCrashRecords:(id)arg1;
- (id)getCrashToUpload;
- (_Bool)cleanCrashRecord;
- (_Bool)uploadCrashes:(id)arg1;
- (_Bool)checkCrash;
- (void)printCrashStack;
- (id)getCrashStackShortNames;
- (_Bool)setExcludeShortName:(id)arg1 saveAndUpload:(_Bool)arg2;
- (_Bool)isCleanBeforeUpload;
- (void)setCleanBeforeUpload:(_Bool)arg1;
- (_Bool)isEnableSymbolicateInProcess;
- (_Bool)isExpMergeUpload;
- (void)setStrInternalBuildNumber:(id)arg1;
- (void)setGUID:(id)arg1;
- (id)sdkVersion;
- (_Bool)checkAndUpload;
- (void)reportError:(id)arg1 message:(id)arg2 backtrace:(_Bool)arg3;
- (void)reportError:(id)arg1 message:(id)arg2;
- (void)reportException:(id)arg1 message:(id)arg2 backtrace:(_Bool)arg3;
- (void)reportException:(id)arg1 message:(id)arg2;
- (void)reportUnityExceptionWithName:(id)arg1 reason:(id)arg2 stack:(id)arg3;
- (_Bool)enableSignalHandlerCheckable:(_Bool)arg1;
- (_Bool)checkNSExceptionHandler;
- (_Bool)checkSignalHandler;
- (void)setAttachmentForStack:(id)arg1;
- (void)setAttachLog:(id)arg1;
- (void)setUserData:(id)arg1 value:(id)arg2;
- (void)addSessionEvents:(id)arg1;
- (id)getCrashType;
- (id)getCrashStack;
- (id)processName;
- (id)crashThreadInfo;
- (id)getCrashLog;
- (id)getCurrentException;
- (_Bool)setLastCloseByIncludExclued:(_Bool)arg1;
- (_Bool)setIncludeShortName:(id)arg1;
- (_Bool)setExcludeShortName:(id)arg1;
- (_Bool)isLastCloseByCrash;
- (void)enableLog:(_Bool)arg1;
- (void)setChannel:(id)arg1;
- (void)setDeviceId:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setBundleVer:(id)arg1;
- (void)setBundleId:(id)arg1;
- (_Bool)resetDBPath:(id)arg1;
- (void)uninstall;
- (void)setATSSupportEnable:(_Bool)arg1;
- (_Bool)installWithAppkey:(id)arg1;
- (void)setExpMergeUpload:(_Bool)arg1;
- (void)setUserMachHandler:(_Bool)arg1;
- (void)setEnableSymbolicateInProcess:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;

@end

