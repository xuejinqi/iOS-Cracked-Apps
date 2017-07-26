//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, QQPersonalThemeStyleData;

@interface QQPersonalThemeDataManager : NSObject
{
    NSMutableDictionary *_currentSelectedBgDatas;
    _Bool _isFinishSetup;
    _Bool _hasChange;
    id <QQPersonalThemeDataManagerDelegate> _delegate;
    long long _currentPreviewType;
    NSMutableArray *_bginfos;
    QQPersonalThemeStyleData *_styleData;
}

@property(retain, nonatomic) QQPersonalThemeStyleData *styleData; // @synthesize styleData=_styleData;
@property(retain, nonatomic) NSMutableArray *bginfos; // @synthesize bginfos=_bginfos;
@property(nonatomic) long long currentPreviewType; // @synthesize currentPreviewType=_currentPreviewType;
@property(nonatomic) _Bool hasChange; // @synthesize hasChange=_hasChange;
@property(nonatomic) id <QQPersonalThemeDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)adjustCurrentSelectedBgDataWithType:(long long)arg1;
- (void)setTheme;
- (void)downloadBgImage;
- (void)handleQQThemeDownloadStatusNotification:(id)arg1;
- (void)setupData;
- (id)getDIYThemeBackgroundId;
- (void)saveDIYTheme;
- (_Bool)isCurrentThemeChanged;
- (id)createThemeBackgroundModelListByJsonArray:(id)arg1;
- (id)convertBackgroundJsonToModel:(id)arg1;
- (void)dealDataWithDic:(id)arg1;
- (id)adjustCurrentSelectedBgData:(id)arg1 withPreviewType:(long long)arg2;
- (void)addSelectBgInfoIfNotExistInBgList:(id)arg1 selectBgData:(id)arg2;
- (void)setupCurrentSelectedBgDatasFromBgList:(id)arg1;
- (void)dealBackgroundMallDataWithDict:(id)arg1;
- (void)setupMallBackgroundData;
- (void)setupMallData;
- (id)currentBgDataWithType:(long long)arg1;
- (void)saveBg:(id)arg1 withViewType:(long long)arg2;
- (void)setupStyleListAndBgList;
- (void)observeContentUpdateFinished:(id)arg1;
- (id)init;
- (void)dealloc;

@end

