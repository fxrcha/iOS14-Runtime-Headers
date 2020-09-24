/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeReply : GEOXPCReply <GEOXPCReply> {

	double _nextSafeRequestTime;
	int _availableRequestCount;
	GEODataRequestThrottlerToken* _throttlerToken;

}

@property (assign,nonatomic) double nextSafeRequestTime;                                 //@synthesize nextSafeRequestTime=_nextSafeRequestTime - In the implementation block
@property (assign,nonatomic) int availableRequestCount;                                  //@synthesize availableRequestCount=_availableRequestCount - In the implementation block
@property (nonatomic,retain) GEODataRequestThrottlerToken * throttlerToken;              //@synthesize throttlerToken=_throttlerToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setThrottlerToken:(GEODataRequestThrottlerToken *)arg1 ;
-(void)setAvailableRequestCount:(int)arg1 ;
-(int)availableRequestCount;
-(GEODataRequestThrottlerToken *)throttlerToken;
-(void)setNextSafeRequestTime:(double)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(double)nextSafeRequestTime;
-(BOOL)isValid;
@end
