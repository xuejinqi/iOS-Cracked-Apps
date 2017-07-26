//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APStrangerInfo.h"

#import "NSCopying.h"

@class NSString, NearbyCommonLabel, RichStateModel;

@interface NMPublisherInfo : APStrangerInfo <NSCopying>
{
    NSString *_distance;
    unsigned int _showLoveStatus;
    unsigned int _showLoveCount;
    _Bool _isSpecialAccount;
    _Bool _isPublicUser;
    int _xo;
    _Bool _isHistory;
    _Bool _isFollowed;
    int _visitorTime;
    NearbyCommonLabel *_commonLabel;
    long long _uin;
    RichStateModel *_richStateModel;
}

@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) _Bool isHistory; // @synthesize isHistory=_isHistory;
@property(retain, nonatomic) RichStateModel *richStateModel; // @synthesize richStateModel=_richStateModel;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
@property(nonatomic) int visitorTime; // @synthesize visitorTime=_visitorTime;
@property(retain, nonatomic) NearbyCommonLabel *commonLabel; // @synthesize commonLabel=_commonLabel;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *distance; // @dynamic distance;
@property(nonatomic) _Bool isPublicUser; // @dynamic isPublicUser;
@property(nonatomic) _Bool isSpecialAccount; // @dynamic isSpecialAccount;
@property(nonatomic) unsigned int showLoveCount; // @dynamic showLoveCount;
@property(nonatomic) unsigned int showLoveStatus; // @dynamic showLoveStatus;

@end

