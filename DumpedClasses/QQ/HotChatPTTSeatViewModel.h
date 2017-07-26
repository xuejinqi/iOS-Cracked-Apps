//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HCPttSeatModel, NSArray, NSString, QQAvatarView, UIColor, UILabel, UITableView;

@interface HotChatPTTSeatViewModel : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isGirl;
    _Bool _isHighLighted;
    _Bool _isAuthenUser;
    id <HotChatPTTSeatMenuViewDelegate> _delegate;
    HCPttSeatModel *_seatModel;
    unsigned long long _seatState;
    NSString *_uin;
    QQAvatarView *_avatarView;
    UITableView *_menuView;
    NSString *_prompt;
    UILabel *_ownerLabel;
    UIColor *_highLightColor;
    NSArray *_menuDataSource;
}

@property(retain, nonatomic) NSArray *menuDataSource; // @synthesize menuDataSource=_menuDataSource;
@property(nonatomic) _Bool isAuthenUser; // @synthesize isAuthenUser=_isAuthenUser;
@property(retain, nonatomic) UIColor *highLightColor; // @synthesize highLightColor=_highLightColor;
@property(nonatomic) _Bool isHighLighted; // @synthesize isHighLighted=_isHighLighted;
@property(nonatomic) _Bool isGirl; // @synthesize isGirl=_isGirl;
@property(retain, nonatomic) UILabel *ownerLabel; // @synthesize ownerLabel=_ownerLabel;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) UITableView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) QQAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) unsigned long long seatState; // @synthesize seatState=_seatState;
@property(retain, nonatomic) HCPttSeatModel *seatModel; // @synthesize seatModel=_seatModel;
@property(nonatomic) __weak id <HotChatPTTSeatMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)configOwnerLabel;
- (void)configAvatarView;
- (void)setMenuDataSourceWithSeatModel:(id)arg1;
- (void)setSeatStateWithSeatModel:(id)arg1;
- (void)initStaticData;
- (id)initWithSeatModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

