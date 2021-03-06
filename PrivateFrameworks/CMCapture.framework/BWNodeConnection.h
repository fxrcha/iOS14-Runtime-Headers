/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWNodeOutputConsumer.h>

@class BWNodeInput, BWNodeOutput, BWPipelineStage, NSMutableArray, NSString;

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer> {

	BWNodeInput* _input;
	BWNodeOutput* _output;
	BWPipelineStage* _pipelineStage;
	BOOL _stillImagePipelineStageInputHandlesMessages;
	os_unfair_lock_s _suspensionLock;
	BOOL _suspended;
	BOOL _resuming;
	BOOL _wantsMessageCachingWhileSuspended;
	BOOL _messageCachingEnabled;
	BOOL _resumedForEventsOnly;
	NSMutableArray* _messagesToPropagate;

}

@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (readonly) BWPipelineStage * pipelineStage; 
@property (assign,nonatomic) BOOL wantsMessageCachingWhileSuspended;              //@synthesize wantsMessageCachingWhileSuspended=_wantsMessageCachingWhileSuspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_inputAndRequirementsDebugArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
+(id)_requirementsArrayStartingFromInput:(id)arg1 forAttachedMediaKey:(id)arg2 firstOptionalPassthroughInputOut:(id*)arg3 firstOptionalPassthroughInputAttachedMediaKeyOut:(id*)arg4 ;
-(BOOL)detach;
-(id)_inputDescription;
-(BWPipelineStage *)pipelineStage;
-(void)suspendWithMessageCachingAllowed:(BOOL)arg1 ;
-(id)_connectionDescription;
-(BWNodeOutput *)output;
-(void)dealloc;
-(id)initWithOutput:(id)arg1 input:(id)arg2 pipelineStage:(id)arg3 ;
-(BOOL)attach;
-(void)consumeMessage:(id)arg1 fromOutput:(id)arg2 ;
-(BOOL)wantsMessageCachingWhileSuspended;
-(void)setWantsMessageCachingWhileSuspended:(BOOL)arg1 ;
-(BOOL)_resolveCommonVideoBufferFormatForAttachedMediaKey:(id)arg1 ;
-(void)resumeForEventsOnly:(BOOL)arg1 ;
-(id)_outputDescription;
-(BOOL)resolveCommonBufferFormat;
-(BWNodeInput *)input;
@end

