//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQZoneLBSPOIViewControllerDelegate.h"

@class NSString;

@interface QZonePhotoModuleLBSControllerHelper : NSObject <MQZoneLBSPOIViewControllerDelegate>
{
    id <QZPhotoModuleLBSInterfaceDelegate> _delegate;
}

+ (id)createLBSPOIViewControllerWithPhotoModel:(id)arg1 delegate:(id)arg2;
@property(nonatomic) __weak id <QZPhotoModuleLBSInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)LBSPOIViewController:(id)arg1 selectedLBSPoiInfo:(id)arg2;
- (void)LBSPOIViewController:(id)arg1 customLBSLocationStringV2:(id)arg2 lbsPoiInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

