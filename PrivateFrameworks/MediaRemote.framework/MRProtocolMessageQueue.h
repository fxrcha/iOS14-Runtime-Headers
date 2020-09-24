/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate;
@class NSObject, MRPendingMessageQueue, NSMutableDictionary;

@interface MRProtocolMessageQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MRProtocolMessageQueueDataSource> _datasource;
	id<MRProtocolMessageQueueDelegate> _delegate;
	MRPendingMessageQueue* _pendingMessageQueue;
	NSMutableDictionary* _pendingReplyQueue;

}

@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDataSource> datasource; 
@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDelegate> delegate; 
-(void)flush;
-(BOOL)reply:(id)arg1 ;
-(id<MRProtocolMessageQueueDataSource>)datasource;
-(void)dealloc;
-(void)setDatasource:(id<MRProtocolMessageQueueDataSource>)arg1 ;
-(void)setDelegate:(id<MRProtocolMessageQueueDelegate>)arg1 ;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(void)enqueueMessage:(id)arg1 expectedMessage:(unsigned long long)arg2 reply:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id<MRProtocolMessageQueueDelegate>)delegate;
@end
