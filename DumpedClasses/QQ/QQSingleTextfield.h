//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class UIColor;

@interface QQSingleTextfield : UITextField
{
    double _fontSize;
    UIColor *_placeholderColor;
}

@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 fontSize:(double)arg2;

@end

