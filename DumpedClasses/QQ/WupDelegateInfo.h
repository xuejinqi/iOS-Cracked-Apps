//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WupDelegateInfo : NSObject
{
    int _delegateType;
    id <WupTransportationProxyDelegate> _delegate;
    CDUnknownBlockType _callbackBlock;
    int _xo;
}

- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @dynamic callbackBlock;
@property(retain, nonatomic) id <WupTransportationProxyDelegate> delegate; // @dynamic delegate;
@property(nonatomic) int delegateType; // @dynamic delegateType;

@end

