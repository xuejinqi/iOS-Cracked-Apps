//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface ImageCacheItem : NSObject
{
    _Bool _isSharpP;
    UIImage *_image;
}

@property(nonatomic) _Bool isSharpP; // @synthesize isSharpP=_isSharpP;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUIImage:(id)arg1 isSharpP:(_Bool)arg2;

@end

