//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface MQZPhoneTagDataCenter : NSObject
{
    NSMutableDictionary *_phoneAndUin;
    NSMutableDictionary *_strAttachAndUin;
    NSString *_phoneIcon;
    NSString *_phoneText;
    NSString *_phoneTag;
    NSString *_strAttachInfo;
    int _xo;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *strAttachInfo; // @dynamic strAttachInfo;
@property(retain, nonatomic) NSString *phoneTag; // @dynamic phoneTag;
@property(retain, nonatomic) NSString *phoneText; // @dynamic phoneText;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *phoneIcon; // @dynamic phoneIcon;

@end

