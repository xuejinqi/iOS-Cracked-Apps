//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FileAssistantDownloadTransfer;

@protocol FileAssistantDownloadTransferDelegate <NSObject>

@optional
- (void)FileAssistantOnRecvHello:(FileAssistantDownloadTransfer *)arg1 code:(int)arg2;
- (void)FileAssistantGetJsonComplete:(FileAssistantDownloadTransfer *)arg1 success:(_Bool)arg2 data:(id)arg3;
- (void)FileAssistantDownloadTransferDidRecviveFirstData:(FileAssistantDownloadTransfer *)arg1;
- (void)FileAssistantDownloadTransfer:(FileAssistantDownloadTransfer *)arg1 curTransSize:(long long)arg2 totalTransSize:(long long)arg3;
- (void)FileAssistantDownloadTransfer:(FileAssistantDownloadTransfer *)arg1 didFinished:(int)arg2;
@end

