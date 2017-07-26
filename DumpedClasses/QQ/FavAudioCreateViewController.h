//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "GAGrowingTextViewDelegate.h"

@class AudioModel, GAGrowingTextView, NSString, UIView, UIViewController;

@interface FavAudioCreateViewController : QQViewController <GAGrowingTextViewDelegate>
{
    QQViewController *_favController;
    AudioModel *_originModel;
    UIView *_bgView;
    GAGrowingTextView *_comment;
    UIView *_lineBottom;
    NSString *_audioPath;
    unsigned int _audioLength;
}

@property(retain, nonatomic) AudioModel *originModel; // @synthesize originModel=_originModel;
@property(retain, nonatomic) UIViewController *favController; // @synthesize favController=_favController;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)_collect;
- (void)_collect_edit;
- (void)_cancel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (id)initWithAudioPath:(id)arg1 length:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

