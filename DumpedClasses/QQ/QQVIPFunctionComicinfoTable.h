//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSString;

@interface QQVIPFunctionComicinfoTable : NSObject <IQQDBOperationBase>
{
    NSString *_tableName;
    unsigned int _updateComicInfoSqlStatementId;
    unsigned int _queryComicInfoSqlStatementId;
}

- (void).cxx_destruct;
- (unsigned long long)getTableSign;
- (void)updateComcInfo:(id)arg1 inDb:(id)arg2;
- (id)getComcInfoByComicId:(id)arg1 inDb:(id)arg2;
- (void)createTable:(id)arg1;
- (id)getCreateTableSql;
- (_Bool)updateComcInfo:(id)arg1;
- (id)getComcInfoByComicId:(id)arg1;
- (void)createTable;
- (void)updateTableinDb:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

