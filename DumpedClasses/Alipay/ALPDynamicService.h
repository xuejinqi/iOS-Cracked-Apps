//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface ALPDynamicService : NSObject
{
    _Bool _launching;
    NSString *_currentCode;
    NSString *_passId;
    NSMutableArray *_callBacks;
}

@property(retain, nonatomic) NSMutableArray *callBacks; // @synthesize callBacks=_callBacks;
@property(nonatomic) _Bool launching; // @synthesize launching=_launching;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(retain, nonatomic) NSString *currentCode; // @synthesize currentCode=_currentCode;
- (void).cxx_destruct;
- (void)fetchLocalCode;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateCode:(id)arg1 error:(id)arg2;
- (void)startWithPassId:(id)arg1;
- (void)dealloc;
- (id)init;

@end

