//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface UnifyNameUtil : NSObject
{
    NSDictionary *_ruleDic;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSDictionary *ruleDic; // @synthesize ruleDic=_ruleDic;
- (void).cxx_destruct;
- (id)getValueByRuleKey:(id)arg1 uin:(unsigned long long)arg2 groupNick:(id)arg3 remark:(id)arg4 nick:(id)arg5 phoneNum:(id)arg6 autoRemark:(id)arg7 isMore:(_Bool)arg8;
- (id)getListDataByRule:(id)arg1 uin:(id)arg2 groupNick:(id)arg3 remark:(id)arg4 phoneNum:(id)arg5 autoRemark:(id)arg6 nick:(id)arg7;
- (id)getCardDataByRule:(id)arg1 model:(id)arg2;
- (id)getUnifyName:(int)arg1 showType:(int)arg2 uin:(id)arg3 phoneNum:(id)arg4 groupCode:(id)arg5 discussGroupUin:(long long)arg6 troopMemModel:(id)arg7;
- (id)getUnifyName:(int)arg1 showType:(int)arg2 uin:(id)arg3 phoneNum:(id)arg4 groupCode:(id)arg5 discussGroupUin:(long long)arg6;
- (id)init;

@end

