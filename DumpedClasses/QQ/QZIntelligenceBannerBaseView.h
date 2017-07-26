//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class MQZoneFeedCellButton, NSDictionary;

@interface QZIntelligenceBannerBaseView : UIButton
{
    MQZoneFeedCellButton *_closeButton;
    NSDictionary *_bannerInfo;
    double _cellBgAlpha;
}

@property(nonatomic) double cellBgAlpha; // @synthesize cellBgAlpha=_cellBgAlpha;
@property(readonly, nonatomic) MQZoneFeedCellButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSDictionary *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reportClose;
- (void)reportClick;
- (void)reportDisplay;
- (void)updateBanner;
- (long long)bannerType;
- (id)initWithFrame:(struct CGRect)arg1;

@end

