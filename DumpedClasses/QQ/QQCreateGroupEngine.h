//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQCreateGroupEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_SeqToSubcmdDict;
}

+ (id)shareInstance;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (_Bool)findReqSubcmd:(unsigned int *)arg1 withSeq:(unsigned int)arg2;
- (_Bool)discussConvertToGroup:(unsigned long long)arg1;
- (_Bool)createGroup:(id)arg1;
- (_Bool)createGroupWithPreallocatedGroupCode:(id)arg1 sign:(id)arg2 seq:(int *)arg3;
- (_Bool)createGroupWithPreallocatedGroupCode:(id)arg1 sign:(id)arg2;
- (_Bool)requestCreateGroupInfo:(unsigned long long)arg1;
- (_Bool)request:(unsigned int)arg1 seq:(int *)arg2 withReqData:(CDUnknownBlockType)arg3;
- (_Bool)request:(unsigned int)arg1 withReqData:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

