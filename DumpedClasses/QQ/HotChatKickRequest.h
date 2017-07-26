//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSBaseRequest.h"

#import "GSRequestProtocol.h"

@class NSArray, NSString, QQHotChatModel;

@interface HotChatKickRequest : GSBaseRequest <GSRequestProtocol>
{
    int _fromType;
    QQHotChatModel *_hotChatModel;
    NSArray *_uinArray;
}

@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) NSArray *uinArray; // @synthesize uinArray=_uinArray;
@property(retain, nonatomic) QQHotChatModel *hotChatModel; // @synthesize hotChatModel=_hotChatModel;
- (void).cxx_destruct;
- (id)translateHeaderCode:(unsigned int)arg1;
- (id)parseResponseBodyString:(void *)arg1;
- (void *)getRequestBodyString;
- (unsigned int)serviceType;
- (unsigned int)serviceNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

