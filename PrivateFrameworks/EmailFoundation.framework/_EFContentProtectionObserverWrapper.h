/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EFContentProtectionObserver, OS_dispatch_queue;
@class NSObject;

@interface _EFContentProtectionObserverWrapper : NSObject {

	id<EFContentProtectionObserver> _observer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,__weak,readonly) id<EFContentProtectionObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
-(id)initWithObserver:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<EFContentProtectionObserver>)observer;
@end
