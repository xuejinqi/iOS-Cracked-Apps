//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSDJsApi.h"

@interface NPJsApiHandler4DownloadFile : PSDJsApi
{
}

- (void)downloadFileWithUrl:(id)arg1 headers:(id)arg2 mainUrl:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)createlocalUrlWithFileName:(id)arg1 data:(id)arg2 headers:(id)arg3;
- (void)callbackWithData:(id)arg1 callback:(CDUnknownBlockType)arg2 filePath:(id)arg3 fileFlod:(id)arg4 fileName:(id)arg5 headers:(id)arg6;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

