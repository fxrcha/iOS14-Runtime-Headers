/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphPartOfDayNode : PGGraphOptimizedNode {

	unsigned long long _partOfDay;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long partOfDay;              //@synthesize partOfDay=_partOfDay - In the implementation block
+(id)stringValueForPartOfDay:(unsigned long long)arg1 ;
+(id)filter;
+(unsigned long long)partOfDayForPartOfDayName:(id)arg1 ;
+(id)partOfDayNameForPartOfDay:(unsigned long long)arg1 ;
-(BOOL)hasProperties:(id)arg1 ;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(id)init;
-(unsigned short)domain;
-(id)propertyDictionary;
-(id)label;
-(NSString *)name;
-(unsigned long long)partOfDay;
-(id)description;
@end

