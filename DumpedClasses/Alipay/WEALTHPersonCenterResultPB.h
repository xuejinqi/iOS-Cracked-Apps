//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, PBMapStringString, WEALTHPasswordTokenCreatorPB;

@interface WEALTHPersonCenterResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) PBMapStringString *extraInfo; // @dynamic extraInfo;
@property(retain, nonatomic) NSString *followAction; // @dynamic followAction;
@property(retain, nonatomic) NSString *formToken; // @dynamic formToken;
@property(readonly) _Bool hasExtraInfo; // @dynamic hasExtraInfo;
@property(readonly) _Bool hasFollowAction; // @dynamic hasFollowAction;
@property(readonly) _Bool hasFormToken; // @dynamic hasFormToken;
@property(readonly) _Bool hasPasswordTokenCreator; // @dynamic hasPasswordTokenCreator;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasResultView; // @dynamic hasResultView;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(retain, nonatomic) NSArray *modules; // @dynamic modules;
@property(retain, nonatomic) WEALTHPasswordTokenCreatorPB *passwordTokenCreator; // @dynamic passwordTokenCreator;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(retain, nonatomic) NSString *resultView; // @dynamic resultView;
@property(nonatomic) int showType; // @dynamic showType;
@property(nonatomic) _Bool success; // @dynamic success;

@end

