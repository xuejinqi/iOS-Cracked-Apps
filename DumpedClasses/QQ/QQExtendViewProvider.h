//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQExtendViewBaseProvider.h"

#import "RPContentViewLayoutDelegate.h"

@class NSString, UITapGestureRecognizer;

@interface QQExtendViewProvider : QQExtendViewBaseProvider <RPContentViewLayoutDelegate>
{
}

- (void)RPContentView:(id)arg1 layoutSubViews:(id)arg2;
- (void)layoutSubviews;
- (id)redPointContentViewFrame;
- (id)redPointContentView;
- (void)__handleTapGesture:(id)arg1;
- (void)extendRedpointGesture;
@property(retain, nonatomic) UITapGestureRecognizer *redPointTapGesture; // @dynamic redPointTapGesture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

