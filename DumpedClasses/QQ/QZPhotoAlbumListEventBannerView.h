//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IQZUrlDownloaderDelegate.h"

@class MQZoneAutoPlayImageView, NSArray, NSDate, NSDictionary, NSMutableArray, NSString, QZPhotoAlbumEventViewController, UIImageView, UILabel, UIViewController;

@interface QZPhotoAlbumListEventBannerView : UIView <IQZUrlDownloaderDelegate>
{
    UIViewController *_parentController;
    UIView *_regularHintView;
    MQZoneAutoPlayImageView *_eventPhotoImgView;
    UILabel *_descLabel;
    UIImageView *_logoImgView;
    UILabel *_subDescLabel;
    NSString *_weekDateStr;
    NSDictionary *_currentEventDict;
    NSMutableArray *_exposuredEventArray;
    QZPhotoAlbumEventViewController *_eventViewCtrl;
    NSArray *_eventPhotos;
    _Bool _isEventBannerShown;
    NSDate *_thisEnterDate;
    int _xo;
    _Bool _hasMore;
    CDUnknownBlockType _onRemoveRegularBannerView;
    CDUnknownBlockType _onUploadEventComplete;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSDate *thisEnterDate; // @synthesize thisEnterDate=_thisEnterDate;
@property(nonatomic) __weak QZPhotoAlbumEventViewController *eventViewCtrl; // @synthesize eventViewCtrl=_eventViewCtrl;
@property(retain, nonatomic) UILabel *subDescLabel; // @synthesize subDescLabel=_subDescLabel;
@property(copy, nonatomic) CDUnknownBlockType onUploadEventComplete; // @synthesize onUploadEventComplete=_onUploadEventComplete;
@property(copy, nonatomic) CDUnknownBlockType onRemoveRegularBannerView; // @synthesize onRemoveRegularBannerView=_onRemoveRegularBannerView;
- (void).cxx_destruct;
- (id)filterAssets:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDictionary *currentEventDict; // @dynamic currentEventDict;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) UILabel *descLabel; // @dynamic descLabel;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) MQZoneAutoPlayImageView *eventPhotoImgView; // @dynamic eventPhotoImgView;
@property(retain, nonatomic) NSArray *eventPhotos; // @dynamic eventPhotos;
@property(retain, nonatomic) NSMutableArray *exposuredEventArray; // @dynamic exposuredEventArray;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isEventBannerShown; // @dynamic isEventBannerShown;
@property(retain, nonatomic) UIImageView *logoImgView; // @dynamic logoImgView;
@property(nonatomic) __weak UIViewController *parentController; // @dynamic parentController;
@property(retain, nonatomic) UIView *regularHintView; // @dynamic regularHintView;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *weekDateStr; // @dynamic weekDateStr;

@end

