//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBGetData.h"

@class NSArray, NSString;

@interface TBReqBatchFeedComment : NSObject <ITBPBGetData>
{
    unsigned int _source;
    unsigned int _type;
    NSArray *_feedIDList;
}

@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray *feedIDList; // @synthesize feedIDList=_feedIDList;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getRequestPBData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

