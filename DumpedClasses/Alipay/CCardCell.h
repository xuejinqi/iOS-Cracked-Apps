//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MFCell.h"

#import "UIActionSheetDelegate.h"

@class AUActionSheet, NSMutableArray, NSString;

@interface CCardCell : MFCell <UIActionSheetDelegate>
{
    id <CCardAccessibilityProtocol> _accessibilityDelegate;
    AUActionSheet *_actionSheet;
    NSMutableArray *_voiceOverMenus;
}

@property(retain, nonatomic) NSMutableArray *voiceOverMenus; // @synthesize voiceOverMenus=_voiceOverMenus;
@property(retain, nonatomic) AUActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) __weak id <CCardAccessibilityProtocol> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)accessibilityPerformMagicTap;
- (id)cardDetailAccessibilityLabelWithTplId:(id)arg1;
- (id)cardAccessibilityLabel;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)setupUI;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

