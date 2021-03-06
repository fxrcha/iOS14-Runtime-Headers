/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBChainableModifier.h>
#import <libobjc.A.dylib/SBSwitcherMultitaskingQueryProviding.h>
#import <libobjc.A.dylib/SBSwitcherContextProviding.h>

@class NSString;

@interface SBSwitcherModifier : SBChainableModifier <SBSwitcherMultitaskingQueryProviding, SBSwitcherContextProviding> {

	BOOL _verifyModifierStackCoherencyCheckAfterHandlingEvent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryProtocol;
+(id)contextProtocol;
+(id)newEventResponse;
-(double)floatingDockHeight;
-(BOOL)isStudyLogEnabled;
-(id)currentVelocityValueForVisibleAppLayout:(id)arg1 key:(id)arg2 ;
-(id)genericSwitcherAccessoryLayoutElement;
-(double)floatingDockWindowLevel;
-(BOOL)isFloatingDockFullyPresented;
-(CGRect)switcherViewBounds;
-(void)gestureHandlingModifierRequestsUpdate:(id)arg1 ;
-(double)switcherWindowLevel;
-(double)homeScreenIconScaleForAppLayout:(id)arg1 ;
-(id)medusaSettings;
-(BOOL)isHomeScreenSidebarVisible;
-(BOOL)homeScreenHasOpenFolder;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg1 ;
-(BOOL)homeScreenHasOpenFolderInLocation:(id)arg1 ;
-(CGRect)floatingApplicationFrameInInterfaceOrientation:(long long)arg1 floatingConfiguration:(long long)arg2 ;
-(CGPoint)scrollableQueryModifier:(id)arg1 contentOffsetVelocityConsideringNextContentOffset:(CGPoint)arg2 ;
-(double)morphToPiPTargetScale;
-(unsigned long long)homeScreenIconGridSizeClassForAppLayout:(id)arg1 ;
-(double)floatingDockViewTopMargin;
-(long long)homeScreenInterfaceOrientation;
-(double)displayCornerRadius;
-(double)homeScreenIconCornerRadiusForAppLayout:(id)arg1 ;
-(id)switcherDimmingViewLayoutElement;
-(unsigned long long)appLayoutsGenerationCount;
-(double)morphToPiPSourceAlpha;
-(BOOL)isAppLayoutVisibleInSwitcherBounds:(id)arg1 ;
-(CGRect)homeScreenIconFrameForAppLayout:(id)arg1 ;
-(BOOL)isFloatingDockSupported;
-(BOOL)isAppLayoutMostRecentRepresentationOfDisplayItems:(id)arg1 ;
-(BOOL)isDevicePad;
-(id)entityRemovalSettings;
-(BOOL)itemContainerForAppLayoutOverlapsFloatingDock:(id)arg1 ;
-(BOOL)hasHomeButton;
-(CGPoint)morphToPiPTargetCenter;
-(CGRect)containerViewBounds;
-(BOOL)homeScreenHasWidgetCenterOrLibraryOpen;
-(BOOL)isReduceMotionEnabled;
-(long long)switcherInterfaceOrientation;
-(id)switcherBackdropLayoutElement;
-(id)homeScreenIconLocationForAppLayout:(id)arg1 ;
-(id)homeGestureSettings;
-(long long)numberOfVisibleCards;
-(BOOL)isRTLEnabled;
-(BOOL)isFloatingDockGesturePossible;
-(long long)numberOfHiddenAppLayoutsForBundleIdentifier:(id)arg1 ;
-(CGPoint)scrollViewContentOffset;
-(CGPoint)scrollableQueryModifier:(id)arg1 convertScrollViewPointToContainerViewCoordinateSpace:(CGPoint)arg2 ;
-(CGPoint)gestureHandlingModifier:(id)arg1 averageVelocityOverDuration:(double)arg2 ;
-(BOOL)isShowingSpotlightOrTodayView;
-(id)appLayouts;
-(id)switcherSettings;
-(unsigned long long)newAppLayoutsGenCount;
-(void)resetAdjustedScrollingState;
-(id)scrollViewAttributes;
-(CGPoint)adjustedOffsetForOffset:(CGPoint)arg1 translation:(CGPoint)arg2 startPoint:(CGPoint)arg3 locationInView:(CGPoint)arg4 horizontalVelocity:(inout double*)arg5 verticalVelocity:(inout double*)arg6 ;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 ;
-(CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(BOOL)arg2 ;
-(double)contentPageViewScaleForAppLayout:(id)arg1 ;
-(double)snapshotScaleForAppLayout:(id)arg1 ;
-(double)minimumTranslationToKillIndex:(unsigned long long)arg1 ;
-(CGPoint)restingOffsetForScrollOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(id)appLayoutToScrollToBeforeReopeningClosedWindows;
-(double)darkeningAlphaForIndex:(unsigned long long)arg1 ;
-(id)liveContentRasterizationAttributesForAppLayout:(id)arg1 ;
-(BOOL)isHomeGrabberVisibleForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1 ;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(id)keyboardSuppressionMode;
-(double)contentViewScale;
-(BOOL)isIndexKillable:(unsigned long long)arg1 ;
-(BOOL)shouldBringCardToFrontDuringInsertionOrRemoval;
-(BOOL)wantsAsynchronousSurfaceRetentionAssertion;
-(BOOL)shouldAllowContentViewTouchesForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 ;
-(id)appLayoutToScrollToBeforeTransitioning;
-(unsigned long long)dockWindowLevelPriority;
-(long long)shadowStyleForAppLayout:(id)arg1 ;
-(double)switcherBackdropBlurProgress;
-(double)shadowOpacityForIndex:(unsigned long long)arg1 ;
-(long long)switcherBackdropBlurType;
-(BOOL)isIndexSelectable:(unsigned long long)arg1 ;
-(BOOL)isItemContainerPointerInteractionEnabled;
-(BOOL)wantsHomeScreenPointerInteractions;
-(BOOL)wantsDockWindowLevelAssertion;
-(double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1 ;
-(BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldConfigureInAppDockHiddenAssertion;
-(double)plusButtonAlpha;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(BOOL)switcherDimmingViewBlocksTouches;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)appLayoutsToCacheFullsizeSnapshots;
-(long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
-(long long)preferredSnapshotOrientationForAppLayout:(id)arg1 ;
-(double)dockWindowLevel;
-(double)shadowOffsetForIndex:(unsigned long long)arg1 ;
-(double)reopenClosedWindowsButtonScale;
-(BOOL)wantsSwitcherBackdropBlur;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(double)homeScreenAlpha;
-(double)wallpaperScale;
-(id)appLayoutForReceivingHardwareButtonEvents;
-(unsigned long long)transactionCompletionOptions;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(unsigned long long)arg1 ;
-(double)containerStatusBarAnimationDuration;
-(double)dockProgress;
-(CGRect)fullyPresentedFrameForAppLayout:(id)arg1 ;
-(double)titleOpacityForIndex:(unsigned long long)arg1 ;
-(BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1 ;
-(double)homeScreenBackdropBlurProgress;
-(double)switcherDimmingAlpha;
-(BOOL)shouldRubberbandFullScreenHomeGrabberView;
-(BOOL)shouldUseBrightMaterialForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsDockBehaviorAssertion;
-(BOOL)shouldPerformRotationAnimationForOrientationChange;
-(double)rotationAngleForIndex:(unsigned long long)arg1 ;
-(BOOL)wantsSwitcherDimmingView;
-(BOOL)shouldFireTransitionCompletionInDefaultRunLoopMode;
-(id)appLayoutsToResignActive;
-(double)titleAndIconOpacityForIndex:(unsigned long long)arg1 ;
-(double)homeScreenDimmingAlpha;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1 ;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(long long)dockUpdateMode;
-(id)appLayoutsToCacheSnapshots;
-(BOOL)isContainerStatusBarVisible;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg1 ;
-(BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(unsigned long long)arg1 ;
-(long long)plusButtonStyle;
-(double)lighteningAlphaForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)reopenClosedWindowsButtonAlpha;
-(id)topMostLayoutElements;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isScrollEnabled;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(long long)homeScreenBackdropBlurType;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(id)_handleEvent:(id)arg1 ;
-(id)handleTimerEvent:(id)arg1 ;
-(id)handleTapAppLayoutEvent:(id)arg1 ;
-(id)handleRemovalEvent:(id)arg1 ;
-(id)init;
-(id)handleTapOutsideToDismissEvent:(id)arg1 ;
-(id)handleSwitcherSettingsChangedEvent:(id)arg1 ;
-(id)handleScrollEvent:(id)arg1 ;
-(id)loggingCategory;
-(id)defaultAppLayoutsToCacheSnapshots;
-(id)appLayoutsToCacheSnapshotsWithVisibleRange:(NSRange)arg1 numberOfSnapshotsToCache:(unsigned long long)arg2 biasForward:(BOOL)arg3 ;
-(id)handleInlineTransitionEvent:(id)arg1 ;
-(id)handleGestureEvent:(id)arg1 ;
-(id)handleHomeGestureSettingsChangedEvent:(id)arg1 ;
-(id)handleReduceMotionChangedEvent:(id)arg1 ;
-(double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1 numberOfRows:(unsigned long long)arg2 padding:(double)arg3 layoutDirection:(unsigned long long)arg4 ;
-(CGRect)scaledFrameForIndex:(unsigned long long)arg1 ;
-(id)handleSwipeToKillEvent:(id)arg1 ;
-(id)handleInsertionEvent:(id)arg1 ;
-(id)handleMedusaSettingsChangedEvent:(id)arg1 ;
-(BOOL)runsInternalVerificationAfterEventDispatch;
@end

