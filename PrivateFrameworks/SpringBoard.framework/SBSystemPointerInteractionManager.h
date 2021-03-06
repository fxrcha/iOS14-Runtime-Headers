/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPointerInteractionDelegate.h>

@class UIPointerInteraction, NSMapTable, UIWindow, UIView, NSString;

@interface SBSystemPointerInteractionManager : NSObject <UIPointerInteractionDelegate> {

	UIPointerInteraction* _pointerInteraction;
	NSMapTable* _registeredViewsToDelegates;
	UIWindow* _window;
	UIView* _activePointerRegionView;

}

@property (nonatomic,readonly) UIWindow * window;                             //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UIView * activePointerRegionView;              //@synthesize activePointerRegionView=_activePointerRegionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindow *)window;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)unregisterView:(id)arg1 ;
-(void)registerView:(id)arg1 delegate:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(id)initWithPointerInteractionWindow:(id)arg1 ;
-(UIView *)activePointerRegionView;
@end

