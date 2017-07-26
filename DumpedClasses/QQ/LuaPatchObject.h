//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSData, NSString;

@interface LuaPatchObject : QQModel
{
    NSString *_pID;
    NSString *_pMD5;
    unsigned long long _pType;
    unsigned long long _pWhen;
    NSString *_pPatchUrl;
    unsigned long long _pStatus;
    NSString *_pAppVersionRange;
    NSString *_piOSVersionRange;
    NSString *_pDevices;
    NSString *_pTimeRange;
    _Bool _pSuccess;
    double _pMinTime;
    double _pMaxTime;
    int _xo;
    _Bool _pFinished;
    NSData *_pPatchScript;
}

@property(nonatomic) _Bool pFinished; // @synthesize pFinished=_pFinished;
@property(retain, nonatomic) NSData *pPatchScript; // @synthesize pPatchScript=_pPatchScript;
- (void).cxx_destruct;
- (id)copySelf;
- (_Bool)timeValided;
- (id)patchPath;

// Remaining properties
@property(retain, nonatomic) NSString *pAppVersionRange; // @dynamic pAppVersionRange;
@property(retain, nonatomic) NSString *pDevices; // @dynamic pDevices;
@property(retain, nonatomic) NSString *pID; // @dynamic pID;
@property(retain, nonatomic) NSString *pMD5; // @dynamic pMD5;
@property(nonatomic) double pMaxTime; // @dynamic pMaxTime;
@property(nonatomic) double pMinTime; // @dynamic pMinTime;
@property(retain, nonatomic) NSString *pPatchUrl; // @dynamic pPatchUrl;
@property(nonatomic) unsigned long long pStatus; // @dynamic pStatus;
@property(nonatomic) _Bool pSuccess; // @dynamic pSuccess;
@property(retain, nonatomic) NSString *pTimeRange; // @dynamic pTimeRange;
@property(nonatomic) unsigned long long pType; // @dynamic pType;
@property(nonatomic) unsigned long long pWhen; // @dynamic pWhen;
@property(retain, nonatomic) NSString *piOSVersionRange; // @dynamic piOSVersionRange;

@end

