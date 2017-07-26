//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZEmojiTextView.h"

#import "QQBaseFacePanelDelegate.h"
#import "QQMultiImagePickerControllerDelegate.h"
#import "QZDeletablePhotoViewDelegate.h"
#import "QZFontListViewDelegate.h"
#import "QZInputBarBulletCurtainSwitchDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QQMultiImagePickerController, QZFacePanelController, QZFontListView, UIButton, UIColor, UIControl, UIImageView, UIView, UIViewController, UIVisualEffectView;

@interface GAInputBar : QZEmojiTextView <QQMultiImagePickerControllerDelegate, QZDeletablePhotoViewDelegate, QZInputBarBulletCurtainSwitchDelegate, QQBaseFacePanelDelegate, QZFontListViewDelegate, UIAlertViewDelegate>
{
    long long _inputState;
    NSMutableDictionary *_allStateItems;
    NSDictionary *_keyboardInfo;
    struct _NSRange _selectedRange;
    struct CGPoint _pointOfScreenBottom;
    _Bool _isOutSizeScreen;
    NSMutableDictionary *_atDict;
    NSString *_draftKey;
    _Bool _isSending;
    _Bool _isReplyToPrivate;
    id <GAInputBarDelegate> _delegate;
    _Bool _supportBulletCurtain;
    _Bool _supportLiveBubble;
    long long _liveBubbleHeight;
    QZFacePanelController *_facePanelController;
    UIButton *_atFriendBtn;
    UIButton *_emotionBtn;
    UIButton *_keyboardBtn;
    UIButton *_picCommentBtn;
    UIImageView *_textBg;
    UIImageView *_bg;
    UIVisualEffectView *_backBlurView;
    UIColor *_textDefalutColor;
    _Bool _needLayout;
    _Bool _isPrivate;
    _Bool _isBulletCurtain;
    _Bool _isBubbleCurtain;
    _Bool _isNoNeedAtBtn;
    _Bool _showDiyFont;
    _Bool _notGetFontList;
    _Bool _aotushowFontList;
    _Bool _shouldKeepResponderWhenReturn;
    _Bool _shouldContinuePlay;
    _Bool _showAlert;
    NSString *_bulletPlaceholder;
    NSMutableArray *_selectedPicArrays;
    long long _reportScene;
    UIControl *_maskPanel;
    QQMultiImagePickerController *_picker;
    UIViewController *_ownerViewController;
    UIView *_fontBoardContainer;
    QZFontListView *_fontBoard;
    UIImageView *_fontButtonRedDot;
    CDUnknownBlockType _bubbleBlock;
}

@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(nonatomic) _Bool shouldContinuePlay; // @synthesize shouldContinuePlay=_shouldContinuePlay;
@property(copy, nonatomic) CDUnknownBlockType bubbleBlock; // @synthesize bubbleBlock=_bubbleBlock;
@property(nonatomic) _Bool shouldKeepResponderWhenReturn; // @synthesize shouldKeepResponderWhenReturn=_shouldKeepResponderWhenReturn;
@property(retain, nonatomic) UIImageView *fontButtonRedDot; // @synthesize fontButtonRedDot=_fontButtonRedDot;
@property(retain, nonatomic) QZFontListView *fontBoard; // @synthesize fontBoard=_fontBoard;
@property(retain, nonatomic) UIView *fontBoardContainer; // @synthesize fontBoardContainer=_fontBoardContainer;
@property(nonatomic) _Bool aotushowFontList; // @synthesize aotushowFontList=_aotushowFontList;
@property(nonatomic) _Bool notGetFontList; // @synthesize notGetFontList=_notGetFontList;
@property(nonatomic) _Bool showDiyFont; // @synthesize showDiyFont=_showDiyFont;
@property(nonatomic) __weak UIViewController *ownerViewController; // @synthesize ownerViewController=_ownerViewController;
@property(retain, nonatomic) QQMultiImagePickerController *picker; // @synthesize picker=_picker;
@property(nonatomic) _Bool isNoNeedAtBtn; // @synthesize isNoNeedAtBtn=_isNoNeedAtBtn;
@property(retain, nonatomic) UIControl *maskPanel; // @synthesize maskPanel=_maskPanel;
@property(nonatomic) long long reportScene; // @synthesize reportScene=_reportScene;
@property(retain, nonatomic) NSMutableArray *selectedPicArrays; // @synthesize selectedPicArrays=_selectedPicArrays;
@property(retain, nonatomic) NSString *bulletPlaceholder; // @synthesize bulletPlaceholder=_bulletPlaceholder;
@property(nonatomic) _Bool isBubbleCurtain; // @synthesize isBubbleCurtain=_isBubbleCurtain;
@property(nonatomic) _Bool isBulletCurtain; // @synthesize isBulletCurtain=_isBulletCurtain;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(retain, nonatomic) NSMutableDictionary *atDict; // @synthesize atDict=_atDict;
@property(retain, nonatomic) NSString *draftKey; // @synthesize draftKey=_draftKey;
@property(nonatomic) _Bool needLayout; // @synthesize needLayout=_needLayout;
@property(readonly, nonatomic) _Bool isOutSizeScreen; // @synthesize isOutSizeScreen=_isOutSizeScreen;
@property(nonatomic) __weak id <GAInputBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long inputState; // @synthesize inputState=_inputState;
- (void).cxx_destruct;
- (long long)inputBarTheme;
- (void)setGAInputBarTheme:(long long)arg1;
- (id)appRootViewController;
- (long long)lengthOfInternalViewText;
- (id)inputBarEncodedString;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)changeBulletCuratinSwitchPos;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)sendDirectly:(id)arg1;
- (void)fontListView:(id)arg1 openPayVC:(id)arg2;
- (void)fontListViewDidSelected:(id)arg1 withTap:(_Bool)arg2;
- (void)setSystemFontReq;
- (id)diyFont;
- (void)clickFontButton;
- (_Bool)fontButtonClicked;
- (void)showFontRedDot;
- (void)updateFontRedDot:(id)arg1;
- (id)createRedDotImageView;
- (void)selectFont;
- (void)loadFontList;
- (long long)getFontList;
- (void)createFontBoard;
- (void)showFontBoard;
- (void)sendFace;
- (void)removeEmotionBoard;
- (void)showEmotionBoard;
- (_Bool)isKeyboardChangeFrame:(_Bool *)arg1;
- (void)onKeyboardWillHideNotify:(id)arg1;
- (void)onKeyboardWillShowNotify:(id)arg1;
- (void)removeKeyboardObserver;
- (void)addKeyboardObserver;
- (void)setAtDict:(id)arg1 nicks:(id)arg2;
- (void)reportData:(id)arg1;
- (void)openYellowVip;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickBtn:(id)arg1;
- (void)clickMaskPanel:(id)arg1;
- (_Bool)isMaskPanelAdded;
- (void)removeMaskPanel;
- (void)addMaskPanel;
- (void)draftBoxFinishEditing;
- (void)draftBoxEndEditing;
- (void)draftBoxUpdateEditing;
- (void)draftBoxBeginEditing;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)updateInputState:(long long)arg1;
- (void)resetInputBar;
- (void)deactiveInputBar;
- (void)activeInputBar:(_Bool)arg1;
- (void)reportFontBoardShow;
- (void)reportInputBarCommentDataClick:(long long)arg1;
- (void)reportInputBarCommentDataShow;
- (void)hideItemsForState:(long long)arg1;
- (void)showItemsForState:(long long)arg1;
- (struct CGRect)frameAtRightIndex:(unsigned long long)arg1;
- (void)addRightItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3 frame:(struct CGRect)arg4;
- (void)addRightItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (struct CGRect)frameAtLeftIndex:(unsigned long long)arg1;
- (void)addLeftItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3 frame:(struct CGRect)arg4;
- (void)addLeftItem:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (void)textViewDidChange:(id)arg1;
- (id)textView;
- (void)doWhenViewWillDisappear;
- (void)doWhenViewDidAppear;
- (void)doWhenViewWillAppear;
- (void)createBgView;
- (void)reloadAppearance;
- (void)isBubbleOn:(_Bool)arg1;
- (void)isBulletCurtainOn:(_Bool)arg1;
- (void)layoutFrame;
- (void)layoutSubviews;
- (void)dealloc;
- (void)showInView:(id)arg1 isOutSizeScreen:(_Bool)arg2;
- (void)updateLayoutShowPrivateIcon:(_Bool)arg1;
- (void)updateLayoutShowPrivateText:(_Bool)arg1;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 showPicComment:(_Bool)arg3 showDiyFont:(_Bool)arg4;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 showPicComment:(_Bool)arg3 andAppid:(long long)arg4;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 andAppid:(long long)arg3;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2 showPicComment:(_Bool)arg3;
- (void)updateLayoutShowPrivate:(_Bool)arg1 isReply:(_Bool)arg2;
- (void)updateLayoutShowDiyFont:(_Bool)arg1 showPicComment:(_Bool)arg2;
- (void)updateLayoutPicComment:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2 showDiyFont:(_Bool)arg3;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2 andAppid:(long long)arg3;
- (void)updateLayoutShowAtBtn:(_Bool)arg1 emotionBtn:(_Bool)arg2;
- (void)updateBulletCurtainSwitchFrame:(id)arg1 emotionBtn:(id)arg2 keyboardBtn:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 defaultStyle:(_Bool)arg2 supportBulletCurtain:(_Bool)arg3 supportLiveBubble:(_Bool)arg4 liveBubbleHeight:(long long)arg5;
- (id)initWithFrame:(struct CGRect)arg1 defaultStyle:(_Bool)arg2 supportBulletCurtain:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 defaultStyle:(_Bool)arg2;
- (void)hidePicCommentBg;
- (void)resetPicCommentView;
- (void)activePicCommentView;
- (void)changePicCommentViewOrigin:(struct CGPoint)arg1;
- (void)onClickDeleteAsset:(id)arg1;
- (void)layoutPicView:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)clickPicComment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

