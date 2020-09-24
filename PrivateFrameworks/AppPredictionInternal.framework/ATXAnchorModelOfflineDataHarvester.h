/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ATXAnchorModelEventFeaturizer, NSUUID;

@interface ATXAnchorModelOfflineDataHarvester : NSObject {

	NSArray* _anchorsToCollect;
	ATXAnchorModelEventFeaturizer* _eventFeaturizer;
	NSUUID* _userId;

}
+(id)getUserUUIDForDataCollection;
+(id)getSamplingGroupForDataCollection;
+(void)resetSamplingGroupAssignmentForUser;
+(id)bundleIdsFromAppLaunchesInMessage:(id)arg1 ;
+(id)actionIdentifiersFromActionsInMessage:(id)arg1 ;
-(id)init;
-(id)allInstalledAppsKnownToSpringBoard;
-(id)initWithSamplingGroup:(id)arg1 userId:(id)arg2 ;
-(void)harvestDataForAnchor:(id)arg1 ;
-(id)fetchAnchorEvents:(id)arg1 ;
-(id)processAnchorOccurrence:(id)arg1 anchor:(id)arg2 ;
-(void)addAppLaunchEventsFromAnchorOccurrenceDate:(id)arg1 toMessage:(id)arg2 ;
-(void)addActionEventsFromAnchorOccurrenceDate:(id)arg1 toMessage:(id)arg2 ;
-(void)addNegativeSamplesForAnchorOccurrenceDate:(id)arg1 toMessage:(id)arg2 ;
-(id)fetchEventsAfterAnchorOccurrenceDate:(id)arg1 withDuetDataProviderClass:(Class)arg2 limit:(unsigned long long)arg3 maxSecondsBeforeAnchor:(long long)arg4 maxSecondsAfterAnchor:(long long)arg5 ;
-(void)setNegativeAppLaunchSamplesForAnchorOccurrenceDate:(id)arg1 mainMessage:(id)arg2 ;
-(void)setNegativeActionSamplesForAnchorOccurrenceDate:(id)arg1 mainMessage:(id)arg2 ;
-(void)harvestData;
@end
