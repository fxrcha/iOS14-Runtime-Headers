/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UIPreviewPlatterPanControllerDelegate;
@class UIBezierPath, UIViewSpringAnimationBehavior, UIPanGestureRecognizer, NSArray, UIView, _UIVelocityIntegrator, NSString;

@interface _UIPreviewPlatterPanController : NSObject <UIGestureRecognizerDelegate> {

	unsigned long long _currentDetentIndex;
	double _initialYTranslation;
	UIBezierPath* _actionScrubPath;
	double _currentDistanceToActionScrubPath;
	CGPoint _initialLocationInsidePreview;
	BOOL _actionsViewIsVisible;
	BOOL _touchEverEnteredMenu;
	BOOL _enabled;
	UIViewSpringAnimationBehavior* _animationBehavior;
	id<_UIPreviewPlatterPanControllerDelegate> _delegate;
	UIPanGestureRecognizer* _panGestureRecognizer;
	NSArray* _detents;
	unsigned long long _initialDetentIndex;
	unsigned long long _rubberbandingEdges;
	NSArray* _accessoryViews;
	UIView* _containerView;
	UIView* _platterView;
	UIView* _actionsView;
	_UIVelocityIntegrator* _velocityIntegrator;
	CGPoint _originalPlatterCenter;
	CGPoint _originalActionsCenter;
	SCD_Struct_UI3 _menuAnchor;

}

@property (assign,nonatomic,__weak) UIView * containerView;                                           //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic,__weak) UIView * platterView;                                             //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) UIView * actionsView;                                             //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                           //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * velocityIntegrator;                              //@synthesize velocityIntegrator=_velocityIntegrator - In the implementation block
@property (nonatomic,readonly) UIViewSpringAnimationBehavior * animationBehavior;                     //@synthesize animationBehavior=_animationBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<_UIPreviewPlatterPanControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                            //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSArray * detents;                                                       //@synthesize detents=_detents - In the implementation block
@property (assign,nonatomic) unsigned long long initialDetentIndex;                                   //@synthesize initialDetentIndex=_initialDetentIndex - In the implementation block
@property (assign,nonatomic) CGPoint originalPlatterCenter;                                           //@synthesize originalPlatterCenter=_originalPlatterCenter - In the implementation block
@property (assign,nonatomic) CGPoint originalActionsCenter;                                           //@synthesize originalActionsCenter=_originalActionsCenter - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI3 menuAnchor;                                               //@synthesize menuAnchor=_menuAnchor - In the implementation block
@property (assign,nonatomic) unsigned long long rubberbandingEdges;                                   //@synthesize rubberbandingEdges=_rubberbandingEdges - In the implementation block
@property (nonatomic,retain) NSArray * accessoryViews;                                                //@synthesize accessoryViews=_accessoryViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccessoryViews:(NSArray *)arg1 ;
-(void)_animationsForPreviewPlusActionsStyleWithTranslation:(CGPoint)arg1 location:(CGPoint)arg2 ;
-(UIView *)containerView;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)_updateViewPositionsWithTranslation:(CGPoint)arg1 location:(CGPoint)arg2 ended:(BOOL)arg3 withVelocity:(BOOL)arg4 ;
-(UIView *)platterView;
-(NSArray *)accessoryViews;
-(void)_updatePlatterGestureDebugUIWithGesture:(id)arg1 invalidate:(BOOL)arg2 ;
-(void)_updateActionScrubPathWithLocationIfNecessary:(CGPoint)arg1 ;
-(CGPoint)_rubberBandedTranslationForGestureTranslation:(CGPoint)arg1 ;
-(id)initWithContainerView:(id)arg1 platterView:(id)arg2 actionsView:(id)arg3 ;
-(void)_animationsForActionsStyleWithLocation:(CGPoint)arg1 ended:(BOOL)arg2 ;
-(BOOL)enabled;
-(void)setDetents:(NSArray *)arg1 ;
-(_UIVelocityIntegrator *)velocityIntegrator;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2 ;
-(void)setContainerView:(UIView *)arg1 ;
-(SCD_Struct_UI3)menuAnchor;
-(NSArray *)detents;
-(void)setDelegate:(id<_UIPreviewPlatterPanControllerDelegate>)arg1 ;
-(UIView *)actionsView;
-(id<_UIPreviewPlatterPanControllerDelegate>)delegate;
-(void)setActionsView:(UIView *)arg1 ;
-(CGPoint)originalPlatterCenter;
-(void)setPlatterView:(UIView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(UIViewSpringAnimationBehavior *)animationBehavior;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_canSwipeDownToDismiss;
-(double)_dragTearOffThreshold;
-(CGVector)_currentPlatterVelocity;
-(int)_nearestDetentWithTranslation:(CGPoint)arg1 ;
-(BOOL)_canBeginDraggingWithTranslation:(CGPoint)arg1 location:(CGPoint)arg2 ;
-(double)_tearOffSpeedMultiplier;
-(void)_animationsForAnyAttachedAccessoryViews;
-(void)setEnabled:(BOOL)arg1 ;
-(CGPoint)originalActionsCenter;
-(void)setInitialDetentIndex:(unsigned long long)arg1 ;
-(BOOL)_initialPointInPlatterIsValid;
-(double)_rangeOfMotion;
-(void)setOriginalPlatterCenter:(CGPoint)arg1 ;
-(void)setOriginalActionsCenter:(CGPoint)arg1 ;
-(void)setRubberbandingEdges:(unsigned long long)arg1 ;
-(void)setMenuAnchor:(SCD_Struct_UI3)arg1 ;
-(void)setVelocityIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(unsigned long long)rubberbandingEdges;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(unsigned long long)initialDetentIndex;
@end
