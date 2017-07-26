//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBGetData.h"

@class NSString;

@interface TBReqRecordZombieRead : NSObject <ITBPBGetData>
{
    unsigned long long *_uid;
    NSString *_unionID;
    unsigned long long _newestVideoTs;
}

@property(nonatomic) unsigned long long newestVideoTs; // @synthesize newestVideoTs=_newestVideoTs;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) unsigned long long *uid; // @synthesize uid=_uid;
- (id)getRequestPBData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

