//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCQRCodeTemplate.h"

@class NSArray, NSString, UIImage;

@interface TCQRCodeTemplate_1 : TCQRCodeTemplate
{
    UIImage *_bkgImg;
    NSString *_bkgPath;
    unsigned int _nameClrARGB;
    unsigned int _tipsClrARGB;
    UIImage *_qrBkgImg;
    NSString *_qrBkgPath;
    unsigned int _blackClrARGB;
    unsigned int _whiteClrARGB;
    int _head;
    struct CGRect _qrLoc;
    NSArray *_clip;
}

+ (id)defaultTemplate;
+ (id)RuleVer;
- (id)unloadedResources;
- (void)loadResources;
- (_Bool)isAvailable;
- (_Bool)updateParams:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIImage *bkgImg; // @dynamic bkgImg;
@property(retain, nonatomic) NSString *bkgPath; // @dynamic bkgPath;
@property(nonatomic) unsigned int blackClrARGB; // @dynamic blackClrARGB;
@property(retain, nonatomic) NSArray *clip; // @dynamic clip;
@property(nonatomic) int head; // @dynamic head;
@property(nonatomic) unsigned int nameClrARGB; // @dynamic nameClrARGB;
@property(retain, nonatomic) UIImage *qrBkgImg; // @dynamic qrBkgImg;
@property(retain, nonatomic) NSString *qrBkgPath; // @dynamic qrBkgPath;
@property(nonatomic) struct CGRect qrLoc; // @dynamic qrLoc;
@property(nonatomic) unsigned int tipsClrARGB; // @dynamic tipsClrARGB;
@property(nonatomic) unsigned int whiteClrARGB; // @dynamic whiteClrARGB;

@end

