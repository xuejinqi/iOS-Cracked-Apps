//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"

@class NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTRefreshControl : NSObject <RCTBridgeModule>
{
    RCTBridge *_bridge;
}

+ (id)__rct_export__913;
+ (id)__rct_export__722;
+ (id)__rct_export__331;
+ (id)__rct_export__240;
+ (void)load;
+ (id)moduleName;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (id)constantsToExport;
- (void)endRefreshing:(id)arg1 sucess:(_Bool)arg2;
- (void)beginRefreshing:(id)arg1;
- (void)configure:(id)arg1 options:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)FUCKOFF:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

