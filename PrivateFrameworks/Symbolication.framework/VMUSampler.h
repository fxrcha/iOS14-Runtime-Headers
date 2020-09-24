/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUProcessDescription, NSMapTable, NSConditionLock, NSMutableArray, NSMutableDictionary;

@interface VMUSampler : NSObject {

	unsigned long long _options;
	int _pid;
	unsigned _task;
	BOOL _needTaskPortDealloc;
	BOOL _recordThreadStates;
	BOOL _sampling;
	unsigned _numberOfCopiedBacktraces;
	NSString* _processName;
	VMUProcessDescription* _processDescription;
	CSTypeRef _symbolicator;
	unsigned _suspensionToken;
	sampling_context_tRef _samplingContext;
	NSMapTable* _lastThreadBacktraceMap;
	unsigned* _previousThreadList;
	unsigned _mainThread;
	unsigned _previousThreadCount;
	unsigned _maxPreviousThreadCount;
	double _tbRate;
	double _tbInterval;
	NSConditionLock* _stateLock;
	double _interval;
	double _timeLimit;
	unsigned _sampleLimit;
	unsigned _numberOfSamples;
	NSMutableArray* _samples;
	BOOL _stacksFixed;
	id _delegate;
	double _timeSpentSampling;
	unsigned _dispatchThreadSoftLimit;
	unsigned _dispatchThreadSoftLimitCount;
	unsigned _dispatchThreadHardLimit;
	unsigned _dispatchThreadHardLimitCount;
	NSMutableDictionary* _threadPortToNameMap;
	NSMutableDictionary* _dispatchQueueSerialNumToNameMap;

}
+(void)initialize;
+(id)sampleAllThreadsOfPID:(int)arg1 ;
+(id)sampleAllThreadsOfTask:(unsigned)arg1 ;
+(id)sampleAllThreadsOfTask:(unsigned)arg1 symbolicate:(BOOL)arg2 ;
-(double)samplingInterval;
-(id)initWithPID:(int)arg1 ;
-(double)timeLimit;
-(id)outputString;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 ;
-(void)setSampleLimit:(unsigned)arg1 ;
-(id)initWithPID:(int)arg1 orTask:(unsigned)arg2 options:(unsigned long long)arg3 ;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(BOOL*)arg2 returnedThreadId:(unsigned long long*)arg3 ;
-(id)samples;
-(void)initializeSamplingContextWithOptions:(int)arg1 ;
-(void)_runSamplingThread;
-(void)flushData;
-(void)sampleForDuration:(unsigned)arg1 interval:(unsigned)arg2 ;
-(void)dealloc;
-(id)initWithPID:(int)arg1 task:(unsigned)arg2 processName:(id)arg3 is64Bit:(BOOL)arg4 options:(unsigned long long)arg5 ;
-(void)writeOutput:(id)arg1 append:(BOOL)arg2 ;
-(id)stopSamplingAndReturnCallNode;
-(unsigned)mainThread;
-(unsigned)sampleLimit;
-(void)preloadSymbols;
-(void)forceStop;
-(BOOL)start;
-(void)setSamplingInterval:(double)arg1 ;
-(id)sampleAllThreadsOnce;
-(id)sampleAllThreadsOnceWithFramePointers:(BOOL)arg1 ;
-(void)stopSampling;
-(void)setDelegate:(id)arg1 ;
-(void)_fixupStacks:(id)arg1 ;
-(id)delegate;
-(void)_makeTimeshare;
-(unsigned)sampleCount;
-(id)sampleThread:(unsigned)arg1 ;
-(void)setRecordThreadStates:(BOOL)arg1 ;
-(id)threadDescriptionStringForBacktrace:(id)arg1 returnedAddress:(unsigned long long*)arg2 ;
-(void)_makeHighPriority;
-(id)initWithTask:(unsigned)arg1 ;
-(void)setTimeLimit:(double)arg1 ;
-(void)_checkDispatchThreadLimits;
-(BOOL)stop;
-(id)threadNameForThread:(unsigned)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3 ;
-(int)pid;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned)arg4 recordFramePointers:(BOOL)arg5 clearMemoryCache:(BOOL)arg6 ;
-(id)threadNameForThread:(unsigned)arg1 ;
-(CSTypeRef)symbolicator;
-(id)initWithPID:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)waitUntilDone;
@end
