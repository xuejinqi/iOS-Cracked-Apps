//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSMutableCopying.h"

@class BCardOCRModel, NSArray, NSMutableArray, NSString;

@interface BCardInfoModel : QQModel <NSMutableCopying>
{
    _Bool _isShowLabelTip;
    unsigned int _last_update_time;
    NSString *_card_id;
    NSString *_pic_url;
    NSString *_name;
    NSString *_company;
    NSMutableArray *_uins;
    NSMutableArray *_mobiles;
    NSMutableArray *_descs;
    unsigned long long _bind_uin;
    NSString *_bind_mbl;
    unsigned long long _card_src;
    NSArray *_mobile_info;
    BCardOCRModel *_ocr_info;
    NSMutableArray *_uin_info;
    unsigned long long _cardListType;
    NSString *_labelTip;
}

+ (void)getDisplayView:(id)arg1 remarkName:(id)arg2 alpha:(double)arg3 WithBlock:(CDUnknownBlockType)arg4;
+ (void)getDisplayView:(id)arg1 remarkName:(id)arg2 WithBlock:(CDUnknownBlockType)arg3;
+ (void)getDisplayView:(id)arg1 WithBlock:(CDUnknownBlockType)arg2;
+ (void)getCardImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool isShowLabelTip; // @synthesize isShowLabelTip=_isShowLabelTip;
@property(copy, nonatomic) NSString *labelTip; // @synthesize labelTip=_labelTip;
@property(nonatomic) unsigned long long cardListType; // @synthesize cardListType=_cardListType;
@property(retain, nonatomic) NSMutableArray *uin_info; // @synthesize uin_info=_uin_info;
@property(retain, nonatomic) BCardOCRModel *ocr_info; // @synthesize ocr_info=_ocr_info;
@property(copy, nonatomic) NSArray *mobile_info; // @synthesize mobile_info=_mobile_info;
@property(nonatomic) unsigned int last_update_time; // @synthesize last_update_time=_last_update_time;
@property(nonatomic) unsigned long long card_src; // @synthesize card_src=_card_src;
@property(copy, nonatomic) NSString *bind_mbl; // @synthesize bind_mbl=_bind_mbl;
@property(nonatomic) unsigned long long bind_uin; // @synthesize bind_uin=_bind_uin;
@property(retain, nonatomic) NSMutableArray *descs; // @synthesize descs=_descs;
@property(retain, nonatomic) NSMutableArray *mobiles; // @synthesize mobiles=_mobiles;
@property(retain, nonatomic) NSMutableArray *uins; // @synthesize uins=_uins;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *pic_url; // @synthesize pic_url=_pic_url;
@property(copy, nonatomic) NSString *card_id; // @synthesize card_id=_card_id;
- (void).cxx_destruct;
- (_Bool)isEqualNSMultable:(id)arg1 new:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isCardInfoEmpty;
- (id)init;
- (id)initWithCardSrc:(unsigned long long)arg1;
- (id)initWithCard:(id)arg1 pic_url:(id)arg2 name:(id)arg3 company:(id)arg4 uins:(id)arg5 mbl:(id)arg6 mobiles:(id)arg7 descs:(id)arg8 bind_uin:(unsigned long long)arg9 card_src:(unsigned long long)arg10 last_update_time:(unsigned int)arg11 mobile_info:(id)arg12 ocr_info:(id)arg13 uin_info:(id)arg14;

@end

