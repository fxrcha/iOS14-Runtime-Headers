/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLiteTruePredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface HDSQLiteJoinPredicate : HDSQLiteTruePredicate <NSCopying> {

	NSSet* _joinClauses;

}

@property (nonatomic,copy,readonly) NSSet * joinClauses;              //@synthesize joinClauses=_joinClauses - In the implementation block
+(id)predicateWithJoinClauses:(id)arg1 ;
-(NSSet *)joinClauses;
-(id)SQLJoinClausesForEntityClass:(Class)arg1 ;
@end
