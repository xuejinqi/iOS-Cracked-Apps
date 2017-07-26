//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TrackerDescriptionProtocol.h"

@class NSString, TrackerNavigationController;

@interface TrackerNavigationControllerUpdateAction : NSObject <TrackerDescriptionProtocol>
{
    long long _phase;
    TrackerNavigationController *_navigationController;
}

@property(readonly, nonatomic) TrackerNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) long long phase; // @synthesize phase=_phase;
- (void).cxx_destruct;
- (id)traceDescription;
- (id)initWithPhase:(long long)arg1 navigationViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

