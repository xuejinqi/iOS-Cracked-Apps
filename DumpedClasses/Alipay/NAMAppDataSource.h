//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NAMApp, NSDictionary, NSObject<OS_dispatch_queue>;

@interface NAMAppDataSource : NSObject
{
    _Bool _verifyResult;
    NAMApp *_app;
    NSDictionary *_tarData;
    NSDictionary *_appConfigDict;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDictionary *appConfigDict; // @synthesize appConfigDict=_appConfigDict;
@property(retain, nonatomic) NSDictionary *tarData; // @synthesize tarData=_tarData;
@property(readonly, nonatomic) _Bool verifyResult; // @synthesize verifyResult=_verifyResult;
@property(readonly, nonatomic) NAMApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (id)readNBAppConfig;
- (id)readPermissionConfig;
- (void)logVerifyResult:(id)arg1 success:(_Bool)arg2;
- (_Bool)verifyWithAlert:(_Bool)arg1;
- (id)responseWithUrlString:(id)arg1;
- (id)absoluteUrlString:(id)arg1;
- (id)launchUrlString:(id)arg1;
- (id)vhost;
- (void)readAppConfig;
- (id)tarDataForKey:(id)arg1;
- (_Bool)readTarData;
- (long long)loadAppData:(_Bool)arg1;
- (id)initWithApp:(id)arg1;

@end

