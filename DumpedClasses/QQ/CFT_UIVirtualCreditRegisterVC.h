//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseDialogViewController.h"

@class NSMutableDictionary, UIImageView, UILabel;

@interface CFT_UIVirtualCreditRegisterVC : CFT_UIBaseDialogViewController
{
    UILabel *title;
    UIImageView *img1;
    _Bool isreqShowView;
    id <VirtualCreditRegisterResultDelegate> _delegate;
    NSMutableDictionary *_payOrderInfo;
    NSMutableDictionary *_guideDocInfo;
}

@property(retain, nonatomic) NSMutableDictionary *guideDocInfo; // @synthesize guideDocInfo=_guideDocInfo;
@property(retain, nonatomic) NSMutableDictionary *payOrderInfo; // @synthesize payOrderInfo=_payOrderInfo;
@property(nonatomic) id <VirtualCreditRegisterResultDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clickRegisterVirCard;
- (void)qpay_ctpay_guide;
- (void)requestViewContent;
- (void)clickBtn:(id)arg1;
- (void)layoutSubviewsOnView;
- (void)initSubView;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

