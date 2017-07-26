//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSIndexSet;

@interface VIPSItemCell : UITableViewCell
{
    long long _row;
    unsigned long long _type;
    NSArray *_items;
    CDUnknownBlockType _tapHandler;
    NSIndexSet *_selectedIndexSet;
}

+ (long long)columnForType:(unsigned long long)arg1;
+ (double)tapItemWidthWithColumn:(long long)arg1;
+ (Class)itemViewClassForType:(unsigned long long)arg1;
+ (double)heightForType:(unsigned long long)arg1;
@property(retain, nonatomic) NSIndexSet *selectedIndexSet; // @synthesize selectedIndexSet=_selectedIndexSet;
@property(copy, nonatomic) CDUnknownBlockType tapHandler; // @synthesize tapHandler=_tapHandler;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long row; // @synthesize row=_row;
- (void).cxx_destruct;
- (id)viewForType:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)layoutSubviews;
- (id)findViewByColumnIndex:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

