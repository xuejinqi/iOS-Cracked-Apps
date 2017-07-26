//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSSHPBaseCell.h"

#import "TTTAttributedLabelDelegate.h"

@class APButton, NSString, TTTAttributedLabel;

@interface AWSStockProfileAcceptButtonCell : AWSSHPBaseCell <TTTAttributedLabelDelegate>
{
    TTTAttributedLabel *_attrLabel;
    APButton *_button;
}

+ (id)createCellWithTableView:(id)arg1;
+ (double)cellHeight;
@property(retain, nonatomic) APButton *button; // @synthesize button=_button;
@property(retain, nonatomic) TTTAttributedLabel *attrLabel; // @synthesize attrLabel=_attrLabel;
- (void).cxx_destruct;
- (void)setOpenAttrString:(_Bool)arg1;
- (void)setOpenEnable:(_Bool)arg1 bindEnable:(_Bool)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)layoutSubviews;
- (void)onButtonClicked:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

