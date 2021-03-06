/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPaidAccessCheckerType.h>

@protocol FCPurchaseProviderType, FCBundleSubscriptionProviderType, FCCoreConfigurationManager;
@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType> {

	id<FCPurchaseProviderType> _purchaseProvider;
	id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;                          //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,readonly) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;              //@synthesize bundleSubscriptionProvider=_bundleSubscriptionProvider - In the implementation block
@property (nonatomic,readonly) id<FCPurchaseProviderType> purchaseProvider;                                  //@synthesize purchaseProvider=_purchaseProvider - In the implementation block
-(id<FCPurchaseProviderType>)purchaseProvider;
-(id<FCBundleSubscriptionProviderType>)bundleSubscriptionProvider;
-(BOOL)_canGetBundleSubscriptionToChannel:(id)arg1 ;
-(BOOL)canGetSubscriptionToChannel:(id)arg1 ;
-(BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id)arg3 ;
-(BOOL)canGetBundleSubscriptionToChannel:(id)arg1 ;
-(BOOL)isPreparedForUse;
-(BOOL)_canGetALaCarteSubscriptionToChannel:(id)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(id)initWithPurchaseProvider:(id)arg1 bundleSubscriptionProvider:(id)arg2 configurationManager:(id)arg3 ;
-(void)prepareForUseWithCompletion:(/*^block*/id)arg1 ;
@end

