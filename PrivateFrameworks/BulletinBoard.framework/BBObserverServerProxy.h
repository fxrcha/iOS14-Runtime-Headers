/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBObserverClientInterface.h>
#import <libobjc.A.dylib/BBObserverServerInterface.h>

@protocol OS_dispatch_queue;
@class BBObserver, NSXPCConnection, NSObject;

@interface BBObserverServerProxy : NSObject <BBObserverClientInterface, BBObserverServerInterface> {

	BOOL _isValid;
	BOOL _isEstablished;
	BBObserver* _observer;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (assign,nonatomic,__weak) BBObserver * observer;                           //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calloutQueue;              //@synthesize calloutQueue=_calloutQueue - In the implementation block
+(id)xpcInterface;
-(void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeSection:(id)arg1 ;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1 ;
-(void)clearBulletinIDs:(id)arg1 inSection:(id)arg2 ;
-(void)finishedWithBulletinID:(id)arg1 transactionID:(unsigned long long)arg2 ;
-(void)updateSectionInfo:(id)arg1 ;
-(void)requestNoticesBulletinsForSectionID:(id)arg1 ;
-(void)clearSection:(id)arg1 ;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getPublisherMatchIDsOfBulletinsPublishedAfterDate:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeBulletins:(id)arg1 inSection:(id)arg2 fromFeeds:(unsigned long long)arg3 ;
-(void)noteBulletinsLoadedForSectionID:(id)arg1 ;
-(void)noteServerReceivedResponseForBulletin:(id)arg1 ;
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)requestNoticesBulletinsForAllSections;
-(void)setObserverFeed:(unsigned long long)arg1 attachToLightsAndSirensGateway:(id)arg2 ;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setObserverFeed:(unsigned long long)arg1 asLightsAndSirensGateway:(id)arg2 priority:(unsigned long long)arg3 ;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2 ;
-(void)getBulletinsWithHandler:(/*^block*/id)arg1 ;
-(void)getBulletinsForPublisherMatchIDs:(id)arg1 sectionID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)initWithObserver:(id)arg1 connection:(id)arg2 queue:(id)arg3 calloutQueue:(id)arg4 ;
-(void)updateGlobalSettings:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)clearBulletinsFromDate:(id)arg1 toDate:(id)arg2 inSections:(id)arg3 ;
-(BOOL)established;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setObserver:(BBObserver *)arg1 ;
-(BBObserver *)observer;
-(BOOL)isValid;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)getObserverDebugInfo:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

