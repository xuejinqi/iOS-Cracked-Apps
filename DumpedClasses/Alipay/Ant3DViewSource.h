//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Ant3DSource.h"

@class Ant3DImageSource, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, UIView;

@interface Ant3DViewSource : Ant3DSource
{
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    float _frequence;
    _Bool _started;
    UIView *_view;
    Ant3DImageSource *_imageSource;
}

@property(retain, nonatomic) Ant3DImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)setOutputSizeInPixels:(struct CGSize)arg1;
- (id)imageFromView:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

