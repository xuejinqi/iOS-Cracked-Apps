//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIColor, UIImage;

@interface AREShareParams : NSObject
{
    _Bool _isRE3IN1Enabled;
    _Bool _isCocacolaShareStyle;
    _Bool _useOuterShortenURL;
    NSString *_launchpadTitle;
    UIColor *_launchpadColor;
    NSString *_shareLinkURLString;
    UIImage *_shareIconImage;
    NSString *_shareIconURLString;
    NSString *_shareTitle;
    NSString *_shareText;
    NSString *_sharePOIString;
    NSString *_shareBizType;
    NSString *_shareRemark;
    NSString *_creatorHeadUrl;
    unsigned long long _shareSceneType;
    UIImage *_sharePhotoImage;
    long long _shareChannelType;
    NSString *_profileHeadUrl;
    NSDictionary *_extraParams;
}

@property(nonatomic) _Bool useOuterShortenURL; // @synthesize useOuterShortenURL=_useOuterShortenURL;
@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(copy, nonatomic) NSString *profileHeadUrl; // @synthesize profileHeadUrl=_profileHeadUrl;
@property(nonatomic) long long shareChannelType; // @synthesize shareChannelType=_shareChannelType;
@property(retain, nonatomic) UIImage *sharePhotoImage; // @synthesize sharePhotoImage=_sharePhotoImage;
@property(nonatomic) unsigned long long shareSceneType; // @synthesize shareSceneType=_shareSceneType;
@property(copy, nonatomic) NSString *creatorHeadUrl; // @synthesize creatorHeadUrl=_creatorHeadUrl;
@property(copy, nonatomic) NSString *shareRemark; // @synthesize shareRemark=_shareRemark;
@property(copy, nonatomic) NSString *shareBizType; // @synthesize shareBizType=_shareBizType;
@property(copy, nonatomic) NSString *sharePOIString; // @synthesize sharePOIString=_sharePOIString;
@property(copy, nonatomic) NSString *shareText; // @synthesize shareText=_shareText;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareIconURLString; // @synthesize shareIconURLString=_shareIconURLString;
@property(retain, nonatomic) UIImage *shareIconImage; // @synthesize shareIconImage=_shareIconImage;
@property(copy, nonatomic) NSString *shareLinkURLString; // @synthesize shareLinkURLString=_shareLinkURLString;
@property(nonatomic) _Bool isCocacolaShareStyle; // @synthesize isCocacolaShareStyle=_isCocacolaShareStyle;
@property(nonatomic) _Bool isRE3IN1Enabled; // @synthesize isRE3IN1Enabled=_isRE3IN1Enabled;
@property(retain, nonatomic) UIColor *launchpadColor; // @synthesize launchpadColor=_launchpadColor;
@property(copy, nonatomic) NSString *launchpadTitle; // @synthesize launchpadTitle=_launchpadTitle;
- (void).cxx_destruct;

@end

