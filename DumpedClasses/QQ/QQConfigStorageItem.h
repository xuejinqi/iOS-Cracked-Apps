//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQConfigStorageItem : NSObject
{
    _Bool _changed;
    unsigned int _length;
    NSString *_key;
    id _value;
}

@property(nonatomic) _Bool changed; // @synthesize changed=_changed;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)dealloc;

@end

