//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RequestDelegate.h"

@class AuthorizationRequest, NSString, UIImage;

@interface SimpleHeadMgr : NSObject <RequestDelegate>
{
    id <SimpleHeadMgrDelegate> _delegate;
    UIImage *_head;
    long long _uin;
    int _xo;
    AuthorizationRequest *_headRequest;
}

+ (id)shareMgr;
@property(retain, nonatomic) AuthorizationRequest *headRequest; // @synthesize headRequest=_headRequest;
- (void).cxx_destruct;
- (void)dealloc;
- (void)GetQQHeadDelegate:(id)arg1 headBuf:(id)arg2;
- (id)GetHeadCache:(long long)arg1 andSkey:(id)arg2;
- (void)RemoveHeadCache:(id)arg1;
- (void)SaveHeadCache:(id)arg1 andImage:(id)arg2;
- (id)getHead:(long long)arg1 andSkey:(id)arg2 andDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SimpleHeadMgrDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *head; // @dynamic head;
@property(readonly) Class superclass;
@property(nonatomic) long long uin; // @dynamic uin;

@end

