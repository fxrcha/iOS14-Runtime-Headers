/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthPlatformCore.framework/HealthPlatformCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface HealthPlatformCore.Keyword : NSManagedObject

@property (assign,nonatomic) long long sortOrder; 
@property (copy,nonatomic) NSString * identifier; 
@property (copy,nonatomic) NSSet * feedItems; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

