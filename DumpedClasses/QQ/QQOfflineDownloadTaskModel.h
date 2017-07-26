//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QQOfflineBidUpdateInfoModel;

@interface QQOfflineDownloadTaskModel : NSObject
{
    NSString *_bidStr;
    int _priority;
    QQOfflineBidUpdateInfoModel *_bidUpdateInfoModel;
    int _taskState;
    int _xo;
    _Bool _isPreDownload;
    CDUnknownBlockType _callback;
}

+ (id)taskModelWithBidUpdateInfoModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isPreDownload; // @synthesize isPreDownload=_isPreDownload;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (id)description;
- (_Bool)isEqualModel:(id)arg1;
- (void)dealloc;
@property(nonatomic) int priority; // @dynamic priority;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *bidStr; // @dynamic bidStr;
@property(retain, nonatomic) QQOfflineBidUpdateInfoModel *bidUpdateInfoModel; // @dynamic bidUpdateInfoModel;
@property(nonatomic) int taskState; // @dynamic taskState;

@end

