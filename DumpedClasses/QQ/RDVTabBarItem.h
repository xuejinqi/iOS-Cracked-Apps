//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSDictionary, NSString, QQUnReadCountAnimationView, UIColor, UIFont, UIImage, UIImageView, UILabel, UIView;

@interface RDVTabBarItem : UIControl
{
    NSString *_title;
    struct UIOffset _imagePositionAdjustment;
    NSDictionary *_unselectedTitleAttributes;
    NSDictionary *_selectedTitleAttributes;
    QQUnReadCountAnimationView *_digitalView;
    UIImageView *_redPointView;
    _Bool _delaySelect;
    UIView *_rippleView;
    double _itemHeight;
    UILabel *_titleLabel;
    NSString *_badgeValue;
    unsigned long long _pointTpye;
    UIImage *_badgeBackgroundImage;
    UIColor *_badgeBackgroundColor;
    UIColor *_badgeTextColor;
    UIFont *_badgeTextFont;
    unsigned long long _redPointCount;
    UIImage *_unselectedBackgroundImage;
    UIImage *_selectedBackgroundImage;
    UIImage *_unselectedImage;
    UIImage *_selectedImage;
    struct UIOffset _titlePositionAdjustment;
    struct UIOffset _badgePositionAdjustment;
}

@property(retain) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain) UIImage *unselectedImage; // @synthesize unselectedImage=_unselectedImage;
@property(retain) UIImage *selectedBackgroundImage; // @synthesize selectedBackgroundImage=_selectedBackgroundImage;
@property(retain) UIImage *unselectedBackgroundImage; // @synthesize unselectedBackgroundImage=_unselectedBackgroundImage;
@property(nonatomic) unsigned long long redPointCount; // @synthesize redPointCount=_redPointCount;
@property(retain) UIFont *badgeTextFont; // @synthesize badgeTextFont=_badgeTextFont;
@property(nonatomic) struct UIOffset badgePositionAdjustment; // @synthesize badgePositionAdjustment=_badgePositionAdjustment;
@property(retain) UIColor *badgeTextColor; // @synthesize badgeTextColor=_badgeTextColor;
@property(retain) UIColor *badgeBackgroundColor; // @synthesize badgeBackgroundColor=_badgeBackgroundColor;
@property(retain) UIImage *badgeBackgroundImage; // @synthesize badgeBackgroundImage=_badgeBackgroundImage;
@property(nonatomic) unsigned long long pointTpye; // @synthesize pointTpye=_pointTpye;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) struct UIOffset imagePositionAdjustment; // @synthesize imagePositionAdjustment=_imagePositionAdjustment;
@property(copy) NSDictionary *selectedTitleAttributes; // @synthesize selectedTitleAttributes=_selectedTitleAttributes;
@property(copy) NSDictionary *unselectedTitleAttributes; // @synthesize unselectedTitleAttributes=_unselectedTitleAttributes;
@property(nonatomic) struct UIOffset titlePositionAdjustment; // @synthesize titlePositionAdjustment=_titlePositionAdjustment;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(readonly, nonatomic) UIView *rippleView; // @synthesize rippleView=_rippleView;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)animateRipple:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setBackgroundSelectedImage:(id)arg1 withUnselectedImage:(id)arg2;
- (id)backgroundUnselectedImage;
- (id)backgroundSelectedImage;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
- (id)finishedUnselectedImage;
- (id)finishedSelectedImage;
- (void)setSelected:(_Bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)displayWithUnreadCount:(unsigned long long)arg1;
- (_Bool)hasRedPoint;
- (void)resetRedPoint;
- (void)layoutSubviews;
- (void)commonInitialization;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

