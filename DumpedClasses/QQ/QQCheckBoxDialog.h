//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQShareResultAlertView.h"

@class QQCheckBox, UILabel;

@interface QQCheckBoxDialog : QQShareResultAlertView
{
    QQCheckBox *_checkBox;
    UILabel *_msgLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)selected;
- (id)initWithDialog:(id)arg1 msg:(id)arg2 selected:(_Bool)arg3 delegate:(id)arg4 arrBtnTitles:(id)arg5;
- (id)initWithDialog:(id)arg1 msg:(id)arg2 selected:(_Bool)arg3 delegate:(id)arg4 buttonTitles:(id)arg5;

@end

