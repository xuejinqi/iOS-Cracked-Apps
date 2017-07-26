//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface OSPKBResultView : UIView
{
    UIView *_logoView;
    UILabel *_titleLabel;
    UILabel *_amountLabel;
    UILabel *_oriAmountLabel;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *oriAmountLabel; // @synthesize oriAmountLabel=_oriAmountLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;
- (void)reLayout;
- (void)setDesc:(id)arg1;
- (void)createDescLabel:(id)arg1;
- (void)setDescText:(id)arg1;
- (void)setOriginAmount:(id)arg1;
- (void)createOriginAmountLabel:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)createAmountLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)createTitleLabel:(id)arg1;
- (id)createLabel:(id)arg1;
- (void)createLogo;
- (void)setData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

