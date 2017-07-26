//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGrowingTextView.h"

#import "QQBaseFacePanelDelegate.h"

@class NSArray, NSData, NSMutableData, NSString, QQBaseFacePanelController, QQRichKeyBorad, QQTextFieldInternal, UIButton, UIImageView, UIView;

@interface QQTextField : QQGrowingTextView <QQBaseFacePanelDelegate>
{
    UIButton *leftButton;
    UIButton *rightButton;
    UIButton *facesButton;
    UIButton *publicPlatformButton;
    UIButton *recordButton;
    UIImageView *_bgView;
    UIImageView *_textFieldBgView;
    UIButton *_audioCollapseButton;
    _Bool isLandscape;
    _Bool ifInitFace;
    _Bool isGroup;
    _Bool isMaskBlock;
    NSMutableData *sendData;
    QQTextFieldInternal *internal;
    QQRichKeyBorad *_richKeyBorad;
    _Bool _bRecKBNtf;
    struct _QQKeyboardShowFlags _ShowFlags;
    id _tableObject;
    UIView *_audioInputView;
    double strOffset;
    double _moveUpDuration;
    double _moveDownDuration;
    QQBaseFacePanelController *_facePanelController;
    unsigned long long _keyboardAnimateOptions;
    _Bool _isPublicPlatform;
    _Bool _historyNotSupported;
    _Bool _showTabBar;
    NSArray *_richAIOFlags;
    unsigned long long _richNewFlags;
    _Bool _bstartPTR;
    NSString *_placeholder;
    _Bool disableAjustTableView;
    struct UIEdgeInsets _originalTableContentInset;
}

+ (void)encodeSendData:(id)arg1 outData:(id)arg2 emotionEncoder:(CDUnknownFunctionPointerType)arg3;
+ (void)encodeSendData:(id)arg1 outData:(id)arg2;
+ (struct _NSRange)encodeEmoPostion:(id)arg1;
@property(nonatomic) struct UIEdgeInsets originalTableContentInset; // @synthesize originalTableContentInset=_originalTableContentInset;
@property(nonatomic) _Bool disableAjustTableView; // @synthesize disableAjustTableView;
@property(retain, nonatomic) QQTextFieldInternal *internal; // @synthesize internal;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup;
@property(nonatomic) _Bool ifInitFace; // @synthesize ifInitFace;
@property(retain, nonatomic) UIButton *facesButton; // @synthesize facesButton;
@property(readonly, nonatomic) UIButton *rightButton; // @synthesize rightButton;
@property(readonly, nonatomic) UIButton *leftButton; // @synthesize leftButton;
@property(retain, nonatomic) UIButton *publicPlatformButton; // @synthesize publicPlatformButton;
@property(readonly, nonatomic) struct _QQKeyboardShowFlags ShowFlags; // @synthesize ShowFlags=_ShowFlags;
@property(retain, nonatomic) NSData *sendData; // @synthesize sendData;
- (void).cxx_destruct;
- (void)audioCollapseButtonPressed:(id)arg1;
- (_Bool)isShowUp;
- (void)notSupportLeftButton;
- (void)removeFaceButton;
- (void)removeLeftButton;
- (void)emojiDraged:(id)arg1;
- (void)sendEmoji:(id)arg1;
- (void)faceDraged:(id)arg1;
- (void)backSpaceFace;
- (void)faceChoosed:(id)arg1;
- (void)sendFace;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)forceToFlip;
- (_Bool)hiddenKeyBoradAll:(_Bool)arg1;
- (_Bool)hiddenKeyBorad;
- (void)showKeyBorad;
- (void)hiddenFacePanelController;
- (void)setSimpleStyle;
- (void)hideAllPanels;
- (void)updateMidControlOfTheInputBar;
- (void)showCurrentInputState:(long long)arg1;
- (void)upDateFace;
- (void)upLoadFace;
- (void)flipFaceBoard;
- (void)rightBtnClick:(id)arg1;
- (void)pttBtnClick:(id)arg1;
- (void)showUpRichKeyboard;
- (void)QQTextViewInternalBecomeFirstResponder:(id)arg1;
- (void)moveDown;
- (_Bool)moveUp;
- (void)keyboardWillShow;
- (_Bool)moveUp:(_Bool)arg1;
- (void)reloadAppearance;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubButtons;
- (struct UIEdgeInsets)textFieldInsets;
- (void)layoutSubviews;
- (void)adjustFrame:(long long)arg1;
- (void)checkFaceView;
- (void)checkAudioInputView;
- (double)tableOriginY;
- (void)adjustTableContentInset;
- (void)resetTableViewPosition;
- (void)resizeScrollView;
- (void)showTopFlag:(_Bool)arg1;
- (void)clearText;
- (void)resetSendData;
- (void)setDelegate:(id)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)becomeRespose;
- (void)reSignRespose;
- (void)initState;
- (void)gotoQutuSectionView;
- (void)goToFaceManageView;
- (_Bool)becomeFirstResponder;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
@property(readonly, nonatomic) QQRichKeyBorad *richKeyBorad; // @dynamic richKeyBorad;
- (void)initRichKeyboard;
- (void)initFacePanel;
@property(retain, nonatomic) UIView *audioInputView; // @dynamic audioInputView;
- (id)subViewForClass:(Class)arg1;
@property(retain, nonatomic) NSString *placeholder; // @dynamic placeholder;
- (void)lockInputTextFieldAndButton:(_Bool)arg1;
- (void)setButtonEnable:(_Bool)arg1;
@property(nonatomic) unsigned long long richNewFlags; // @dynamic richNewFlags;
@property(nonatomic) __weak NSArray *richAIOFlags; // @dynamic richAIOFlags;
@property(nonatomic) __weak id tableObject; // @dynamic tableObject;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dismissFSIView;
- (void)voiceInitWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool bRecKBNtf; // @dynamic bRecKBNtf;
@property(nonatomic) _Bool bstartPTR; // @dynamic bstartPTR;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) QQBaseFacePanelController *facePanelController; // @dynamic facePanelController;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool historyNotSupported; // @dynamic historyNotSupported;
@property(nonatomic) _Bool isPublicPlatform; // @dynamic isPublicPlatform;
@property(nonatomic) unsigned long long keyboardAnimateOptions; // @dynamic keyboardAnimateOptions;
@property(nonatomic) double moveDownDuration; // @dynamic moveDownDuration;
@property(nonatomic) double moveUpDuration; // @dynamic moveUpDuration;
@property(nonatomic) _Bool showTabBar; // @dynamic showTabBar;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIImageView *textFieldBgView; // @dynamic textFieldBgView;

@end

