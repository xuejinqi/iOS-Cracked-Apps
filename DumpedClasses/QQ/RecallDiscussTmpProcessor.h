//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RecallC2CBaseProcessor.h"

@interface RecallDiscussTmpProcessor : RecallC2CBaseProcessor
{
}

- (int)getEMessageType;
- (id)convertRecallItemToMsg:(struct RecallItem *)arg1 recallModel:(struct RecallModel *)arg2 msgType:(int)arg3;
- (id)getRecentMessageModelByMsg:(id)arg1;
- (struct UinTypeUserDef *)geneC2CUserDef:(id)arg1;
- (void)setRecallModelC2CTmpData:(struct RecallModelForC2C *)arg1 byMsg:(id)arg2;

@end

