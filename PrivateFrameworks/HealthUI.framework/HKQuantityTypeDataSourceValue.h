/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKQuantity, HKQuantityType, NSDateComponents, NSDate;

@interface HKQuantityTypeDataSourceValue : NSObject {

	HKQuantity* _sumQuantity;
	HKQuantity* _minQuantity;
	HKQuantity* _maxQuantity;
	HKQuantity* _averageQuantity;
	HKQuantity* _durationQuantity;
	HKQuantity* _mostRecentQuantity;
	HKQuantityType* _quantityType;
	long long _recordCount;
	NSDateComponents* _statisticsInterval;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) HKQuantity * sumQuantity;                           //@synthesize sumQuantity=_sumQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * minQuantity;                           //@synthesize minQuantity=_minQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * maxQuantity;                           //@synthesize maxQuantity=_maxQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * averageQuantity;                       //@synthesize averageQuantity=_averageQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * durationQuantity;                      //@synthesize durationQuantity=_durationQuantity - In the implementation block
@property (nonatomic,retain) HKQuantity * mostRecentQuantity;                    //@synthesize mostRecentQuantity=_mostRecentQuantity - In the implementation block
@property (nonatomic,retain) HKQuantityType * quantityType;                      //@synthesize quantityType=_quantityType - In the implementation block
@property (assign,nonatomic) long long recordCount;                              //@synthesize recordCount=_recordCount - In the implementation block
@property (nonatomic,retain) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
-(HKQuantityType *)quantityType;
-(HKQuantity *)averageQuantity;
-(HKQuantity *)mostRecentQuantity;
-(void)setStartDate:(NSDate *)arg1 ;
-(long long)recordCount;
-(NSDate *)endDate;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(void)setAverageQuantity:(HKQuantity *)arg1 ;
-(void)setMostRecentQuantity:(HKQuantity *)arg1 ;
-(void)setSumQuantity:(HKQuantity *)arg1 ;
-(void)setRecordCount:(long long)arg1 ;
-(NSDate *)startDate;
-(HKQuantity *)sumQuantity;
-(void)setStatisticsInterval:(NSDateComponents *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDateComponents *)statisticsInterval;
-(HKQuantity *)minQuantity;
-(HKQuantity *)maxQuantity;
-(HKQuantity *)durationQuantity;
-(void)setDurationQuantity:(HKQuantity *)arg1 ;
-(void)setMinQuantity:(HKQuantity *)arg1 ;
-(void)setMaxQuantity:(HKQuantity *)arg1 ;
@end

