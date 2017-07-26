//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VZFCompositeNode.h"

#import "VZFNodeRequiredMethods.h"

@class NSString;

@interface O2OCommodityDetailNode : VZFCompositeNode <VZFNodeRequiredMethods>
{
}

+ (id)itemWithTitle:(id)arg1 subtitle:(id)arg2 url:(id)arg3 index:(int)arg4 viewController:(id)arg5;
+ (id)separatorLine;
+ (id)infoForDetail:(id)arg1 Store:(id)arg2 infoChildren:(vector_c3f6c41e)arg3;
+ (id)imageDescForDetail:(id)arg1 Store:(id)arg2;
+ (id)descNodeForDetail:(id)arg1 Store:(id)arg2;
+ (id)headerForDetail:(id)arg1 withProps:(id)arg2 showLogo:(_Bool)arg3;
+ (id)fieldCenterForDetail:(id)arg1 withProps:(id)arg2;
+ (id)shareInfoNodeForDetail:(id)arg1 withProps:(id)arg2;
+ (id)newWithProps:(id)arg1 Store:(id)arg2 Context:(id)arg3;
+ (unsigned long long)numberOfCJKCharactersInString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

