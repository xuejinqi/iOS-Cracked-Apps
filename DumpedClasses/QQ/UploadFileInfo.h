//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface UploadFileInfo : NSObject <NSCoding>
{
    NSString *_file_id;
    NSString *_sha1;
    NSString *_check_key;
    NSString *_host;
    unsigned int _port;
    NSString *_host_https;
    unsigned int _port_https;
    int _xo;
}

- (void)decodeWithProto:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *check_key; // @dynamic check_key;
@property(copy, nonatomic) NSString *file_id; // @dynamic file_id;
@property(copy, nonatomic) NSString *host; // @dynamic host;
@property(copy, nonatomic) NSString *host_https; // @dynamic host_https;
@property(nonatomic) unsigned int port; // @dynamic port;
@property(nonatomic) unsigned int port_https; // @dynamic port_https;
@property(copy, nonatomic) NSString *sha1; // @dynamic sha1;

@end

