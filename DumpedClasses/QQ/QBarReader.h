//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QBarReader : NSObject
{
    _Bool _isScanStaticImg;
    int _decodeType;
    long long _SucScanDecodeType;
}

@property(nonatomic) _Bool isScanStaticImg; // @synthesize isScanStaticImg=_isScanStaticImg;
@property(nonatomic) long long SucScanDecodeType; // @synthesize SucScanDecodeType=_SucScanDecodeType;
@property(nonatomic) int decodeType; // @synthesize decodeType=_decodeType;
- (char *)createRawGrayDataFromUIImage:(struct CGImage *)arg1 nWidth:(int *)arg2 nHeight:(int *)arg3;
- (id)getNSStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
- (id)decodeImage:(struct CGImage *)arg1;
- (id)scanImage:(struct CGImage *)arg1 withType:(int)arg2;
- (id)scanImage:(struct CGImage *)arg1;
- (struct CGImage *)compressImage:(struct CGImage *)arg1;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (struct CGSize)getProperlySize:(struct CGSize)arg1;
- (void)releaseQBar;
- (void)initQBar:(int)arg1;
- (void)dealloc;
- (id)initWithDecodeType:(int)arg1;

@end

