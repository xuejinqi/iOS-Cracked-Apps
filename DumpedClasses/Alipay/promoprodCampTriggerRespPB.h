//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface promoprodCampTriggerRespPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *errorMsg; // @dynamic errorMsg;
@property(retain, nonatomic) PBMapStringString *extInfo; // @dynamic extInfo;
@property(readonly) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(readonly) _Bool hasErrorMsg; // @dynamic hasErrorMsg;
@property(readonly) _Bool hasExtInfo; // @dynamic hasExtInfo;
@property(readonly) _Bool hasPrice; // @dynamic hasPrice;
@property(readonly) _Bool hasPrizeFlag; // @dynamic hasPrizeFlag;
@property(readonly) _Bool hasPrizeId; // @dynamic hasPrizeId;
@property(readonly) _Bool hasPrizeName; // @dynamic hasPrizeName;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) NSString *price; // @dynamic price;
@property(retain, nonatomic) NSString *prizeFlag; // @dynamic prizeFlag;
@property(retain, nonatomic) NSString *prizeId; // @dynamic prizeId;
@property(retain, nonatomic) NSString *prizeName; // @dynamic prizeName;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

