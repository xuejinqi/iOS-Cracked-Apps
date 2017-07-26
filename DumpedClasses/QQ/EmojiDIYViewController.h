//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "EmojiDIYColorItemClick.h"
#import "IEngineDispatchDelegate.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class EmojiDIYMoveImageView, EmojiDIYMoveLabel, EmojiInfo, NSArray, NSMutableArray, NSString, QQBaseChatViewController, UIButton, UIImage, UIImageView, UIView;

@interface EmojiDIYViewController : QQViewController <UITableViewDelegate, UITextFieldDelegate, EmojiDIYColorItemClick, IEngineDispatchDelegate>
{
    UIView *backgroundView;
    UIView *preView;
    UIView *editView;
    EmojiDIYMoveLabel *moveLabel;
    EmojiDIYMoveImageView *imageGifView;
    UIButton *sendButton;
    NSMutableArray *editButtons;
    NSMutableArray *editViews;
    UIImageView *selectedTagView;
    double preScaleTime;
    struct CGRect textFieldRect;
    UIView *_nightModeMaskView;
    UIImage *_bgImage;
    EmojiInfo *_emojiInfo;
    NSArray *_titleArray;
    QQBaseChatViewController *_chatViewControllor;
}

+ (id)emojiDIYTempPath;
@property(nonatomic) __weak QQBaseChatViewController *chatViewControllor; // @synthesize chatViewControllor=_chatViewControllor;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) EmojiInfo *emojiInfo; // @synthesize emojiInfo=_emojiInfo;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)notifyError:(id)arg1;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)filterDirtyWord:(id)arg1;
- (void)emojiDIYColorClick:(id)arg1;
- (void)refreshMoveLabelView:(id)arg1;
- (void)textFieldEditChanged:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dismiss:(id)arg1;
- (void)selectButton:(id)arg1;
- (id)captureView:(id)arg1;
- (struct CGImage *)newImageRefBycompositeWithImage:(id)arg1 textView:(id)arg2;
- (void)makeAndSend;
- (void)makeAndSendClick:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)makeUpBottom;
- (void)handleGifDecodeNotification:(id)arg1;
- (void)makeUpImageView;
- (void)adjustForNightMode;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

