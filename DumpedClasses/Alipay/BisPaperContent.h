//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class APBRegion, NSData, NSString, PBMapStringString;

@interface BisPaperContent : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *certCode; // @dynamic certCode;
@property(retain, nonatomic) NSString *certType; // @dynamic certType;
@property(retain, nonatomic) NSString *deviceModel; // @dynamic deviceModel;
@property(retain, nonatomic) PBMapStringString *extAttrs; // @dynamic extAttrs;
@property(retain, nonatomic) APBRegion *faceRegion; // @dynamic faceRegion;
@property(readonly) _Bool hasCertCode; // @dynamic hasCertCode;
@property(readonly) _Bool hasCertType; // @dynamic hasCertType;
@property(readonly) _Bool hasDeviceModel; // @dynamic hasDeviceModel;
@property(readonly) _Bool hasExtAttrs; // @dynamic hasExtAttrs;
@property(readonly) _Bool hasFaceRegion; // @dynamic hasFaceRegion;
@property(readonly) _Bool hasImgBytes; // @dynamic hasImgBytes;
@property(readonly) _Bool hasImgQualityInfo; // @dynamic hasImgQualityInfo;
@property(readonly) _Bool hasImgStr; // @dynamic hasImgStr;
@property(readonly) _Bool hasImgTimeGmt; // @dynamic hasImgTimeGmt;
@property(readonly) _Bool hasLastModifiedTime; // @dynamic hasLastModifiedTime;
@property(readonly) _Bool hasPageNo; // @dynamic hasPageNo;
@property(readonly) _Bool hasPapersRegion; // @dynamic hasPapersRegion;
@property(readonly) _Bool hasProducer; // @dynamic hasProducer;
@property(readonly) _Bool hasShootMode; // @dynamic hasShootMode;
@property(readonly) _Bool hasSoftWareVersion; // @dynamic hasSoftWareVersion;
@property(retain, nonatomic) NSData *imgBytes; // @dynamic imgBytes;
@property(retain, nonatomic) NSString *imgQualityInfo; // @dynamic imgQualityInfo;
@property(retain, nonatomic) NSString *imgStr; // @dynamic imgStr;
@property(nonatomic) long long imgTimeGmt; // @dynamic imgTimeGmt;
@property(retain, nonatomic) NSString *lastModifiedTime; // @dynamic lastModifiedTime;
@property(nonatomic) int pageNo; // @dynamic pageNo;
@property(retain, nonatomic) APBRegion *papersRegion; // @dynamic papersRegion;
@property(retain, nonatomic) NSString *producer; // @dynamic producer;
@property(nonatomic) int shootMode; // @dynamic shootMode;
@property(retain, nonatomic) NSString *softWareVersion; // @dynamic softWareVersion;

@end

