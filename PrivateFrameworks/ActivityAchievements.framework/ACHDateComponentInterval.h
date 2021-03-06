/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject {

	NSDateComponents* _startDateComponents;
	NSDateComponents* _endDateComponents;

}

@property (nonatomic,readonly) NSDateComponents * startDateComponents;              //@synthesize startDateComponents=_startDateComponents - In the implementation block
@property (nonatomic,readonly) NSDateComponents * endDateComponents;                //@synthesize endDateComponents=_endDateComponents - In the implementation block
-(NSDateComponents *)endDateComponents;
-(NSDateComponents *)startDateComponents;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(BOOL)containsDateComponents:(id)arg1 inCalendar:(id)arg2 ;
-(unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)arg1 ;
@end

