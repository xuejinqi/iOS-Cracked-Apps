//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PPChatAttributeParam : NSObject
{
    id _ofObject;
    NSDictionary *_change;
    void *_context;
}

@property(nonatomic) void *context; // @synthesize context=_context;
@property(retain, nonatomic) NSDictionary *change; // @synthesize change=_change;
@property(retain, nonatomic) id ofObject; // @synthesize ofObject=_ofObject;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init:(id)arg1 change:(id)arg2 context:(void *)arg3;

@end

