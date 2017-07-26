//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface QQSharedDocumentKeyboardToolBar : UIView
{
    UIButton *_takePhotoBtn;
    UIButton *_uploadImageBtn;
    UIButton *_hideKeyboardBtn;
    UIButton *_showKeybordBtn;
    UIButton *_currentBtn;
    id <QQSharedDocumentKeyboardToolBarDelegate> _delegate;
}

@property(nonatomic) __weak id <QQSharedDocumentKeyboardToolBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetButtonsState;
- (void)setHighlightedButton:(id)arg1;
- (void)takePhotoBtnClick:(id)arg1;
- (void)uploadImageBtnClicked:(id)arg1;
- (void)showKeyboardBtnClicked:(id)arg1;
- (void)hideKeyboardBtnClicked:(id)arg1;
- (void)initSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

