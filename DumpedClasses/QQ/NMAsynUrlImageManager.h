//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSObject<OS_dispatch_queue>;

@interface NMAsynUrlImageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSFileManager *_fileManager;
}

+ (struct CGRect)faceFittingRectOfImage:(id)arg1 aspect:(double)arg2;
+ (_Bool)recognizeFace:(id)arg1 rect:(struct CGRect *)arg2;
+ (id)instance;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
- (void).cxx_destruct;
- (void)getImageWithUrl:(id)arg1 viewInfo:(CDStruct_a44e741f)arg2 transform:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (void)queryCacheImageForUrl:(id)arg1 viewInfo:(CDStruct_a44e741f)arg2 done:(CDUnknownBlockType)arg3;
- (id)getDiskImageWithPath:(id)arg1;
- (void)setImageToMemoryCache:(id)arg1 withUrl:(id)arg2;
- (id)getMemoryCacheWithUrl:(id)arg1;
- (id)imageKeyWithUrl:(id)arg1;
- (id)init;

@end

