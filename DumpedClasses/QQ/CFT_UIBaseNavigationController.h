//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQNavigationController.h"

@class UIViewController;

@interface CFT_UIBaseNavigationController : QQNavigationController
{
    int _scene;
    UIViewController *_presentFromViewController;
}

@property(nonatomic) UIViewController *presentFromViewController; // @synthesize presentFromViewController=_presentFromViewController;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)dealloc;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)setSceneValue:(id)arg1;
- (id)init;

@end

