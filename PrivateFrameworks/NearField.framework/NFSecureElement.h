/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFHardwareSecureElementInfo, NSString, NSNumber;

@interface NFSecureElement : NSObject {

	NFHardwareSecureElementInfo* _info;
	BOOL _isDirty;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * rsaCertificate; 
@property (readonly) NSString * eccCertificate; 
@property (readonly) NSString * eckaCertificate; 
@property (readonly) BOOL isProductionSigned; 
@property (readonly) BOOL isInRestrictedMode; 
@property (readonly) unsigned long long OSVersion; 
@property (readonly) unsigned long long fullOSVersion; 
@property (readonly) NSNumber * sequenceCounter; 
@property (readonly) unsigned supportedTechnologies; 
@property (readonly) BOOL available; 
+(id)embeddedSecureElement;
+(id)icefallSecureElement;
+(unsigned)supportedTechnologies;
-(unsigned long long)OSVersion;
-(BOOL)available;
-(id)info;
-(id)identifier;
-(NSString *)eckaCertificate;
-(NSString *)serialNumber;
-(NSNumber *)sequenceCounter;
-(NSString *)eccCertificate;
-(void)_updateSecureElementInfo:(id)arg1 ;
-(unsigned)supportedTechnologies;
-(id)manifestQueryBlob;
-(BOOL)isSeshatAvailabledInRestrictedMode;
-(NSString *)rsaCertificate;
-(void)_setIsInRestrictedPerformanceMode:(BOOL)arg1 ;
-(id)_initWithInfo:(id)arg1 ;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(unsigned)hwType;
-(BOOL)isProductionSigned;
-(void)_updateIfDirty;
-(void)_markDirty;
-(unsigned long long)fullOSVersion;
-(BOOL)isInRestrictedMode;
@end
