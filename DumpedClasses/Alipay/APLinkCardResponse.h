//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APLinkCardResponse : NSObject
{
    CDUnknownBlockType _callback;
    id _owner;
    NSString *_link;
}

@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(nonatomic) __weak id owner; // @synthesize owner=_owner;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;

@end

