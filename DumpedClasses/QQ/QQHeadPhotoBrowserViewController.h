//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserBaseViewContoller.h"

@class NSString;

@interface QQHeadPhotoBrowserViewController : PhotoBrowserBaseViewContoller
{
    NSString *_uin;
    int _userType;
    _Bool _isDynamic;
    _Bool _needMoreAction;
}

@property(nonatomic) _Bool needMoreAction; // @synthesize needMoreAction=_needMoreAction;
- (void)onSaveToAlbumRetNotify:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)getToolbarItems;
- (void)popupMenu;
- (void)setPhotoCount:(int)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithUin:(id)arg1 userType:(int)arg2 isDynamicAvatar:(_Bool)arg3;
- (id)initWithUin:(id)arg1 userType:(int)arg2;

@end

