//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CardSDKResortPlugin.h"

@class NSString;

@interface TopCardResortPlugin : NSObject <CardSDKResortPlugin>
{
}

- (void)cardViewController:(id)arg1 loadCardData:(id)arg2 loadType:(int)arg3 insertIndex:(long long)arg4 callback:(CDUnknownBlockType)arg5;
- (_Bool)canHandle:(id)arg1;
- (void)checkRefreshTopCardWithAppearedCardList:(id)arg1 andAllTopCardList:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)checkCardListChanged:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)checkEqualityOneCardList:(id)arg1 anotherCardList:(id)arg2;
- (void)validTopCardSort:(id)arg1;
- (void)filterTopCardFromOriginalCardList:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

