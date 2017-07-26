//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CCardResendRemindView, SocialRemindHeadView;

@interface NTLHeadView : UIView
{
    SocialRemindHeadView *_remindView;
    CCardResendRemindView *_resendView;
    id <NTLHeadViewDelegate> _headViewDelegate;
    UIView *_marginTopView;
    UIView *_marginBottomView;
}

@property(retain, nonatomic) UIView *marginBottomView; // @synthesize marginBottomView=_marginBottomView;
@property(retain, nonatomic) UIView *marginTopView; // @synthesize marginTopView=_marginTopView;
@property(nonatomic) __weak id <NTLHeadViewDelegate> headViewDelegate; // @synthesize headViewDelegate=_headViewDelegate;
@property(retain, nonatomic) CCardResendRemindView *resendView; // @synthesize resendView=_resendView;
@property(retain, nonatomic) SocialRemindHeadView *remindView; // @synthesize remindView=_remindView;
- (void).cxx_destruct;
- (void)refreshResendView:(_Bool)arg1;
- (void)refreshRemindViewStr:(id)arg1 logCount:(long long)arg2;
- (void)updateFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

