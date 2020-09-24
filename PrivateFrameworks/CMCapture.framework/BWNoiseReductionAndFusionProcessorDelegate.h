/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWNoiseReductionAndFusionProcessorDelegate <BWStillImageProcessorControllerDelegate>
@optional
-(void)processorController:(id)arg1 didSelectNewReferenceFrameWithPTS:(SCD_Struct_BW8)arg2 transform:(id)arg3 processorInput:(id)arg4;
-(void)processorController:(id)arg1 didSelectLowLightReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3;

@required
-(void)processorController:(id)arg1 didSelectFusionMode:(int)arg2 processorInput:(id)arg3;
-(id)processorController:(id)arg1 newSemanticRenderingInputForProcessorInput:(id)arg2;

@end
