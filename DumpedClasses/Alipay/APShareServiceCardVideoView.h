//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APShareServiceCardPhotoView.h"

@class UIImageView;

@interface APShareServiceCardVideoView : APShareServiceCardPhotoView
{
    UIImageView *_videoIconView;
}

@property(retain, nonatomic) UIImageView *videoIconView; // @synthesize videoIconView=_videoIconView;
- (void).cxx_destruct;
- (void)reloadImageView;
- (double)refreshCard:(id)arg1;
- (void)updateVideoView:(id)arg1 superPhotoView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

