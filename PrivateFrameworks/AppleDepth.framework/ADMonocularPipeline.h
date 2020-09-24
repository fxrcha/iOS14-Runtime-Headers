/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADNetworkProvider, ADEspressoMonocularInferenceDescriptor, ADImageDescriptor, ADMonocularPipelineParameters;

@interface ADMonocularPipeline : NSObject {

	long long _prioritization;
	ADNetworkProvider* _networkProvider;
	ADEspressoMonocularInferenceDescriptor* _inferenceDesc;
	ADImageDescriptor* _processedDepthDesc;
	BOOL _isDenseDepthInverse;
	ADMonocularPipelineParameters* _pipelineParameters;

}

@property (nonatomic,copy) ADMonocularPipelineParameters * pipelineParameters;              //@synthesize pipelineParameters=_pipelineParameters - In the implementation block
-(id)initWithInputPrioritization:(long long)arg1 andParameters:(id)arg2 ;
-(id)inferenceDescriptor;
-(ADMonocularPipelineParameters *)pipelineParameters;
-(id)initWithInputPrioritization:(long long)arg1 ;
-(id)processedDepthOutputDescriptor;
-(long long)postProcessWithDepth:(CVBufferRef)arg1 depthOutput:(CVBufferRef)arg2 ;
-(void)setPipelineParameters:(ADMonocularPipelineParameters *)arg1 ;
@end
