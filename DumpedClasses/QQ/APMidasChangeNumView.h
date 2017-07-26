//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMidasToastContainerView.h"

#import "APMidasInputNumSubviewDelegate.h"

@class NSString;

@interface APMidasChangeNumView : APMidasToastContainerView <APMidasInputNumSubviewDelegate>
{
    id <APMidasChangeNumViewDelegate> changeNumDelegate;
    struct CGPoint _oldCenter;
}

- (void)onNumChanged:(id)arg1;
- (void)keyboardWillHiddenNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)setMaxNum:(long long)arg1;
- (void)setDefaultSaveNum:(id)arg1;
- (void)onBtnClicked;
- (void)onClose;
- (void)reloadPrice;
- (void)dealloc;
- (id)initWithParentView:(id)arg1 title:(id)arg2 btnTitle:(id)arg3 hideAutoPay:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

