//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTStartApplicationHandler.h"

@class NSString;

@interface ACStartApplicationHandler : NSObject <DTStartApplicationHandler>
{
}

- (void)openACApp:(id)arg1;
- (_Bool)hasSwitch;
- (_Bool)canHandleStartApplication:(id)arg1 params:(id)arg2;
- (void)unregisterStartApplicationHandler;
- (_Bool)registerStartApplicationHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

