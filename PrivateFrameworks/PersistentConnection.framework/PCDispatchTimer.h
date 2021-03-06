/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate, CUTWeakReference;

@interface PCDispatchTimer : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _fireTime;
	NSDate* _fireDate;
	CUTWeakReference* _target;
	SEL _selector;
	BOOL _isValid;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,retain) NSDate * fireDate; 
-(void)invalidate;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)dealloc;
-(void)start;
-(NSDate *)fireDate;
-(BOOL)isValid;
-(void)_callTarget;
-(id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4 ;
-(void)_cleanupTimer;
@end

