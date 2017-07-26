//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, UIActivityIndicatorView, UILabel;

@interface MQZoneTableFootLoadingView : UIControl
{
    UIActivityIndicatorView *_activeView;
    UILabel *_label;
    long long _footState;
    NSArray *_textTable;
    id <MQZoneTableFootLoadingViewDelegate> _delegate;
    long long _footStyle;
}

@property(nonatomic) long long footStyle; // @synthesize footStyle=_footStyle;
@property(nonatomic) __weak id <MQZoneTableFootLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long footState; // @synthesize footState=_footState;
- (void).cxx_destruct;
- (void)click;
- (void)stopLoading;
- (void)startLoading;
- (_Bool)isLoading;
- (void)styleForSubclass;
- (void)changeLabelStyle;
- (void)setFootState:(long long)arg1 text:(id)arg2;
- (id)text;
- (void)adaptUI;
- (void)createActiveView;
- (void)createLabel;
- (void)createTextTable;
- (id)initWithFrame:(struct CGRect)arg1;

@end

