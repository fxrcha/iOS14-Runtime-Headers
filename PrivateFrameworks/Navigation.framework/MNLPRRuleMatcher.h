/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLPRVehicle, NSArray, _MNLPRPlate, NSDate, NSTimeZone, NSDictionary;

@interface MNLPRRuleMatcher : NSObject {

	GEOLPRVehicle* _vehicle;
	NSArray* _ruleSets;
	unsigned long long _signpost;
	_MNLPRPlate* _lastPlate;
	NSDate* _lastDate;
	NSTimeZone* _lastTimeZone;
	NSDictionary* _usedRegions;

}
-(id)initForVehicle:(id)arg1 withRules:(id)arg2 ;
-(id)generateMaskedPlateForWaypoints:(id)arg1 date:(id)arg2 timeZone:(id)arg3 error:(id*)arg4 ;
-(id)debug_jsonDescriptionOfLastPlate;
@end

