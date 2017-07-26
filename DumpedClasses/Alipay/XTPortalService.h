//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XTPortalService.h"

@class NSMutableDictionary, NSString, XTPortalInfo;

@interface XTPortalService : NSObject <XTPortalService>
{
    XTPortalInfo *_portalInfo;
    NSMutableDictionary *_tagInfo;
    NSString *_lastTagId;
}

@property(retain, nonatomic) NSString *lastTagId; // @synthesize lastTagId=_lastTagId;
@property(retain, nonatomic) NSMutableDictionary *tagInfo; // @synthesize tagInfo=_tagInfo;
@property(retain, nonatomic) XTPortalInfo *portalInfo; // @synthesize portalInfo=_portalInfo;
- (void).cxx_destruct;
- (void)onExitUser:(id)arg1;
- (void)removeTagIdForApp:(id)arg1;
- (id)currentTagId;
- (id)getTagIdForApp:(id)arg1;
- (void)setTagId:(id)arg1 forApp:(id)arg2;
- (id)sessionIdForDomain:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

