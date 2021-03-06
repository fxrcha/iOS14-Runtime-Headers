/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCNotificationAlertDestinationDelegate.h>
#import <libobjc.A.dylib/NCNotificationAlertDestination.h>

@protocol NCNotificationAlertDestinationDelegate;
@class NCNotificationDestinationsRegistry, NCNotificationCollapsingQueue, NCNotificationRequest, NSString, BSServiceConnectionEndpoint;

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination> {

	id<NCNotificationAlertDestinationDelegate> _delegate;
	NCNotificationDestinationsRegistry* _destinationsRegistry;
	NCNotificationCollapsingQueue* _queue;
	NCNotificationRequest* _coalescingRequest;

}

@property (nonatomic,retain) NCNotificationCollapsingQueue * queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NCNotificationRequest * coalescingRequest;                               //@synthesize coalescingRequest=_coalescingRequest - In the implementation block
@property (nonatomic,retain) NCNotificationDestinationsRegistry * destinationsRegistry;               //@synthesize destinationsRegistry=_destinationsRegistry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NCNotificationAlertDestinationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isAlertDestination,nonatomic,readonly) BOOL alertDestination; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * endpoint; 
-(void)postNotificationRequest:(id)arg1 ;
-(BOOL)canReceiveNotificationRequest:(id)arg1 ;
-(void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1 ;
-(void)setDestination:(id)arg1 ready:(BOOL)arg2 ;
-(void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2 ;
-(void)setDestinationsRegistry:(NCNotificationDestinationsRegistry *)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 ;
-(void)registerDestination:(id)arg1 ;
-(void)unregisterDestination:(id)arg1 ;
-(void)destination:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)setDestination:(id)arg1 enabled:(BOOL)arg2 ;
-(BOOL)isAlertDestination;
-(NCNotificationDestinationsRegistry *)destinationsRegistry;
-(id)destinationsForRequestDestinations:(id)arg1 ;
-(void)destination:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2 ;
-(BOOL)isRegisteredDestination:(id)arg1 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(NSString *)identifier;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3 ;
-(void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2 ;
-(void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(/*^block*/id)arg2 ;
-(id)notificationSectionSettingsForDestination:(id)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2 ;
-(void)modifyNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_readyToReceiveForNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3 ;
-(BSServiceConnectionEndpoint *)endpoint;
-(void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg1 ;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 ;
-(void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(BOOL)arg3 ;
-(id)init;
-(void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2 ;
-(BOOL)_postNotificationRequest:(id)arg1 ;
-(void)setCoalescingRequest:(NCNotificationRequest *)arg1 ;
-(void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg1 ;
-(void)setDelegate:(id<NCNotificationAlertDestinationDelegate>)arg1 ;
-(NCNotificationCollapsingQueue *)queue;
-(BOOL)_destinations:(id)arg1 canReceiveNotificationRequest:(id)arg2 ;
-(id<NCNotificationAlertDestinationDelegate>)delegate;
-(NCNotificationRequest *)coalescingRequest;
-(void)setQueue:(NCNotificationCollapsingQueue *)arg1 ;
-(BOOL)_performDestinationOperationForRequest:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_postNextNotificationRequestPassingTest:(/*^block*/id)arg1 ;
-(void)_postNextNotificationRequest;
@end

