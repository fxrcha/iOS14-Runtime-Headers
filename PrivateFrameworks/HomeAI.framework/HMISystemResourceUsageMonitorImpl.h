/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMISystemResourceUsageMonitorProtocol.h>

@protocol HMISystemResourceUsageMonitorProtocol, OS_dispatch_queue;
@class NSObject;

@interface HMISystemResourceUsageMonitorImpl : HMFObject <HMISystemResourceUsageMonitorProtocol> {

	id<HMISystemResourceUsageMonitorProtocol> _resourceUsageMonitor;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) id<HMISystemResourceUsageMonitorProtocol> resourceUsageMonitor;              //@synthesize resourceUsageMonitor=_resourceUsageMonitor - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                      //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(void)setDelegate:(id<HMISystemResourceUsageMonitorDelegate>)arg1 ;
-(id<HMISystemResourceUsageMonitorProtocol>)resourceUsageMonitor;
-(id)getCurrentSystemResourceUsage;
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(id)initWithProductClass:(long long)arg1 workQueue:(id)arg2 ;
@end
