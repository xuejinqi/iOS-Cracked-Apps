//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OListViewController.h"

#import "O2OCommonSchemeProtocol.h"
#import "UIActionSheetDelegate.h"

@class NSString, O2OCommentDetailDataSource, O2OCommentDetailListModel, O2ODeleteCommentModel, VZListViewDelegate;

@interface O2OCommentDetailViewController : O2OListViewController <O2OCommonSchemeProtocol, UIActionSheetDelegate>
{
    _Bool _hideDelete;
    NSString *_commentId;
    O2OCommentDetailListModel *_commentListModel;
    O2ODeleteCommentModel *_deleteCommentModel;
    O2OCommentDetailDataSource *_ds;
    VZListViewDelegate *_dl;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) VZListViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) O2OCommentDetailDataSource *ds; // @synthesize ds=_ds;
@property(nonatomic) _Bool hideDelete; // @synthesize hideDelete=_hideDelete;
@property(retain, nonatomic) O2ODeleteCommentModel *deleteCommentModel; // @synthesize deleteCommentModel=_deleteCommentModel;
@property(retain, nonatomic) O2OCommentDetailListModel *commentListModel; // @synthesize commentListModel=_commentListModel;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (void)likeCommentNotiHandler:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showNoResult:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)deleteComment;
- (void)dealloc;
- (void)back;
- (id)pageSpm;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

