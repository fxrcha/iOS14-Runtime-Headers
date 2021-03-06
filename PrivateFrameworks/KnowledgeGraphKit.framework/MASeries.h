/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MAIndexCache, MAFloatVector, NSArray;

@interface MASeries : NSObject {

	NSString* _name;
	MAIndexCache* _indexCache;
	MAFloatVector* _vector;

}

@property (nonatomic,readonly) MAIndexCache * indexCache;                //@synthesize indexCache=_indexCache - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * labels; 
@property (nonatomic,copy,readonly) MAFloatVector * vector;              //@synthesize vector=_vector - In the implementation block
-(float)valueAtIndex:(long long)arg1 ;
-(NSArray *)labels;
-(MAFloatVector *)vector;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 indexCache:(id)arg2 vector:(id)arg3 ;
-(id)initWithName:(id)arg1 labels:(id)arg2 vector:(id)arg3 ;
-(id)valueForLabel:(id)arg1 ;
-(MAIndexCache *)indexCache;
@end

