//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface QQChatRecordsGuideView : UIView
{
    struct CGRect _focusRect;
    UIView *_focusView;
    UIView *_upperView;
    UIView *_buttomView;
    UIImageView *_arrowImgView;
    UILabel *_label;
    id <QQChatRecordsGuideViewDelegate> _delegate;
}

@property(nonatomic) id <QQChatRecordsGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)focusRect:(struct CGRect)arg1 tips:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

