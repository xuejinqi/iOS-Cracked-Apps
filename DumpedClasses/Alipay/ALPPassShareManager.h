//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VZModelDelegate.h"

@class ALPPassCancelShareAction, ALPPassShareAction, NSString;

@interface ALPPassShareManager : NSObject <VZModelDelegate>
{
    ALPPassShareAction *_shareAction;
    ALPPassCancelShareAction *_cancelShareAction;
}

@property(retain, nonatomic) ALPPassCancelShareAction *cancelShareAction; // @synthesize cancelShareAction=_cancelShareAction;
@property(retain, nonatomic) ALPPassShareAction *shareAction; // @synthesize shareAction=_shareAction;
- (void).cxx_destruct;
- (void)silenced;
- (void)cancelPassShareWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sharePassWithId:(id)arg1 logo:(id)arg2 description:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

