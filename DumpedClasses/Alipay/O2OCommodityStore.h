//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZFluxStore.h"

@class NSDictionary, UIViewController;

@interface O2OCommodityStore : VZFluxStore
{
    _Bool _followChecked;
    NSDictionary *_buttonState;
    UIViewController *_viewController;
}

@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSDictionary *buttonState; // @synthesize buttonState=_buttonState;
@property(readonly, nonatomic) _Bool followChecked; // @synthesize followChecked=_followChecked;
- (void).cxx_destruct;
- (void)onDispatch:(const struct FluxAction *)arg1;
- (id)initWithDispatcher:(id)arg1 detail:(id)arg2 viewController:(id)arg3;

@end

