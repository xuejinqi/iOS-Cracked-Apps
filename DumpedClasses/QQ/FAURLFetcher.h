//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FADownloader.h"

@interface FAURLFetcher : FADownloader
{
}

- (void)dealloc;
- (void)cancel;
- (void)OnRequestResult:(_Bool)arg1 tmpName:(id)arg2 url:(id)arg3 info:(id)arg4;
- (void)cancelWithNotifyFailCode:(int)arg1 errMsg:(id)arg2;
- (void)createComponent;

@end

