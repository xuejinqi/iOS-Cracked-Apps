//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface GroupMemberSectionModel : NSObject
{
    NSString *_name;
    NSArray *_cellModelArray;
    unsigned long long _sectionType;
}

@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSArray *cellModelArray; // @synthesize cellModelArray=_cellModelArray;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;

@end

