//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface QQPttRecordBtn : UIButton
{
    id <QQPttTouchDelegate> _touchDelegate;
    _Bool _insideBtn;
    _Bool _insideRect;
}

@property(nonatomic) id <QQPttTouchDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)judgeInside:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

