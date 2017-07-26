//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAsyncCallbackProtocol.h"
#import "IQQDBOperationBase.h"

@class NSString;

@interface FTSTokenizerManager : NSObject <IQQDBOperationBase, DBAsyncCallbackProtocol>
{
    id <FMTokenizerDelegate> _ftsDefaultToken;
    id <FMTokenizerDelegate> _ftsMsgToken;
    id <FMTokenizerDelegate> _ftsTroopMemToken;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (unsigned long long)getTableSign;
- (_Bool)_ormRegisterTokenizer:(id)arg1;
- (_Bool)_ormInitialIndexDB:(id)arg1;
- (_Bool)_registerTokenizerToQQDb:(id)arg1;
- (_Bool)_registerTokenizerToFTSDb:(id)arg1;
- (_Bool)ftsRegistTokenizerToQQDb;
- (void)ftsRegistDefaultTokenizer:(id)arg1 inDb:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

