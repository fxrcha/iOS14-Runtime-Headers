/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HealthUI/HealthUI-Structs.h>
@class NSObject;

@interface HKCoreTelephonyUtilities : NSObject {

	CTServerConnectionRef _ctServerConnection;
	NSObject*<OS_dispatch_queue> _ctServerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ctServerQueue;              //@synthesize ctServerQueue=_ctServerQueue - In the implementation block
-(CTServerConnectionRef)ctServerConnection;
-(void)dealloc;
-(id)init;
-(BOOL)isEmergencyServicePhoneNumber:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)ctServerQueue;
-(void)setCtServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

