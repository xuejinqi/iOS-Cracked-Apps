//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface ARMapWGRegionView : UIView
{
    UIImageView *_locationView;
    UILabel *_cityLabel;
    UILabel *_regionLabel;
    NSString *_city;
    NSString *_region;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCity:(id)arg1 region:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

