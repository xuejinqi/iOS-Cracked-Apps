//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummarySimpleTextCell.h"

@class QQCampusCertificationView, UIFont, UIImageView, UILabel, UIView, UserSummaryModel;

@interface UserSummaryBaseInfoCell : UserSummarySimpleTextCell
{
    _Bool _mySelf;
    _Bool _showPhone;
    UserSummaryModel *_model;
    UIImageView *_accountInfoIcon;
    UILabel *_accountInfoTextLabel;
    UIImageView *_homeInfoIcon;
    UILabel *_homeInfoTextLabel;
    UIImageView *_otherInfoIcon;
    UILabel *_otherInfoTextLabel;
    QQCampusCertificationView *_campusView;
    long long _lineCount;
    UIFont *_baseInfoFont;
    UIView *_singleBackgroundView;
}

+ (id)baseTextInfoThreeWithModel:(id)arg1;
+ (id)baseTextInfoTwoWithModel:(id)arg1;
+ (_Bool)hasOnlyScollInfoInOther:(id)arg1;
+ (long long)getLineCount:(id)arg1;
+ (double)cellHeightWithModel:(id)arg1;
@property(retain, nonatomic) UIView *singleBackgroundView; // @synthesize singleBackgroundView=_singleBackgroundView;
@property(retain, nonatomic) UIFont *baseInfoFont; // @synthesize baseInfoFont=_baseInfoFont;
@property(nonatomic) _Bool showPhone; // @synthesize showPhone=_showPhone;
@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property(retain, nonatomic) QQCampusCertificationView *campusView; // @synthesize campusView=_campusView;
@property(retain, nonatomic) UILabel *otherInfoTextLabel; // @synthesize otherInfoTextLabel=_otherInfoTextLabel;
@property(retain, nonatomic) UIImageView *otherInfoIcon; // @synthesize otherInfoIcon=_otherInfoIcon;
@property(retain, nonatomic) UILabel *homeInfoTextLabel; // @synthesize homeInfoTextLabel=_homeInfoTextLabel;
@property(retain, nonatomic) UIImageView *homeInfoIcon; // @synthesize homeInfoIcon=_homeInfoIcon;
@property(retain, nonatomic) UILabel *accountInfoTextLabel; // @synthesize accountInfoTextLabel=_accountInfoTextLabel;
@property(retain, nonatomic) UIImageView *accountInfoIcon; // @synthesize accountInfoIcon=_accountInfoIcon;
@property(retain, nonatomic) UserSummaryModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool mySelf; // @synthesize mySelf=_mySelf;
- (void).cxx_destruct;
- (void)copyData:(id)arg1;
- (void)updateSkinWithNormal:(id)arg1 withHighlighted:(id)arg2;
- (void)setSkinIsSetDefault:(_Bool)arg1;
- (id)otherInfoModel;
- (id)getTextWithType:(int)arg1;
- (id)getAccountText;
- (id)getImageNameWithType:(int)arg1;
- (void)showOtherBaseInfo:(id)arg1;
- (_Bool)shouldShowCampusView:(id)arg1 infoType:(long long)arg2;
- (void)showHomeBaseInfo:(id)arg1;
- (void)updateWithModel:(id)arg1 hideMobileNo:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateLayout;
- (int)getCellTypeForLongPress:(id)arg1;
- (void)longPressToDo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

