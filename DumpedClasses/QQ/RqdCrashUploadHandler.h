//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RqdCrashListener.h"

@class NSString;

@interface RqdCrashUploadHandler : NSObject <RqdCrashListener>
{
    _Bool _urgent;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isUrgent) _Bool urgent; // @synthesize urgent=_urgent;
- (_Bool)cleanInvalidExp;
- (_Bool)expExist;
- (_Bool)doUploadPostProcess:(id)arg1;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (id)getCrashToUpload:(int)arg1;
- (id)getCrashToUpload;
- (_Bool)doUploadExps:(id)arg1 withBundleId:(id)arg2 bundleVer:(id)arg3 isManual:(_Bool)arg4;
- (void)checkAndUploadAfterCrash:(id)arg1;
- (void)onCrashHappened:(id)arg1 urgently:(_Bool)arg2;
- (_Bool)doUpload;
- (_Bool)isUploading;
- (_Bool)uploadCrashesInCurrentQueue:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

