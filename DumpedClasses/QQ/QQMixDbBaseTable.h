//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"
#import "IQQDBOperationBase.h"

@class NSString;

@interface QQMixDbBaseTable : NSObject <IQQDBOperationBase, DBAccountChangedProtocol>
{
    NSString *_tableName;
    _Bool _isAvailable;
    _Bool _forceCreate;
}

@property(nonatomic) _Bool forceCreate; // @synthesize forceCreate=_forceCreate;
- (void)onDBChanged:(id)arg1;
- (unsigned long long)getTableSign;
- (void)rebuildTable;
- (void)deleteTable;
- (void)deleteTable:(id)arg1;
- (void)clearTable;
- (void)clearTableInDb:(id)arg1;
- (void)createTable:(id)arg1;
- (void)deleteRow:(id)arg1;
- (void)deleteRow:(id)arg1 inDb:(id)arg2;
- (void)createIndex:(id)arg1 inDb:(id)arg2;
- (id)getIndex;
- (_Bool)isAvailable:(id)arg1;
- (_Bool)isAvailable;
- (_Bool)isAvailable:(id)arg1 inDb:(id)arg2;
- (id)getTableColumn;
- (id)getTableColumnWithType;
- (void)dealloc;
- (id)initWithTableName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

