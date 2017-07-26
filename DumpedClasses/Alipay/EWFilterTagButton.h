//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class EWMenuItemViewModel, NSString;

@interface EWFilterTagButton : UIButton
{
    _Bool _isFocused;
    NSString *_text;
    id <EWFilterTagButtonDelegate> _delegate;
    EWMenuItemViewModel *_menuInfoData;
}

@property(retain, nonatomic) EWMenuItemViewModel *menuInfoData; // @synthesize menuInfoData=_menuInfoData;
@property(nonatomic) _Bool isFocused; // @synthesize isFocused=_isFocused;
@property(nonatomic) __weak id <EWFilterTagButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)onClick:(id)arg1;
- (id)initWithItem:(id)arg1 andFrame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

