//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQStructureMsgWriterBase.h"

@class NSDictionary, NSString;

@interface QQStructureMsgWriterCard : QQStructureMsgWriterBase
{
    NSString *_intro;
    NSString *_introElementName;
    NSDictionary *_introAttributes;
    _Bool _intro_showHrMessage;
    NSString *_intro_item_Layout;
    NSString *_intro_item_Mode;
}

- (void)dealloc;
- (id)createXMLMessageString;

// Remaining properties
@property(retain, nonatomic) NSString *intro; // @dynamic intro;
@property(retain, nonatomic) NSDictionary *introAttributes; // @dynamic introAttributes;
@property(retain, nonatomic) NSString *introElementName; // @dynamic introElementName;
@property(retain, nonatomic) NSString *intro_item_Layout; // @dynamic intro_item_Layout;
@property(retain, nonatomic) NSString *intro_item_Mode; // @dynamic intro_item_Mode;
@property(nonatomic) _Bool intro_showHrMessage; // @dynamic intro_showHrMessage;

@end

