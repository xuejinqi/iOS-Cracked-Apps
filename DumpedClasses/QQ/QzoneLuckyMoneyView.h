//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSMutableDictionary, NSObject, NSString, UIImageView, UILabel, UIViewController;

@interface QzoneLuckyMoneyView : UIView <CAAnimationDelegate>
{
    UIImageView *_luckyMoneyView;
    NSMutableDictionary *_extraInfo;
    NSString *_content;
    NSString *_sendText;
    NSString *_nickName;
    long long _ownerUin;
    CDUnknownBlockType _sendBlock;
    CDUnknownBlockType _cancelBlock;
    UILabel *_sendLabel;
    long long _type;
    double luckyMoneyViewWidth;
    double contentWidth;
    double luckyMoneyViewHeight;
    NSObject *_inputCell;
    UIViewController *_parentVC;
    UIView *_backgroundView;
    UIView *_gestureView;
    UIView *_closeGestureView;
}

- (id)createInputViewWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

