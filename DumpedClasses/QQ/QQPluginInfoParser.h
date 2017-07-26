//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQPluginInfoParser : NSObject <NSXMLParserDelegate>
{
    NSMutableDictionary *pluginConfig;
    NSString *pluginConfigKey;
}

@property(retain, nonatomic) NSString *pluginConfigKey; // @synthesize pluginConfigKey;
@property(retain, nonatomic) NSMutableDictionary *pluginConfig; // @synthesize pluginConfig;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parserDidStartDocument:(id)arg1;
- (id)parseFromPbResponse:(const struct PluginInfo *)arg1;
- (id)parseFromResponse:(struct GetResourceRespInfo *)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

