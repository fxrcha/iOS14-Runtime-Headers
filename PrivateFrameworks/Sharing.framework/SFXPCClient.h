/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionEstablished;
-(void)onqueue_interrupted;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)interrupted;
-(void)onqueue_connectionInterrupted;
-(void)onqueue_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(void)onqueue_invalidate;
-(void)getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(void)onqueue_activate;
-(void)invalidated;
-(id)remoteObjectInterface;
-(void)onqueue_connectionEstablished;
-(NSXPCConnection *)connection;
-(id)exportedInterface;
-(void)dealloc;
-(void)onqueue_ensureConnectionEstablished;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)init;
-(id)machServiceName;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)onqueue_connectionInvalidated;
-(void)onqueue_ensureXPCStarted;
-(void)_activate;
-(void)onqueue_invalidated;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end
