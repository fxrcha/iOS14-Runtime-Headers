/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSString;

@interface NRServerRequestReporter : NSObject {

	BOOL _submitted;
	NSString* _requestType;
	mach_timebase_info _timebaseInfo;
	double _startTime;

}
-(double)abs_to_seconds:(unsigned long long)arg1 ;
-(unsigned long long)abs_to_nanos:(unsigned long long)arg1 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 andDuration:(double)arg2 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 ;
-(void)requestTimedOut;
-(void)dealloc;
-(id)initWithRequestType:(id)arg1 ;
@end

