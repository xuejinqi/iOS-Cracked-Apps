//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface GSWebCapEmbeddedBase : NSObject
{
    NSDictionary *_urlInfo;
    int _srcType;
}

+ (id)getWebCapEmbeddedByUrlInfo:(id)arg1 srcType:(int)arg2;
- (void).cxx_destruct;
- (id)getRecommendVC;
- (id)getNearbyFeedListVC;
- (id)getNearbyTabVC;
- (id)getCurrentNavi;
- (id)getRecommendNavi:(_Bool)arg1;
- (id)getRecommendInitViewControllers;
- (id)getDefaultViewControllers:(id)arg1;
- (id)getSpecialViewControllers:(id)arg1;
- (id)getViewControllers:(id)arg1;
- (id)getNavigationController;
- (id)initWitURLInfo:(id)arg1 srcType:(int)arg2;

@end

