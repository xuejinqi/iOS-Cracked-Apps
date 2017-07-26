//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MACtlInterface.h"

@class NSString;

@interface AMNetConfigControl : NSObject <MACtlInterface>
{
}

+ (id)getQOSInfo;
+ (id)getMTAG;
+ (void)refreshIp;
- (_Bool)fetchFilter;
- (_Bool)BackgroundFetch;
- (_Bool)UserInRadicalNetDetect;
- (_Bool)SmartHearbeatSwitch;
- (void)breakAMNetLongLink;
- (void)MAAccessDidRecvCmdListData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

