//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OBJForStoker : NSObject
{
    _Bool _allEn;
    long long _loc;
    long long _len;
    NSString *_str;
}

+ (id)codeTokenizer:(id)arg1 len:(int)arg2;
@property(retain, nonatomic) NSString *str; // @synthesize str=_str;
@property _Bool allEn; // @synthesize allEn=_allEn;
@property long long len; // @synthesize len=_len;
@property long long loc; // @synthesize loc=_loc;
- (void).cxx_destruct;
- (id)copy;
- (id)newObject;
- (_Bool)checkLastCharEn:(id)arg1;
- (id)description;
- (id)init;

@end

