//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FalconObjInfo, FalconObjTrackInfo, NSObject;

@protocol FalconARKitTargetDelegate <NSObject>

@optional
- (void)onTargetTrack:(FalconObjTrackInfo *)arg1 Target:(NSObject *)arg2;
- (void)onTargetRecognize:(FalconObjInfo *)arg1;
@end

