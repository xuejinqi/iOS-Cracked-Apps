//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatBaseController.h"

#import "PPChatFollowDataDelegate.h"
#import "PPChatMessageAddViewDelegate.h"

@class NSString, PPChatDataController, PPChatMessageAddView, PPChatPublicAccount;

@interface PPChatFollowController : PPChatBaseController <PPChatMessageAddViewDelegate, PPChatFollowDataDelegate>
{
    NSString *_publicId;
    NSString *_followType;
    PPChatPublicAccount *_publicAccount;
    PPChatMessageAddView *_publicAddView;
    PPChatDataController *_dataController;
    struct CGRect _addViewFrame;
}

@property(nonatomic) struct CGRect addViewFrame; // @synthesize addViewFrame=_addViewFrame;
@property(retain, nonatomic) PPChatDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) PPChatMessageAddView *publicAddView; // @synthesize publicAddView=_publicAddView;
@property(nonatomic) __weak PPChatPublicAccount *publicAccount; // @synthesize publicAccount=_publicAccount;
@property(retain, nonatomic) NSString *followType; // @synthesize followType=_followType;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;
- (void)settingsDataRequestStopFollowFailWithError:(id)arg1;
- (void)settingsDataDidStopFollow;
- (void)settingsDataAddFollowFailWithError:(id)arg1;
- (void)settingsDataDidAddFollow;
- (void)addButtonDidCicked:(id)arg1;
- (void)showWithPublicAccount:(id)arg1;
- (void)controlClear;
- (void)showWithControllerParam:(id)arg1;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (double)heightOfView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

