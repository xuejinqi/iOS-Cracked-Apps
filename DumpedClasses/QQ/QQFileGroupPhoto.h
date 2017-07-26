//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQFilePhoto.h"

#import "QQGroupFilePreviewImageDelegate.h"

@class NSString, QQGroupFileInfo, QQGroupFilePreviewImageRequest;

@interface QQFileGroupPhoto : QQFilePhoto <QQGroupFilePreviewImageDelegate>
{
    QQGroupFilePreviewImageRequest *_imageRequest;
    QQGroupFileInfo *_fileInfo;
}

@property(retain, nonatomic) QQGroupFileInfo *fileInfo; // @synthesize fileInfo=_fileInfo;
- (void)request:(id)arg1 didGetImageSize:(struct CGSize)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceivedPreviewImage:(id)arg2;
- (void)downloadPhoto;
- (void)downloadThumbPhoto;
- (id)initWithFAmodel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

