//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RqdLocalObject.h"

#import "RqdLocalObjInitWithWupProtocol.h"

@class NSMutableDictionary, NSString;

@interface RqdLocalStrategy : RqdLocalObject <RqdLocalObjInitWithWupProtocol>
{
    NSString *encKey;
    NSString *encPubKey;
    _Bool enable;
    _Bool userInfoEnable;
    _Bool queryEnable;
    NSString *url;
    NSString *expUrl;
    NSMutableDictionary *valueMap;
    NSString *httpsUrl;
    NSString *httpsExpUrl;
}

@property(copy, nonatomic) NSString *httpsExpUrl; // @synthesize httpsExpUrl;
@property(copy, nonatomic) NSString *httpsUrl; // @synthesize httpsUrl;
@property(retain, nonatomic) NSMutableDictionary *valueMap; // @synthesize valueMap;
@property(retain, nonatomic) NSString *encPubKey; // @synthesize encPubKey;
@property(retain, nonatomic) NSString *encKey; // @synthesize encKey;
@property(retain, nonatomic) NSString *expUrl; // @synthesize expUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(nonatomic) _Bool queryEnable; // @synthesize queryEnable;
@property(nonatomic) _Bool userInfoEnable; // @synthesize userInfoEnable;
@property(nonatomic) _Bool enable; // @synthesize enable;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)initLocalObjWithWupBuffer:(JceInputStream_de19c559 *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

