/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBSceneViewPresentationConfiguring.h>
#import <libobjc.A.dylib/SBSwitcherLiveContentOverlay.h>

@class SBOrientationTransformWrapperView, SBDeviceApplicationSceneHandle, UIApplicationSceneSettingsDiffInspector, SBDeviceApplicationSceneView, NSString, UIView;

@interface SBDeviceApplicationSceneViewLiveContentOverlay : NSObject <BSInvalidatable, SBDeviceApplicationSceneHandleObserver, SBSceneViewPresentationConfiguring, SBSwitcherLiveContentOverlay> {

	SBOrientationTransformWrapperView* _transformWrapperView;
	SBDeviceApplicationSceneHandle* _sceneHandle;
	UIApplicationSceneSettingsDiffInspector* _sceneSettingsInspector;
	SBDeviceApplicationSceneView* _sceneView;
	long long _containerOrientation;

}

@property (assign,nonatomic) long long containerOrientation;              //@synthesize containerOrientation=_containerOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
-(id)sceneViewPresentationIdentifier:(id)arg1 ;
-(long long)containerOrientation;
-(long long)rasterizationStyle;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(void)invalidate;
-(UIView *)contentOverlayView;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setContainerOrientation:(long long)arg1 ;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)sceneViewPresentationPriority:(id)arg1 ;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 containerOrientation:(long long)arg3 ;
@end
