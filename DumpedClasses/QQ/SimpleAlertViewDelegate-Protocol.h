//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SimpleAlertView;

@protocol SimpleAlertViewDelegate <NSObject>

@optional
- (void)simpleAlertView:(SimpleAlertView *)arg1 didSelectUrl:(NSURL *)arg2;
- (void)emotionAlertButtonClick:(id)arg1 atIndex:(int)arg2;
- (void)simpleAlertViewDismiss:(SimpleAlertView *)arg1;
- (void)didSimpleAlertView:(id)arg1 buttonClick:(id)arg2 atIndex:(int)arg3;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
@end

