//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BEETabController.h"

#import "BEETabControlProtocol.h"

@class NSString;

@interface BEEButtonTabController : BEETabController <BEETabControlProtocol>
{
}

- (void)tabButtonClicked:(id)arg1;
@property(nonatomic) long long selectedSegmentIndex;
- (void)setupTabButton:(id)arg1;
- (struct NSObject *)addTabControl;
- (id)addTabBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

