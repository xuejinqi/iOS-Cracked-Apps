//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MVScheduleModel.h"

@class MVPartnerModel, NSArray, NSDate, NSDateComponents, NSDictionary, NSString;

@interface MVScheduleModel_DynamicPlastic_MethodContainer : NSObject <MVScheduleModel>
{
}

+ (id)dateCompontentsFromTimeString:(id)arg1;
+ (id)parameterMap;
- (_Bool)availableForSale:(long long)arg1;
- (id)displayPriceString;
- (id)memberPriceString;
@property(readonly, nonatomic) NSString *view_mcardDiscountActivityString;
@property(readonly, nonatomic) NSString *specialActivityString;
- (id)activityString;
- (id)currentPriceString;
- (id)oldPriceString;
@property(readonly, nonatomic) MVPartnerModel *partnerOfChoice;
- (id)_formatPrice:(id)arg1;
@property(readonly, nonatomic) NSString *saleActivityString;
- (id)endShowTimeStringFromDuration:(id)arg1;
- (_Bool)view_isNextDayMidNight;
- (_Bool)belongToSameDay:(id)arg1;
- (id)shortShowTimeString;

// Remaining properties
@property(copy, nonatomic) NSString *cinemaId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fcodeRefundable;
@property(copy, nonatomic) NSString *hallName;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *id_;
@property(retain, nonatomic) NSDate *movieShowStartDate;
@property(retain, nonatomic) NSArray *partners;
@property(copy, nonatomic) NSString *price;
@property(nonatomic) float refundableTimeBeforeOpen;
@property(retain, nonatomic) NSDateComponents *saved_dateComponents;
@property(nonatomic) _Bool scheduleRefundable;
@property(retain, nonatomic) NSDictionary *sections;
@property(copy, nonatomic) NSString *showDate;
@property(copy, nonatomic) NSString *showId;
@property(copy, nonatomic) NSString *showTime;
@property(copy, nonatomic) NSString *showVersion;
@property(retain, nonatomic) NSArray *specialSchedules;
@property(readonly) Class superclass;
@property(nonatomic) _Bool view_hasPreSchedule;
@property(copy, nonatomic) NSString *wandaJumpUrl;

@end

