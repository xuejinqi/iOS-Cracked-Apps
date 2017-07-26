//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIGestureRecognizer;

@interface MQPGestureBack : FBView <UIGestureRecognizerDelegate>
{
    long long _mode;
    UIGestureRecognizer *_gesture;
}

@property(retain, nonatomic) UIGestureRecognizer *gesture; // @synthesize gesture=_gesture;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onAction;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (void)updateAttr:(id)arg1 withValue:(id)arg2;
- (id)initWithNode:(struct fb_node *)arg1 withDocument:(id)arg2 withView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

