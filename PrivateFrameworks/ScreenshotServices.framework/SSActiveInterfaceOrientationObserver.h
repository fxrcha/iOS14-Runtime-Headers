/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@protocol SSActiveInterfaceOrientationObserverDelegate;
@class NSString;

@interface SSActiveInterfaceOrientationObserver : NSObject <SBUIActiveOrientationObserver> {

	id<SSActiveInterfaceOrientationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSActiveInterfaceOrientationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopObserving;
-(void)_registerForActiveInterfaceOrientationChanges;
-(void)_unregisterForActiveInterfaceOrientationChanges;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)setDelegate:(id<SSActiveInterfaceOrientationObserverDelegate>)arg1 ;
-(id<SSActiveInterfaceOrientationObserverDelegate>)delegate;
-(void)beginObserving;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(id)_sbUIUserAgent;
-(void)_observeActiveInterfaceOrientationChangeToOrientation:(long long)arg1 withDuration:(double)arg2 ;
@end

