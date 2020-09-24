/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EKAvailabilityUtilities : NSObject
+(int)CALFreeBusyTypeFromEKAvailType:(long long)arg1 ;
+(id)getCALFreeBusyFromEKSpans:(id)arg1 inRange:(id)arg2 ;
+(long long)_orderForType:(long long)arg1 ;
+(int)leastAvailabileFreeBusyTypeForArray:(id)arg1 ;
+(id)getCALFreeBusyFromResults:(id)arg1 forAttendees:(id)arg2 inRange:(id)arg3 ;
+(long long)summarizedAvailabilityTypeForSpans:(id)arg1 ;
+(BOOL)spansIncludeBusyPeriod:(id)arg1 ;
+(BOOL)showTypeAsBusy:(long long)arg1 ;
@end
