//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FavUICommon : NSObject
{
}

+ (id)topViewControllerWithRootViewController:(id)arg1;
+ (id)topViewController;
+ (id)topView;
+ (id)redPointInView:(id)arg1 byCheckingFlag:(_Bool)arg2 initialHidden:(_Bool)arg3;
+ (id)labelWithFrame:(struct CGRect)arg1 color:(int)arg2 fontSize:(double)arg3;
+ (struct CGRect)rectLeftToView:(id)arg1 withWidth:(float)arg2 height:(float)arg3 gap:(float)arg4;
+ (struct CGRect)rectRightToView:(id)arg1 withWidth:(float)arg2 height:(float)arg3 gap:(float)arg4;
+ (struct CGRect)rectAboveView:(id)arg1 withWidth:(float)arg2 height:(float)arg3 gap:(float)arg4;
+ (struct CGRect)rectBelowView:(id)arg1 withWidth:(float)arg2 height:(float)arg3 gap:(float)arg4;
+ (struct CGRect)rectInView:(id)arg1 withAlignment:(int)arg2 width:(float)arg3 height:(float)arg4;

@end

