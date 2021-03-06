/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PSAppUsageUtilities : NSObject
+(id)shareExtensionsUsedAndInstalledDaysAgo:(long long)arg1 appBundleIdsToShareExtensionBundleIdsMapping:(id)arg2 knowledgeStore:(id)arg3 ;
+(void)cacheSharingAppUsageDurations:(id)arg1 ;
+(id)sharingAppUsageDurations;
+(id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)arg1 daysAgo:(long long)arg2 knowledgeStore:(id)arg3 ;
+(id)mostUsedAppShareExtensionsWithAppBundleIdsToShareExtensionBundleIdsMapping:(id)arg1 ;
+(id)mostUsedAppBundleIdsUsingPredicate:(id)arg1 knowledgeStore:(id)arg2 ;
@end

