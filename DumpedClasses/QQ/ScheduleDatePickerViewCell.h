//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ScheduleUITableViewCell.h"

@class NSMutableArray, UIDatePicker;

@interface ScheduleDatePickerViewCell : ScheduleUITableViewCell
{
    UIDatePicker *_DatePicker;
    NSMutableArray *_arrayMem;
    _Bool _includeSelf;
    id <UIControlCallBase> _delegate;
}

@property(nonatomic) id <UIControlCallBase> delegate; // @synthesize delegate=_delegate;
- (double)getAllHeadViewHeight;
- (void)dealloc;
- (void)timeDataChange:(id)arg1;
- (void)drawViewCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

