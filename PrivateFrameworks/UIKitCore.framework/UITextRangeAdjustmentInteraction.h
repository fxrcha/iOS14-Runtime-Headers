/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIInteraction.h>

@protocol UITextRangeAdjustmentInteractionDelegate;
@class UIView, UITextGestureTuning, UITextRangeAdjustmentGestureRecognizer, UITouch, NSString;

@interface UITextRangeAdjustmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {

	UIView* _view;
	UITextGestureTuning* _gestureTuning;
	BOOL _baseIsStart;
	id<UITextRangeAdjustmentInteractionDelegate> _delegate;
	UITextRangeAdjustmentGestureRecognizer* _adjustmentGestureRecognizer;
	double _initialDistance;
	double _firstMovedTime;
	UITouch* _activeTouch;
	CGPoint _initialExtentPoint;
	CGPoint _initialPoint;
	CGPoint _basePoint;
	CGPoint _extentPoint;
	CGPoint _initialBasePoint;
	CGPoint _touchOffset;

}

@property (assign,nonatomic) CGPoint initialPoint;                                                                //@synthesize initialPoint=_initialPoint - In the implementation block
@property (assign,nonatomic) CGPoint basePoint;                                                                   //@synthesize basePoint=_basePoint - In the implementation block
@property (assign,nonatomic) CGPoint extentPoint;                                                                 //@synthesize extentPoint=_extentPoint - In the implementation block
@property (assign,nonatomic) CGPoint initialBasePoint;                                                            //@synthesize initialBasePoint=_initialBasePoint - In the implementation block
@property (assign,nonatomic) double initialDistance;                                                              //@synthesize initialDistance=_initialDistance - In the implementation block
@property (assign,nonatomic) CGPoint touchOffset;                                                                 //@synthesize touchOffset=_touchOffset - In the implementation block
@property (assign,nonatomic) double firstMovedTime;                                                               //@synthesize firstMovedTime=_firstMovedTime - In the implementation block
@property (nonatomic,retain) UITouch * activeTouch;                                                               //@synthesize activeTouch=_activeTouch - In the implementation block
@property (assign,nonatomic) BOOL baseIsStart;                                                                    //@synthesize baseIsStart=_baseIsStart - In the implementation block
@property (nonatomic,readonly) CGPoint initialExtentPoint;                                                        //@synthesize initialExtentPoint=_initialExtentPoint - In the implementation block
@property (assign,nonatomic,__weak) id<UITextRangeAdjustmentInteractionDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextRangeAdjustmentGestureRecognizer * adjustmentGestureRecognizer;              //@synthesize adjustmentGestureRecognizer=_adjustmentGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIView * view;                                                              //@synthesize view=_view - In the implementation block
-(void)didMoveToView:(id)arg1 ;
-(void)_updateAdjustmentInteractionWithState:(long long)arg1 location:(CGPoint)arg2 locationOfFirstTouch:(CGPoint)arg3 forTouchType:(long long)arg4 ;
-(void)manuallyUpdateInteractionWithGestureState:(long long)arg1 location:(CGPoint)arg2 locationOfFirstTouch:(CGPoint)arg3 forTouchType:(long long)arg4 ;
-(void)_adjustmentInteractionChangedWithLocation:(CGPoint)arg1 forTouchType:(long long)arg2 ;
-(void)_adjustmentInteractionBeganWithLocation:(CGPoint)arg1 startPoint:(CGPoint)arg2 forTouchType:(long long)arg3 ;
-(UITouch *)activeTouch;
-(void)willMoveToView:(id)arg1 ;
-(UIView *)view;
-(void)_createGestureTuningIfNecessary;
-(CGPoint)basePoint;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(CGPoint)touchOffset;
-(void)setDelegate:(id<UITextRangeAdjustmentInteractionDelegate>)arg1 ;
-(BOOL)baseIsStart;
-(CGPoint)extentPoint;
-(CGPoint)initialPoint;
-(id<UITextRangeAdjustmentInteractionDelegate>)delegate;
-(void)setBasePoint:(CGPoint)arg1 ;
-(void)_didRecognizeAdjustmentGesture:(id)arg1 ;
-(void)setInitialDistance:(double)arg1 ;
-(BOOL)_gestureTuningEnabledForTouches:(id)arg1 ;
-(CGPoint)initialExtentPoint;
-(CGPoint)applyTouchOffset:(CGPoint)arg1 ;
-(CGPoint)_convertPointToViewCoordinateSpace:(CGPoint)arg1 ;
-(void)setTouchOffset:(CGPoint)arg1 ;
-(void)setFirstMovedTime:(double)arg1 ;
-(BOOL)_shouldApplyOffsetForTouchType:(long long)arg1 ;
-(CGPoint)_activeTouchPoint;
-(void)_adjustmentInteractionEndedAtLocation:(CGPoint)arg1 forTouchType:(long long)arg2 ;
-(void)_adjustmentInteractionCancelled;
-(BOOL)_pointCloserToEnd:(CGPoint)arg1 startEdge:(CGRect)arg2 endEdge:(CGRect)arg3 ;
-(double)firstMovedTime;
-(void)updateBaseAndExtentPointsFromEdges;
-(CGPoint)initialBasePoint;
-(void)setInitialBasePoint:(CGPoint)arg1 ;
-(void)_setTouchOffset:(CGPoint)arg1 touchPoint:(CGPoint)arg2 ;
-(UITextRangeAdjustmentGestureRecognizer *)adjustmentGestureRecognizer;
-(void)setInitialPoint:(CGPoint)arg1 ;
-(void)setActiveTouch:(UITouch *)arg1 ;
-(void)setExtentPoint:(CGPoint)arg1 ;
-(double)initialDistance;
-(void)setBaseIsStart:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
@end

