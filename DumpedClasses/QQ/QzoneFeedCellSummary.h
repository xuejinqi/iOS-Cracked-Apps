//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSDictionary, NSMutableArray, NSString, QZLayoutInfo, QzoneCommSparkleWord, QzoneFeedFont;

@interface QzoneFeedCellSummary : QzoneModel
{
    QzoneFeedFont *_fontSetting;
}

@property(retain, nonatomic) QzoneFeedFont *fontSetting; // @synthesize fontSetting=_fontSetting;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) long long actiontype; // @dynamic actiontype;
@property(nonatomic) _Bool expanded; // @dynamic expanded;
@property(nonatomic) _Bool hasmore; // @dynamic hasmore;
@property(retain, nonatomic) QZLayoutInfo *info; // @dynamic info;
@property(retain, nonatomic) NSDictionary *mapExt; // @dynamic mapExt;
@property(retain, nonatomic) NSString *morelink; // @dynamic morelink;
@property(retain, nonatomic) NSMutableArray *pictureList; // @dynamic pictureList;
@property(nonatomic) long long showState; // @dynamic showState;
@property(retain, nonatomic) QzoneCommSparkleWord *sparkleWord; // @dynamic sparkleWord;
@property(retain, nonatomic) NSString *summary; // @dynamic summary;

@end

