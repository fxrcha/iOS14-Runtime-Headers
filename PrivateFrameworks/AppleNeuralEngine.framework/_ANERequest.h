/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, _ANEIOSurfaceObject, NSNumber, _ANEPerformanceStats;

@interface _ANERequest : NSObject {

	NSArray* _inputArray;
	NSArray* _inputIndexArray;
	NSArray* _outputArray;
	NSArray* _outputIndexArray;
	_ANEIOSurfaceObject* _weightsBuffer;
	NSNumber* _procedureIndex;
	_ANEPerformanceStats* _perfStats;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) _ANEPerformanceStats * perfStats;                   //@synthesize perfStats=_perfStats - In the implementation block
@property (nonatomic,readonly) NSArray * inputArray;                             //@synthesize inputArray=_inputArray - In the implementation block
@property (nonatomic,readonly) NSArray * inputIndexArray;                        //@synthesize inputIndexArray=_inputIndexArray - In the implementation block
@property (nonatomic,readonly) NSArray * outputArray;                            //@synthesize outputArray=_outputArray - In the implementation block
@property (nonatomic,readonly) NSArray * outputIndexArray;                       //@synthesize outputIndexArray=_outputIndexArray - In the implementation block
@property (nonatomic,readonly) _ANEIOSurfaceObject * weightsBuffer;              //@synthesize weightsBuffer=_weightsBuffer - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * procedureIndex;                   //@synthesize procedureIndex=_procedureIndex - In the implementation block
@property (copy) id completionHandler;                                           //@synthesize completionHandler=_completionHandler - In the implementation block
+(id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 procedureIndex:(id)arg6 ;
+(id)requestWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 procedureIndex:(id)arg5 ;
-(BOOL)validate;
-(_ANEIOSurfaceObject *)weightsBuffer;
-(void)setCompletionHandler:(id)arg1 ;
-(id)description;
-(id)completionHandler;
-(NSArray *)inputArray;
-(NSArray *)inputIndexArray;
-(NSArray *)outputArray;
-(NSArray *)outputIndexArray;
-(NSNumber *)procedureIndex;
-(void)setPerfStats:(_ANEPerformanceStats *)arg1 ;
-(_ANEPerformanceStats *)perfStats;
-(id)initWithInputs:(id)arg1 inputIndices:(id)arg2 outputs:(id)arg3 outputIndices:(id)arg4 weightsBuffer:(id)arg5 procedureIndex:(id)arg6 ;
@end

