/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate;

@interface _DKTemporalNumericState : NSObject <NSSecureCoding> {

	NSNumber* _state;
	NSDate* _timestamp;

}

@property (retain) NSNumber * state;                //@synthesize state=_state - In the implementation block
@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)initWithState:(id)arg1 timestamp:(id)arg2 ;
-(void)setState:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)state;
-(id)description;
@end
