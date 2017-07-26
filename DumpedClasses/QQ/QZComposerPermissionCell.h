//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MQZoneMoodEditPermissionCell, NSDictionary, QZMoodComposeViewPresenter, UIViewController;

@interface QZComposerPermissionCell : UITableViewCell
{
    QZMoodComposeViewPresenter *_viewModel;
    MQZoneMoodEditPermissionCell *_button;
    NSDictionary *_params;
    UIViewController *_hostViewController;
}

@property(nonatomic) __weak UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (void).cxx_destruct;
- (id)onGetJSBridgeParams;
- (void)openUgcPermission;
- (void)onSetJSBridgeParams:(id)arg1;
- (void)enterPermissionSelectView;
- (void)resetPermissionCellInfo;
- (id)initWithViewModel:(id)arg1;

@end

