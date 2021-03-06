/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HKHeartRateVariabilityUtilities : NSObject
+(id)_hrvType;
+(id)_sequenceType;
+(void)queryForParentSequenceOfHRV:(id)arg1 healthStore:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)deleteHRVSample:(id)arg1 healthStore:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(id)instantaneousBPMsForHeartbeatSeriesSample:(id)arg1 ;
+(void)deleteHRVSamplesFromStartDate:(id)arg1 endDate:(id)arg2 predicate:(id)arg3 options:(unsigned long long)arg4 healthStore:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

