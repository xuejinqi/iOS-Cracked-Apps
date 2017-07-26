//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface QZoneNavigationRightButton : UIView
{
    struct CGRect _firstFrame;
    struct CGRect _secondFrame;
    UIButton *_leftButton;
    UIButton *_rightButton;
    const char *_leftImageName;
    unsigned long long _leftClickType;
    unsigned long long _rightClickType;
    id <QZClearNavigationBarDelegate> _clickDelegate;
}

@property(nonatomic) __weak id <QZClearNavigationBarDelegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
- (void).cxx_destruct;
- (void)setAccessibility:(id)arg1 forOrder:(unsigned long long)arg2;
- (void)onRightButtonClick;
- (void)onLeftButtonClick;
- (unsigned long long)getTypeByOrder:(unsigned long long)arg1;
- (double)width;
- (void)autoSetFrame;
- (void)relayout;
- (void)setButtonEnabled:(_Bool)arg1;
- (void)setButtonHiddenWithOrder:(unsigned long long)arg1;
- (void)addButtonByImageName:(const char *)arg1 withType:(unsigned long long)arg2 andOrder:(unsigned long long)arg3;
- (id)init;

@end

