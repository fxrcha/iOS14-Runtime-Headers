/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface FBInterfaceOrientationServiceServer : FBSServiceFacility {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _interestedClients;
	long long _interfaceOrientation;
	unsigned long long _sequenceNumber;

}
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)_queue_handleRegisterOrientationInterest:(id)arg1 fromClient:(id)arg2 ;
-(id)_prerequisiteMilestones;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(void)_queue_updateInterest:(unsigned)arg1 forClient:(id)arg2 withMessage:(id)arg3 ;
-(id)init;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteInterfaceOrientationChanged:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(void)_queue_handleRequestActiveOrientation:(id)arg1 fromClient:(id)arg2 ;
@end
