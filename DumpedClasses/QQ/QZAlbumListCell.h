//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZPhotoModuleCell.h"

#import "QZPhotoModuleDownloaderInterfaceDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton;

@interface QZAlbumListCell : QZPhotoModuleCell <QZPhotoModuleDownloaderInterfaceDelegate>
{
    UIButton *_createAlbumBtn;
    NSMutableArray *_albumCoverURLArrays;
    NSArray *_albumModelArrays;
    NSMutableArray *_albumCoverArrays;
}

+ (double)heightWithTopMargin:(double)arg1 bottomMargin:(double)arg2;
+ (struct CGSize)coverSize;
@property(retain, nonatomic) NSMutableArray *albumCoverArrays; // @synthesize albumCoverArrays=_albumCoverArrays;
@property(retain, nonatomic) NSArray *albumModelArrays; // @synthesize albumModelArrays=_albumModelArrays;
- (void).cxx_destruct;
- (void)dealloc;
- (id)typeLabelStr:(long long)arg1 isIndividualAlbum:(_Bool)arg2;
- (id)descLabelStr:(id)arg1;
- (void)onClickCreateAlbumBtn:(id)arg1;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
- (void)onClickCover:(id)arg1;
- (void)onClickCoverMask:(id)arg1;
- (id)coverImageMaskWithWidth:(double)arg1;
- (void)createAlbumCoverArray:(struct CGSize)arg1;
- (void)updateAlbumModeyArrays:(id)arg1 topMargin:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

