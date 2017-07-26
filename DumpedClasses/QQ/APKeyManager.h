//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class APMidasHttpReq, NSString;

@interface APKeyManager : QQGroupPropertyModel
{
    NSString *_offerId;
    NSString *_openId;
    struct vector<id<ApKeyChangeObserver>, std::__1::allocator<id<ApKeyChangeObserver>>> _observers;
    _Bool _updating;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool updating; // @synthesize updating=_updating;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)notifyKeyUpdate;
- (void)updateKeyUsingBaseKey:(_Bool)arg1;
- (void)updateKeyByKeyType:(long long)arg1;
- (void)readKeysFromLocalPersistence;
- (void)saveKeysToLocalPersistence;
- (void)deleteNewPersistenceFile;
- (void)deleteOldPersistenceFile;
- (_Bool)checkNewKeyPersistenceFileExist;
- (_Bool)checkOldKeyPersistenceFileExist;
- (void)initAllKeys;
- (void *)getProcessor;
- (void)updateKey;
- (void)loadKeyByOfferid:(id)arg1 openId:(id)arg2;
- (void)unRegisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(retain, nonatomic) APMidasHttpReq *changeKeyReq; // @dynamic changeKeyReq;
@property(nonatomic) int changeKeyRetryTimes; // @dynamic changeKeyRetryTimes;

@end

