//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AudioRouteChangeProtocol.h"

@class NSString;

@interface QQVoiceRouteChangeBtn : UIView <AudioRouteChangeProtocol>
{
    int _qqpttRouteType;
    id <QQVoiceRouteChangeBtnDelegate> _delegate;
    _Bool _isSpeakerOn;
}

@property(nonatomic) _Bool isSpeakerOn; // @synthesize isSpeakerOn=_isSpeakerOn;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setClickDelegate:(id)arg1;
- (_Bool)SpeakerOn;
- (void)setHidden:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)getBtnBg;
- (id)init;
- (void)setSpeakerOn:(_Bool)arg1 routeInBackGround:(_Bool)arg2;
- (void)routeInBackGround;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isIpod;
- (void)setUserSpeakerOn:(_Bool)arg1;
- (_Bool)isUserSpeakerOn;
- (id)getPttSpeakerOnKeyName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

