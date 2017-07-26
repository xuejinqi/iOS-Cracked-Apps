//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QUICustomViewPositionCell.h"

@class QQLoginDeviceInfo, UIButton, UILabel;

@interface DeviceInfoCell : QUICustomViewPositionCell
{
    UIButton *_kickButton;
    _Bool _showTime;
    id <DeviceInfoCellDelegate> delegate;
    QQLoginDeviceInfo *deviceInfo;
    UILabel *_deviceNameLabel;
}

@property(readonly, retain, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
@property(nonatomic) _Bool showTime; // @synthesize showTime=_showTime;
@property(readonly, nonatomic) UIButton *kickButton; // @synthesize kickButton=_kickButton;
@property(retain, nonatomic) QQLoginDeviceInfo *deviceInfo; // @synthesize deviceInfo;
@property(nonatomic) id <DeviceInfoCellDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)setDeviceName:(id)arg1;
- (void)setDeleting:(_Bool)arg1;
- (void)kickButtonClicked;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 andDeviceInfo:(id)arg3;

@end

