//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Ant3DFramebuffer, NSMutableArray;

@interface Ant3DOutput : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    _Bool _enabled;
    _Bool _reference;
    Ant3DFramebuffer *_framebuffer;
    NSMutableArray *_successors;
    CDStruct_1b6d18a9 _time;
}

@property(retain, nonatomic) NSMutableArray *successors; // @synthesize successors=_successors;
@property(nonatomic) _Bool reference; // @synthesize reference=_reference;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property(retain, nonatomic) Ant3DFramebuffer *framebuffer; // @synthesize framebuffer=_framebuffer;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)setRenderEnabled:(_Bool)arg1;
- (_Bool)tryLock;
- (_Bool)unlock;
- (_Bool)lock;
- (void)dealloc;
- (CDStruct_1b6d18a9)currentTime;
- (void)framebufferReady:(CDStruct_1b6d18a9)arg1;
- (void)addSuccessor:(id)arg1;
- (id)init;

@end

