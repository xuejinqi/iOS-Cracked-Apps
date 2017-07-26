//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIFont;

@protocol QQFACellViewDelegate <NSObject>
- (void)getAudioIconWithBlock:(void (^)(_Bool, UIImage *))arg1;
- (void)getFileImage:(int)arg1 block:(void (^)(NSString *, UIImage *, struct CGSize))arg2;
- (void)getFileIconWithBlock:(void (^)(NSString *, UIImage *, struct CGSize))arg1;
- (void)getHeadImageWithBlock:(void (^)(_Bool, NSString *, NSString *, UIImage *))arg1;
- (void)getTransferInfoWithBlock:(void (^)(_Bool, double, _Bool, NSString *))arg1;
- (NSString *)getMultiPicTitle;
- (NSString *)getAccessibilityValue;
- (NSString *)getFileSize;
- (NSString *)getTruncateMiddleFileNameForSize:(struct CGSize)arg1 font:(UIFont *)arg2;
- (NSString *)getFileName;
- (unsigned int)getBubbleId;
- (void)didHeadTouch;
- (void)didActionButtonTouch;
@end

