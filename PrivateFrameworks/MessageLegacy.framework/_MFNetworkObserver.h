/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _MFNetworkObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}
-(id)initWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)execute;
@end
