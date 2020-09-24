/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNVideoProcessorCadence.h>

@interface VNVideoProcessorFrameRateCadence : VNVideoProcessorCadence {

	long long _frameRate;

}

@property (readonly) long long frameRate;              //@synthesize frameRate=_frameRate - In the implementation block
-(id)initWithFrameRate:(long long)arg1 ;
-(void)populateVCPVideoProcessorRequestConfiguration:(id)arg1 ;
-(long long)frameRate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
