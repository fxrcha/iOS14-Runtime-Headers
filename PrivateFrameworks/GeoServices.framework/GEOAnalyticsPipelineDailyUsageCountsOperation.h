/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSString, NSNumber;

@interface GEOAnalyticsPipelineDailyUsageCountsOperation : GEOAnalyticsPipelineReportOperation {

	int _countType;
	NSString* _usageString;
	NSNumber* _usageBool;
	NSString* _appId;

}
-(id)initWithDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 remoteProxy:(id)arg5 runQueue:(id)arg6 completionQueue:(id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)main;
@end

