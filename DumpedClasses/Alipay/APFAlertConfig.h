//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APFAlertConfig : NSObject
{
    NSString *_title;
    NSString *_message;
    NSString *_leftButtonText;
    NSString *_rightButtonText;
    long long _returnCode;
}

@property(nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;
@property(copy, nonatomic) NSString *rightButtonText; // @synthesize rightButtonText=_rightButtonText;
@property(copy, nonatomic) NSString *leftButtonText; // @synthesize leftButtonText=_leftButtonText;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

