//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

@class EmotionParseResult, NSString;

@interface SmartDeviceModel : QQAIOMsgModel
{
    _Bool _isSendMsg;
    float _height;
    NSString *_filePath;
    NSString *_fileName;
    int _fileSize;
    NSString *_fileMd5;
    NSString *_thumbPath;
    int _appearTime;
    int _messageTime;
    int _duration;
    NSString *_titleText;
    NSString *_digestText;
    NSString *_guideWords;
    NSString *_coverKey;
    NSString *_mediaKey;
    NSString *_url;
    _Bool _showNickName;
    NSString *_nickName;
    EmotionParseResult *_layoutNickResult;
    int _uprogress;
    int _faMediaType;
    _Bool _fromFTN;
    unsigned long long _cookie;
}

+ (id)modelWithMessageModel:(id)arg1;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)cellClassName;
- (struct CGSize)GetFitSize:(struct CGSize)arg1 minSize:(struct CGSize)arg2;
- (double)cellHeight;
- (id)initWithMessageModel:(id)arg1;

// Remaining properties
@property(nonatomic) int appearTime; // @dynamic appearTime;
@property(nonatomic) unsigned long long cookie; // @dynamic cookie;
@property(copy, nonatomic) NSString *coverKey; // @dynamic coverKey;
@property(copy, nonatomic) NSString *digestText; // @dynamic digestText;
@property(nonatomic) int duration; // @dynamic duration;
@property(nonatomic) int faMediaType; // @dynamic faMediaType;
@property(copy, nonatomic) NSString *fileMd5; // @dynamic fileMd5;
@property(copy, nonatomic) NSString *fileName; // @dynamic fileName;
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) int fileSize; // @dynamic fileSize;
@property(nonatomic) _Bool fromFTN; // @dynamic fromFTN;
@property(copy, nonatomic) NSString *guideWords; // @dynamic guideWords;
@property(nonatomic) float height; // @dynamic height;
@property(nonatomic) _Bool isSendMsg; // @dynamic isSendMsg;
@property(retain, nonatomic) EmotionParseResult *layoutNickResult; // @dynamic layoutNickResult;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(nonatomic) int messageTime; // @dynamic messageTime;
@property(copy, nonatomic) NSString *nickName; // @dynamic nickName;
@property(nonatomic) _Bool showNickName; // @dynamic showNickName;
@property(copy, nonatomic) NSString *thumbPath; // @dynamic thumbPath;
@property(copy, nonatomic) NSString *titleText; // @dynamic titleText;
@property(nonatomic) int uprogress; // @dynamic uprogress;

@end

