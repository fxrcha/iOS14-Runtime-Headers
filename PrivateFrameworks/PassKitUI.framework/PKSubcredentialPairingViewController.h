/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKSubcredentialLocalDevicePairingFlowControllerOperation.h>

@protocol PKSubcredentialProvisioningViewModelProtocol, PKSubcredentialPairingFlowControllerProtocol;
@class PKAppletSubcredentialPairingSession, PKCredentialProvisioningView, PKIdleTimerAssertion, PKSubcredentialPairingFlowControllerContext, NSString;

@interface PKSubcredentialPairingViewController : UIViewController <PKSubcredentialLocalDevicePairingFlowControllerOperation> {

	PKAppletSubcredentialPairingSession* _pairingSession;
	id<PKSubcredentialProvisioningViewModelProtocol> _provisioningViewModel;
	PKCredentialProvisioningView* _provisioningView;
	BOOL _isCancelling;
	BOOL _isAdvancing;
	PKIdleTimerAssertion* _idleTimerAssertion;
	PKSubcredentialPairingFlowControllerContext* _provisioningContext;
	id<PKSubcredentialPairingFlowControllerProtocol> _flowController;

}

@property (nonatomic,retain) PKSubcredentialPairingFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (nonatomic,readonly) id<PKSubcredentialPairingFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,readonly) unsigned long long operation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL suppressFieldDetect; 
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)suppressFieldDetect;
-(void)handleCancelButton;
-(void)updateUIForState:(long long)arg1 ;
-(void)hostApplicationDidEnterBackground;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)subcredentialProvisioningController:(id)arg1 shouldFailAfterError:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)operation;
-(void)viewWillLayoutSubviews;
-(id)pairingSessionWithDelegate:(id)arg1 ;
-(void)startProvisioning;
-(void)advanceToNextState;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialPairingFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialPairingFlowControllerContext *)arg1 ;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(id<PKSubcredentialPairingFlowControllerProtocol>)flowController;
-(void)subcredentialProvisioningController:(id)arg1 didEnterState:(long long)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithPass:(id)arg2 ;
-(void)subcredentialProvisioningController:(id)arg1 didFinishWithError:(id)arg2 inState:(long long)arg3 ;
@end

