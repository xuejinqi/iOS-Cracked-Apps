//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQLoggerInfo : NSObject
{
    struct tm _logDate;
    int _logMS;
    char _logFileName[31];
    int _logFileLine;
    int _logLevel;
    int _logThreadId;
    int _logSeq;
    char _moduleName[31];
    char _actionName[31];
    char *_logContent;
    _Bool _isWriteToFile;
}

@property(nonatomic) int logMS; // @synthesize logMS=_logMS;
@property(nonatomic) _Bool isWriteToFile; // @synthesize isWriteToFile=_isWriteToFile;
@property(nonatomic) char *logContent; // @synthesize logContent=_logContent;
@property(nonatomic) int logSeq; // @synthesize logSeq=_logSeq;
@property(nonatomic) int logThreadId; // @synthesize logThreadId=_logThreadId;
@property(nonatomic) int logLevel; // @synthesize logLevel=_logLevel;
@property(nonatomic) int logFileLine; // @synthesize logFileLine=_logFileLine;
@property(nonatomic) struct tm logDate; // @synthesize logDate=_logDate;
- (id)getText;
- (void)writeToFile:(struct __sFILE *)arg1;
- (int)levelStrToInt:(id)arg1;
- (const char *)getLevelDescription;
- (const char *)getActionName;
- (void)setActionName:(const char *)arg1;
- (const char *)getModuleName;
- (void)setModuleName:(const char *)arg1;
- (const char *)getLogFileName;
- (void)setLogFileName:(const char *)arg1;
- (void)reset;
- (void)dealloc;

@end

