/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/HKPersistableWorkoutEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDateInterval, NSError, NSDictionary, NSDate;

@interface HKWorkoutEvent : NSObject <HKPersistableWorkoutEvent, NSSecureCoding, NSCopying> {

	long long _type;
	NSDateInterval* _dateInterval;
	NSDictionary* _metadata;

}

@property (readonly) long long type; 
@property (copy,readonly) NSDate * date; 
@property (copy,readonly) NSDateInterval * dateInterval;                //@synthesize dateInterval=_dateInterval - In the implementation block
@property (copy,readonly) NSDictionary * metadata;                      //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionUUID; 
@property (nonatomic,readonly) long long workoutEventType; 
@property (nonatomic,copy,readonly) NSError * error; 
+(BOOL)supportsSecureCoding;
+(id)_newWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
+(id)_unvalidatedWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
+(id)_workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3 ;
+(id)_workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
+(id)workoutEventWithType:(long long)arg1 date:(id)arg2 ;
+(id)workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3 ;
+(id)workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
+(id)_workoutEventWithInternalEvent:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(NSDateInterval *)dateInterval;
-(NSDictionary *)metadata;
-(void)_assertPropertiesValid;
-(long long)workoutEventType;
-(id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5 ;
-(void)_setWorkoutEventMetadata:(id)arg1 ;
-(NSError *)error;
-(id)_init;
-(id)init;
-(long long)compare:(id)arg1 ;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(NSUUID *)sessionUUID;
-(id)description;
@end

