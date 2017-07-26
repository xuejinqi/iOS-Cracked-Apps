//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, QQAvatarView, QZSearchFeedModel, UILabel;

@interface QZActiveFeedCellView : UIView
{
    QZSearchFeedModel *_feedModel;
    QQAvatarView *_headImgView;
    UILabel *_nicknameLabel;
    UILabel *_detailInfo;
    UILabel *_feedTimeLabel;
    NSMutableArray *_photosList;
    UILabel *_blogTitle;
    double currentX;
    double currentY;
    _Bool _nickNameHightLight;
}

- (void).cxx_destruct;
- (id)getHightLightStringForText:(id)arg1;
- (id)addDotBeforeString:(id)arg1;
- (id)clipDetailText:(id)arg1 andWidth:(double)arg2 andFont:(id)arg3;
- (double)getTextWidthWithText:(id)arg1 andFont:(id)arg2;
- (id)clipImage:(id)arg1;
- (void)setContentViewAndDate;
- (void)setViewData;
- (void)initView;
- (id)init;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 andNickNameHL:(_Bool)arg2;

@end

