//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseFavAdder.h"

#import "FavVideoDelegate.h"
#import "UploadDelegate.h"

@class NSString;

@interface VideoFavAdder : BaseFavAdder <FavVideoDelegate, UploadDelegate>
{
}

- (void)onUpload:(id)arg1 result:(int)arg2;
- (void)OnUploadCallback:(int)arg1 errorType:(int)arg2 dic:(id)arg3;
- (int)requestCmd;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

