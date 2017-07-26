//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, QQAvatarView, UIImage;

@protocol ITCQRCodeLayoutDataSource <NSObject>
- (unsigned int)certificationType;
- (NSNumber *)isCertified;
- (NSString *)qrcodeText;
- (NSString *)tips;
- (NSString *)nickname;
- (UIImage *)logoIcon;
- (QQAvatarView *)avatarView;
@end

