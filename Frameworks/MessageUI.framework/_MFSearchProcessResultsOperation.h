/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol _MFSearchResultsConsumer;
@interface _MFSearchProcessResultsOperation : NSOperation {

	id<_MFSearchResultsConsumer> _consumer;
	unsigned long long _type;
	/*^block*/id _completionBlock;

}
+(id)operationWithResultsOfType:(unsigned long long)arg1 completion:(/*^block*/id)arg2 consumer:(id)arg3 ;
-(void)main;
@end

