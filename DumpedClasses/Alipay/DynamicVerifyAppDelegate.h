//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTMicroApplicationDelegate.h"

@class APDynamicDeploymentBandageInteraction, APDynamicDeploymentBirdNestInteraction, APDynamicDeploymentBundleInteraction, APKoubeiResourceInteraction, NSString, UIViewController;

@interface DynamicVerifyAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    UIViewController *_rootController;
    APDynamicDeploymentBandageInteraction *_bandageInteraction;
    APDynamicDeploymentBirdNestInteraction *_birdNestInteraction;
    APDynamicDeploymentBundleInteraction *_bundleInteraction;
    APKoubeiResourceInteraction *_koubeiInteraction;
}

@property(retain, nonatomic) APKoubeiResourceInteraction *koubeiInteraction; // @synthesize koubeiInteraction=_koubeiInteraction;
@property(retain, nonatomic) APDynamicDeploymentBundleInteraction *bundleInteraction; // @synthesize bundleInteraction=_bundleInteraction;
@property(retain, nonatomic) APDynamicDeploymentBirdNestInteraction *birdNestInteraction; // @synthesize birdNestInteraction=_birdNestInteraction;
@property(retain, nonatomic) APDynamicDeploymentBandageInteraction *bandageInteraction; // @synthesize bandageInteraction=_bandageInteraction;
@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)handleDynamicVerifyParams:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

