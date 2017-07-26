//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface FADataSouceBase : NSObject
{
    long long _currentIndex;
    int _listType;
    struct FAListInfo _listInfo;
    struct FASmartDeviceInfo _smartDeviceDef;
    int _state;
    NSMutableDictionary *_deletingFile;
    NSMutableArray *_sectionList;
    _Bool _hasMore;
    _Bool _isFilterAlbum;
    id <IFADataSourceDelegate> _delegate;
    int _xo;
    _Bool _bFromChooser;
}

@property(nonatomic) _Bool bFromChooser; // @synthesize bFromChooser=_bFromChooser;
@property(nonatomic) struct FASmartDeviceInfo smartDeviceDef; // @synthesize smartDeviceDef=_smartDeviceDef;
@property(nonatomic) struct FAListInfo listInfo; // @synthesize listInfo=_listInfo;
- (void)deleteFile:(id)arg1;
- (_Bool)isFileDeleting:(id)arg1;
- (void)didDeleteFile:(id)arg1;
- (void)didReadFileListFail:(id)arg1;
- (void)didReadFileListDone:(id)arg1;
- (void)loadData;
- (void)reloadData;
- (void)prepareData:(_Bool)arg1;
- (void)dealloc;
- (void)initEvent;
- (id)initWithSmartDeviceInfo:(struct FASmartDeviceInfo)arg1;
- (id)initWithInfo:(struct FAListInfo)arg1;
- (id)initWithType:(int)arg1;

// Remaining properties
@property(nonatomic) id <IFADataSourceDelegate> delegate; // @dynamic delegate;
@property(readonly, nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) _Bool isFilterAlbum; // @dynamic isFilterAlbum;
@property(nonatomic) int listType; // @dynamic listType;
@property(readonly, nonatomic) NSMutableArray *sectionList; // @dynamic sectionList;
@property(readonly, nonatomic) int state; // @dynamic state;

@end

