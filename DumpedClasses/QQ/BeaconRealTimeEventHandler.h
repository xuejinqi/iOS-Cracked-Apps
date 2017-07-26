//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AnaUplaodNotifier.h"

@class NSString;

@interface BeaconRealTimeEventHandler : NSObject <AnaUplaodNotifier>
{
    int realEventDuration;
    int realEventMaxCount;
}

+ (id)sharedInstance;
- (id)getUploadPkg:(int)arg1;
- (void)doPersist;
- (void)fireSchedule;
- (void)initTimer;
- (void)saveObject:(id)arg1;
- (void)saveObjectsToLocalDB:(id)arg1;
- (void)flushObjectsToDB;
- (void)clearTimer;
- (id)findObjectByName:(id)arg1;
- (void)dealloc;
- (void)setUserRealEventCount:(int)arg1;
- (void)setUserRealEventDuratio:(int)arg1;
- (id)init;
- (void)reachMaxsize;
- (void)setMaxSizeDataListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

