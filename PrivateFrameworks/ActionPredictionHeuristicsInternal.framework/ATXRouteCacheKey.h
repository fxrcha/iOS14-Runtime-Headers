/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionPredictionHeuristicsInternal/ActionPredictionHeuristicsInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXRouteCacheKey : NSObject <NSCopying> {

	NSString* destinationLocation;
	NSString* transportType;
	BOOL localOnlyAfterFirstUpdate;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
