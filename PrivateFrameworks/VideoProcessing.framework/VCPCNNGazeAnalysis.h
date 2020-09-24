/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModelEspresso;

@interface VCPCNNGazeAnalysis : NSObject {

	float* _inputData;
	VCPCNNModelEspresso* _modelEspresso;

}
+(id)sharedModel:(id)arg1 ;
-(int)copyImage:(CVBufferRef)arg1 toData:(float*)arg2 ;
-(int)createInput:(float*)arg1 withBuffer:(CVBufferRef)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 faceBounds:(CGRect)arg5 ;
-(int)detectEyeOpennessForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 eyeOpenness:(BOOL*)arg3 ;
-(void)dealloc;
-(id)init;
@end
