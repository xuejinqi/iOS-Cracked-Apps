//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

@class NSString;

@interface EditViewController : QQViewController
{
    id <IEditViewControllerObserver> _actionObserver;
    void *_userInfo;
    NSString *_value;
    NSString *_rightButtonTitle;
    id _editControl;
    _Bool _customTextConstrain;
    int _customTextLengthType;
    int _customTextLength;
    _Bool _cancelNotNeedSave;
    _Bool _systemEmojiDisabled;
    _Bool _isEdit;
    int _fromType;
}

+ (long long)stringLengthOfType:(int)arg1 str:(id)arg2;
@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) void *userInfo; // @synthesize userInfo=_userInfo;
- (void)doneAction:(id)arg1;
- (_Bool)modifyValueDone:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)onStartPopping:(id)arg1;
- (id)getEditContent;
- (void)loadView;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 value:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <IEditViewControllerObserver> actionObserver; // @dynamic actionObserver;
@property(nonatomic) _Bool cancelNotNeedSave; // @dynamic cancelNotNeedSave;
@property(nonatomic) _Bool customTextConstrain; // @dynamic customTextConstrain;
@property(nonatomic) int customTextLength; // @dynamic customTextLength;
@property(nonatomic) int customTextLengthType; // @dynamic customTextLengthType;
@property(nonatomic) _Bool isEdit; // @dynamic isEdit;
@property(retain, nonatomic) NSString *rightButtonTitle; // @dynamic rightButtonTitle;
@property(nonatomic) _Bool systemEmojiDisabled; // @dynamic systemEmojiDisabled;

@end

