//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DynamicResourceAndroidParameter : NSObject
{
    int _vmType;
    NSString *_releaseVersion;
    NSString *_channel;
    NSString *_apiLevel;
    NSString *_bandageVersion;
    NSString *_bundleVersion;
    NSString *_birdnestVersion;
    NSString *_nebulaVersion;
    NSString *_issueDesc;
}

@property(retain, nonatomic) NSString *issueDesc; // @synthesize issueDesc=_issueDesc;
@property(retain, nonatomic) NSString *nebulaVersion; // @synthesize nebulaVersion=_nebulaVersion;
@property(retain, nonatomic) NSString *birdnestVersion; // @synthesize birdnestVersion=_birdnestVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bandageVersion; // @synthesize bandageVersion=_bandageVersion;
@property(retain, nonatomic) NSString *apiLevel; // @synthesize apiLevel=_apiLevel;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *releaseVersion; // @synthesize releaseVersion=_releaseVersion;
@property(nonatomic) int vmType; // @synthesize vmType=_vmType;
- (void).cxx_destruct;
- (id)init;

@end

