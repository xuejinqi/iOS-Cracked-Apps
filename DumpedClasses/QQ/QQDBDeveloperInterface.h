//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQDBDeveloperInterface : NSObject
{
}

+ (long long)nextMsgIdOfTable:(id)arg1 sign:(unsigned long long)arg2;
+ (void)cleanMsgTable:(id)arg1 selector:(SEL)arg2;
+ (long long)getUinFromC2cTableName:(id)arg1;
+ (id)getTroopMsgTableNameWithGroupCode:(id)arg1;
+ (id)getC2CTableNameWithUin:(id)arg1;
+ (void)removeVersionMgrOfDb:(id)arg1;
+ (void)setTableVersion:(unsigned short)arg1 tableSign:(unsigned long long)arg2 inDatabase:(id)arg3;
+ (_Bool)needUpdate:(unsigned long long)arg1 currentVersion:(unsigned short)arg2 inDataBase:(id)arg3;
+ (void)removeChangeAccountListner:(id)arg1;
+ (void)addChangedAccountListener:(id)arg1;
+ (int)doAsyncOperation:(SEL)arg1 target:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
+ (id)doDbOperation:(SEL)arg1 target:(id)arg2;
+ (_Bool)addColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 inDatabase:(id)arg4;
+ (_Bool)addColumn:(id)arg1 toTable:(id)arg2 withType:(id)arg3 defaultValue:(id)arg4 inDatabase:(id)arg5;
+ (void)dropIndex:(id)arg1 inDatabase:(id)arg2;

@end

