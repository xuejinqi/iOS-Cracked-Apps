//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface SearchConditionServiceImpl : NSObject <IEngineDispatchDelegate>
{
    id <SearchConditionServiceImplCallback> _callback;
}

@property(nonatomic) id <SearchConditionServiceImplCallback> callback; // @synthesize callback=_callback;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)respCondSearch:(char *)arg1 dataLen:(int)arg2 seq:(int)arg3;
- (int)requestCondSearch:(int)arg1 Session:(int)arg2 Flag:(int)arg3 KetWord:(id)arg4 Sex:(int)arg5 Age:(int)arg6 CountryID:(int)arg7 ProvinceID:(int)arg8 CityID:(int)arg9 HomeID:(int)arg10 hCountryID:(int)arg11 hProvinceID:(int)arg12 hCityID:(int)arg13 hHomeID:(int)arg14 constellationID:(int)arg15 occupationID:(int)arg16 fromAgeID:(int)arg17 toAgeID:(int)arg18;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

