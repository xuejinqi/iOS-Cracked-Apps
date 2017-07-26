//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIAlertViewDelegate.h"

@class NSString, QGManorDot, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface QGManorDotView : UIView <UIAlertViewDelegate>
{
    _Bool _bLoading;
    struct CGRect _drawRect;
    NSString *_address;
    NSString *_sosoUrl;
    UIActivityIndicatorView *_actView;
    UILabel *_addressLabel;
    UILabel *_titleLabel;
    UIImageView *_lineView;
    UIButton *_guideButton;
    UIButton *_nextButton;
    _Bool bAlreadyHasAddress;
    _Bool showsSosoButton;
    _Bool _showsMoreButton;
    NSString *_title;
    QGManorDot *manorDot;
    id <QGManorDotAdjustAddressTextDelegate> _delegate;
}

@property(nonatomic) id <QGManorDotAdjustAddressTextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showsMoreButton; // @synthesize showsMoreButton=_showsMoreButton;
@property(nonatomic) _Bool showsSosoButton; // @synthesize showsSosoButton;
@property(retain, nonatomic) QGManorDot *manorDot; // @synthesize manorDot;
@property(retain, nonatomic) NSString *sosoUrl; // @synthesize sosoUrl=_sosoUrl;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)handleGetLocationTimeout:(id)arg1;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)delayGetAddressByCoordinate;
- (void)getAddressByCoordinate;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onNextButtonClick:(id)arg1;
- (void)onGuideButtonClick:(id)arg1;
- (void)setAlreadyHasAddress:(_Bool)arg1;
- (id)init;
- (void)dealloc;
- (void)removeLbsNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

