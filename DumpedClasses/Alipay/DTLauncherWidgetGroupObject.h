//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTLauncherWidgetGroup.h"

@class NSString;

@interface DTLauncherWidgetGroupObject : NSObject <DTLauncherWidgetGroup>
{
    id <DTLauncher> _launcher;
    NSString *_name;
    NSString *_tabBarItemTitleKey;
    NSString *_tabBarItemImage;
    NSString *_tabBarItemSelectedImage;
}

@property(copy, nonatomic) NSString *tabBarItemSelectedImage; // @synthesize tabBarItemSelectedImage=_tabBarItemSelectedImage;
@property(copy, nonatomic) NSString *tabBarItemImage; // @synthesize tabBarItemImage=_tabBarItemImage;
@property(copy, nonatomic) NSString *tabBarItemTitleKey; // @synthesize tabBarItemTitleKey=_tabBarItemTitleKey;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <DTLauncher> launcher; // @synthesize launcher=_launcher;
- (void).cxx_destruct;
- (id)contentViewController;
- (void)refresh;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

