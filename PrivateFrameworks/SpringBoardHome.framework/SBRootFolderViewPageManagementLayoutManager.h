/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconViewProviding.h>
#import <libobjc.A.dylib/SBIconViewDelegate.h>
#import <libobjc.A.dylib/SBIconListViewDragDelegate.h>
#import <libobjc.A.dylib/SBPageManagementCellViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/SBIconListViewDominoPivotAnimatorDelegate.h>
#import <libobjc.A.dylib/SBRootFolderViewLayoutManager.h>

@protocol SBDockOffscreenFractionModifying;
@class SBRootFolderView, NSMapTable, UILabel, SBTitledHomeScreenButton, SBIconListView, UIScrollView, SBPageManagementIcon, UITapGestureRecognizer, NSString;

@interface SBRootFolderViewPageManagementLayoutManager : NSObject <SBIconViewProviding, SBIconViewDelegate, SBIconListViewDragDelegate, SBPageManagementCellViewControllerDelegate, UIScrollViewDelegate, SBIconListViewDominoPivotAnimatorDelegate, SBRootFolderViewLayoutManager> {

	NSMapTable* _iconViewControllersByIcon;
	NSMapTable* _iconViewControllersByListModel;
	NSMapTable* _pageIconsByListModel;
	SBRootFolderView* _rootFolderView;
	UILabel* _titleLabel;
	SBTitledHomeScreenButton* _doneButton;
	SBIconListView* _rootListView;
	UIScrollView* _pageManagementScrollView;
	id<SBDockOffscreenFractionModifying> _dockOffscreenAssertion;
	unsigned long long _transitionCount;
	SBPageManagementIcon* _draggingIcon;
	long long _layoutAction;
	long long _layoutConfiguration;
	UITapGestureRecognizer* _backgroundTapGestureRecognizer;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SBTitledHomeScreenButton * doneButton;                                    //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) SBIconListView * rootListView;                                            //@synthesize rootListView=_rootListView - In the implementation block
@property (nonatomic,retain) UIScrollView * pageManagementScrollView;                                  //@synthesize pageManagementScrollView=_pageManagementScrollView - In the implementation block
@property (nonatomic,retain) id<SBDockOffscreenFractionModifying> dockOffscreenAssertion;              //@synthesize dockOffscreenAssertion=_dockOffscreenAssertion - In the implementation block
@property (assign,nonatomic) unsigned long long transitionCount;                                       //@synthesize transitionCount=_transitionCount - In the implementation block
@property (nonatomic,retain) SBPageManagementIcon * draggingIcon;                                      //@synthesize draggingIcon=_draggingIcon - In the implementation block
@property (assign,nonatomic) long long layoutAction;                                                   //@synthesize layoutAction=_layoutAction - In the implementation block
@property (assign,nonatomic) long long layoutConfiguration;                                            //@synthesize layoutConfiguration=_layoutConfiguration - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * backgroundTapGestureRecognizer;                  //@synthesize backgroundTapGestureRecognizer=_backgroundTapGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SBRootFolderView * rootFolderView;                                 //@synthesize rootFolderView=_rootFolderView - In the implementation block
-(void)setDoneButton:(SBTitledHomeScreenButton *)arg1 ;
-(SBTitledHomeScreenButton *)doneButton;
-(id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(BOOL)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2 ;
-(void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2 ;
-(void)configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(UILabel *)titleLabel;
-(BOOL)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(BOOL)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(BOOL)iconViewCanBeginDrags:(id)arg1 ;
-(void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)layoutSubviews;
-(id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(void)recycleIconView:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg1 ;
-(void)iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(id)customImageViewControllerForIconView:(id)arg1 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg1 ;
-(id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(SBRootFolderView *)rootFolderView;
-(void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3 ;
-(void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3 ;
-(id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(void)setRootFolderView:(SBRootFolderView *)arg1 ;
-(void)transitionToActive:(BOOL)arg1 usingAnimator:(id)arg2 ;
-(void)layoutScrollViewAndRootListViewInFolderView:(id)arg1 ;
-(SBIconListView *)rootListView;
-(void)layoutTitleLabelsInFolderView:(id)arg1 ;
-(void)layoutDoneButtonInFolderView:(id)arg1 metrics:(const SBRootFolderViewMetrics*)arg2 ;
-(UIScrollView *)pageManagementScrollView;
-(long long)layoutConfiguration;
-(UITapGestureRecognizer *)backgroundTapGestureRecognizer;
-(id)firstNonHiddenAndValidIconListModelForFolderView:(id)arg1 outListIndex:(long long*)arg2 outPageIconListIndex:(long long*)arg3 ;
-(void)setPageManagementScrollView:(UIScrollView *)arg1 ;
-(void)backgroundTapped:(id)arg1 ;
-(void)makeRootListViewAnimated:(BOOL)arg1 ;
-(id<SBDockOffscreenFractionModifying>)dockOffscreenAssertion;
-(void)setDockOffscreenAssertion:(id<SBDockOffscreenFractionModifying>)arg1 ;
-(void)cleanUpViewsInFolderView:(id)arg1 ;
-(unsigned long long)transitionCount;
-(void)setTransitionCount:(unsigned long long)arg1 ;
-(void)setLayoutAction:(long long)arg1 ;
-(unsigned long long)folderListIndexToAnimateOutForList:(id)arg1 inFolder:(id)arg2 avoidingList:(id)arg3 ;
-(id)newCellBackgroundMaterialViewWithInitialWeighting:(double)arg1 ;
-(void)setLayoutConfiguration:(long long)arg1 ;
-(void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(CGPoint)arg3 ;
-(void)setRootListView:(SBIconListView *)arg1 ;
-(void)setDraggingIcon:(SBPageManagementIcon *)arg1 ;
-(SBPageManagementIcon *)draggingIcon;
-(long long)layoutAction;
-(void)setBackgroundTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)pageManagementCellViewControllerDidReceiveTap:(id)arg1 ;
-(void)dominoPivotAnimator:(id)arg1 didLayOutIconView:(id)arg2 ;
-(void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
@end
