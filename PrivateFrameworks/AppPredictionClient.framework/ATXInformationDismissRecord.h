/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface ATXInformationDismissRecord : NSObject {

	NSString* _widgetBundleId;
	NSString* _criterion;
	NSDate* _blockWidgetUntilDate;
	NSDate* _blockCriterionUntilDate;

}

@property (nonatomic,readonly) NSString * widgetBundleId;                     //@synthesize widgetBundleId=_widgetBundleId - In the implementation block
@property (nonatomic,readonly) NSString * criterion;                          //@synthesize criterion=_criterion - In the implementation block
@property (nonatomic,readonly) NSDate * blockWidgetUntilDate;                 //@synthesize blockWidgetUntilDate=_blockWidgetUntilDate - In the implementation block
@property (nonatomic,readonly) NSDate * blockCriterionUntilDate;              //@synthesize blockCriterionUntilDate=_blockCriterionUntilDate - In the implementation block
-(id)init;
-(NSString *)criterion;
-(NSString *)widgetBundleId;
-(id)initWithWidgetBundleId:(id)arg1 criterion:(id)arg2 blockWidgetUntilDate:(id)arg3 blockCriterionUntilDate:(id)arg4 ;
-(NSDate *)blockWidgetUntilDate;
-(NSDate *)blockCriterionUntilDate;
@end
