//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAsyncCallbackProtocol.h"
#import "IQQDBOperationBase.h"

@class NSString;

@interface FTSRlIndexDbManager : NSObject <IQQDBOperationBase, DBAsyncCallbackProtocol>
{
    _Bool _isNeedStopUp;
    _Bool _isRealStopUp;
}

+ (id)GetInstance;
@property _Bool isRealStopUp; // @synthesize isRealStopUp=_isRealStopUp;
@property _Bool isNeedStopUp; // @synthesize isNeedStopUp=_isNeedStopUp;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (unsigned long long)getTableSign;
- (_Bool)p_strategyControlValid;
- (void)p_executeIdxDbUpdate;
- (void)_rlIndexPauseUpdate:(id)arg1;
- (void)_rlIndexBeginUpdate:(id)arg1;
- (void)_rlIndexRelationChanged:(id)arg1;
- (void)_rlIndexTroopMemChangedFromMsg:(id)arg1;
- (void)_rlIndexTroopMemListChanged:(id)arg1;
- (void)_handleNewTroopMemJoin:(id)arg1 withUserdata:(id)arg2;
- (void)_rlIndexTroopMemModify:(id)arg1;
- (void)_rlGetTroopMemsSuccess:(id)arg1;
- (void)p_getTroopMemByParams:(id)arg1 cmpBlock:(CDUnknownBlockType)arg2;
- (void)p_executeGetTroopMemFunc:(id)arg1;
- (void)_rlReqGetAllTroopMemsInfo:(id)arg1;
- (void)_processTroopMemCacheSaveToDb;
- (void)_processRlIndexTbInDb;
- (id)_rlGetTropListFromIdxTb:(id)arg1 inDB:(id)arg2;
- (id)_produceQueryMatchSql:(id)arg1 rlType:(long long)arg2 isSupportUid:(_Bool)arg3;
- (id)p_ormRlIdxExecQuery:(id)arg1 forKeyword:(id)arg2 InDB:(id)arg3;
- (void)p_genUpdateArgsWithUserInfo:(id)arg1 outSetClauseDict:(id *)arg2 outWhereClauseDict:(id *)arg3;
- (void)p_genUpdateArgsWithUin:(id)arg1 params:(id)arg2 outSetClauseDict:(id *)arg3 outWhereClauseDict:(id *)arg4;
- (id)p_buildTropMemEntityArrWith:(id)arg1 andMemUin:(id)arg2;
- (_Bool)p_ormUpdateIndexWithORMExecuteArgs:(id)arg1 inDB:(id)arg2;
- (_Bool)p_ormDelIndexWithORMExecuteArgs:(id)arg1 inDB:(id)arg2;
- (_Bool)p_ormInsertIdxTbWithEntity:(Class)arg1 inDB:(id)arg2;
- (_Bool)p_ormBatchInsertIdxTbWithEntities:(id)arg1 inDB:(id)arg2;
- (_Bool)p_ormCreateIdxTbinDB:(id)arg1;
- (_Bool)_isPureNumOrEnglish:(id)arg1;
- (double)p_getTropMemReqFrequency;
- (id)p_getTropMemReqPolicy;
- (long long)p_getReqTropMemMaxNumLimit;
- (id)ftsGetIdxListWithRlType:(long long)arg1;
- (id)ftsRlIndexSearchKeyword:(id)arg1 rlType:(long long)arg2 isSupportUid:(_Bool)arg3;
- (_Bool)ftsUpdateCertainIndexForUin:(id)arg1 withParams:(id)arg2 rlType:(long long)arg3;
- (_Bool)ftsDelCertainIndexForUin:(id)arg1 withUid:(id)arg2 rlType:(long long)arg3;
- (_Bool)ftsCreatCertainIndexForModel:(id)arg1 withUserdata:(id)arg2;
- (_Bool)ftsCreatCertainIndexForUin:(id)arg1 withUid:(id)arg2 rlType:(long long)arg3;
- (_Bool)ftsDelAllIndexForUid:(id)arg1 rlType:(long long)arg2;
- (_Bool)ftsCreatIndexForUid:(id)arg1 rlType:(long long)arg2;
- (_Bool)ftsRlIndexDbCreate;
- (void)_registerRlIndexSchemeNotifOnce;
- (void)_registerRlIndexSchemeNotifKeep;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

