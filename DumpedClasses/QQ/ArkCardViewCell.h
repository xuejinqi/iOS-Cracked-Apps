//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ArkAppLoadingView, ArkCardModel, NSObject, UIButton, UIView;

@interface ArkCardViewCell : UICollectionViewCell
{
    _Bool _didAddRoundCorner;
    ArkCardModel *_cardModel;
    id <ArkCardViewCellDelegate> _delegate;
    NSObject *_messageModel;
    UIButton *_functionalButton;
    UIButton *_sourceButton;
    UIView *_lineView;
    UIView *_arkContentView;
    ArkAppLoadingView *_propmtView;
}

@property(retain, nonatomic) ArkAppLoadingView *propmtView; // @synthesize propmtView=_propmtView;
@property(nonatomic) _Bool didAddRoundCorner; // @synthesize didAddRoundCorner=_didAddRoundCorner;
@property(retain, nonatomic) UIView *arkContentView; // @synthesize arkContentView=_arkContentView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIButton *sourceButton; // @synthesize sourceButton=_sourceButton;
@property(retain, nonatomic) UIButton *functionalButton; // @synthesize functionalButton=_functionalButton;
@property(nonatomic) __weak NSObject *messageModel; // @synthesize messageModel=_messageModel;
@property(nonatomic) __weak id <ArkCardViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ArkCardModel *cardModel; // @synthesize cardModel=_cardModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layout;
- (void)functionalButtonTaped:(id)arg1;
- (void)sourceButtonTaped:(id)arg1;
- (void)toggleSourceButton;
- (void)toggleFunctionalButton;
- (void)togglePromptView;
- (void)toggleArkView;
- (void)willMoveToWindow:(id)arg1;
- (void)showArkView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

