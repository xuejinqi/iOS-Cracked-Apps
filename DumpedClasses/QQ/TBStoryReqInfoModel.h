//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBStoryReqInfoModel : NSObject
{
    unsigned int _needUserInfo;
    unsigned long long _uid;
    NSString *_unionID;
}

@property(nonatomic) unsigned int needUserInfo; // @synthesize needUserInfo=_needUserInfo;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
- (void)dealloc;
- (id)init;

@end

