//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YoutuOcrDetatil;

@interface YoutTuResponse : NSObject
{
    int _errorcode;
    NSString *_errormsg;
    YoutuOcrDetatil *_detail;
}

@property(retain, nonatomic) YoutuOcrDetatil *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *errormsg; // @synthesize errormsg=_errormsg;
@property(nonatomic) int errorcode; // @synthesize errorcode=_errorcode;
- (void).cxx_destruct;
- (void)dealloc;
- (void)printLog;

@end

