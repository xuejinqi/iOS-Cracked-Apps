//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "SDWebImageOperation.h"

@class NSData, NSObject<OS_dispatch_queue>, NSString, NSURLRequest;

@interface SDWebImageMassProxyDownloaderOperation : NSOperation <SDWebImageOperation>
{
    unsigned long long width;
    unsigned long long height;
    _Bool responseFromCached;
    _Bool _executing;
    _Bool _finished;
    int _options;
    NSURLRequest *_request;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completedBlock;
    CDUnknownBlockType _cancelBlock;
    long long _expectedSize;
    NSData *_imageData;
    NSString *_massRequestId;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *massRequestId; // @synthesize massRequestId=_massRequestId;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) int options; // @synthesize options=_options;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didFinishLoadingWithData:(id)arg1;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (void)didReceiveData:(id)arg1 length:(long long)arg2;
- (void)didReceiveResponse:(id)arg1;
- (_Bool)isConcurrent;
- (void)reset;
- (void)done;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 queue:(id)arg2 options:(int)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5 cancelled:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

