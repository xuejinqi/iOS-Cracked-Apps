//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AutoPbModel.h"

@class NSMutableArray;

@interface Cmd0x928Rsp : AutoPbModel
{
    NSMutableArray *_infoList;
    unsigned long long _groupCode;
}

@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(retain, nonatomic) NSMutableArray *infoList; // @synthesize infoList=_infoList;
- (id)getPropertyInfos;

@end

