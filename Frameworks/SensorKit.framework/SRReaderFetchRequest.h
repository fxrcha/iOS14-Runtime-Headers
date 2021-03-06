/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRRequestFetching.h>

@protocol SRRequestReading;
@class NSString;

@interface SRReaderFetchRequest : NSObject <SRRequestFetching> {

	id<SRRequestReading> _readerRequest;
	BOOL _bypassHoldingPeriod;
	double _from;
	double _to;

}

@property (nonatomic,retain) NSString * sensor; 
@property (nonatomic,retain) NSString * bundleIdentifier; 
@property (nonatomic,retain) NSString * deviceIdentifier; 
@property (assign) double from;                                        //@synthesize from=_from - In the implementation block
@property (assign) double to;                                          //@synthesize to=_to - In the implementation block
@property (assign) BOOL bypassHoldingPeriod;                           //@synthesize bypassHoldingPeriod=_bypassHoldingPeriod - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)to;
-(double)from;
-(NSString *)deviceIdentifier;
-(void)setTo:(double)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)sensor;
-(void)dealloc;
-(id)init;
-(void)setFrom:(double)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setSensor:(NSString *)arg1 ;
-(BOOL)bypassHoldingPeriod;
-(void)setBypassHoldingPeriod:(BOOL)arg1 ;
@end

