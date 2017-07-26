//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVFrameDispatcher.h"

@class AVGLBaseView;

@interface AVSingleFrameDispatcher : AVFrameDispatcher
{
    AVGLBaseView *_imageView;
}

@property(retain, nonatomic) AVGLBaseView *imageView; // @synthesize imageView=_imageView;
- (_Bool)calcFullScr:(int)arg1 SelfAngle:(int)arg2;
- (float)calcRotateAngle:(int)arg1 SelfAngle:(int)arg2;
- (void)dispatchVideoFrame:(id)arg1 isSubFrame:(_Bool)arg2 format:(int)arg3 needMirrorReverse:(_Bool)arg4;
- (void)dealloc;

@end

