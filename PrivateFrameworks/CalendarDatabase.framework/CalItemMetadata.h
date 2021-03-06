/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CalItemMetadata : NSObject <NSSecureCoding> {

	NSDictionary* _x_props;
	int _classification;

}

@property (retain) NSDictionary * x_props;              //@synthesize x_props=_x_props - In the implementation block
@property (assign) int classification;                  //@synthesize classification=_classification - In the implementation block
+(id)metadataWithICSComponent:(id)arg1 ;
+(id)_whitelistedClassesForSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)metadataWithData:(id)arg1 ;
-(void)setClassification:(int)arg1 ;
-(void)applyToComponent:(id)arg1 ;
-(id)dataRepresentationWithExistingMetaData:(id)arg1 ;
-(void)setX_props:(NSDictionary *)arg1 ;
-(id)initWithICSComponent:(id)arg1 ;
-(int)classification;
-(NSDictionary *)x_props;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

