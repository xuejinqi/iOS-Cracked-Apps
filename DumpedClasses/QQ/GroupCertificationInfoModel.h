//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQGroupSettingModel;

@interface GroupCertificationInfoModel : NSObject
{
    unsigned int _status;
    unsigned int _maxModifyTime;
    unsigned int _remainModifyTime;
    QQGroupSettingModel *_groupInfo;
}

@property(retain, nonatomic) QQGroupSettingModel *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(nonatomic) unsigned int remainModifyTime; // @synthesize remainModifyTime=_remainModifyTime;
@property(nonatomic) unsigned int maxModifyTime; // @synthesize maxModifyTime=_maxModifyTime;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void)dealloc;

@end

