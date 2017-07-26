//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface FAPreviewInfo : NSObject
{
    int _xo;
    NSString *_previewDomain;
    NSString *_previewKey;
    NSString *_previewIP;
    unsigned int _previewPort;
    NSString *_previewPath;
    NSString *_previewCookie;
    NSString *_previewName;
    unsigned long long _previewSize;
    int _previewFileType;
    unsigned int _httpsPort;
    NSNumber *_httpsDomain;
}

- (id)description;
- (void)dealloc;
- (_Bool)httpsInfoValid;
- (id)getPreviewDormain:(_Bool)arg1;
- (_Bool)isHttpDomainValid;
- (_Bool)isInfoValid;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *httpsDomain; // @dynamic httpsDomain;
@property(nonatomic) unsigned int httpsPort; // @dynamic httpsPort;
@property(retain, nonatomic) NSString *previewCookie; // @dynamic previewCookie;
@property(retain, nonatomic) NSString *previewDomain; // @dynamic previewDomain;
@property(nonatomic) int previewFileType; // @dynamic previewFileType;
@property(retain, nonatomic) NSString *previewIP; // @dynamic previewIP;
@property(retain, nonatomic) NSString *previewKey; // @dynamic previewKey;
@property(retain, nonatomic) NSString *previewName; // @dynamic previewName;
@property(retain, nonatomic) NSString *previewPath; // @dynamic previewPath;
@property(nonatomic) unsigned int previewPort; // @dynamic previewPort;
@property(nonatomic) unsigned long long previewSize; // @dynamic previewSize;

@end

