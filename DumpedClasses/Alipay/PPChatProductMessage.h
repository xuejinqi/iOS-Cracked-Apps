//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatMessage.h"

@class NSArray;

@interface PPChatProductMessage : PPChatMessage
{
    NSArray *_productItems;
    unsigned long long _displayStyle;
}

@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(retain, nonatomic) NSArray *productItems; // @synthesize productItems=_productItems;
- (void).cxx_destruct;
- (id)actionParam;
- (id)actionType;
- (_Bool)hasAction;
- (id)init;

@end

