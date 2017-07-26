//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString;

@interface ReadInjoyAsynImageView : UIButton
{
    NSString *_urlStr;
    struct CGSize _fitSize;
    _Bool _isLocalPath;
    _Bool _shouldDecompressImage;
    int _xo;
}

- (void).cxx_destruct;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImage:(id)arg1;
- (CDStruct_9841f89e)getImageViewInfo;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) struct CGSize fitSize; // @dynamic fitSize;
@property(nonatomic) _Bool isLocalPath; // @dynamic isLocalPath;
@property(nonatomic) _Bool shouldDecompressImage; // @dynamic shouldDecompressImage;
@property(retain, nonatomic) NSString *urlStr; // @dynamic urlStr;

@end

