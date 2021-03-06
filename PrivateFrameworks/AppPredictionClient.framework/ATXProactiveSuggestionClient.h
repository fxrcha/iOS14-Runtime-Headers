/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXProactiveSuggestionClientProtocol.h>

@class ATXUICacheManager, NSString;

@interface ATXProactiveSuggestionClient : NSObject <ATXProactiveSuggestionClientProtocol> {

	unsigned char _consumer;
	ATXUICacheManager* _cacheManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)suggestionLayoutFromCache;
-(id)init;
-(id)initWithConsumerSubType:(unsigned char)arg1 ;
@end

