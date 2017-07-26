//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseRichViewController.h"

@class NSMutableArray, UIButton, UIControl, UIImageView, UILabel, UINavigationController, UIView;

@interface CFT_UBaseTouchIDViewController : CFT_UIBaseRichViewController
{
    UIControl *btnSelect_;
    UILabel *labelSelBankname_;
    UIView *redPoint;
    UILabel *labelSelBankTail_;
    UIImageView *imgViewSelBankArrow;
    UIImageView *imgViewSelBankIcon;
    int _touchid_count;
    int _tryTimes;
    UINavigationController *_rootNavigator;
    NSMutableArray *_bindBankArray;
    long long _amount;
    UIButton *_btnPassword;
}

@property(retain, nonatomic) UIButton *btnPassword; // @synthesize btnPassword=_btnPassword;
@property(nonatomic) int tryTimes; // @synthesize tryTimes=_tryTimes;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(retain, nonatomic) NSMutableArray *bindBankArray; // @synthesize bindBankArray=_bindBankArray;
@property(nonatomic) int touchid_count; // @synthesize touchid_count=_touchid_count;
@property(nonatomic) UINavigationController *rootNavigator; // @synthesize rootNavigator=_rootNavigator;
- (void)showPayPasswordView;
- (void)setSelectIndex:(long long)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)evaluateTouchIDAgain;
- (void)nextButtonClick:(id)arg1;
- (void)layoutSubviewsOnView;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

