//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSAttributedString, NSString, UIButton, UIImage, UIImageView, UILabel, UIViewController, UIWindow;

@interface ZanTipsView : UIView
{
    UIImage *_headerImage;
    NSString *_title;
    NSAttributedString *_attrContent;
    NSString *_content;
    NSArray *_buttonArray;
    CDUnknownBlockType _closeBlock;
    UIView *_backgroundView;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIView *_buttonContainerView;
    UIButton *_closeButton;
    UIWindow *_window;
    UIViewController *_containerViewController;
    _Bool _isLoadingImage;
    _Bool _needShowing;
    _Bool _needAnimation;
    _Bool _isShowInViewController;
    CDUnknownBlockType _protocolBlock;
    NSString *_protocol;
    NSString *_protocolPrefix;
    UIImageView *_headerView;
}

+ (id)zanTipsViewWithHeaderImage:(id)arg1 title:(id)arg2 contentAttrStr:(id)arg3 contentStr:(id)arg4 buttonArray:(id)arg5 protocolPrefix:(id)arg6 protocol:(id)arg7 protocolBlock:(CDUnknownBlockType)arg8 closeBlock:(CDUnknownBlockType)arg9;
+ (id)zanTipsViewWithHeaderImage:(id)arg1 title:(id)arg2 contentAttrStr:(id)arg3 contentStr:(id)arg4 buttonArray:(id)arg5 closeBlock:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) UIImageView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (id)buttonWithButtonItem:(id)arg1;
- (void)protocolButtonClicked:(id)arg1;
- (void)closeTipsView:(id)arg1;
- (void)clickTipsButton:(id)arg1;
- (void)setViewLayout;
- (void)updateTipsView;
- (id)initZanTipsViewWithHeaderImage:(id)arg1 title:(id)arg2 contentAttrStr:(id)arg3 contentStr:(id)arg4 buttonArray:(id)arg5 closeBlock:(CDUnknownBlockType)arg6;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)showWithAnimation:(_Bool)arg1 inViewController:(id)arg2;
- (void)showWithAnimation:(_Bool)arg1;
- (void)loadHeaderImageWithUrl:(id)arg1;
- (void)showWithNot:(id)arg1;
- (void)hidden;
- (void)addProtocolBtn:(id)arg1 protocolPrefix:(id)arg2 protocolBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

