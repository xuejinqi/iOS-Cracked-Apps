//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

@class QQSportVideoView;

@interface QQSportFullScreenViewController : QQViewController
{
    QQSportVideoView *_videoView;
}

@property(retain, nonatomic) QQSportVideoView *videoView; // @synthesize videoView=_videoView;
- (void)zoomOutFullScreenButton;
- (void)zoomInFullScreenButton;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithVideoView:(id)arg1;

@end

