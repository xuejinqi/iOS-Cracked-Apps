//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface EWMenuItemViewModel : NSObject
{
    _Bool _isSelected;
    _Bool _allowMultipleSelect;
    _Bool _isOpen;
    int _style;
    NSString *_code;
    NSString *_name;
    NSString *_filterKey;
    NSString *_input;
    NSMutableArray *_subMenuItemIList;
}

@property(retain, nonatomic) NSMutableArray *subMenuItemIList; // @synthesize subMenuItemIList=_subMenuItemIList;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(nonatomic) _Bool allowMultipleSelect; // @synthesize allowMultipleSelect=_allowMultipleSelect;
@property(nonatomic) int style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *filterKey; // @synthesize filterKey=_filterKey;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithTabMenuModel:(id)arg1;

@end

