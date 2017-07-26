//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBizNetworkLogicDelegate.h"

@class NSMutableDictionary, NSString, TBAuthNetworkLogic;

@interface TBAuthService : NSObject <TBBizNetworkLogicDelegate>
{
    TBAuthNetworkLogic *_networkLogic;
    NSMutableDictionary *_blockDict;
    NSString *_userIP;
    NSString *_serverIP1;
    NSString *_serverIP2;
    NSString *_backupServerIP1;
    NSString *_backupServerIP2;
    NSString *_authKey;
    unsigned long long _expireTime;
    NSString *_deviceIPAddress;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *deviceIPAddress; // @synthesize deviceIPAddress=_deviceIPAddress;
@property(nonatomic) unsigned long long expireTime; // @synthesize expireTime=_expireTime;
@property(retain, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
@property(retain, nonatomic) NSString *backupServerIP2; // @synthesize backupServerIP2=_backupServerIP2;
@property(retain, nonatomic) NSString *backupServerIP1; // @synthesize backupServerIP1=_backupServerIP1;
@property(retain, nonatomic) NSString *serverIP2; // @synthesize serverIP2=_serverIP2;
@property(retain, nonatomic) NSString *serverIP1; // @synthesize serverIP1=_serverIP1;
@property(retain, nonatomic) NSString *userIP; // @synthesize userIP=_userIP;
- (id)keyForAuthKeyInfo;
- (void)saveAuthKeyInfo;
- (void)readAuthKeyInfo;
- (id)getIPAddress;
- (_Bool)handleAuthKeyAndIPResult:(id)arg1;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (id)appendAuthKeyInURL:(id)arg1;
- (void)updateAuthkeyIfNeed:(CDUnknownBlockType)arg1;
- (_Bool)needUpdateAuthkey;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

