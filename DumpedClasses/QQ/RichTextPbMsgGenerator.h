//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RichTextPbMsgGenerator : NSObject
{
}

+ (struct RichText *)GenDoodleInfo:(id)arg1;
+ (struct RichText *)GenHighBoom:(id)arg1;
+ (struct RichText *)GenFlashChat:(id)arg1;
+ (struct RichText *)GenBabyQGuideWithCookie:(id)arg1;
+ (struct RichText *)GenPoke:(unsigned int)arg1 PaintedEgg:(unsigned char)arg2;
+ (struct RichText *)GenCustomFaceImg:(id)arg1 frontText:(id)arg2 messageModel:(id)arg3;
+ (struct RichText *)GenCustomFaceImg:(id)arg1;
+ (struct RichText *)GenGroupStoryVideoInfo:(id)arg1 message:(id)arg2;
+ (struct RichText *)GenSVideoInfo:(id)arg1 message:(id)arg2;
+ (struct RichText *)GenC2CPttInfo:(id)arg1 message:(id)arg2;
+ (struct RichText *)GenPttInfo:(id)arg1 message:(id)arg2;
+ (struct RichText *)GenSpriteActionInfo:(id)arg1;
+ (struct RichText *)GenShakeWindow;
+ (struct RichText *)GenMarketFaceInfo:(id)arg1;
+ (struct RichText *)GenNotOnlineImgText:(id)arg1 andText:(id)arg2 message:(id)arg3;
+ (struct RichText *)GenNotOnlineImgText:(id)arg1;
+ (_Bool)fillElems:(struct SourceMsg *)arg1 text:(id)arg2;
+ (id)GetArkAppData:(id)arg1;
+ (struct RichText *)GenArkAppMsg:(id)arg1;
+ (struct RichText *)GenArkApp:(id)arg1 text:(id)arg2;
+ (struct RichText *)GenAddText:(id)arg1 message:(id)arg2 byRichText:(struct RichText *)arg3;
+ (struct RichText *)GenText:(id)arg1 message:(id)arg2;
+ (void)SetValueToEleOfRichText:(struct Elem *)arg1 SplitedEle:(struct CSplitedEleWithEmo *)arg2;

@end

