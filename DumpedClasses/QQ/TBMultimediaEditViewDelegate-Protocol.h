//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIImage, NSDictionary, TBMultimediaEditComponent, TBMultimediaEditView;

@protocol TBMultimediaEditViewDelegate <NSObject>

@optional
- (void)editView:(TBMultimediaEditView *)arg1 mosaicMaskImage:(CIImage *)arg2;
- (void)editView:(TBMultimediaEditView *)arg1 didSelectedVisualEffect:(long long)arg2;
- (void)editView:(TBMultimediaEditView *)arg1 didFinishEditWithInfoByPublish:(NSDictionary *)arg2;
- (void)editViewDidCancel:(TBMultimediaEditView *)arg1;
- (void)editViewRejectCancel:(TBMultimediaEditView *)arg1;
- (void)editViewWillCancel:(TBMultimediaEditView *)arg1;
- (void)editView:(TBMultimediaEditView *)arg1 editAreaChanged:(struct CGRect)arg2;
- (void)editView:(TBMultimediaEditView *)arg1 componentChanged:(TBMultimediaEditComponent *)arg2;
@end

