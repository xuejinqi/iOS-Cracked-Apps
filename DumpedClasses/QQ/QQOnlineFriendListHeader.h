//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface QQOnlineFriendListHeader : UIView <UIAlertViewDelegate>
{
    UIImageView *_headerView;
    UIButton *_cancelButton;
    UILabel *_headerLabel;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)removeButtonTaped;
- (void)layoutSubviews;
- (void)setupViews;
- (void)reloadAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

