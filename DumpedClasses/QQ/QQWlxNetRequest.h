//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface QQWlxNetRequest : NSObject
{
    int _reqErr;
    id <QQWlxNetWorkRequestDelegate> _networkDelegate;
    NSDictionary *_optParam;
    id _session;
}

@property(nonatomic) int reqErr; // @synthesize reqErr=_reqErr;
@property(retain, nonatomic) id session; // @synthesize session=_session;
@property(retain, nonatomic) NSDictionary *optParam; // @synthesize optParam=_optParam;
@property(nonatomic) id <QQWlxNetWorkRequestDelegate> networkDelegate; // @synthesize networkDelegate=_networkDelegate;
- (void)dealloc;
- (id)init;

@end

