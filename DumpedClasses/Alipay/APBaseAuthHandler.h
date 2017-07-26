//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AUDialogDelegate.h"

@class AUImageDialog, NSString, UIImage;

@interface APBaseAuthHandler : NSObject <AUDialogDelegate>
{
    _Bool _isShowing;
    CDUnknownBlockType _callback;
    NSString *_customTitleOption;
    NSString *_customDescriptionOption;
    NSString *_customDescriptionOptionCannotGo;
    UIImage *_customImageGuideOption;
    NSString *_customImageURLGuideOption;
    NSString *_bizType;
    AUImageDialog *_dialogView;
}

@property(retain, nonatomic) AUImageDialog *dialogView; // @synthesize dialogView=_dialogView;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *customImageURLGuideOption; // @synthesize customImageURLGuideOption=_customImageURLGuideOption;
@property(retain, nonatomic) UIImage *customImageGuideOption; // @synthesize customImageGuideOption=_customImageGuideOption;
@property(retain, nonatomic) NSString *customDescriptionOptionCannotGo; // @synthesize customDescriptionOptionCannotGo=_customDescriptionOptionCannotGo;
@property(retain, nonatomic) NSString *customDescriptionOption; // @synthesize customDescriptionOption=_customDescriptionOption;
@property(retain, nonatomic) NSString *customTitleOption; // @synthesize customTitleOption=_customTitleOption;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (id)legacyBiztypeWhiteList;
- (void)handleLegacyBiz:(id)arg1;
- (void)dismiss;
- (void)writeLogWithBizType:(id)arg1 andOperation:(id)arg2;
- (long long)authType;
- (_Bool)isTextBlank:(id)arg1;
- (void)dialogView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doShowDialog:(id)arg1 image:(id)arg2 withDescription:(id)arg3 andButtonTitle:(id)arg4;
- (void)doShowTip:(id)arg1 image:(id)arg2 withDescription:(id)arg3;
- (void)doShowGuide:(id)arg1 image:(id)arg2 withDescription:(id)arg3;
- (void)doShow:(id)arg1 image:(id)arg2 withDescription:(id)arg3 andCannotGoDesc:(id)arg4;
- (void)resolveOptions:(id)arg1;
- (_Bool)isGuideShowing;
- (long long)guideNecessaryState;
- (_Bool)openSettingPage;
- (_Bool)canOpenSettingPage;
- (_Bool)tryToShowGuideWithBizType:(id)arg1 options:(id)arg2 andCallback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

