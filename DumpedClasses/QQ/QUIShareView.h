//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSMutableArray, NSString, UIImage, UIImageView, UIWindow;

@interface QUIShareView : UIView
{
    Class _orignalCls;
    UIWindow *mainWindow;
    float label_height;
    _Bool _autoRotate;
    _Bool _canShowKeyboard;
    _Bool _isMulLine;
    double _iconMargin;
    double _scrollViewMarginLeft;
    UIImageView *_advImageView;
    UIView *_blankView;
    UIView *_bgView;
    UIView *_sheetView;
    NSAttributedString *_attributedTitle;
    NSMutableArray *_activityItems;
    UIImage *_advImage;
    NSString *_advTargetUrl;
    id <QUIShareDelegate> _delegate;
    long long _videoflag;
}

@property(nonatomic) long long videoflag; // @synthesize videoflag=_videoflag;
@property(nonatomic) __weak id <QUIShareDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *advTargetUrl; // @synthesize advTargetUrl=_advTargetUrl;
@property(retain, nonatomic) UIImage *advImage; // @synthesize advImage=_advImage;
@property(retain, nonatomic) NSMutableArray *activityItems; // @synthesize activityItems=_activityItems;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(nonatomic) _Bool isMulLine; // @synthesize isMulLine=_isMulLine;
@property(retain, nonatomic) UIView *sheetView; // @synthesize sheetView=_sheetView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) UIImageView *advImageView; // @synthesize advImageView=_advImageView;
@property(nonatomic) _Bool canShowKeyboard; // @synthesize canShowKeyboard=_canShowKeyboard;
@property(nonatomic) double scrollViewMarginLeft; // @synthesize scrollViewMarginLeft=_scrollViewMarginLeft;
@property(nonatomic) double iconMargin; // @synthesize iconMargin=_iconMargin;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
- (void).cxx_destruct;
- (void)handleBGClick:(id)arg1;
- (void)onActivityIconClick:(id)arg1;
- (int)convertToInt:(id)arg1;
- (id)getActivityIcon:(id)arg1 position:(struct CGPoint)arg2 scrollView:(id)arg3;
- (id)ImageFromColor:(id)arg1;
- (void)render;
- (id)addScrollView:(struct CGPoint)arg1 withArray:(id)arg2;
- (void)addCancelButton;
- (double)showAttributedTitle:(double)arg1;
- (void)openWebView:(id)arg1;
- (void)addAdvImageViewWithFrame:(struct CGRect)arg1;
- (void)addBlurView;
- (void)addBlankView;
- (void)addBgView;
- (void)dealloc;
- (void)dismiss;
- (void)keyboardWillDismiss:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)addAnimation;
- (void)show;
- (id)init;
- (id)initWithActivityItems:(id)arg1;

@end

