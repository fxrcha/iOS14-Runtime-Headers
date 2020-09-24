/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet, NSString;

@interface MXMSampleTag : NSObject <NSSecureCoding, NSCopying> {

	NSOrderedSet* _taxonomy;
	MXMSampleTag* _parent;

}

@property (nonatomic,copy,readonly) NSString * domainNameString; 
@property (nonatomic,copy,readonly) MXMSampleTag * parent;                    //@synthesize parent=_parent - In the implementation block
+(id)ancestery;
+(BOOL)supportsSecureCoding;
-(NSString *)domainNameString;
-(id)initWithDNString:(id)arg1 ;
-(id)initWithComponents:(id)arg1 ;
-(id)initWithTaxonomy:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsTag:(id)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToTag:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(MXMSampleTag *)parent;
@end
