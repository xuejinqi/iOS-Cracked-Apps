//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIFTPRODToString.h"

@class NSDictionary, NSString;

@interface GIFTPRODRemarkReq : GIFTPRODToString
{
    NSString *_crowdNo;
    NSString *_remark;
    NSString *_emoji;
    NSDictionary *_extInfo;
}

@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
- (void).cxx_destruct;

@end

