//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBMultimediaEditReportDelegate.h"

@class NSString, TBMultimediaEditView;

@interface TBMultimediaEditDataReportEngine : NSObject <TBMultimediaEditReportDelegate>
{
    long long _businessType;
    TBMultimediaEditView *_editView;
}

@property(nonatomic) __weak TBMultimediaEditView *editView; // @synthesize editView=_editView;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
- (void).cxx_destruct;
- (void)publishBizReportWithInfo:(id)arg1;
- (void)colloctInfo:(id)arg1;
- (_Bool)checkVideoConfig;
@property(readonly, nonatomic) long long opEntry;
- (_Bool)isBaseProductsDivision;
- (id)typeTransToString:(int)arg1;
- (void)doReportPituComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportVideoSaveComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportPhotoSaveComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportArtisticComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportCropComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportGroupStoryComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportScrawComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportMusicComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportEmojiComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportTextComponentEvent:(id)arg1 withParam:(id)arg2;
- (void)doReportEditViewEvent:(id)arg1 withParam:(id)arg2;
- (void)doReport:(id)arg1 withEvent:(id)arg2 withParam:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

