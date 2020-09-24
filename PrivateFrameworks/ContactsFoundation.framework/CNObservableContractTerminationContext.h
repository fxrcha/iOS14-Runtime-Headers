/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNObservableContractTerminationContext : NSObject {

	NSArray* _callStack;
	unsigned long long _threadId;

}

@property (copy,readonly) NSArray * callStack;                 //@synthesize callStack=_callStack - In the implementation block
@property (readonly) unsigned long long threadId;              //@synthesize threadId=_threadId - In the implementation block
+(unsigned long long)currentThreadId;
+(id)currentContext;
-(NSArray *)callStack;
-(unsigned long long)threadId;
-(id)initWithCallStack:(id)arg1 threadId:(unsigned long long)arg2 ;
@end
