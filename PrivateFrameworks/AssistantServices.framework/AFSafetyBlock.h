/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;

}
-(BOOL)invoke;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)invokeWithSignal:(long long)arg1 ;
@end

