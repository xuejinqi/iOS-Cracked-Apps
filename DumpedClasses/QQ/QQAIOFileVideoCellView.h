//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOFileImageCellView.h"

#import "UIAlertViewDelegate.h"

@class NSString, QQAIOFilleVideoModel, QQAIOVideoCellPlayBtnView, UIImageView, UIWindow;

@interface QQAIOFileVideoCellView : QQAIOFileImageCellView <UIAlertViewDelegate>
{
    UIImageView *_refreshView;
    UIWindow *_maskView;
    _Bool _showAlert;
    QQAIOFilleVideoModel *_fVideoModel;
    QQAIOVideoCellPlayBtnView *_buttonView;
}

- (void)showPlayButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showRefreshView:(_Bool)arg1;
- (void)updateUI:(_Bool)arg1;
- (void)updateThumbView;
- (void)loadThumb;
- (void)removeMaskView;
- (void)showVideoPlayerInController:(id)arg1;
- (void)onVideoBubbleClick:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cellDidClick:(struct CGPoint)arg1 inViewController:(id)arg2;
- (void)onThumbnailDone:(_Bool)arg1;
- (void)onStatusChange:(id)arg1;
- (void)prepareForReuse;
- (_Bool)shouldDisplayMsgSendFail;
- (void)willDrawBubble;
- (_Bool)shouldDrawTail;
- (_Bool)showFileSize;
- (void)setAioModel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

