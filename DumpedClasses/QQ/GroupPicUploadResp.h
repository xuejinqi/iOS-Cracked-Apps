//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePicUploadResp.h"

@class NSString;

@interface GroupPicUploadResp : BasePicUploadResp
{
    long long _groupPicFileId;
    NSString *_fileKey;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *fileKey; // @dynamic fileKey;
@property(nonatomic) long long groupPicFileId; // @dynamic groupPicFileId;

@end

