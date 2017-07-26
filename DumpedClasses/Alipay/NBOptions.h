//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NBOptionsProtocol.h"

@class NSString;

@interface NBOptions : NSObject <NBOptionsProtocol>
{
    _Bool showTitleBar;
    _Bool showToolBar;
    _Bool showLoading;
    _Bool readTitle;
    _Bool pullRefresh;
    _Bool showProgress;
    _Bool gestureBack;
    _Bool canPullDown;
    _Bool showOptionMenu;
    _Bool showTitleLoading;
    _Bool showDomain;
    _Bool showStatusBar;
    _Bool fullscreen;
    _Bool enableJSC;
    NSString *nbl_id;
    NSString *url;
    NSString *defaultTitle;
    NSString *closeButtonText;
    NSString *bizScenario;
    NSString *backBehavior;
    NSString *toolbarMenu;
    NSString *defaultSubtitle;
    long long backgroundColor;
    NSString *titleImage;
    NSString *landscape;
    NSObject *customParams;
}

@property(retain, nonatomic) NSObject *customParams; // @synthesize customParams;
@property(nonatomic) _Bool enableJSC; // @synthesize enableJSC;
@property(copy, nonatomic) NSString *landscape; // @synthesize landscape;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen;
@property(copy, nonatomic) NSString *titleImage; // @synthesize titleImage;
@property(nonatomic) _Bool showStatusBar; // @synthesize showStatusBar;
@property(nonatomic) _Bool showDomain; // @synthesize showDomain;
@property(nonatomic) _Bool showTitleLoading; // @synthesize showTitleLoading;
@property(nonatomic) _Bool showOptionMenu; // @synthesize showOptionMenu;
@property(nonatomic) _Bool canPullDown; // @synthesize canPullDown;
@property(nonatomic) _Bool gestureBack; // @synthesize gestureBack;
@property(nonatomic) long long backgroundColor; // @synthesize backgroundColor;
@property(copy, nonatomic) NSString *defaultSubtitle; // @synthesize defaultSubtitle;
@property(nonatomic) _Bool showProgress; // @synthesize showProgress;
@property(copy, nonatomic) NSString *toolbarMenu; // @synthesize toolbarMenu;
@property(nonatomic) _Bool pullRefresh; // @synthesize pullRefresh;
@property(copy, nonatomic) NSString *backBehavior; // @synthesize backBehavior;
@property(copy, nonatomic) NSString *bizScenario; // @synthesize bizScenario;
@property(nonatomic) _Bool readTitle; // @synthesize readTitle;
@property(copy, nonatomic) NSString *closeButtonText; // @synthesize closeButtonText;
@property(nonatomic) _Bool showLoading; // @synthesize showLoading;
@property(nonatomic) _Bool showToolBar; // @synthesize showToolBar;
@property(nonatomic) _Bool showTitleBar; // @synthesize showTitleBar;
@property(copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle;
@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(copy, nonatomic) NSString *nbl_id; // @synthesize nbl_id;
- (void).cxx_destruct;
- (id)nbNormalize:(id)arg1;
- (id)initWithOptions:(id)arg1 overrides:(id)arg2;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

