//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "LBSContinuousLocationDelegate.h"

@class NSString;

@interface NPPlugin4ContinuousLocation : NBPluginBase <LBSContinuousLocationDelegate>
{
    NSString *_h5BizType;
    CDUnknownBlockType _callbackBlock;
}

@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) NSString *h5BizType; // @synthesize h5BizType=_h5BizType;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (void)clear;
- (id)name;
- (void)locationSucceedWithData:(id)arg1;
- (void)locationFailWithError:(id)arg1;
- (void)addJSApis;
- (void)pluginDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

