//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NearbyPersonInfo;

@interface NFDUpdateInfo : NSObject
{
    unsigned long long _updateType;
    NearbyPersonInfo *_userProfile;
}

+ (id)updateInfoWithUpdateType:(unsigned long long)arg1 userProfile:(id)arg2;
@property(retain, nonatomic) NearbyPersonInfo *userProfile; // @synthesize userProfile=_userProfile;
@property(nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;
- (void).cxx_destruct;

@end

