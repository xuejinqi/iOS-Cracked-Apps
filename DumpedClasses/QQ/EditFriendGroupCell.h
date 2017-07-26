//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQTableViewCell.h"

@class NSString, UITextField;

@interface EditFriendGroupCell : QQTableViewCell
{
    UITextField *_groupNameField;
    int _groupId;
    id <UITextFieldDelegate> _delegate;
    NSString *_groupName;
}

@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

