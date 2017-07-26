//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDBObj.h"

#import "IUinSensitiveDBDelegate.h"

@class NSString;

@interface QQRFDB : BaseDBObj <IUinSensitiveDBDelegate>
{
}

+ (void)removeChangeAccountListner:(id)arg1;
+ (void)addChangedAccountListener:(id)arg1;
+ (id)getDBPath:(id)arg1;
+ (id)currentDB;
+ (void)registDBKey;
- (void)willChangeAccount:(id)arg1;
- (id)initWithUin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

