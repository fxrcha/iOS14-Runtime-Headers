/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSConditionLock, NSError, NSMutableArray;

@interface CPSPromise : NSObject {

	NSConditionLock* _stateLock;
	id _result;
	NSError* _error;
	NSMutableArray* _completionBlocks;

}
+(id)promise;
-(BOOL)_isFinished;
-(void)finishWithError:(id)arg1 ;
-(void)finishWithResult:(id)arg1 ;
-(void)_flushCompletionBlocks;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)finish;
-(id)init;
-(void)_finishWithResult:(id)arg1 error:(id)arg2 ;
@end

