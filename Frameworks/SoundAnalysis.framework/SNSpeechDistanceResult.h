/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class NSString;

@interface SNSpeechDistanceResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	double _currentFrameValue;
	double _meanValue;
	double _standardDeviation;
	SCD_Struct_SN4 _timeRange;

}

@property (assign,nonatomic) double currentFrameValue;              //@synthesize currentFrameValue=_currentFrameValue - In the implementation block
@property (assign,nonatomic) double meanValue;                      //@synthesize meanValue=_meanValue - In the implementation block
@property (assign,nonatomic) double standardDeviation;              //@synthesize standardDeviation=_standardDeviation - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(SCD_Struct_SN4)timeRange;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)meanValue;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStandardDeviation:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)standardDeviation;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setCurrentFrameValue:(double)arg1 ;
-(void)setMeanValue:(double)arg1 ;
-(double)currentFrameValue;
-(BOOL)isEqualToSpeechDistanceResult:(id)arg1 ;
@end

