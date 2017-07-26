//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIDatePicker, UIPickerView;

@interface AUDatePicker : UIView
{
    _Bool _isDatePicker;
    UIPickerView *_pickerView;
    UIDatePicker *_datePickerView;
    id <AUDatePickerDelegate> _delegate;
}

+ (id)pickerViewWithTitle:(id)arg1;
@property(nonatomic) __weak id <AUDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isDatePicker; // @synthesize isDatePicker=_isDatePicker;
@property(retain, nonatomic) UIDatePicker *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (void)setAUDatePickerDate:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentDate:(id)arg1;
- (void)setTimeDateminDate:(id)arg1 MaxDate:(id)arg2;
- (void)dealloc;
- (void)_finish;
- (void)_cancel;
- (void)show;
- (void)hide;
- (void)reload;
- (id)initWithFrame:(struct CGRect)arg1 withTitle:(id)arg2;

@end

