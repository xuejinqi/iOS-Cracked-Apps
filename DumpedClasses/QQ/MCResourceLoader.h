//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MCResourceLoader : NSObject
{
}

+ (void)textureWithPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)textureWithCGImage:(struct CGImage *)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (int)getRenderType;
+ (void)setRenderType:(int)arg1;

@end

