//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullScreenVideoCellModel.h"

@class NSArray, NSURL, QQMessageModel;

@interface FullScreenShortVideoCellModel : FullScreenVideoCellModel
{
    QQMessageModel *_messageModel;
    NSURL *_videoURL;
    NSArray *_downloadURLs;
}

@property(copy, nonatomic) NSArray *downloadURLs; // @synthesize downloadURLs=_downloadURLs;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) QQMessageModel *messageModel; // @synthesize messageModel=_messageModel;
- (void).cxx_destruct;
- (id)getLikeKey;

@end

