//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APBEventListener : NSObject
{
    struct set<APBEventType, std::__1::less<APBEventType>, std::__1::allocator<APBEventType>> _registeredEvents;
    struct map<std::__1::basic_string<char>, long, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, long>>> _eventTriggered;
    id <APBEventProtocol> _delegate;
}

@property(nonatomic) __weak id <APBEventProtocol> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onTaskTimeout:(id)arg1;
- (void)onGlobalTimeout:(id)arg1;
- (void)onAlertDisappear:(id)arg1;
- (void)onAlertAppear:(id)arg1;
- (void)onAppResumeActive:(id)arg1;
- (void)onAppResignActive:(id)arg1;
- (id)_eventType:(long long)arg1 withNoti:(id)arg2;
- (void)removeTriggerCnt:(long long)arg1;
- (void)increaseTriggerCnt:(long long)arg1;
- (long long)eventTriggeredTimes:(long long)arg1;
- (void)unregisterAllEvents;
- (void)unregisterEvent:(long long)arg1;
- (void)registerAllEvents;
- (void)registerEvent:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

