//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UILabel;

@interface BEEStatusOverlayWindow : UIWindow
{
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)showText:(id)arg1;
- (void)hideWithAnimation;
- (void)hide:(_Bool)arg1;
- (id)init;

@end

