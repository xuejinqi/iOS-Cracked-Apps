//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDictionary, NSString;

@interface CDPSpaceInfo : NSObject <NSCoding>
{
    int _height;
    int _width;
    int _rotationTime;
    int _displayMaxCount;
    int _urlMaxHeight;
    NSString *_spaceCode;
    NSString *_type;
    NSString *_iosViewId;
    NSString *_androidViewId;
    NSString *_h5ViewId;
    NSString *_appId;
    NSArray *_spaceObjectList;
    NSString *_location;
    NSString *_updatePolicy;
    long long _reqRpcTime;
    NSString *_multiStyle;
    NSString *_picStandard;
    NSArray *_localRuleList;
    NSArray *_feedbackRuleList;
    NSDictionary *_extInfo;
    NSArray *_spaceFatigues;
}

+ (Class)spaceFatiguesElementClass;
+ (Class)extInfoElementClass;
+ (Class)feedbackRuleListElementClass;
+ (Class)localRuleListElementClass;
+ (Class)spaceObjectListElementClass;
+ (void)preloadPicture:(id)arg1 completionOnMainQueue:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *spaceFatigues; // @synthesize spaceFatigues=_spaceFatigues;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSArray *feedbackRuleList; // @synthesize feedbackRuleList=_feedbackRuleList;
@property(retain, nonatomic) NSArray *localRuleList; // @synthesize localRuleList=_localRuleList;
@property(retain, nonatomic) NSString *picStandard; // @synthesize picStandard=_picStandard;
@property(nonatomic) int urlMaxHeight; // @synthesize urlMaxHeight=_urlMaxHeight;
@property(nonatomic) int displayMaxCount; // @synthesize displayMaxCount=_displayMaxCount;
@property(nonatomic) int rotationTime; // @synthesize rotationTime=_rotationTime;
@property(retain, nonatomic) NSString *multiStyle; // @synthesize multiStyle=_multiStyle;
@property(nonatomic) long long reqRpcTime; // @synthesize reqRpcTime=_reqRpcTime;
@property(retain, nonatomic) NSString *updatePolicy; // @synthesize updatePolicy=_updatePolicy;
@property(nonatomic) int width; // @synthesize width=_width;
@property(nonatomic) int height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *spaceObjectList; // @synthesize spaceObjectList=_spaceObjectList;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *h5ViewId; // @synthesize h5ViewId=_h5ViewId;
@property(retain, nonatomic) NSString *androidViewId; // @synthesize androidViewId=_androidViewId;
@property(retain, nonatomic) NSString *iosViewId; // @synthesize iosViewId=_iosViewId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
- (void).cxx_destruct;
- (void)addSpaceObjectExtInfo:(id)arg1;
- (_Bool)addSpaceClickTimes;
- (_Bool)addSpaceShowTimes;
- (_Bool)checkSpaceInfoFatigue;
- (_Bool)hasObjectId:(id)arg1;
- (_Bool)checkSpaceInfoCallBack;
- (id)getObjectIdsBySpaceInfo;
- (_Bool)isViewEqualToSpaceInfo:(id)arg1;
- (void)preloadPicturesForced:(_Bool)arg1 completionOnMainQueue:(CDUnknownBlockType)arg2;
- (double)getAutoClosedTime;
- (void)resetSpaceInfo:(_Bool)arg1 isJumpByUser:(_Bool)arg2 objectId:(id)arg3;
- (_Bool)isCloseAfterJumpType;
- (_Bool)needReportWithBehavior:(id)arg1;
- (_Bool)hasLocalRuleWithKey:(id)arg1;
- (_Bool)isNeedUpdateRPC;
- (int)spaceLevel;
- (_Bool)checkPromotionBizInfo:(id)arg1 extInfo:(id)arg2;
- (id)getUsefulSpaceObjectInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

