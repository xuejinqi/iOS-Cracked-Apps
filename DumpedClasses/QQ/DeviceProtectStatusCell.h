//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QUICustomViewPositionCell.h"

@class UIImageView;

@interface DeviceProtectStatusCell : QUICustomViewPositionCell
{
    unsigned long long _status;
    UIImageView *_statusImgView;
}

@property(retain, nonatomic) UIImageView *statusImgView; // @synthesize statusImgView=_statusImgView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithoutStatusImgView:(long long)arg1 reuseIdentifier:(id)arg2 Status:(unsigned long long)arg3 Wording:(id)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 Status:(unsigned long long)arg3 Wording:(id)arg4;

@end

