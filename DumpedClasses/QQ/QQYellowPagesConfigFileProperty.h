//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQYellowPagesConfigFileProperty : NSObject
{
    NSString *_fileTag;
    NSString *_fileUrl;
    NSString *_fileHash;
    NSString *_fileKey;
    int _fileXor;
    int _fileVersion;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *fileHash; // @dynamic fileHash;
@property(copy, nonatomic) NSString *fileKey; // @dynamic fileKey;
@property(copy, nonatomic) NSString *fileTag; // @dynamic fileTag;
@property(copy, nonatomic) NSString *fileUrl; // @dynamic fileUrl;
@property(nonatomic) int fileVersion; // @dynamic fileVersion;
@property(nonatomic) int fileXor; // @dynamic fileXor;

@end

