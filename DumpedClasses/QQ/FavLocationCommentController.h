//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "GAGrowingTextViewDelegate.h"

@class GAGrowingTextView, LocationModel, NSString, UIImageView, UILabel, UIView, UIViewController;

@interface FavLocationCommentController : QQViewController <GAGrowingTextViewDelegate>
{
    struct CLLocationCoordinate2D _coordinate;
    QQViewController *_favController;
    NSString *_address;
    LocationModel *_originModel;
    NSString *_name;
    UIView *_bgView;
    GAGrowingTextView *_locComment;
    UIImageView *_locIcon;
    UILabel *_locLabel;
    UIView *_lineBottom;
}

@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) UIViewController *favController; // @synthesize favController=_favController;
- (void)adjustContentSize;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)_collectLocation;
- (void)_modifyLocation;
- (void)_back2map;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) LocationModel *originModel; // @dynamic originModel;
@property(readonly) Class superclass;

@end

