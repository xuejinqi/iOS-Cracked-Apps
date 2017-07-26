//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "MulMemSelBusiProcessDelegate.h"
#import "QQFriendSelectedViewControllerDelegate.h"

@class NSString;

@interface QQFriendInfoWebViewPlugin : QQWebViewPluginQQBizBase <QQFriendSelectedViewControllerDelegate, MulMemSelBusiProcessDelegate>
{
    int _mode;
    NSString *_callBack;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *callBack; // @synthesize callBack=_callBack;
- (_Bool)handleJsBridgeRequest_friendData_selectedFriendInfo:(id)arg1;
- (void)openQQFriendViewController:(id)arg1;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (_Bool)friendSelectedViewController:(id)arg1 didSelectFriend:(id)arg2 type:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

