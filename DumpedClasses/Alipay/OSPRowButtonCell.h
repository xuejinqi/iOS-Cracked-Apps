//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "O2OEmoticonRateViewDelegate.h"
#import "O2OStarViewDelegate.h"

@class NSString, OSPCoolLabelView, UIButton, UIImageView, UILabel, UIView;

@interface OSPRowButtonCell : UIControl <O2OStarViewDelegate, O2OEmoticonRateViewDelegate>
{
    _Bool _isSignleLine;
    _Bool _showCornerIcon;
    _Bool _useEmoticonView;
    NSString *_scheme;
    UIImageView *_iconView;
    UILabel *_titleView;
    UILabel *_descView;
    UIView *_starView;
    unsigned long long _cellType;
    UIButton *_button;
    id _buttonTarget;
    SEL _buttonAction;
    NSString *_objId;
    NSString *_shareDesc;
    NSString *_shareTitle;
    NSString *_typeString;
    NSString *_starValue;
    NSString *_tradeNo;
    OSPCoolLabelView *_cornerView;
}

@property(nonatomic) _Bool useEmoticonView; // @synthesize useEmoticonView=_useEmoticonView;
@property(retain, nonatomic) OSPCoolLabelView *cornerView; // @synthesize cornerView=_cornerView;
@property(nonatomic) _Bool showCornerIcon; // @synthesize showCornerIcon=_showCornerIcon;
@property(copy, nonatomic) NSString *tradeNo; // @synthesize tradeNo=_tradeNo;
@property(retain, nonatomic) NSString *starValue; // @synthesize starValue=_starValue;
@property(retain, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(retain, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(retain, nonatomic) NSString *shareDesc; // @synthesize shareDesc=_shareDesc;
@property(retain, nonatomic) NSString *objId; // @synthesize objId=_objId;
@property(nonatomic) SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) __weak id buttonTarget; // @synthesize buttonTarget=_buttonTarget;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(nonatomic) _Bool isSignleLine; // @synthesize isSignleLine=_isSignleLine;
@property(retain, nonatomic) UIView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UILabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (void)emoticonRateView:(id)arg1 rateLevelDidChange:(long long)arg2;
- (void)tapGestureEnded:(id)arg1;
- (void)panGestureEnded:(id)arg1;
- (_Bool)emoticonStar;
- (id)getStarValue;
- (id)getTypeString;
- (id)getShareTitle;
- (id)getShareDesc;
- (id)objectId;
- (unsigned long long)getCellType;
- (void)showCorner:(id)arg1;
- (void)onButtonClick;
- (void)addButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)reLayout;
- (void)setSingleLine:(_Bool)arg1;
- (id)schemeUrl;
- (void)initSubViews:(id)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

