//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReadInJoyContentView.h"

@class ReadInJoyVideoCoverView, ReadInjoyAsynImageView, ReadInjoyGalleryView;

@interface ReadInJoySmallContentView : ReadInJoyContentView
{
    ReadInjoyAsynImageView *imgView;
    ReadInjoyGalleryView *galleryView;
    ReadInJoyVideoCoverView *videoCoverView;
    unsigned long long _ower;
}

@property(nonatomic) unsigned long long ower; // @synthesize ower=_ower;
- (void)layoutSubviewsExt;
- (void)layoutSubviews;
- (id)init;

@end

