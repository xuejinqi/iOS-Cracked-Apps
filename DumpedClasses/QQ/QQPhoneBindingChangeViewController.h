//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "IQSContactsEngineObserver.h"
#import "UIActionSheetDelegate.h"

@class NSString;

@interface QQPhoneBindingChangeViewController : QQViewController <UIActionSheetDelegate, IQSContactsEngineObserver>
{
    NSString *_phoneCode;
    _Bool _cancelBindingForChanging;
    id <IQSContactsEngine> _contactsEngine;
}

@property(retain, nonatomic) id <IQSContactsEngine> contactsEngine; // @synthesize contactsEngine=_contactsEngine;
- (void)notifyUploadContacts:(id)arg1;
- (void)notifyCancelBinding:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)changeButtonClicked;
- (void)rightBarButtonClicked;
- (struct CGSize)addIcon:(id)arg1 andTitle:(id)arg2 toParentView:(id)arg3 atPointX:(double)arg4;
- (void)loadView;
- (void)dealloc;
- (id)initWithPhoneCode:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

