//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PSDScene;

@interface H5PreRenderTask : NSObject
{
    NSString *_taskId;
    PSDScene *_scene;
}

@property(retain, nonatomic) PSDScene *scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;

@end

