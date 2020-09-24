/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNetworkUsageRulesPayload : MCPayload {

	NSArray* _applicationRules;
	NSArray* _SIMRules;

}

@property (nonatomic,copy) NSArray * applicationRules;                     //@synthesize applicationRules=_applicationRules - In the implementation block
@property (setter=IMRules,nonatomic,copy) NSArray * SIMRules;              //@synthesize SIMRules=_SIMRules - In the implementation block
+(id)typeStrings;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
-(id)installationWarnings;
-(NSArray *)SIMRules;
-(NSArray *)applicationRules;
-(void)setApplicationRules:(NSArray *)arg1 ;
-(void)setSIMRules:(NSArray *)arg1 ;
-(id)verboseDescription;
-(id)stubDictionary;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)payloadDescriptionKeyValueSections;
@end
