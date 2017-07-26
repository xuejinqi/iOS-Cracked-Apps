//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString, ProtoBucketSyncInfo;

@interface ProtoSyncOpCode2001 : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPrincipalIdType;
    _Bool _hasPrincipalId;
    _Bool _hasBucketSyncInfo;
    _Bool _hasNotCheckPrincipal;
    _Bool _hasServerIp;
    _Bool _hasHasMoreData;
    _Bool _notCheckPrincipal;
    _Bool _hasMoreData;
    int _principalIdType;
    unsigned int _serverIp;
    NSString *_principalId;
    NSMutableArray *_bizSyncData;
    ProtoBucketSyncInfo *_bucketSyncInfo;
    NSMutableArray *_extInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) unsigned int serverIp; // @synthesize serverIp=_serverIp;
@property(nonatomic) _Bool notCheckPrincipal; // @synthesize notCheckPrincipal=_notCheckPrincipal;
@property(retain, nonatomic) ProtoBucketSyncInfo *bucketSyncInfo; // @synthesize bucketSyncInfo=_bucketSyncInfo;
@property(retain, nonatomic) NSMutableArray *bizSyncData; // @synthesize bizSyncData=_bizSyncData;
@property(retain, nonatomic) NSString *principalId; // @synthesize principalId=_principalId;
@property(nonatomic) int principalIdType; // @synthesize principalIdType=_principalIdType;
@property(readonly) _Bool hasHasMoreData; // @synthesize hasHasMoreData=_hasHasMoreData;
@property(readonly) _Bool hasServerIp; // @synthesize hasServerIp=_hasServerIp;
@property(readonly) _Bool hasNotCheckPrincipal; // @synthesize hasNotCheckPrincipal=_hasNotCheckPrincipal;
@property(readonly) _Bool hasBucketSyncInfo; // @synthesize hasBucketSyncInfo=_hasBucketSyncInfo;
@property(readonly) _Bool hasPrincipalId; // @synthesize hasPrincipalId=_hasPrincipalId;
@property(readonly) _Bool hasPrincipalIdType; // @synthesize hasPrincipalIdType=_hasPrincipalIdType;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addExtInfo:(id)arg1;
- (void)setExtInfoArray:(id)arg1;
- (void)addBizSyncData:(id)arg1;
- (void)setBizSyncDataArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

