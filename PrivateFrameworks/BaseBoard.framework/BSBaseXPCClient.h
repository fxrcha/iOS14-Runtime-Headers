/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, BSAtomicSignal, NSString;

@interface BSBaseXPCClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BSAtomicSignal* _invalidationSignal;
	NSObject*<OS_xpc_object> _serverEndpoint;
	NSString* _serviceName;
	int _clientInvalidated;
	int _notifyToken;
	NSObject*<OS_xpc_object> _connection;
	BOOL _suspended;

}

@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(void)invalidate;
-(void)dealloc;
-(void)queue_connectionWasInvalidated;
-(void)suspendConnection;
-(BOOL)isSuspended;
-(void)queue_clientWasInvalidated;
-(void)queue_connectionWasSuspended;
-(id)_connectionInstanceUUID;
-(void)queue_handleError:(id)arg1 ;
-(void)queue_connectionWasCreated;
-(void)reconnectIfNecessary;
-(void)queue_connectionWasDestroyed;
-(id)_errorFromMessageIfAny:(id)arg1 ;
-(void)queue_connectionWasInterrupted;
-(id)init;
-(id)_connection;
-(void)resumeConnection;
-(id)initWithEndpoint:(id)arg1 ;
-(void)_sendReplyForMessage:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)_sendMessageReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)queue_connectionWasResumed;
-(id)queue_connection;
-(void)_sendReply:(id)arg1 messagePacker:(/*^block*/id)arg2 ;
-(void)queue_handleMessage:(id)arg1 ;
-(id)_getStringFromMessage:(id)arg1 key:(char*)arg2 ;
-(void)_sendMessage:(/*^block*/id)arg1 withReplyHandler:(/*^block*/id)arg2 waitForReply:(BOOL)arg3 waitDuration:(unsigned long long)arg4 ;
-(id)initWithServiceName:(id)arg1 endpoint:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)_setEndpoint:(id)arg1 ;
-(void)_sendMessage:(/*^block*/id)arg1 ;
@end

