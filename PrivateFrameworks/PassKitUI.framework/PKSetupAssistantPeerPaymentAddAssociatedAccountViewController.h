/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPeerPaymentAddAssociatedAccountViewController.h>
#import <libobjc.A.dylib/PKPeerPaymentAssociatedAccountSetupDelegate.h>
#import <libobjc.A.dylib/PKSetupAssistantStep.h>

@protocol PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate;
@class NSString;

@interface PKSetupAssistantPeerPaymentAddAssociatedAccountViewController : PKPeerPaymentAddAssociatedAccountViewController <PKPeerPaymentAssociatedAccountSetupDelegate, PKSetupAssistantStep> {

	id<PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> _setupAssistantDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)setupAssistantNeedsToRun;
+(BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
+(BOOL)bridgeSetupAssistantNeedsToRunWithContext:(id)arg1 returningRequirements:(unsigned long long*)arg2 ;
+(id)defaultWebServiceForContext:(long long)arg1 ;
+(BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1 ;
-(void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3 ;
-(void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1 ;
-(id)initWithPairingFamilyMember:(id)arg1 parentFamilyMember:(id)arg2 webService:(id)arg3 delegate:(id)arg4 context:(long long)arg5 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
@end

