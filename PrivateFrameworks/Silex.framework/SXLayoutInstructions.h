/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SXLayoutInstructions : NSObject {

	NSArray* _instructions;

}

@property (nonatomic,readonly) NSArray * instructions;              //@synthesize instructions=_instructions - In the implementation block
+(id)defaultInstructions;
-(NSArray *)instructions;
-(id)description;
-(void)didLayoutComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(BOOL)areFulfilledForBlueprint:(id)arg1 ;
-(id)initWithInstructions:(id)arg1 ;
@end

