//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, UIWindow;

@interface QQYPC2bGlobalWin : NSObject
{
    UIWindow *_theWin;
    UIViewController *_curBottomController;
}

+ (id)getInstance;
- (void)notifyControllerDestroy:(id)arg1;
- (id)topController;
- (void)showController:(id)arg1;
- (void)hideCurController;
- (void)onNewAVComming:(id)arg1;
- (void)onChatFinish:(id)arg1;
- (void)onGobackToVideo:(id)arg1;
- (id)init;

@end

