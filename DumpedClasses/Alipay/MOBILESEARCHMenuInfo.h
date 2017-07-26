//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MOBILESEARCHTopNCompare.h"

@class NSArray, NSDictionary, NSString;

@interface MOBILESEARCHMenuInfo : MOBILESEARCHTopNCompare
{
    _Bool _isSelected;
    int _count;
    int _order;
    NSString *_code;
    NSString *_name;
    NSString *_dname;
    NSArray *_icons;
    NSArray *_subMenuInfos;
    NSString *_style;
    NSDictionary *_config;
}

+ (Class)configElementClass;
+ (Class)subMenuInfosElementClass;
+ (Class)iconsElementClass;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *subMenuInfos; // @synthesize subMenuInfos=_subMenuInfos;
@property(retain, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(nonatomic) int order; // @synthesize order=_order;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *dname; // @synthesize dname=_dname;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

