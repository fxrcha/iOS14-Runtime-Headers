/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface HKClinicalBrand : NSObject <NSCopying, NSSecureCoding> {

	NSString* _externalID;
	NSString* _batchID;

}

@property (nonatomic,copy,readonly) NSString * externalID;                                                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * batchID;                                                      //@synthesize batchID=_batchID - In the implementation block
@property (getter=isFakeBrandForTestAccounts,nonatomic,readonly) BOOL fakeBrandForTestAccounts; 
+(BOOL)supportsSecureCoding;
+(id)createFakeBrandForTestAccounts;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)batchID;
-(id)init;
-(NSString *)externalID;
-(id)initWithExternalID:(id)arg1 batchID:(id)arg2 ;
-(BOOL)isFakeBrandForTestAccounts;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
