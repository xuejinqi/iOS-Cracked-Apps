//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FavRichTextElem : NSObject
{
    long long _index;
    long long _length;
    NSString *_content;
}

+ (id)parseElem:(id)arg1 range:(struct _NSRange)arg2;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long length; // @synthesize length=_length;
@property(nonatomic) long long index; // @synthesize index=_index;
- (id)toString;
- (void)dealloc;

@end

