//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UITextField;

@interface AddFriendTextFieldCell : UITableViewCell
{
    UITextField *inputField;
    id <UITextFieldDelegate> _delegate;
}

@property(retain, nonatomic) UITextField *inputField; // @synthesize inputField;
@property(nonatomic) __weak id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)resignInputField;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

