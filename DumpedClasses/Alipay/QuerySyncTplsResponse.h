//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSMutableArray, NSString;

@interface QuerySyncTplsResponse : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    NSMutableArray *_templateJsonList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *templateJsonList; // @synthesize templateJsonList=_templateJsonList;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addTemplateJsonList:(id)arg1;
- (void)setTemplateJsonListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

