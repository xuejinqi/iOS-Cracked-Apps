//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserEnhancedViewContoller.h"

#import "QUIAlertViewDelegate.h"

@class NSString;

@interface UserSummaryPhotosWallBrowserViewContoller : PhotoBrowserEnhancedViewContoller <QUIAlertViewDelegate>
{
    _Bool _shouldShowDeleteTips;
    id <UserSummaryPhotosWallBrowserViewContollerDelegate> _delegate;
    long long _uin;
}

@property(nonatomic) _Bool shouldShowDeleteTips; // @synthesize shouldShowDeleteTips=_shouldShowDeleteTips;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) __weak id <UserSummaryPhotosWallBrowserViewContollerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)deleteCurrentPhoto;
- (id)getToolbarItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

