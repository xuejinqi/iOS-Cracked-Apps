//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBParseData.h"

@class NSArray, NSString, TBErrorInfo;

@interface TBRspGetGroupDynamicGroupList : NSObject <ITBPBParseData>
{
    TBErrorInfo *_error;
    NSArray *_normalGroupList;
    NSArray *_normalGroupListToUpdate;
    NSArray *_groupAssistantGroupList;
    NSArray *_groupAssistantGroupListToUpdate;
}

@property(retain, nonatomic) NSArray *groupAssistantGroupListToUpdate; // @synthesize groupAssistantGroupListToUpdate=_groupAssistantGroupListToUpdate;
@property(retain, nonatomic) NSArray *groupAssistantGroupList; // @synthesize groupAssistantGroupList=_groupAssistantGroupList;
@property(retain, nonatomic) NSArray *normalGroupListToUpdate; // @synthesize normalGroupListToUpdate=_normalGroupListToUpdate;
@property(retain, nonatomic) NSArray *normalGroupList; // @synthesize normalGroupList=_normalGroupList;
@property(retain, nonatomic) TBErrorInfo *error; // @synthesize error=_error;
- (void)dealloc;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

