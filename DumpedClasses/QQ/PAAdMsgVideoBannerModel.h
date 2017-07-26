//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PAAdMsgVideoBannerModel : NSObject
{
    unsigned long long _jumpType;
    unsigned long long _linkStyle;
    NSString *_iconUrlStr;
    NSString *_abstractText;
    NSString *_linkText;
    NSString *_linkUrlStr;
    NSString *_appScheme;
}

+ (id)getVideoBannerModelWithDic:(id)arg1;
@property(copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
@property(copy, nonatomic) NSString *linkUrlStr; // @synthesize linkUrlStr=_linkUrlStr;
@property(copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(copy, nonatomic) NSString *abstractText; // @synthesize abstractText=_abstractText;
@property(copy, nonatomic) NSString *iconUrlStr; // @synthesize iconUrlStr=_iconUrlStr;
@property(nonatomic) unsigned long long linkStyle; // @synthesize linkStyle=_linkStyle;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isBannerModelLegal;

@end

