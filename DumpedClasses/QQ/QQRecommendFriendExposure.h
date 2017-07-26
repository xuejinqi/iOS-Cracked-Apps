//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQRecommendFriendExposure : NSObject
{
    unsigned int _pageID;
    unsigned int _entranceID;
    unsigned int _actionID;
    unsigned int _exposeCount;
    unsigned long long _myUin;
    unsigned long long _uin;
    double _exposeDuration;
    NSString *_cookies;
}

+ (id)exposureWithMyUin:(unsigned long long)arg1 uin:(unsigned long long)arg2 pageID:(unsigned int)arg3 entranceID:(unsigned int)arg4 actionID:(unsigned int)arg5 exposeCount:(unsigned int)arg6 exposeDuration:(double)arg7 cookies:(id)arg8;
@property(copy, nonatomic) NSString *cookies; // @synthesize cookies=_cookies;
@property(nonatomic) double exposeDuration; // @synthesize exposeDuration=_exposeDuration;
@property(nonatomic) unsigned int exposeCount; // @synthesize exposeCount=_exposeCount;
@property(nonatomic) unsigned int actionID; // @synthesize actionID=_actionID;
@property(nonatomic) unsigned int entranceID; // @synthesize entranceID=_entranceID;
@property(nonatomic) unsigned int pageID; // @synthesize pageID=_pageID;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
@property(nonatomic) unsigned long long myUin; // @synthesize myUin=_myUin;
- (void).cxx_destruct;

@end

