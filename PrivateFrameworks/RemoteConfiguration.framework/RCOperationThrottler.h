/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCOperationThrottler.h>

@protocol RCOperationThrottler
@property (assign) BOOL suspended; 
@required
-(BOOL)suspended;
-(void)tickle;
-(void)tickleWithCompletion:(/*^block*/id)arg1;
-(void)setSuspended:(BOOL)arg1;

@end


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface RCOperationThrottler : NSObject <RCOperationThrottler> {

	NSObject*<OS_dispatch_source> _dispatchSource;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_group> _handlerSynchronizationGroup;
	BOOL _suspended;

}

@property (assign) BOOL suspended;              //@synthesize suspended=_suspended - In the implementation block
-(void)addCompletionForCurrentOperation:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)suspended;
-(void)tickle;
-(id)init;
-(void)tickleWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 updateQueue:(id)arg2 ;
@end
