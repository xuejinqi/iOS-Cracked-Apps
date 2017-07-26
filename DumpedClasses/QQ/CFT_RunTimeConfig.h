//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleton.h"

@class NSString;

@interface CFT_RunTimeConfig : BaseSingleton
{
    NSString *_guid;
    NSString *_appid;
    NSString *_appname;
    NSString *_isjail;
    NSString *_deviceID;
}

+ (id)platformSignature;
+ (id)deviceID;
+ (id)localizeString;
+ (_Bool)isJailBroken;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *isjail; // @synthesize isjail=_isjail;
@property(retain, nonatomic) NSString *appname; // @synthesize appname=_appname;
@property(retain, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)dealloc;
- (id)init;

@end

