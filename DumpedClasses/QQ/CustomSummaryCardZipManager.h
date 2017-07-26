//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, QQVIPRequestInfo;

@interface CustomSummaryCardZipManager : NSObject
{
    QQVIPRequestInfo *_reqInfo;
    id <CustomSummaryCardZipDelegate> _fileDownloadDelegate;
    int _xo;
    NSMutableDictionary *_dynamicResDic;
    NSMutableArray *_requestingUrl;
    NSMutableArray *_downloadingDynamicCardIds;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) QQVIPRequestInfo *reqInfo; // @dynamic reqInfo;
- (void)downBgImageWithUrl:(id)arg1 andDelegate:(id)arg2;
- (void)downLoadFileWithUrl:(id)arg1 withFileType:(long long)arg2 andDelegate:(id)arg3;
- (void)downloadDynamicRes:(id)arg1 cardBgId:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)getDynamicResDownloadState:(int)arg1;
- (void)responseDownloadResult:(_Bool)arg1 url:(id)arg2 withFileType:(long long)arg3;
- (void)downloadDynamicBgRes:(id)arg1 withFileType:(long long)arg2 andDelegate:(id)arg3;
- (void)removeRequestingUrl:(id)arg1;
- (void)deleteDynamicCardModel:(int)arg1;
- (id)getDynamicCardModel:(int)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <CustomSummaryCardZipDelegate> fileDownloadDelegate; // @dynamic fileDownloadDelegate;

@end

