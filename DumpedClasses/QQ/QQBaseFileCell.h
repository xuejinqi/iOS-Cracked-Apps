//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCell.h"

#import "QQFACellViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class FAModel, NSString, QQFACellView;

@interface QQBaseFileCell : QQAIOCell <QQFACellViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    QQFACellView *_cellView;
    _Bool isSender;
    FAModel *_fileModel;
    FAModel *_wyModel;
}

@property(retain, nonatomic) FAModel *fileModel; // @synthesize fileModel=_fileModel;
- (_Bool)isTouchInContentRect:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)getAudioIconWithBlock:(CDUnknownBlockType)arg1;
- (void)getFileImage:(int)arg1 block:(CDUnknownBlockType)arg2;
- (void)getFileIconWithBlock:(CDUnknownBlockType)arg1;
- (void)getHeadImageWithBlock:(CDUnknownBlockType)arg1;
- (void)getTransferInfoWithBlock:(CDUnknownBlockType)arg1;
- (void)didHeadTouch;
- (void)didActionButtonTouch;
- (id)getMultiPicTitle;
- (id)getAccessibilityValue;
- (id)getFileSize;
- (id)getTruncateMiddleFileNameForSize:(struct CGSize)arg1 font:(id)arg2;
- (id)getFileName;
- (unsigned int)getBubbleId;
- (void)onSavetoWeiYunRes:(id)arg1;
- (void)saveFileToWeiyun;
- (void)saveToWeiyun:(id)arg1;
- (void)deleteMessageModel:(id)arg1;
- (void)alertViewClicked:(long long)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)longPressHeader;
- (_Bool)hiddenDisplayItems;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)menuControllerWillHide:(id)arg1;
- (void)hideMenu;
- (id)getMenuItems;
- (void)showMenu;
- (_Bool)canShowMenu;
- (void)LongPressCallBack:(struct CGPoint)arg1;
- (struct CGRect)GetPaoPaoBgRect;
- (struct CGRect)getImageRect;
- (struct CGRect)GetContentBgRect;
- (void)layoutSubviews;
- (void)dealloc;
- (id)getBaseChatViewController;
- (void)addObserver;
- (id)initWithChatViewTable:(id)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

