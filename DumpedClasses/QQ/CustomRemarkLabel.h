//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIColor;

@interface CustomRemarkLabel : UILabel <UIGestureRecognizerDelegate>
{
    UIColor *_BGColor;
}

@property(retain, nonatomic) UIColor *BGColor; // @synthesize BGColor=_BGColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)addTarget:(id)arg1 withSelector:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

