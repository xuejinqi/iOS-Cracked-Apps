//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LIVETRADEPRODToString.h"

@class NSString;

@interface LIVETRADEPRODModifyFacePaySwitchReq : LIVETRADEPRODToString
{
    NSString *_facePaySwitch;
    NSString *_bizId;
    NSString *_verifyId;
    NSString *_verifyType;
    NSString *_reqFrom;
    NSString *_tid;
}

@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(retain, nonatomic) NSString *reqFrom; // @synthesize reqFrom=_reqFrom;
@property(retain, nonatomic) NSString *verifyType; // @synthesize verifyType=_verifyType;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) NSString *facePaySwitch; // @synthesize facePaySwitch=_facePaySwitch;
- (void).cxx_destruct;

@end

