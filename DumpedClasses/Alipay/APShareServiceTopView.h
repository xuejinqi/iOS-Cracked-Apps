//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UILabel;

@interface APShareServiceTopView : UIView
{
    UILabel *_sendLabel;
    UIView *_iconsView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    NSMutableArray *_iconsList;
    NSArray *_srcDataList;
}

+ (struct CGSize)titleSizeFrom:(id)arg1;
+ (struct CGSize)iconViewCGSize:(id)arg1 width:(double)arg2;
+ (struct CGPoint)iconViewLineAndColumn:(id)arg1 width:(double)arg2;
+ (struct CGSize)calShareTopViewSizeFrom:(id)arg1 width:(double)arg2 extDic:(id)arg3;
@property(retain, nonatomic) NSArray *srcDataList; // @synthesize srcDataList=_srcDataList;
@property(retain, nonatomic) NSMutableArray *iconsList; // @synthesize iconsList=_iconsList;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *iconsView; // @synthesize iconsView=_iconsView;
@property(retain, nonatomic) UILabel *sendLabel; // @synthesize sendLabel=_sendLabel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setImageData:(id)arg1 iconUrl:(id)arg2 iconType:(id)arg3;
- (void)updateIcons:(id)arg1;
- (void)layoutSubviews;
- (void)hidenSubViews;
- (void)refreshTopViewFrom:(id)arg1 width:(double)arg2 extDic:(id)arg3;
- (void)setupSubViews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

