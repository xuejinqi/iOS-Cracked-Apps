//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "IQSContactsEngineObserver.h"
#import "QUIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString;

@interface QQContactsCheckDetailViewController : QQViewController <QUIActionSheetDelegate, UIAlertViewDelegate, IQSContactsEngineObserver>
{
    id <IQSContactsEngine> _contactsEngine;
    int _entry;
}

@property(nonatomic) int entry; // @synthesize entry=_entry;
- (void)notifyDisableMobileBind:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)rightButtonPress:(id)arg1;
- (void)actionCheck:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

