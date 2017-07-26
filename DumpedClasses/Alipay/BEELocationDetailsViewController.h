//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APNaviViewController.h"

#import "UIActionSheetDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, UIView;

@interface BEELocationDetailsViewController : APNaviViewController <UIActionSheetDelegate>
{
    NSDictionary *_msgInfo;
    NSString *_imageIdentifier;
    NSString *_name;
    NSString *_address;
    UIView *_actionSheet;
    id <BEELocationDetailsProtocol> _socialPlugin;
    NSMutableDictionary *_socialParams;
    struct CLLocationCoordinate2D _location;
}

@property(retain, nonatomic) NSMutableDictionary *socialParams; // @synthesize socialParams=_socialParams;
@property(retain, nonatomic) id <BEELocationDetailsProtocol> socialPlugin; // @synthesize socialPlugin=_socialPlugin;
@property(nonatomic) __weak UIView *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(retain, nonatomic) NSDictionary *msgInfo; // @synthesize msgInfo=_msgInfo;
- (void).cxx_destruct;
- (_Bool)shouldHideRealTimeLocationShareButton;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onBackToOrignialPosition;
- (void)onSendToFriend;
- (void)onAddToFavorite;
- (void)onShareLocationRealTime:(id)arg1;
- (void)onRightBarBtnClick:(id)arg1;
- (id)generateLocationDict;
- (void)viewDidLoad;
- (void)regPlugin;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

