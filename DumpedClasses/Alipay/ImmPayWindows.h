//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMPActionDelegate.h"

@class ImmPayViewHandler, NSMutableArray, NSString;

@interface ImmPayWindows : NSObject <MMPActionDelegate>
{
    NSMutableArray *_windowList;
    ImmPayViewHandler *_eventHandler;
}

@property(nonatomic) __weak ImmPayViewHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)resumeView;
- (void)hideView;
- (void)onAction:(id)arg1 actions:(id)arg2;
- (void)removeFromWindowList:(id)arg1;
- (void)addIntoWindowList:(id)arg1;
- (void)showDialog:(id)arg1;
- (void)showToast:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)close;
- (id)initWithEventHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

