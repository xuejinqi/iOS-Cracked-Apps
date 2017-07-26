//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface SubscribeRecmdInfoVO : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPublicId;
    _Bool _hasIcon;
    _Bool _hasName;
    _Bool _hasRecmdReason;
    _Bool _hasIsFollow;
    _Bool _isFollow;
    NSString *_publicId;
    NSString *_icon;
    NSString *_name;
    NSString *_recmdReason;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(retain, nonatomic) NSString *recmdReason; // @synthesize recmdReason=_recmdReason;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(readonly) _Bool hasIsFollow; // @synthesize hasIsFollow=_hasIsFollow;
@property(readonly) _Bool hasRecmdReason; // @synthesize hasRecmdReason=_hasRecmdReason;
@property(readonly) _Bool hasName; // @synthesize hasName=_hasName;
@property(readonly) _Bool hasIcon; // @synthesize hasIcon=_hasIcon;
@property(readonly) _Bool hasPublicId; // @synthesize hasPublicId=_hasPublicId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

