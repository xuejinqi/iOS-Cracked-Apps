//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSString;

@interface APBNDispatchEventHandler : NSObject
{
    NSString *_eventName;
    NSMapTable *_pageHandlerMap;
    NSMapTable *_sessionHandlerMap;
    NSMapTable *_serviceHandlerMap;
}

@property(retain, nonatomic) NSMapTable *serviceHandlerMap; // @synthesize serviceHandlerMap=_serviceHandlerMap;
@property(retain, nonatomic) NSMapTable *sessionHandlerMap; // @synthesize sessionHandlerMap=_sessionHandlerMap;
@property(retain, nonatomic) NSMapTable *pageHandlerMap; // @synthesize pageHandlerMap=_pageHandlerMap;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (id)initWithEventName:(id)arg1;

@end

