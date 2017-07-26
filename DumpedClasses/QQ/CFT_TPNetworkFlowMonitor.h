//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleton.h"

@interface CFT_TPNetworkFlowMonitor : BaseSingleton
{
    id handle;
    SEL callback;
}

@property(nonatomic) SEL callback; // @synthesize callback;
@property(nonatomic) id handle; // @synthesize handle;
- (void)reportNetworkConnectingLost;
- (void)onNetworkFlowChanged:(id)arg1;
- (void)stop;
- (void)start:(id)arg1 callback:(SEL)arg2;

@end

