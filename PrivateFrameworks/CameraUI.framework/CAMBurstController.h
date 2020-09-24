/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSCountedSet, CAMBurstSession, CAMPersistenceController, CAMProtectionController, CAMPowerController, CAMRemoteShutterController, NSString;

@interface CAMBurstController : NSObject {

	NSObject*<OS_dispatch_queue> __mutexQueue;
	NSMutableDictionary* __sessionsByIdentifier;
	NSCountedSet* __inflightRequestsByIdentifier;
	NSCountedSet* __requestsPendingPersistenceByIdentifier;
	NSMutableDictionary* __faceResultsByIdentifier;
	CAMBurstSession* __activeSession;
	NSObject*<OS_dispatch_queue> __analysisQueue;
	CAMPersistenceController* __persistenceController;
	CAMProtectionController* __protectionController;
	CAMPowerController* __powerController;
	CAMRemoteShutterController* __remoteShutterController;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _mutexQueue;                              //@synthesize _mutexQueue=__mutexQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _sessionsByIdentifier;                           //@synthesize _sessionsByIdentifier=__sessionsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inflightRequestsByIdentifier;                          //@synthesize _inflightRequestsByIdentifier=__inflightRequestsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _requestsPendingPersistenceByIdentifier;                //@synthesize _requestsPendingPersistenceByIdentifier=__requestsPendingPersistenceByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _faceResultsByIdentifier;                        //@synthesize _faceResultsByIdentifier=__faceResultsByIdentifier - In the implementation block
@property (setter=_setActiveSession:,nonatomic,retain) CAMBurstSession * _activeSession;              //@synthesize _activeSession=__activeSession - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _analysisQueue;                           //@synthesize _analysisQueue=__analysisQueue - In the implementation block
@property (nonatomic,__weak,readonly) CAMPersistenceController * _persistenceController;              //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * _protectionController;                       //@synthesize _protectionController=__protectionController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                 //@synthesize _powerController=__powerController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * _remoteShutterController;                 //@synthesize _remoteShutterController=__remoteShutterController - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentBurstIdentifier; 
@property (nonatomic,readonly) unsigned long long currentBurstCount; 
-(CAMRemoteShutterController *)_remoteShutterController;
-(CAMPowerController *)_powerController;
-(void)processCapturedRequest:(id)arg1 withResult:(id)arg2 ;
-(id)startBurstCapture;
-(unsigned long long)estimatedCountForIdentifier:(id)arg1 ;
-(void)processPersistedRequest:(id)arg1 withResult:(id)arg2 ;
-(NSMutableDictionary *)_faceResultsByIdentifier;
-(CAMBurstSession *)_activeSession;
-(NSMutableDictionary *)_sessionsByIdentifier;
-(NSCountedSet *)_requestsPendingPersistenceByIdentifier;
-(void)processEnqueuedRequest:(id)arg1 ;
-(void)cancelBurstCapture;
-(NSCountedSet *)_inflightRequestsByIdentifier;
-(unsigned long long)inflightCountForIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithProtectionController:(id)arg1 powerController:(id)arg2 remoteShutterController:(id)arg3 ;
-(void)_setActiveSession:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_mutexQueue;
-(void)processFaceResults:(id)arg1 ;
-(CAMProtectionController *)_protectionController;
-(unsigned long long)currentBurstCount;
-(void)finishBurstCaptureForDevice:(long long)arg1 ;
-(void)_mutexQueueProcessCompleteBurstSessionWithIdentifier:(id)arg1 device:(long long)arg2 ;
-(void)setPersistenceController:(id)arg1 ;
-(CAMPersistenceController *)_persistenceController;
-(NSString *)currentBurstIdentifier;
-(NSObject*<OS_dispatch_queue>)_analysisQueue;
@end
