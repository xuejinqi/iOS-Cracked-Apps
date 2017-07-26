//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AbstractCmd.h"

@class NSMutableArray, NSString;

@interface CallCmd : AbstractCmd
{
    NSString *_callerUid;
    NSString *_roomId;
    unsigned long long _callType;
    unsigned long long _callMode;
    NSMutableArray *_iceServers;
}

@property(retain, nonatomic) NSMutableArray *iceServers; // @synthesize iceServers=_iceServers;
@property(nonatomic) unsigned long long callMode; // @synthesize callMode=_callMode;
@property(nonatomic) unsigned long long callType; // @synthesize callType=_callType;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *callerUid; // @synthesize callerUid=_callerUid;
- (void).cxx_destruct;
- (id)init;

@end

