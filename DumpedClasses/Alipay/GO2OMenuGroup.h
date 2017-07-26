//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GO2OServiceObject.h"

@class GO2OMenuInfo, NSArray, NSString;

@interface GO2OMenuGroup : GO2OServiceObject
{
    NSString *_code;
    NSString *_name;
    NSString *_style;
    NSArray *_menuInfos;
    long long _selectedIndex;
    GO2OMenuInfo *_selectedMenu;
    GO2OMenuInfo *_selectedSubMenu;
}

@property(retain, nonatomic) GO2OMenuInfo *selectedSubMenu; // @synthesize selectedSubMenu=_selectedSubMenu;
@property(retain, nonatomic) GO2OMenuInfo *selectedMenu; // @synthesize selectedMenu=_selectedMenu;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *menuInfos; // @synthesize menuInfos=_menuInfos;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

