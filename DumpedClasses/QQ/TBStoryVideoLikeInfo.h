//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface TBStoryVideoLikeInfo : QQModel
{
    unsigned int _role;
    unsigned long long _uid;
    NSString *_nick;
    unsigned long long _like_time;
    NSString *_union_id;
}

+ (id)createWithQQStory:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *union_id; // @synthesize union_id=_union_id;
@property(nonatomic) unsigned int role; // @synthesize role=_role;
@property(nonatomic) unsigned long long like_time; // @synthesize like_time=_like_time;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
- (void)dealloc;
- (_Bool)isValid;

@end

