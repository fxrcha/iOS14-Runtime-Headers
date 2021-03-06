/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSNumber;

@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _refineMouthRegion;
	BOOL _refineLeftEyeRegion;
	BOOL _refineRightEyeRegion;
	BOOL _performBlinkDetection;
	NSNumber* _cascadeStepCount;
	unsigned long long _constellation;

}

@property (assign,nonatomic) BOOL refineMouthRegion;                        //@synthesize refineMouthRegion=_refineMouthRegion - In the implementation block
@property (assign,nonatomic) BOOL refineLeftEyeRegion;                      //@synthesize refineLeftEyeRegion=_refineLeftEyeRegion - In the implementation block
@property (assign,nonatomic) BOOL refineRightEyeRegion;                     //@synthesize refineRightEyeRegion=_refineRightEyeRegion - In the implementation block
@property (assign,nonatomic) BOOL performBlinkDetection;                    //@synthesize performBlinkDetection=_performBlinkDetection - In the implementation block
@property (nonatomic,retain) NSNumber * cascadeStepCount;                   //@synthesize cascadeStepCount=_cascadeStepCount - In the implementation block
@property (assign,nonatomic) unsigned long long constellation;              //@synthesize constellation=_constellation - In the implementation block
+(BOOL)revision:(unsigned long long)arg1 supportsConstellation:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setConstellation:(unsigned long long)arg1 ;
-(BOOL)refineMouthRegion;
-(void)setRefineMouthRegion:(BOOL)arg1 ;
-(BOOL)refineLeftEyeRegion;
-(void)setRefineLeftEyeRegion:(BOOL)arg1 ;
-(BOOL)refineRightEyeRegion;
-(void)setRefineRightEyeRegion:(BOOL)arg1 ;
-(BOOL)performBlinkDetection;
-(void)setPerformBlinkDetection:(BOOL)arg1 ;
-(NSNumber *)cascadeStepCount;
-(void)setCascadeStepCount:(NSNumber *)arg1 ;
-(unsigned long long)constellation;
-(id)initWithRequestClass:(Class)arg1 ;
@end

