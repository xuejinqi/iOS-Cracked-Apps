//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, QZBannerDataModel, UIViewController;

@protocol QZOCSBannerProtocolDelegate <NSObject>
@property(retain, nonatomic) QZBannerDataModel *bannerModel;
@property(nonatomic) __weak UIViewController *hostViewController;
@property(nonatomic) double bannerHeight;
- (long long)ocsBannerType;
- (NSDictionary *)ocsBannerInfo;
@end

