/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, NSArray;

@interface ASDUpdatePollMetrics : NSObject {

	NSDate* _pollTime;
	NSString* _reason;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSDate * pollTime;                //@synthesize pollTime=_pollTime - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
-(NSDate *)pollTime;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(void)setPollTime:(NSDate *)arg1 ;
-(NSString *)reason;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(NSArray *)bundleIDs;
-(id)description;
@end

