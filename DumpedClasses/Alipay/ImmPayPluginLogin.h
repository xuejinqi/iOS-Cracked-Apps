//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ImmPayEventPlugin.h"

@interface ImmPayPluginLogin : ImmPayEventPlugin
{
    CDUnknownBlockType _loginBlock;
}

+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType loginBlock; // @synthesize loginBlock=_loginBlock;
- (void).cxx_destruct;
- (void)doLoginWithLoginBlock:(CDUnknownBlockType)arg1;
- (void)onLoginNotification:(id)arg1;
- (void)doLoginWithAppBlock:(CDUnknownBlockType)arg1;
- (void)afterLogin:(_Bool)arg1;
- (void)onLogin:(id)arg1;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

@end

