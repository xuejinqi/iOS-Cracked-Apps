//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface TCQRCodeTemplateManager : NSObject
{
    NSArray *_templates;
    NSMutableDictionary *_configDict;
    long long _currentStyle;
    NSString *_configId;
    int _xo;
}

+ (long long)RuleVersion;
- (long long)getCertifiedIndex;
- (id)getCertifiedTemplateEx;
- (id)getCertifiedTemplate;
- (_Bool)addLoadingTaskWithTemplate:(id)arg1;
- (id)imageForPath:(id)arg1;
- (void)saveConfig;
- (void)resetToTemplate:(id)arg1;
- (void)reset;
- (id)templateAtIndex:(unsigned long long)arg1;
- (id)currentTemplate;
- (id)nextAvailableTemplateWithQRSymWidthLimit:(unsigned long long)arg1 bCertified:(_Bool)arg2;
- (id)nextTemplateWithQRSymWidthLimit:(unsigned long long)arg1;
@property(nonatomic) long long currentStyle; // @dynamic currentStyle;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *configDict; // @dynamic configDict;
@property(retain, nonatomic) NSString *configId; // @dynamic configId;
@property(retain, nonatomic) NSArray *templates; // @dynamic templates;

@end

