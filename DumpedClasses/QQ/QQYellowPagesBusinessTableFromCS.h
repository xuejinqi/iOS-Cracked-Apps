//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQYellowPagesBaseTable.h"

@interface QQYellowPagesBusinessTableFromCS : QQYellowPagesBaseTable
{
}

- (id)recordWithResultSet:(id)arg1;
- (id)getCategoryLocalTimeStamp:(unsigned int)arg1;
- (id)getCategoryLocalTimeStamp:(unsigned int)arg1 inDb:(id)arg2;
- (id)getLocalCacheRecordByBusinessId:(id)arg1;
- (id)getLocalCacheRecordByBusinessId:(id)arg1 inDB:(id)arg2;
- (id)getItemsByCategoryId:(unsigned int)arg1;
- (id)getItemsByCategory:(unsigned int)arg1 inDB:(id)arg2;
- (_Bool)insertItem:(id)arg1 inDb:(id)arg2;
- (_Bool)insertItem:(id)arg1 withTimeStamp:(id)arg2 inDb:(id)arg3;
- (void)insertItem:(id)arg1 withTimeStamp:(unsigned long long)arg2;
- (void)insertItem:(id)arg1;
- (void)insertItemArray:(id)arg1 userdata:(id)arg2 callback:(id)arg3;
- (_Bool)insertItemArray:(id)arg1 inDb:(id)arg2;
- (id)getIndex;
- (id)getTableColumn;
- (id)getTableColumnWithType;

@end

