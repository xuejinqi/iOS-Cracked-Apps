//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQGrowingTextViewDelegate.h"

@class NSDictionary, NSString, QQGroupTribeDetailInputTextView;

@interface QQGroupTribeCommentView : UIView <QQGrowingTextViewDelegate>
{
    _Bool _callBackToWebForSend;
    _Bool needToSaveDraft;
    NSDictionary *_params;
    NSString *_callback;
    id _webviewController;
    QQGroupTribeDetailInputTextView *_textField;
    int _comeFrom;
}

+ (void)addTheTopicCommentInputViewWithParams:(id)arg1;
@property(nonatomic) int comeFrom; // @synthesize comeFrom=_comeFrom;
- (void)uniformLogWithOpName:(id)arg1 reserve2:(id)arg2;
- (void)growingTextViewDidSendEmptyContent:(id)arg1;
- (_Bool)QQTextField:(id)arg1 didSendText:(id)arg2 showText:(id)arg3;
- (_Bool)growingTextViewInputReturnKey:(id)arg1;
- (void)showShortNoticeView:(id)arg1 iconType:(long long)arg2;
- (_Bool)sendTextMsg:(id)arg1 showText:(id)arg2;
- (void)callbackToWeb:(int)arg1 result:(id)arg2;
- (void)postEventWithName:(id)arg1 data:(id)arg2;
- (_Bool)checkSendText:(id)arg1;
- (void)actionRemoveFromSuperview;
- (void)commentSendSuccess:(id)arg1;
- (void)ifCallBackToWebForSend;
- (id)getDraftFolder;
- (id)getDraftSingleId;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)startInput;
- (id)initWithFrame:(struct CGRect)arg1 params:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

