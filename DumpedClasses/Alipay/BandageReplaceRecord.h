//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BandageReplaceRecord : NSObject
{
    Class _klass;
    SEL _selector;
    CDUnknownFunctionPointerType _originalImplementation;
    NSString *_typeEncoding;
}

@property(retain, nonatomic) NSString *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(nonatomic) CDUnknownFunctionPointerType originalImplementation; // @synthesize originalImplementation=_originalImplementation;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) Class klass; // @synthesize klass=_klass;
- (void).cxx_destruct;
- (id)description;
- (void)restore;

@end

