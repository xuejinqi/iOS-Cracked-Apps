//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface QQWalletInputBubbleView : UIView
{
    int _bubbleType;
    NSString *_word;
    double _offsetY;
    id <QQWalletInputBubbleViewDelegate> _delegate;
    UILabel *_tipsLabel;
    UILabel *_wordLabel;
    UIImageView *_lineImageView;
    UIImageView *_bgImageView;
    struct CGSize _currentSize;
}

@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *lineImageView; // @synthesize lineImageView=_lineImageView;
@property(retain, nonatomic) UILabel *wordLabel; // @synthesize wordLabel=_wordLabel;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) int bubbleType; // @synthesize bubbleType=_bubbleType;
@property(nonatomic) __weak id <QQWalletInputBubbleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize currentSize; // @synthesize currentSize=_currentSize;
@property(nonatomic) double offsetY; // @synthesize offsetY=_offsetY;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
- (void).cxx_destruct;
- (void)handleTapGestureRecognizer:(id)arg1;
- (id)accessibilityLabel;
- (void)updateInputBubbleViewWithTitle:(id)arg1;
- (void)updateFrameWithView:(id)arg1;
- (void)dissmiss;
- (void)showInView:(id)arg1 upToView:(id)arg2 withTitle:(id)arg3 withType:(int)arg4;
- (void)showInView:(id)arg1 upToView:(id)arg2;
- (void)updateWord:(id)arg1 andTitle:(id)arg2 andType:(int)arg3 withView:(id)arg4;
- (void)updateWord:(id)arg1 withView:(id)arg2;
- (void)commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

