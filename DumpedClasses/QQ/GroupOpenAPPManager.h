//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWeakObserver.h"

#import "IEngineDispatchDelegate.h"

@class NSString, QQLockDictionary;

@interface GroupOpenAPPManager : QQWeakObserver <IEngineDispatchDelegate>
{
    QQLockDictionary *_seqDict;
    QQLockDictionary *_appListDict;
}

+ (_Bool)versionSupport:(id)arg1;
+ (_Bool)appOpenInLocal:(id)arg1;
+ (id)convertAIOFlagToAppId:(unsigned long long)arg1;
+ (unsigned long long)convertAppIdToAIOFlag:(id)arg1;
+ (id)regularDic:(id)arg1;
+ (id)getlocalDefaultData;
+ (id)shareInstance;
- (void)clearAPPListCache;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)APPCheckAppUrlRecieved:(struct CPBMessageDecoder)arg1 reqDict:(id)arg2;
- (void)APPClearRedPointRecieved:(struct CPBMessageDecoder)arg1 reqDict:(id)arg2;
- (void)APPEditRecieved:(struct CPBMessageDecoder)arg1 reqDict:(id)arg2;
- (void)APPDetailInfoRecieved:(struct CPBMessageDecoder)arg1 reqDict:(id)arg2;
- (void)APPListRecieved:(struct CPBMessageDecoder)arg1 reqDict:(id)arg2;
- (_Bool)reqAddGroupApp:(id)arg1 newAppId:(id)arg2;
- (_Bool)reqCheckAppUrl:(id)arg1 appId:(id)arg2 url:(id)arg3 extraParams:(id)arg4;
- (_Bool)reqClearRedPoint:(id)arg1 appIds:(id)arg2;
- (_Bool)reqEditGroupOpenAPPList:(id)arg1 newAppIds:(id)arg2 addApp:(id)arg3;
- (_Bool)reqEditGroupOpenAPPList:(id)arg1 newAppIds:(id)arg2;
- (_Bool)reqGroupOpenAPPInfo:(id)arg1 needNotify:(_Bool)arg2;
- (_Bool)sendReqGroupOpenAPPList:(id)arg1 version:(id)arg2 addApp:(id)arg3;
- (_Bool)reqGroupOpenAPPList:(id)arg1 needRefresh:(_Bool)arg2 cmd:(id *)arg3 addApp:(id)arg4;
- (_Bool)reqGroupOpenAPPList:(id)arg1 needRefresh:(_Bool)arg2 cmd:(id *)arg3;
- (void)APPListUpdated:(id)arg1 modelsList:(id)arg2 error:(id)arg3 log:(id)arg4;
- (_Bool)appIsExist:(id)arg1;
- (void)openAppWebDone:(id)arg1;
- (id)groupAppUrl;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

