/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSOrientationUpdateControlling.h>

@protocol BSInvalidatable;
@class NSString;

@interface SBDashBoardOrientationController : NSObject <CSOrientationUpdateControlling> {

	id<BSInvalidatable> _deferOrientationUpdatesAssertion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(id)arg3 ;
-(void)cancelOrientationUpdateDeferral;
-(void)deferOrientationUpdatesWithReason:(id)arg1 ;
@end
