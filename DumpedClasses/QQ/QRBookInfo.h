//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface QRBookInfo : NSObject <NSCopying>
{
    NSString *bookId;
    NSString *bookName;
    NSString *authorName;
    NSString *fileUrl;
    NSString *filePath;
    long long progress;
    NSDate *addTime;
    NSDate *readTime;
    long long paraOffset;
    long long lineOffset;
    NSString *topString;
    NSString *bookInfo;
    long long size;
    unsigned short status;
    unsigned short source;
    unsigned short booktype;
    unsigned long long bookversion;
    NSString *imageUrl;
    NSString *imagePath;
    NSString *cityId;
    long long sortIndex;
    _Bool hasRead;
    long long updateTime;
    _Bool downloadable;
    _Bool canRead;
    _Bool isCloud;
    _Bool isPrivate;
    _Bool hasNew;
    _Bool _isFree;
    _Bool _isStopCheckUpdate;
    _Bool _isUnpublished;
    unsigned short bookStyle;
    unsigned short _srctype;
    NSDate *updateLastChapterTime;
    NSDate *opertaionTime;
    long long _bookUpdateTime;
    NSString *_bookIntro;
    long long _opertaionType;
    unsigned long long _totalChapter;
    long long _chapterid;
    NSString *_chaptertitle;
    NSString *_downloadUrl;
    long long _finished;
    NSString *_lastChapterName;
    NSString *_downloadChapterUrl;
    long long _autoPay;
}

+ (id)getPathFromAppPath:(id)arg1;
@property(nonatomic) _Bool isUnpublished; // @synthesize isUnpublished=_isUnpublished;
@property(nonatomic) long long autoPay; // @synthesize autoPay=_autoPay;
@property(retain, nonatomic) NSString *downloadChapterUrl; // @synthesize downloadChapterUrl=_downloadChapterUrl;
@property(nonatomic) _Bool isStopCheckUpdate; // @synthesize isStopCheckUpdate=_isStopCheckUpdate;
@property(retain, nonatomic) NSString *lastChapterName; // @synthesize lastChapterName=_lastChapterName;
@property(nonatomic) long long finished; // @synthesize finished=_finished;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSString *chaptertitle; // @synthesize chaptertitle=_chaptertitle;
@property(nonatomic) long long chapterid; // @synthesize chapterid=_chapterid;
@property(nonatomic) unsigned long long totalChapter; // @synthesize totalChapter=_totalChapter;
@property(nonatomic) unsigned short srctype; // @synthesize srctype=_srctype;
@property(nonatomic) long long opertaionType; // @synthesize opertaionType=_opertaionType;
@property(retain, nonatomic) NSString *bookIntro; // @synthesize bookIntro=_bookIntro;
@property(nonatomic) long long bookUpdateTime; // @synthesize bookUpdateTime=_bookUpdateTime;
@property(retain, nonatomic) NSDate *opertaionTime; // @synthesize opertaionTime;
@property(retain, nonatomic) NSDate *updateLastChapterTime; // @synthesize updateLastChapterTime;
@property(nonatomic) _Bool hasNew; // @synthesize hasNew;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate;
@property(nonatomic) _Bool isCloud; // @synthesize isCloud;
@property(nonatomic) _Bool canRead; // @synthesize canRead;
@property(nonatomic) _Bool downloadable; // @synthesize downloadable;
@property(nonatomic) long long updateTime; // @synthesize updateTime;
@property(nonatomic) _Bool hasRead; // @synthesize hasRead;
@property(nonatomic) long long sortIndex; // @synthesize sortIndex;
@property(nonatomic) unsigned short bookStyle; // @synthesize bookStyle;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
@property(nonatomic) unsigned long long bookversion; // @synthesize bookversion;
@property(nonatomic) unsigned short booktype; // @synthesize booktype;
@property(nonatomic) unsigned short source; // @synthesize source;
@property(nonatomic) unsigned short status; // @synthesize status;
@property(nonatomic) long long size; // @synthesize size;
@property(retain, nonatomic) NSString *bookInfo; // @synthesize bookInfo;
@property(retain, nonatomic) NSString *topString; // @synthesize topString;
@property(nonatomic) long long lineOffset; // @synthesize lineOffset;
@property(nonatomic) long long paraOffset; // @synthesize paraOffset;
@property(retain, nonatomic) NSDate *readTime; // @synthesize readTime;
@property(retain, nonatomic) NSDate *addTime; // @synthesize addTime;
@property(nonatomic) long long progress; // @synthesize progress;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName;
@property(retain, nonatomic) NSString *bookName; // @synthesize bookName;
@property(retain, nonatomic) NSString *bookId; // @synthesize bookId;
- (double)readTimeIntervalInmillisecond;
- (double)addTimeIntervalInmillisecond;
- (id)imageFullPath;
- (id)fileFullPath;
- (_Bool)isEqual:(id)arg1;
- (id)getID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(nonatomic) _Bool oncePaiedWithAutoPayOn;
- (id)init;

@end

