//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FAModel, NSError, NSMutableURLRequest, NSString;

@protocol FADownRequestDelegate <NSObject>
- (void)OnThumbnailRequestFail:(FAModel *)arg1;
- (void)OnRequestResult:(_Bool)arg1 tmpName:(NSString *)arg2 url:(NSMutableURLRequest *)arg3 info:(NSError *)arg4;
@end

