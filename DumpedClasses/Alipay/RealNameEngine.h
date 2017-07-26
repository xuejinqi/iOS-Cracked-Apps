//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "H5ServiceDelegate.h"

@class NSString, RNIPhotoManager;

@interface RealNameEngine : NSObject <H5ServiceDelegate>
{
    CDUnknownBlockType _callbackBlocks;
    CDUnknownBlockType _notifyJSCallback;
    CDUnknownBlockType _photoJSCallback;
    RNIPhotoManager *_photoManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) RNIPhotoManager *photoManager; // @synthesize photoManager=_photoManager;
@property(copy, nonatomic) CDUnknownBlockType photoJSCallback; // @synthesize photoJSCallback=_photoJSCallback;
@property(copy, nonatomic) CDUnknownBlockType notifyJSCallback; // @synthesize notifyJSCallback=_notifyJSCallback;
@property(copy, nonatomic) CDUnknownBlockType callbackBlocks; // @synthesize callbackBlocks=_callbackBlocks;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *version;
- (void)finishWithCertifyResult:(id)arg1;
- (void)startWithBizCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getControllerWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getControllerWithBizCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerJSAPIs;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

