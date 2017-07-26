//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NBPluginBase.h"

#import "NBToolbarMenuDelegate.h"

@class NSString;

@interface NBPlugin4Toolbar : NBPluginBase <NBToolbarMenuDelegate>
{
    id <NBToolbarMenuProtocol> _toolbarMenu;
    NSString *_contentProvider;
}

@property(copy, nonatomic) NSString *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(retain, nonatomic) id <NBToolbarMenuProtocol> toolbarMenu; // @synthesize toolbarMenu=_toolbarMenu;
- (void).cxx_destruct;
- (void)setToolbarMenu:(id)arg1 context:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)hideToolbar:(id)arg1 context:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)showToolbar:(id)arg1 context:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)addJSApis;
- (void)toolbarMenu:(id)arg1 didSelectedItem:(id)arg2;
- (void)handleEvent:(id)arg1;
- (id)currentViewController;
- (void)pluginDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

