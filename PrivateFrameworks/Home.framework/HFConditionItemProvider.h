/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class NSSet, HMHome, NSMutableSet;

@interface HFConditionItemProvider : HFItemProvider {

	NSSet* _conditions;
	HMHome* _home;
	NSMutableSet* _conditionItems;

}

@property (nonatomic,readonly) NSMutableSet * conditionItems;              //@synthesize conditionItems=_conditionItems - In the implementation block
@property (nonatomic,retain) NSSet * conditions;                           //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) HMHome * home;                              //@synthesize home=_home - In the implementation block
-(id)items;
-(NSSet *)conditions;
-(id)initWithConditions:(id)arg1 home:(id)arg2 ;
-(id)init;
-(NSMutableSet *)conditionItems;
-(id)reloadItems;
-(HMHome *)home;
-(void)setConditions:(NSSet *)arg1 ;
@end

