//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class APButton, UIWebView;

@interface OPPopupView : UIView
{
    UIWebView *_webView;
    APButton *_agreeBtn;
    id <OPPopupViewDelegate> _delegate;
    id _webController;
}

@property(nonatomic) __weak id webController; // @synthesize webController=_webController;
@property(nonatomic) __weak id <OPPopupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak APButton *agreeBtn; // @synthesize agreeBtn=_agreeBtn;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)onConfirm;
- (id)initWithFrame:(struct CGRect)arg1 controller:(id)arg2;

@end

