//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TXQRLoginManager : NSObject
{
    NSString *_loginAppid;
    NSString *_loginCity;
    long long _deviceType;
    NSString *_loginTips;
    long long _subAppid;
}

+ (id)sharedManager;
@property(nonatomic) long long subAppid; // @synthesize subAppid=_subAppid;
@property(retain, nonatomic) NSString *loginTips; // @synthesize loginTips=_loginTips;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
@property(retain, nonatomic) NSString *loginCity; // @synthesize loginCity=_loginCity;
@property(retain, nonatomic) NSString *loginAppid; // @synthesize loginAppid=_loginAppid;
- (void).cxx_destruct;
- (void)setQrcodeConfirmData:(id)arg1;

@end

