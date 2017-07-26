//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OTranslucentNavigationBar.h"

@class NSString, UIButton, UILabel;

@interface O2OMerchantNavigationBar : O2OTranslucentNavigationBar
{
    UIButton *_button;
    UILabel *_titleLable;
    double _titleRealWidth;
    double _startPoint;
    double _endPoint;
    double _offset;
    UIButton *_cdpButton;
    NSString *_shopId;
}

+ (id)createGradientView:(struct CGRect)arg1 a1:(double)arg2 a2:(double)arg3;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (id)getCustomer_serviceImage;
- (id)getMoreImage;
- (void)updateTitleW;
- (void)setCdpBtn:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)cBtn:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)creatCustomer_serviceBtn:(id)arg1 action:(SEL)arg2;
- (void)createMoreBtn:(id)arg1 action:(SEL)arg2;
- (void)scroll:(double)arg1;
- (void)setMerchantTitle:(id)arg1 startPoint:(double)arg2 endPoint:(double)arg3;
- (id)initWithNoBackFrame:(struct CGRect)arg1 title:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 backTitle:(id)arg3;
- (void)dealloc;

@end

