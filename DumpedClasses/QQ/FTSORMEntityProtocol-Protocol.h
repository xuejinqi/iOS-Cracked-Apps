//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMResultSet, NSArray, NSDictionary, NSString;

@protocol FTSORMEntityProtocol <NSObject>

@optional
+ (_Bool)ftsTrycatchException;
+ (NSArray *)ftsTbNotindexedArray;
+ (NSArray *)ftsHandleFMResultSets:(FMResultSet *)arg1;
+ (NSArray *)ftsSetExtensionValue:(id)arg1;
+ (NSArray *)ftsEntityPropertyOrder;
+ (NSDictionary *)ftsTableEntityMap;
+ (NSString *)ftsIdxTableName;
@end

