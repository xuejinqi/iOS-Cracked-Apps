//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBStoryVideoPlayViewControllerDataSource.h"

@class NSArray, NSString, TBStoryVideoPlayViewController, UIViewController;

@interface TBStoryPlayerDiscoveryDataEngine : NSObject <TBStoryVideoPlayViewControllerDataSource>
{
    TBStoryVideoPlayViewController *_playerVC;
    NSArray *_playList;
    NSArray *_cardFeedIDs;
    UIViewController *_parentViewController;
}

@property(nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (id)nextVidForCurrentRepeatSection:(id)arg1 currentVid:(id)arg2;
- (_Bool)hasMoreDataFordataKey:(id)arg1 direction:(long long)arg2;
- (void)requestNextBatchVideo:(id)arg1 direction:(long long)arg2;
- (void)handleGetVideoList:(id)arg1;
- (void)requestCardVideosInfoAtIndex:(unsigned long long)arg1 direction:(long long)arg2;
- (void)startPlayCurrentCardIndex:(unsigned long long)arg1 cardList:(id)arg2 feedIDList:(id)arg3 playScene:(long long)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

