//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ArkAppCGIQueryTask.h"

@class NSMutableArray;

@interface ArkAppCGIQueryTask_GetPredownloadAppList : ArkAppCGIQueryTask
{
    NSMutableArray *_appList;
    NSMutableArray *_dictList;
}

@property(readonly, nonatomic) NSMutableArray *dictList; // @synthesize dictList=_dictList;
@property(readonly, nonatomic) NSMutableArray *appList; // @synthesize appList=_appList;
- (void).cxx_destruct;
- (void)doCallback;
- (id)init;

@end

