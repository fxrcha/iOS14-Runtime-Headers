/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVCornerUtilities : NSObject
+(double)radiusFromCornerRadii:(TVCornerRadii)arg1 ;
+(BOOL)radiiIsZero:(TVCornerRadii)arg1 ;
+(TVCornerRadii)radiiFromRadius:(double)arg1 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 ;
+(CGPathRef)createPathForRadii:(TVCornerRadii)arg1 inRect:(CGRect)arg2 isContinuous:(BOOL)arg3 ;
+(TVCornerRadii)flipCGOriginRadii:(TVCornerRadii)arg1 ;
@end
