//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAPrinter.h"

@class NSString;

@interface FAPrinterPCQQ : FAPrinter
{
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)testAvailability:(id *)arg1;
- (_Bool)print:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)displayName;
- (_Bool)isEqualToContent:(id)arg1;
- (id)storageDictionary;
- (id)initWithPrinterManager:(id)arg1 storageDictionary:(id)arg2;
- (id)initWithPrinterManager:(id)arg1 name:(id)arg2;

@end

