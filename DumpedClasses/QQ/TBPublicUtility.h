//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBPublicUtility : NSObject
{
}

+ (void)jumpToUserSummaryProfileWihtNavigationController:(id)arg1 uin:(id)arg2 unionID:(id)arg3 entry:(unsigned long long)arg4;
+ (void)jumpToUserSummaryProfileWihtController:(id)arg1 uin:(id)arg2 unionID:(id)arg3 entry:(unsigned long long)arg4;
+ (_Bool)hasGroupMemberCardForUin:(id)arg1 groupCode:(id)arg2;
+ (id)getGroupMemberWithNoCardForVideoList:(id)arg1 forGroupCode:(id)arg2;
+ (_Bool)getStoryEnableHeightCache;
+ (double)getStoryVideoConstraintScope;
+ (int)videoTypeForVid:(id)arg1;
+ (_Bool)isGroupVideoNodeForUnionID:(id)arg1;
+ (double)caculateTotal:(id)arg1;
+ (double)caculateVariance:(id)arg1;
+ (_Bool)isCurrentViewControllerVisible:(id)arg1;
+ (struct CGSize)adjustTBVideoPlayerSize:(struct CGSize)arg1;
+ (id)getDisplayName:(long long)arg1 displayType:(long long)arg2;
+ (id)getDisplayNameByUnionID:(id)arg1;
+ (id)getDisplayNameByUnionID:(id)arg1 displayType:(long long)arg2;
+ (id)getQQDisplayNameByUnionID:(id)arg1 displayType:(long long)arg2;
+ (id)getQQDisplayNameByUnionID:(id)arg1;
+ (id)getGroupDisplayNameByUnionID:(id)arg1 groupCode:(id)arg2 displayType:(long long)arg3;
+ (id)getGroupDisplayNameByUnionID:(id)arg1 groupCode:(id)arg2;
+ (id)dividArrayToPackets:(id)arg1 packetMaxNum:(unsigned long long)arg2;
+ (_Bool)isPureNumandCharacters:(id)arg1;
+ (unsigned long long)getStoryVideoCaptureBackFps;
+ (unsigned long long)getStoryVideoCaptureFrontFps;
+ (unsigned long long)getStoryVideoCaptureRate;
+ (struct CGSize)getStoryVideoCaptureResolution;
+ (unsigned long long)getStoryVideoCompressFps;
+ (unsigned long long)getStoryPictureVideoCompressRate;
+ (unsigned long long)getStoryVideoCompressRate;
+ (struct CGSize)getStoryVideoCompressResolution;
+ (id)getStoryVideoCaptureParas;
+ (id)getStoryVideoCompressParas;
+ (id)getStoryVideoParametersCfg;
+ (_Bool)getStoryVideoPlayMode:(int)arg1;
+ (long long)getVideoHDMode;
+ (_Bool)freeDiskSpaceCheckByVideosCount:(unsigned long long)arg1;

@end

