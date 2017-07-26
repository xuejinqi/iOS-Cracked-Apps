//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NADebugProtocol.h"

@class NSString;

@interface NBDebugAppItem : NSObject <NADebugProtocol>
{
}

- (id)sceneForApp:(id)arg1;
- (id)excuteRequest:(id)arg1 header:(id)arg2;
- (int)appType:(id)arg1;
- (_Bool)isNebulaApp:(id)arg1 nebulaVersion:(id *)arg2;
- (_Bool)enableDebugApp:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

