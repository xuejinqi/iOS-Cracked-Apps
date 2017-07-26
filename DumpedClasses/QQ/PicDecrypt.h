//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface PicDecrypt : NSObject
{
    struct IsaacData m_stIs;
    struct RandIssacStruct m_issacSequenceResult;
    _Bool m_firstTime;
    unsigned long long *m_seedRand;
    int m_seedRandSize;
    int m_dwHeadLen;
    int m_dwBodyLen;
    short m_wVer;
    _Bool _getSeedSucceed;
    int _errorCode;
    unsigned long long _totalPicSize;
    unsigned long long _hasDownloadSize;
    unsigned long long _leftPicDataSize;
    unsigned long long _picDecryptOffset;
    NSData *_picDecryStKey;
}

@property(retain, nonatomic) NSData *picDecryStKey; // @synthesize picDecryStKey=_picDecryStKey;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long picDecryptOffset; // @synthesize picDecryptOffset=_picDecryptOffset;
@property(nonatomic) unsigned long long leftPicDataSize; // @synthesize leftPicDataSize=_leftPicDataSize;
@property(nonatomic) unsigned long long hasDownloadSize; // @synthesize hasDownloadSize=_hasDownloadSize;
@property(nonatomic) unsigned long long totalPicSize; // @synthesize totalPicSize=_totalPicSize;
@property(nonatomic) _Bool getSeedSucceed; // @synthesize getSeedSucceed=_getSeedSucceed;
- (void)dealloc;
- (id)issacDecrypt:(char *)arg1 datalength:(unsigned long long)arg2 aqwSeed:(unsigned long long *)arg3 size:(unsigned long long)arg4;
- (id)decryptDownloadPicData:(id)arg1;
- (id)init;

@end

