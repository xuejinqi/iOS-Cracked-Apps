//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullscreenOverlayView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface QQShareResultDialog : FullscreenOverlayView <UITextFieldDelegate>
{
    UIView *_container;
    UIImageView *_backgroundView;
    UIButton *_OneButton;
    UIButton *_TwoButton;
    UILabel *_labelTitle;
    UILabel *_labelDescription;
    UILabel *_moreDrscription;
    UIImageView *_ImgView;
    unsigned long long _btnNum;
    id _contextData;
    UIView *_titleContainer;
    id <QQShareResultDialogDelegate> _dialogDelegate;
}

@property(nonatomic) id <QQShareResultDialogDelegate> dialogDelegate; // @synthesize dialogDelegate=_dialogDelegate;
- (void)dismiss;
- (void)buttonClickSuccess:(id)arg1;
- (void)buttonClickTwo:(id)arg1;
- (void)buttonClickOne:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 Description:(id)arg2 moreDescription:(id)arg3 buttonTextOne:(id)arg4 buttonTextTwo:(id)arg5 image:(id)arg6 buttonNumber:(unsigned long long)arg7 delegate:(id)arg8;
- (id)initWithTitle:(id)arg1 Description:(id)arg2 buttonTextOne:(id)arg3 buttonTextTwo:(id)arg4 image:(id)arg5 buttonNumber:(unsigned long long)arg6 delegate:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

