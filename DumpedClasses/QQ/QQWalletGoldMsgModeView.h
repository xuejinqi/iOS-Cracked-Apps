//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NIAttributedLabelDelegate.h"

@class NIAttributedLabel, NSString;

@interface QQWalletGoldMsgModeView : UIView <NIAttributedLabelDelegate>
{
    NIAttributedLabel *_label;
    float _moneyValue;
    UIView *_moneyLinkAnchorView;
    id <QQWalletGoldMsgModeViewDelegate> _delegate;
}

@property(nonatomic) id <QQWalletGoldMsgModeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float moneyValue; // @synthesize moneyValue=_moneyValue;
@property(retain, nonatomic) UIView *moneyLinkAnchorView; // @synthesize moneyLinkAnchorView=_moneyLinkAnchorView;
- (id)getTextColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

