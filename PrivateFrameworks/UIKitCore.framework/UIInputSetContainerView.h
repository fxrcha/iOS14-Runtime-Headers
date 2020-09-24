/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputSetHostView.h>
#import <UIKitCore/_UIViewHost.h>

@class UIScreen, UIKBRenderConfig, NSMutableDictionary, NSString;

@interface UIInputSetContainerView : UIInputSetHostView <_UIViewHost> {

	UIKBRenderConfig* _renderConfig;
	NSMutableDictionary* _hostedViews;
	BOOL _disableGeometryObserverNotifications;
	CGPoint _offsetOrigin;

}

@property (assign,nonatomic) CGPoint offsetOrigin;                  //@synthesize offsetOrigin=_offsetOrigin - In the implementation block
@property (retain,readonly) UIScreen * hostingScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldHitTestInputViewFirst;
+(BOOL)_notifyOnExplicitLayout;
-(void)_setRenderConfig:(id)arg1 ;
-(id)_inheritedRenderConfig;
-(id)_inputWindowController;
-(void)_didRemoveSubview:(id)arg1 ;
-(BOOL)_isTransparentFocusRegion;
-(BOOL)_disableGeometryObserverNotification;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setCenter:(CGPoint)arg1 ;
-(UIScreen *)hostingScreen;
-(void)performWithoutGeometryObserverNotifications:(/*^block*/id)arg1 ;
-(void)didAddSubview:(id)arg1 ;
-(void)_setAccessoryViewFrame:(CGRect)arg1 ;
-(CGPoint)offsetOrigin;
-(BOOL)hasHostedViews;
-(void)setOffsetOrigin:(CGPoint)arg1 ;
-(void)addHostedView:(id)arg1 withViewRemovalHandler:(/*^block*/id)arg2 ;
-(CGRect)_accessoryViewFrame;
@end
