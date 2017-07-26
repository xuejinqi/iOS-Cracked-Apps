//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, PSDKernel;

@interface PSDPluginManager : NSObject
{
    PSDKernel *_target;
    NSString *_scope;
    NSMutableArray *_pluginGroups;
}

@property(retain, nonatomic) NSMutableArray *pluginGroups; // @synthesize pluginGroups=_pluginGroups;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(nonatomic) __weak PSDKernel *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)plugin:(id)arg1;
- (id)plugin:(id)arg1 groupId:(id)arg2;
- (id)plugins;
- (id)plugins:(id)arg1;
- (void)unregisterPlugins;
- (void)unregisterPlugins:(id)arg1;
- (void)unregisterPluginName:(id)arg1;
- (void)unregisterPluginName:(id)arg1 groupId:(id)arg2;
- (void)unregisterPlugin:(id)arg1;
- (void)unregisterPlugin:(id)arg1 groupId:(id)arg2;
- (void)registerPlugins:(id)arg1;
- (void)registerPlugins:(id)arg1 groupId:(id)arg2;
- (void)registerPlugin:(id)arg1;
- (void)registerPlugin:(id)arg1 groupId:(id)arg2;
- (void)registerDefaultPlugins;
- (id)psdPlugin:(id)arg1;
- (id)pluginGroup:(id)arg1;
- (id)init;

@end

