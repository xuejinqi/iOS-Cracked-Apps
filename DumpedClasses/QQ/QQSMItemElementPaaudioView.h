//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSMItemElementPictureView.h"

@class NSString, QQSMItemElementPaaudio, UIActivityIndicatorView, UIImageView;

@interface QQSMItemElementPaaudioView : QQSMItemElementPictureView
{
    NSString *_fileUuid;
    NSString *_fileMd5;
    NSString *_fileSize;
    NSString *_fileName;
    NSString *_audioLen;
    QQSMItemElementPaaudio *_audioItem;
    UIImageView *_statusView;
    NSString *_modelSign;
    UIActivityIndicatorView *_loadView;
    UIImageView *_voiceView;
}

- (id)getAnimationImages;
- (void)willStopPlay:(id)arg1;
- (void)willPlaySound:(id)arg1;
- (void)onPttDownloadFinish:(id)arg1;
- (void)onPttDownloadError:(id)arg1;
- (void)onPttDownloadStart:(id)arg1;
- (void)setQQSMItemElementBase:(id)arg1;
- (_Bool)shouldReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

