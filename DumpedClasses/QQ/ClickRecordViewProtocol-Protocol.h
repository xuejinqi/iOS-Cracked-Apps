//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ClickRecordViewController, NSString;

@protocol ClickRecordViewProtocol <NSObject>

@optional
- (void)onRecordFailed:(ClickRecordViewController *)arg1;
- (void)onRecordSend:(ClickRecordViewController *)arg1 recordPath:(NSString *)arg2 recordTime:(int)arg3;
- (void)onRecordCanceled:(ClickRecordViewController *)arg1;
- (void)onRecordStarted:(ClickRecordViewController *)arg1;
@end

