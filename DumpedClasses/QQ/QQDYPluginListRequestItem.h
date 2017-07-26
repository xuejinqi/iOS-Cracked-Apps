//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSArray;

@interface QQDYPluginListRequestItem : SAMRequestItem
{
    int _reqEventSource;
    NSArray *_pluginReqList;
}

@property(nonatomic) int reqEventSource; // @synthesize reqEventSource=_reqEventSource;
@property(retain, nonatomic) NSArray *pluginReqList; // @synthesize pluginReqList=_pluginReqList;
- (void).cxx_destruct;
- (id)fetchPluginIdsFrom:(id)arg1;
- (id)fetchPluginWithPluginId:(int)arg1;
- (id)parseStringFromStdString:(basic_string_075b6133)arg1;
- (void)parseQQDYPluginInfo:(id)arg1 forRsp:(const struct SubCmd_DynamicItem_Resp *)arg2;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

@end

