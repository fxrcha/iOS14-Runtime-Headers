/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLBackgroundJobWorker;

@interface PLBackgroundJobWorkerPriorityTuple : NSObject {

	PLBackgroundJobWorker* _worker;
	unsigned long long _priority;

}

@property (nonatomic,readonly) PLBackgroundJobWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                 //@synthesize priority=_priority - In the implementation block
-(PLBackgroundJobWorker *)worker;
-(unsigned long long)priority;
-(id)description;
-(id)initWithWorker:(id)arg1 priority:(unsigned long long)arg2 ;
@end
