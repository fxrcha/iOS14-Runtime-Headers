/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface RankingInfo : NSManagedObject

@property (nonatomic,copy) NSString * category; 
@property (assign,nonatomic) short inputMethod; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * rankedList; 
@property (nonatomic,copy) NSString * recipientId; 
@property (nonatomic,copy) NSString * response; 
@property (assign,nonatomic) short source; 
@property (nonatomic,copy) NSDate * timestamp; 
+(id)fetchRequest;
@end
