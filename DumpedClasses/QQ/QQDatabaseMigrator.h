//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQCallMsgMigratorProtocol.h"
#import "IQQDiscussMsgMigratorProtocol.h"
#import "IQQReadInJoySubscribeMigratorProtocol.h"
#import "IQQTroopRecentMsgMigratorProtocol.h"

@class FMDatabase, NSString, QQCallMsgMigratior, QQDiscussMsgMigrator;

@interface QQDatabaseMigrator : NSObject <IQQDiscussMsgMigratorProtocol, IQQCallMsgMigratorProtocol, IQQTroopRecentMsgMigratorProtocol, IQQReadInJoySubscribeMigratorProtocol>
{
    FMDatabase *_db;
    _Bool _abort;
    _Bool _isFinished;
    int _errorCode;
    id <QQDatabaseMigratorDelegate> _delegate;
    QQDiscussMsgMigrator *_discussMigrator;
    QQCallMsgMigratior *_callMsgMigrator;
    int _step;
}

@property(retain, nonatomic) id <QQDatabaseMigratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
- (void)setStep:(int)arg1;
- (void)tableMiagrateFinishedForReadInJoySubscribe:(id)arg1 withError:(_Bool)arg2;
- (void)troopRecentTableMiagrateFinished:(unsigned long long)arg1 withError:(_Bool)arg2;
- (void)callTableMiagrateFinished:(unsigned long long)arg1 withError:(_Bool)arg2;
- (void)tableMiagrateFinished:(unsigned long long)arg1 withError:(_Bool)arg2;
- (_Bool)startMigration;
- (void)dealloc;
- (id)initWithDB:(id)arg1 delegate:(id)arg2;
- (id)initWithDBPath:(id)arg1 delegate:(id)arg2;
- (void)_migrationMain;
- (void)_migrationReadInJoySubscribe;
- (void)_migrationTroopRecent;
- (void)_migrationCallMsg;
- (void)_migrationDiscussGroup;
- (void)_migrationGroup;
- (void)dropOldGroupMessageTableInDb:(id)arg1;
- (int)migrateDataForGroup:(id)arg1 fromOffset:(int)arg2 count:(int)arg3 withDB:(id)arg4;
- (_Bool)isTableExist:(id)arg1 withDB:(id)arg2;
- (int)createGroupTable:(id)arg1 withDB:(id)arg2;
- (id)getGroupCodeList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

