//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TLanguageItem : NSObject
{
    NSString *Country;
    NSString *GoogleStr;
    NSArray *IOSStrArr;
}

@property(retain, nonatomic) NSArray *IOSStrArr; // @synthesize IOSStrArr;
@property(copy, nonatomic) NSString *GoogleStr; // @synthesize GoogleStr;
@property(copy, nonatomic) NSString *Country; // @synthesize Country;
- (void)dealloc;
- (id)initWithData:(id)arg1 iosarg:(id)arg2 desarg:(id)arg3;

@end

