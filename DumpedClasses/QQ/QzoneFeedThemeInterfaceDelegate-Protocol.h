//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QzoneFeedModel, UIColor, UIFont, UIImage;

@protocol QzoneFeedThemeInterfaceDelegate <NSObject>
- (UIImage *)scaleImg:(UIImage *)arg1 toSize:(struct CGSize)arg2;
- (double)dynamicFontSizeForValue:(double)arg1;
- (UIColor *)templateColorForKey:(NSString *)arg1;
- (UIFont *)styleFontForKey:(NSString *)arg1;
- (NSString *)dressUrlOfFeedmodel:(QzoneFeedModel *)arg1;
- (_Bool)isCurrentThemeNight;
- (UIImage *)defaultAccessoryImage;
- (UIImage *)cacheImageInCurrentThemeNamed:(NSString *)arg1;
- (UIImage *)imageInDefaultThemeNamed:(NSString *)arg1;
- (UIImage *)imageInCurrentThemeNamed:(NSString *)arg1;
- (UIImage *)resizeableImageInCurrentThemeNamed:(NSString *)arg1;
@end

