//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQUrlPhoto.h"

@interface FavUrlPhoto : QQUrlPhoto
{
    _Bool _isSupportWebp;
}

@property(nonatomic) _Bool isSupportWebp; // @synthesize isSupportWebp=_isSupportWebp;
- (void)reloadPhoto;
- (void)thumbPhotoRequestDidFinishLoad;
- (void)photoRequestDidFinishLoad;
- (void)asynLoadImage;
- (id)getImage;
- (id)getImageRaw;

@end

