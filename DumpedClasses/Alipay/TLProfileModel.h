//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TLProfileModel : NSObject
{
    _Bool _canReward;
    NSString *_gender;
    NSString *_headUrl;
}

@property(nonatomic) _Bool canReward; // @synthesize canReward=_canReward;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
- (void).cxx_destruct;
- (void)reloadWithFeed:(id)arg1;

@end

