//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IListenerCallback <NSObject>
- (void)OnSessionUpdate:(unsigned long long)arg1 emSessionUpdateType:(int)arg2 value:(struct strutf8)arg3;
- (void)OnSessionComplete:(unsigned long long)arg1 taskStatus:(int)arg2 errCode:(int)arg3;
- (void)OnSessionProgress:(unsigned long long)arg1 Progress:(unsigned long long)arg2 ProgressMax:(unsigned long long)arg3;
- (void)OnSessionStart:(unsigned long long)arg1;
- (void)OnSessionNew:(struct Session)arg1 nfcInfo:(struct NFCInfo)arg2 ftnInfo:(struct FTNInfo)arg3;
- (void)OnGroupComplete:(unsigned int)arg1 GroupStatus:(int)arg2;
- (void)OnGroupStart:(unsigned int)arg1;
@end

