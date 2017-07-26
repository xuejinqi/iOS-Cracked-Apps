//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GifSearchUtils : NSObject
{
}

+ (void)logWithParams:(id)arg1 seed:(id)arg2 ucid:(id)arg3;
+ (id)searchGifByKeyword:(id)arg1 isvID:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_filterImageArray:(id)arg1;
+ (void)_filterTrendingResponse:(id)arg1;
+ (id)fetchImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)fetchGifTrendsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendImageItem:(id)arg1 imageData:(id)arg2 chatOptions:(id)arg3 imageIndex:(unsigned long long)arg4 query:(id)arg5;
+ (void)cancelImageRequest:(id)arg1;
+ (double)fetchImageTimeoutInterval;
+ (id)configuration;

@end

