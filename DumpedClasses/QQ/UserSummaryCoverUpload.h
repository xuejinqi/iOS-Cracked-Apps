//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BDHUploadDelegate.h"

@class BDHUploadFile, NSString, NSTimer, UIImage;

@interface UserSummaryCoverUpload : NSObject <BDHUploadDelegate>
{
    NSTimer *_uploadTimer;
    long long _coverReqID;
    id <UserSummaryCoverUploadDelegate> _delegate;
    long long _coverUin;
    UIImage *_image;
    NSString *_photoKey;
    BDHUploadFile *_uploadFile;
    long long _taskId;
}

+ (id)parserCoverModel:(const char *)arg1 lenght:(long long)arg2 uin:(long long)arg3;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) BDHUploadFile *uploadFile; // @synthesize uploadFile=_uploadFile;
@property(retain, nonatomic) NSString *photoKey; // @synthesize photoKey=_photoKey;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long coverUin; // @synthesize coverUin=_coverUin;
@property(nonatomic) __weak id <UserSummaryCoverUploadDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)upload:(id)arg1 Completion:(_Bool)arg2;
- (void)getCoverInfoFromServer;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (id)tmpFileImagePath;
- (void)uploadImageWithSessionKey:(id)arg1;
- (void)requestSessionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)writeToFile:(id)arg1;
- (void)uploadTimeout;
- (void)dealloc;
- (void)uploadCover:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

