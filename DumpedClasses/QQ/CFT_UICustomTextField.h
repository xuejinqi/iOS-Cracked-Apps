//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@interface CFT_UICustomTextField : UITextField
{
    struct CGPoint rectInset;
}

- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andEditPlaceInset:(struct CGPoint)arg2;
- (id)init;

@end

