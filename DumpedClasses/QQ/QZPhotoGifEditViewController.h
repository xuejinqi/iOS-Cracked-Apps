//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPhotoMultimediaViewController.h"

#import "QZMultimediaEditGifVelocityComponentDelegate.h"
#import "TBMultimediaEditReportDelegate.h"
#import "TBMultimediaEditViewDelegate.h"

@class NSArray, NSString, QZPhotoGifImageView;

@interface QZPhotoGifEditViewController : QQPhotoMultimediaViewController <QZMultimediaEditGifVelocityComponentDelegate, TBMultimediaEditReportDelegate, TBMultimediaEditViewDelegate>
{
    long long _gifFromType;
    long long _deviceOrientation;
    NSString *_remarkBtnTitle;
    _Bool _showMoreGif;
    double _slideValue;
    NSArray *_images;
    QZPhotoGifImageView *_gifImageView;
    CDUnknownBlockType _onUploadComplete;
}

@property(copy, nonatomic) CDUnknownBlockType onUploadComplete; // @synthesize onUploadComplete=_onUploadComplete;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long deviceOrientation; // @dynamic deviceOrientation;
@property(nonatomic) long long gifFromType; // @dynamic gifFromType;
@property(retain, nonatomic) QZPhotoGifImageView *gifImageView; // @dynamic gifImageView;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *images; // @dynamic images;
@property(copy, nonatomic) NSString *remarkBtnTitle; // @dynamic remarkBtnTitle;
@property(readonly) Class superclass;

@end

