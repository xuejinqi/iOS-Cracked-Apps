//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class QQStoryMemoryYearDescriptionView, TBDateVideoCollectionModel;

@interface QQStoryMemoryYearCell : UITableViewCell
{
    TBDateVideoCollectionModel *_model;
    QQStoryMemoryYearDescriptionView *_yearDescriptionView;
}

+ (double)height;
@property(retain, nonatomic) QQStoryMemoryYearDescriptionView *yearDescriptionView; // @synthesize yearDescriptionView=_yearDescriptionView;
@property(retain, nonatomic) TBDateVideoCollectionModel *model; // @synthesize model=_model;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

