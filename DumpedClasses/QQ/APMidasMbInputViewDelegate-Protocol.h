//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol APMidasMbInputViewDelegate <NSObject>
- (void)onMbInputViewClose:(id)arg1;
- (void)onMbInputViewResendBtnClicked:(id)arg1;
- (void)onMbInputViewNavigateToUrl:(NSString *)arg1 webTitle:(NSString *)arg2 fromView:(id)arg3;
- (void)onMbInputViewMainBtnClicked:(id)arg1;
@end

