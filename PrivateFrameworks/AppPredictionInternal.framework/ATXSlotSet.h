/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSUUID;

@interface ATXSlotSet : NSObject <NSCopying, NSSecureCoding> {

	unsigned _hash;
	NSSet* _parameters;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSSet * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                     //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSet *)parameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToSlotSet:(id)arg1 ;
-(id)init;
-(id)initWithParameters:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(id)initWithOpaqueParametersUuid:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithParameters:(id)arg1 uuid:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithOpaqueParameters;
-(id)description;
@end
