/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned duration : 1;
	unsigned startTimeIntervalSinceReferenceDate : 1;
	unsigned scheduleEndHour : 1;
	unsigned scheduleEndMinute : 1;
	unsigned scheduleStartHour : 1;
	unsigned scheduleStartMinute : 1;
} SCD_Struct_SC1;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned version : 1;
	unsigned isEnabled : 1;
} SCD_Struct_SC3;

typedef struct {
	unsigned day : 1;
} SCD_Struct_SC4;
