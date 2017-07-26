//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOTextCellView.h"

#import "QQEmotionLabelDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, QQAIOSpriteActionModel, SpriteCartoonView, UIImageView;

@interface QQAIOSpriteActionCellView : QQAIOTextCellView <QQEmotionLabelDelegate, UIAlertViewDelegate>
{
    SpriteCartoonView *_spriteView;
    UIImageView *_downFailedView;
}

- (void)showTipsImg:(id)arg1 atRootView:(id)arg2 startY:(int)arg3 success:(_Bool)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlertWithBtnStr:(id)arg1 tips:(id)arg2 url:(id)arg3 isShop:(_Bool)arg4 opClickName:(id)arg5;
- (_Bool)addActionToLocal;
- (void)showVerifySuccessTips;
- (void)showVerifyFailedTipsWith:(id)arg1 actionModel:(id)arg2;
- (void)menuActionSaveSpriteAction:(id)arg1;
- (void)menuActionRecallSpriteAction:(id)arg1;
- (void)menuActionDeleteSpriteAction:(id)arg1;
- (id)getChatModelType;
- (id)getMenuItems;
- (void)handleSpriteOffLineRes:(id)arg1;
- (void)handleSpriteMsgStateChanged:(id)arg1;
- (void)layoutSenderViews;
- (void)layoutReceiverViews;
- (void)willDrawBubble;
- (void)drawContent:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(nonatomic) QQAIOSpriteActionModel *aioModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

