//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIView;

@interface GestureFilterDelegate : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_tapView;
}

+ (id)instance;
@property(retain, nonatomic) UIView *tapView; // @synthesize tapView=_tapView;
- (void)onTapBlank;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

