//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface aluMonitorPointManager : NSObject
{
}

+ (id)sharedInstance;
- (id)getExinfo4:(id)arg1;
- (id)resolutionString;
- (id)language;
- (id)clientVersion;
- (id)getLogTime;
- (void)addALUMonitorPointwithActionId:(id)arg1 appId:(id)arg2 seed:(id)arg3 ucid:(id)arg4 extParams:(id)arg5;
- (void)addMonitorPoint:(id)arg1;
- (id)exparams:(id)arg1;
- (id)init;

@end

