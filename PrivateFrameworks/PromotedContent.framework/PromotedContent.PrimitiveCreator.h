/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APMetricPrimitiveCreating.h>

@interface PromotedContent.PrimitiveCreator : NSObject <APMetricPrimitiveCreating> {

	 promotedContentIdentifier;
	 contextIdentifier;
	 journeyIdentifier;
	 placeholder;
	 receiver;
	 pendingMetrics;

}
-(id)init;
-(void)recordMetric:(long long)arg1 forRoute:(long long)arg2 properties:(id)arg3 internalProperties:(id)arg4 options:(long long)arg5 ;
@end

