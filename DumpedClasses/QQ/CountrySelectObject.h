//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CountrySelectObject : NSObject
{
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_countryPinyin;
    NSString *countryName;
    NSString *countryCode;
    NSString *countryPinyin;
    int _xo;
}

- (void).cxx_destruct;
- (_Bool)isMatchString:(id)arg1;
- (long long)compare:(id)arg1;
@property(retain, nonatomic) NSString *countryName; // @dynamic countryName;

// Remaining properties
@property(retain, nonatomic) NSString *countryCode; // @dynamic countryCode;
@property(readonly, nonatomic) NSString *countryPinyin; // @dynamic countryPinyin;

@end

