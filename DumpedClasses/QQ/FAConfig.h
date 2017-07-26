//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class IEngineDispatchDelegateNonRetian, NSMutableDictionary, NSString;

@interface FAConfig : NSObject <IEngineDispatchDelegate>
{
    unsigned long long _selfUin;
    NSMutableDictionary *_taskMap;
    IEngineDispatchDelegateNonRetian *_csDelegate;
    _Bool _isBlockFace2Face;
}

+ (id)getInstance;
- (void)showBlockFace2FaceTips;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)changeAccount;
- (void)requestFace2FaceSafeFlag;
- (void)onTaskTimeout:(id)arg1;
- (void)resetTaskTimer:(int)arg1;
- (id)startTaskTimer:(int)arg1;
- (_Bool)isBlockFace2Face;
- (void)dealloc;
- (void)onLoginSuccess;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

