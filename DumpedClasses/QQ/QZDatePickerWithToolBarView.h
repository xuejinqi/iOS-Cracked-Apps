//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, UIBarButtonItem, UIDatePicker;

@interface QZDatePickerWithToolBarView : UIView
{
    UIDatePicker *_datePicker;
    UIBarButtonItem *_centerText;
    long long _fromType;
    id <QZDatePickerWithToolBarViewDelegate> _delegate;
    UIView *_showTipsView;
    NSDate *_maximumDate;
}

+ (id)stringForDateWithWeek:(id)arg1;
+ (id)dateForMatterForMood;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(nonatomic) __weak UIView *showTipsView; // @synthesize showTipsView=_showTipsView;
@property(nonatomic) __weak id <QZDatePickerWithToolBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showPickerView:(double)arg1;
- (void)hidePickerView;
- (void)pickerDone:(id)arg1;
- (void)pickerCancel:(id)arg1;
- (void)datePickerValueChanged:(id)arg1;
- (void)createDatePicker;
- (id)initWithFrame:(struct CGRect)arg1 withFromType:(long long)arg2;

@end

