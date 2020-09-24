/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FitnessUI/FitnessUI-Structs.h>
@interface FIUIChartColor : NSObject {

	CGGradientRef _gradient;
	CGColorRef _color;
	double _threshold;

}

@property (assign,nonatomic) double threshold;              //@synthesize threshold=_threshold - In the implementation block
-(double)threshold;
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)setThreshold:(double)arg1 ;
-(id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3 ;
-(id)initWithThreshold:(double)arg1 color:(id)arg2 ;
@end
