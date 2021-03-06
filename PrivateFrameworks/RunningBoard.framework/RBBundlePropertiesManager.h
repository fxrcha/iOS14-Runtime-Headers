/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBBundlePropertiesLSProviderDelegate.h>
#import <libobjc.A.dylib/RBBundlePropertiesManaging.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol RBBundlePropertiesManagerDelegate;
@class RBBundlePropertiesLSProvider, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesBackgroundRefreshProvider, RBProcessIndex, NSString;

@interface RBBundlePropertiesManager : NSObject <RBBundlePropertiesLSProviderDelegate, RBBundlePropertiesManaging, RBStateCapturing> {

	RBBundlePropertiesLSProvider* _lsProvider;
	RBBundlePropertiesBSXPCProvider* _xpcProvider;
	RBBundlePropertiesBackgroundRefreshProvider* _bgRefreshProvider;
	RBProcessIndex* _processIndex;
	id<RBBundlePropertiesManagerDelegate> _delegate;
	os_unfair_lock_s _lock;

}

@property (assign,nonatomic,__weak) id<RBBundlePropertiesManagerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(void)removeProcess:(id)arg1 ;
-(void)addProcess:(id)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)captureState;
-(NSString *)debugDescription;
-(id)init;
-(void)setDelegate:(id<RBBundlePropertiesManagerDelegate>)arg1 ;
-(void)bundlePropertiesProvider:(id)arg1 didChangePropertiesForProcessIdentities:(id)arg2 ;
-(id<RBBundlePropertiesManagerDelegate>)delegate;
-(id)propertiesForIdentity:(id)arg1 identifier:(id)arg2 ;
@end

