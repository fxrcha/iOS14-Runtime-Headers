/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXMetric.h>

@class MXAverage;

@interface MXDisplayMetric : MXMetric {

	MXAverage* _averagePixelLuminance;

}

@property (readonly) MXAverage * averagePixelLuminance;              //@synthesize averagePixelLuminance=_averagePixelLuminance - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAveragePictureLevel:(id)arg1 ;
-(MXAverage *)averagePixelLuminance;
@end

