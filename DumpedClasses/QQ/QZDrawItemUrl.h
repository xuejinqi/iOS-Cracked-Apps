//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItemText.h"

@class NSString;

@interface QZDrawItemUrl : QZDrawItemText
{
    NSString *_text;
    NSString *_url;
    NSString *_post;
    _Bool _isAppStoreLink;
    NSString *_schemaUrl;
    NSString *_get;
}

@property(nonatomic) _Bool isAppStoreLink; // @synthesize isAppStoreLink=_isAppStoreLink;
@property(retain, nonatomic) NSString *get; // @synthesize get=_get;
@property(retain, nonatomic) NSString *post; // @synthesize post=_post;
@property(retain, nonatomic) NSString *schemaUrl; // @synthesize schemaUrl=_schemaUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithStr:(id)arg1 Rect:(struct CGRect)arg2 Font:(id)arg3 Color:(id)arg4;

@end

