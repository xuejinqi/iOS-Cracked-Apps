//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DTNetDB;

@interface DTLonglinkDB : NSObject
{
    DTNetDB *_netDB;
    long long _msgIdCount;
}

+ (id)sharedInstance;
@property(nonatomic) long long msgIdCount; // @synthesize msgIdCount=_msgIdCount;
@property(retain, nonatomic) DTNetDB *netDB; // @synthesize netDB=_netDB;
- (void).cxx_destruct;
- (void)deleteMsgIdToMaxCount;
- (void)increaseMsgIdCount;
- (void)deleteMsgIdIfMax;
- (long long)querySyncMsgCount;
- (long long)queryMsgIdCount;
- (void)refreshMsgIdCount;
- (id)dealWithLastObj:(id)arg1;
- (id)getLastObj:(id)arg1 biz:(id)arg2;
- (_Bool)hasSyncMsgWithOpId:(id)arg1;
- (_Bool)deleteMessageWithOpId:(id)arg1;
- (void)updateMessageWithDic:(id)arg1;
- (id)opLog2Dic:(id)arg1;
- (id)base64Op:(id)arg1 opLog:(id)arg2;
- (_Bool)saveMessage:(id)arg1 intDB:(id)arg2;
- (_Bool)saveMessage:(id)arg1 error:(id *)arg2;
- (_Bool)createIndex;
- (_Bool)hasColumnName:(id)arg1 inTableInfo:(id)arg2;
- (void)updateTable;
- (id)saveMsgAndUpdateMsgIdInDB:(CDUnknownBlockType)arg1;
- (_Bool)createTableAndIndex;
- (_Bool)createTable;
- (id)init;
- (id)documentDBPath;
- (id)databasePath;

@end

