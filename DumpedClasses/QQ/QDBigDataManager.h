//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableDictionary, NSString;

@interface QDBigDataManager : NSObject
{
    NSData *_sig;
    NSMutableArray *_serverList;
    unsigned long long _ipSetSuggest;
    NSString *_key;
    NSMutableDictionary *_isPubQidianAccount;
    NSMutableDictionary *_pubKfuin;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableDictionary *pubKfuin; // @synthesize pubKfuin=_pubKfuin;
@property(retain, nonatomic) NSMutableDictionary *isPubQidianAccount; // @synthesize isPubQidianAccount=_isPubQidianAccount;
- (id)parseBigDataResponseData:(id)arg1 cmd:(unsigned int)arg2 subcmd:(unsigned int)arg3;
- (id)getReqDataWithCmd:(unsigned int)arg1 subcmd:(unsigned int)arg2 args:(id)arg3;
- (_Bool)parseRespData:(char *)arg1 size:(unsigned long long)arg2 outDataHead:(id *)arg3 outDataBody:(id *)arg4;
- (id)getBigDataReqWithData:(id)arg1 cmd:(unsigned int)arg2 subcmd:(unsigned int)arg3;
- (id)getCurrentAIO;
- (void)showNaviMsg:(id)arg1 needShow:(_Bool)arg2;
- (void)naviMsgReturnSucc:(id)arg1 userInfo:(id)arg2;
- (void)requestNaviMsg:(id)arg1;
- (id)link;
- (id)serverList;
- (id)key;
- (id)sig;
- (void)dealloc;
- (id)init;

@end

