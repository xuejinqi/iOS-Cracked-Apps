//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ShoppingCSChannel : NSObject
{
    unsigned long long _redDotStartTime;
    unsigned long long _redDotValidPeriod;
    _Bool _isRedInfectFolder;
}

+ (id)getInstance;
- (void)OnRecvServerPush0x210_0x94Buff:(const char *)arg1 DataLen:(unsigned int)arg2;
- (void)doRecvMsgBody:(CDStruct_b72ecf80 *)arg1;
- (void)setRedFlagWithType:(int)arg1 isOverFolder:(_Bool)arg2 msgBody:(CDStruct_b72ecf80 *)arg3 repertName:(id)arg4;
- (void)clearShoppingVCRedPoint;
- (void)saveRedDotInfo;
- (void)loadRedDotInfo;
- (_Bool)isInFolderShowRedPointTime;
- (void)checkRedDotTime;
- (unsigned long long)getServerTime;
- (void)onAccountLogout:(id)arg1;
- (void)onAccountLogin:(id)arg1;
- (void)dealloc;
- (void)initPara;
- (id)init;

@end

