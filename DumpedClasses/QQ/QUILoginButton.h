//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSTimer;

@interface QUILoginButton : UIButton
{
    int _type;
    int _section;
    int _row;
    id _object;
    SEL _sel;
    _Bool _ifDelete;
    NSTimer *_timer;
    _Bool _isBigIcon;
    int _xo;
}

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)startAnimation2;
- (void)didEndAnimation2;
- (void)didEndAnimation1;
- (void)startAnimation1;
- (void)removeDeleteButton;
- (void)delete;
- (void)upDateSubView;
- (void)addDeleteButton;
- (void)longPress:(id)arg1;
- (void)addLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool ifDelete; // @dynamic ifDelete;
@property(nonatomic) _Bool isBigIcon; // @dynamic isBigIcon;
@property(nonatomic) id object; // @dynamic object;
@property(nonatomic) int row; // @dynamic row;
@property(nonatomic) int section; // @dynamic section;
@property(nonatomic) int type; // @dynamic type;

@end

