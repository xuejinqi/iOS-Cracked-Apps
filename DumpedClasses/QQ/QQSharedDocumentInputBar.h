//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UITextField;

@interface QQSharedDocumentInputBar : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    UIButton *_doneButton;
    id <QQSharedDocumentInputBarDelegate> _delegate;
}

@property(nonatomic) __weak id <QQSharedDocumentInputBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)inputedContent;
- (void)setInputBarActived:(_Bool)arg1;
- (void)setInputBarValue:(id)arg1;
- (void)setInputBarPlaceholder:(id)arg1;
- (void)refreshInputBarFrame:(_Bool)arg1;
- (void)editDone:(id)arg1;
- (void)initSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

