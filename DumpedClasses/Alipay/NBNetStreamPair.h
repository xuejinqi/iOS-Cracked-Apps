//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NBNetStreamPair : NSObject
{
    struct __CFReadStream *_rstream;
    struct __CFWriteStream *_wstream;
}

@property(nonatomic) struct __CFWriteStream *wstream; // @synthesize wstream=_wstream;
@property(nonatomic) struct __CFReadStream *rstream; // @synthesize rstream=_rstream;
- (void)clear;
- (id)init;

@end

