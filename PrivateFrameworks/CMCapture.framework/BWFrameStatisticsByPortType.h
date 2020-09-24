/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface BWFrameStatisticsByPortType : NSObject <NSFastEnumeration, NSSecureCoding> {

	NSArray* _portTypes;
	NSDictionary* _portTypeToFrameStatistics;
	SCD_Struct_BW115* _frameStatisticsStoragesForPortTypes;
	unsigned long long _frameCount;

}

@property (nonatomic,readonly) NSArray * portTypes; 
@property (nonatomic,readonly) unsigned long long frameCount; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithPortTypes:(id)arg1 ;
-(unsigned long long)frameCount;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW110*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)_setFrameCount:(unsigned long long)arg1 ;
-(void)reset;
-(id)init;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateWithFrameMetadata:(id)arg1 updateFocusDistance:(BOOL)arg2 ;
-(unsigned long long)hash;
-(NSArray *)portTypes;
-(id)description;
@end
