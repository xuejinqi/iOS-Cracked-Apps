//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBPicItem.h"

@class QQAsynUrlImageView, TBVideoSimpleInfoModel, UILabel, UIView;

@interface QQStoryDayFeedView : TBPicItem
{
    UILabel *_timeLabel;
    UILabel *_countLabel;
    QQAsynUrlImageView *_coverView;
    UIView *_maskView;
    TBVideoSimpleInfoModel *_videoModel;
}

- (void)setModel:(id)arg1;
- (void)setVideoState:(_Bool)arg1;
- (void)doInitUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withReuseIdentifier:(id)arg2;

@end

