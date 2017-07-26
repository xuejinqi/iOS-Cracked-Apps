//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, QQGroupModel, UIImage;

@interface FriendListHeaderModel : NSObject
{
    UIImage *_icon;
    _Bool _bHideIcon;
    NSString *_title;
    NSString *_subTitle;
    int onlineNum;
    int allNum;
    long long _section;
    _Bool _expand;
    _Bool _bLastExpand;
    _Bool _isEntry;
    _Bool _isForceEntry;
    _Bool _isNew;
    int _identifyID;
    NSMutableArray *_cellDataList;
    QQGroupModel *_groupModel;
    _Bool _bUpdating;
    float _upProcess;
    int _onlineNum;
    int _allNum;
    int _unreadNum;
}

+ (id)createFriendsGroupHeaderModel;
+ (id)createPublicAcountHeaderModel;
@property int unreadNum; // @synthesize unreadNum=_unreadNum;
@property float upProcess; // @synthesize upProcess=_upProcess;
@property _Bool bUpdating; // @synthesize bUpdating=_bUpdating;
@property int allNum; // @synthesize allNum=_allNum;
@property int onlineNum; // @synthesize onlineNum=_onlineNum;
@property int identifyID; // @synthesize identifyID=_identifyID;
@property(retain, nonatomic) QQGroupModel *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) NSMutableArray *cellDataList; // @synthesize cellDataList=_cellDataList;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property long long section; // @synthesize section=_section;
@property _Bool isNew; // @synthesize isNew=_isNew;
@property _Bool isForceEntry; // @synthesize isForceEntry=_isForceEntry;
@property _Bool isEntry; // @synthesize isEntry=_isEntry;
@property _Bool lastExpand; // @synthesize lastExpand=_bLastExpand;
@property(nonatomic) _Bool expand; // @synthesize expand=_expand;
@property(nonatomic) _Bool bHideIcon; // @synthesize bHideIcon=_bHideIcon;
- (void)dealloc;
- (id)init;

@end

