//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface NAMAppResponse : NSObject
{
    NSString *_absoluteUrlString;
    NSString *_mimeType;
    NSData *_contentData;
}

@property(retain, nonatomic) NSData *contentData; // @synthesize contentData=_contentData;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *absoluteUrlString; // @synthesize absoluteUrlString=_absoluteUrlString;
- (void).cxx_destruct;

@end

