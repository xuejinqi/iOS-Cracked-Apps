//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CFT_UIPayAderModuleData, NSMutableArray, NSString, QQCountingLabel, UIImageView;

@interface CFT_UIPayresultAdCardView : UIView <CAAnimationDelegate>
{
    double _margin;
    int _cardType;
    CFT_UIPayAderModuleData *_moduleData;
    CDUnknownBlockType _actionBlock;
    NSString *_gImgurl;
    UIView *_goodsView;
    UIImageView *_mIconImgview;
    QQCountingLabel *_countLabel;
    UIView *_mbgview;
    NSMutableArray *_yanhuaSubviews;
    NSMutableArray *_mIconArry;
}

@property(retain, nonatomic) NSMutableArray *mIconArry; // @synthesize mIconArry=_mIconArry;
@property(retain, nonatomic) NSMutableArray *yanhuaSubviews; // @synthesize yanhuaSubviews=_yanhuaSubviews;
@property(retain, nonatomic) UIView *mbgview; // @synthesize mbgview=_mbgview;
@property(retain, nonatomic) QQCountingLabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *mIconImgview; // @synthesize mIconImgview=_mIconImgview;
@property(retain, nonatomic) UIView *goodsView; // @synthesize goodsView=_goodsView;
@property(retain, nonatomic) NSString *gImgurl; // @synthesize gImgurl=_gImgurl;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) CFT_UIPayAderModuleData *moduleData; // @synthesize moduleData=_moduleData;
@property(readonly, nonatomic) int cardType; // @synthesize cardType=_cardType;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

