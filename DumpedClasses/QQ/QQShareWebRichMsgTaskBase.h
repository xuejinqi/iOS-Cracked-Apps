//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQURLRichMsgHelperDelegate.h"

@class NSDate, NSMutableArray, NSString, QQHttpClientSession, QQShareWebRichMsgData, QQURLRichMsgData, QQURLRichMsgHelper, UIViewController;

@interface QQShareWebRichMsgTaskBase : NSObject <QQURLRichMsgHelperDelegate>
{
    QQHttpClientSession *_uploadImageSession;
    QQHttpClientSession *_urlChangeSession;
    QQURLRichMsgData *_urlRichMsgData;
    QQURLRichMsgData *_urlChangeMsgData;
    QQURLRichMsgHelper *_richMsgHelper;
    QQShareWebRichMsgData *_richMsgData;
    NSMutableArray *_longURLArr;
    UIViewController *_ownerUI;
    _Bool _shareProcessing;
    int _xo;
    NSString *_connIpAddr;
    unsigned int _connIp;
    unsigned int _connPort;
    NSDate *_uploadShareImgStartTime;
    _Bool _hadWebSnapOperation;
    int _shareToType;
    NSString *_imageUrlToDown;
}

@property(nonatomic) _Bool hadWebSnapOperation; // @synthesize hadWebSnapOperation=_hadWebSnapOperation;
@property(nonatomic) int shareToType; // @synthesize shareToType=_shareToType;
@property(copy, nonatomic) NSString *imageUrlToDown; // @synthesize imageUrlToDown=_imageUrlToDown;
- (void)shareOperationResultCode:(int)arg1 otherArgment:(id)arg2;
- (id)encodeUrl:(id)arg1;
- (id)parseShortURL:(id)arg1;
- (id)createPostBody:(id)arg1;
- (id)processPreviewImageURL:(id)arg1;
- (void)reportDownImageData:(int)arg1 srcType:(int)arg2;
- (void)processPreviewImageASync:(id)arg1 imageUrlType:(int)arg2;
- (void)reportServerDownImage:(int)arg1;
- (void)processPreviewImage:(id)arg1;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)reportUploadShareImage:(int)arg1 shareImageURL:(id)arg2;
- (void)startToUploadImage:(id)arg1;
- (void)shareWithRichData:(id)arg1;
- (void)reportSnapInfo:(id)arg1;
- (_Bool)needToSnapIfNoPreviewData:(id)arg1;
- (void)doShare:(id)arg1;
- (void)reportLastShareInfo:(id)arg1;
- (id)getSourceName;
- (void)onResponseRichMsgData:(id)arg1;
- (_Bool)checkShareData:(id)arg1;
- (_Bool)shareWebRichMsg:(id)arg1;
- (int)getShareToType;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSMutableArray *longURLArr; // @dynamic longURLArr;
@property(nonatomic) UIViewController *ownerUI; // @dynamic ownerUI;
@property(retain, nonatomic) QQShareWebRichMsgData *richMsgData; // @dynamic richMsgData;
@property(retain, nonatomic) QQURLRichMsgHelper *richMsgHelper; // @dynamic richMsgHelper;
@property(nonatomic) _Bool shareProcessing; // @dynamic shareProcessing;
@property(readonly) Class superclass;
@property(retain, nonatomic) QQHttpClientSession *uploadImageSession; // @dynamic uploadImageSession;
@property(retain, nonatomic) QQURLRichMsgData *urlChangeMsgData; // @dynamic urlChangeMsgData;
@property(retain, nonatomic) QQHttpClientSession *urlChangeSession; // @dynamic urlChangeSession;
@property(retain, nonatomic) QQURLRichMsgData *urlRichMsgData; // @dynamic urlRichMsgData;

@end

