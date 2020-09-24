/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol GEOComposedRoutePortion <NSObject>
@property (nonatomic,readonly) NSRange pointRange; 
@property (nonatomic,readonly) NSRange stepRange; 
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned long long startStepIndex; 
@property (nonatomic,readonly) unsigned long long endStepIndex; 
@property (nonatomic,readonly) unsigned long long stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) unsigned distance; 
@property (nonatomic,readonly) double expectedTime; 
@required
-(NSArray *)steps;
-(double)expectedTime;
-(unsigned)startPointIndex;
-(unsigned long long)endStepIndex;
-(unsigned)endPointIndex;
-(unsigned long long)stepCount;
-(unsigned)distance;
-(unsigned long long)startStepIndex;
-(NSRange)stepRange;
-(unsigned)pointCount;
-(NSRange)pointRange;

@end
