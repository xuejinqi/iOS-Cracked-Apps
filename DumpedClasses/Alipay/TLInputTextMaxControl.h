//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AUNoticeDialog;

@interface TLInputTextMaxControl : NSObject
{
    AUNoticeDialog *_currentAlertView;
}

@property(nonatomic) __weak AUNoticeDialog *currentAlertView; // @synthesize currentAlertView=_currentAlertView;
- (void).cxx_destruct;
- (_Bool)isInputText:(id)arg1 max:(int)arg2 memo:(id)arg3 finish:(CDUnknownBlockType)arg4;
- (_Bool)isInputMaxText:(id)arg1 memo:(id)arg2 finish:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

