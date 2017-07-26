//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPDYHTTPDNSInterface.h"

@class NSString;

@interface SPDYHTTPDNS : NSObject <SPDYHTTPDNSInterface>
{
}

+ (void)setSPDYHTTPDNS:(id)arg1;
+ (id)sharedInstance;
- (_Bool)netCardIpV6Only;
- (id)getIpV6OxcStringFromPointSepIpV4:(id)arg1;
- (id)getOriginByHost:(id)arg1;
- (void)setError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

