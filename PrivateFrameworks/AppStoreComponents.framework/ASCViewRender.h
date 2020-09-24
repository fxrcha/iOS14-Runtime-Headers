/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASCSignpostGroup.h>

@class NSString;

@interface ASCViewRender : NSObject <ASCSignpostGroup>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)subsystem;
+(id)log;
+(id)category;
+(void)resourceRequestDidBeginWithTag:(unsigned long long)arg1 ;
+(void)rootViewModelPresentWithTag:(unsigned long long)arg1 ;
+(void)resourceRequestDidEndWithTag:(unsigned long long)arg1 ;
+(void)pageRequestedWithTag:(unsigned long long)arg1 ;
+(void)pageUserReadyWithTag:(unsigned long long)arg1 ;
+(void)willEmitSignpostOfType:(long long)arg1 withName:(id)arg2 ;
+(id)requiredFieldNames;
+(void)overlayRequestedWithTag:(unsigned long long)arg1 ;
+(void)modelPrefetchDidBeginWithTag:(unsigned long long)arg1 ;
+(void)modelPrefetchDidEndWithTag:(unsigned long long)arg1 ;
+(void)bootstrapDidBeginWithTag:(unsigned long long)arg1 ;
+(void)bootstrapDidEndWithTag:(unsigned long long)arg1 ;
+(void)launchCorrelationKeyWithTag:(unsigned long long)arg1 withString:(id)arg2 ;
+(void)requestDidBeginWithTag:(unsigned long long)arg1 ;
+(void)requestDidEndWithTag:(unsigned long long)arg1 ;
+(void)jsCallDidBeginWithTag:(unsigned long long)arg1 ;
+(void)jsCallDidEndWithTag:(unsigned long long)arg1 ;
+(void)rootViewModelParseDidBeginWithTag:(unsigned long long)arg1 ;
+(void)rootViewModelParseDidEndWithTag:(unsigned long long)arg1 ;
@end
