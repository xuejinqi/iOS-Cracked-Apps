//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol OCRResultViewDelegate <NSObject>

@optional
- (void)ocrDoneEdit;
- (void)ocrDidScroll:(double)arg1;
- (void)ocrKeyboardWillDisappear;
- (void)ocrKeyboardWillAppear;
- (void)ocrShare:(NSString *)arg1;
- (void)ocrTranslate:(NSString *)arg1;
- (void)ocrSearch:(NSString *)arg1;
@end

