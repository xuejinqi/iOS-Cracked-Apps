//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APSimpleProfileViewController.h"

@class NSString;

@interface APAddFriendProfileViewController : APSimpleProfileViewController
{
    int _addFriendStatus;
    long long _statusBarStyle;
    NSString *_source;
}

+ (id)generateDescFromContactInfo:(id)arg1;
+ (_Bool)checkIsContactInfoComplete:(id)arg1;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) int addFriendStatus; // @synthesize addFriendStatus=_addFriendStatus;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (void).cxx_destruct;
- (long long)customStatusBarStytle;
- (void)showFailedToast:(int)arg1 errorMessage:(id)arg2;
- (void)onAddFriend;
- (id)makeCustomView;
- (void)reloadButtons;
- (id)initWithContactInfo:(id)arg1 params:(id)arg2;

@end

