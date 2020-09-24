/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMPasscodeSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowSimple;
	NSNumber* _payloadForcePIN;
	NSNumber* _payloadMaxFailedAttempts;
	NSNumber* _payloadMaxInactivity;
	NSNumber* _payloadMaxPINAgeInDays;
	NSNumber* _payloadMinComplexChars;
	NSNumber* _payloadMinLength;
	NSNumber* _payloadRequireAlphanumeric;
	NSNumber* _payloadPinHistory;
	NSNumber* _payloadMaxGracePeriod;
	NSNumber* _payloadMinutesUntilFailedLoginReset;
	NSNumber* _payloadChangeAtNextAuth;
	NSNumber* _payloadManualFetchingWhenRoaming;
	NSNumber* _payloadAllowFingerprintForUnlock;
	NSNumber* _payloadAllowFingerprintModification;
	NSNumber* _payloadAllowPasscodeModification;
	NSNumber* _payloadAllowAutoUnlock;

}

@property (nonatomic,copy) NSNumber * payloadAllowSimple;                               //@synthesize payloadAllowSimple=_payloadAllowSimple - In the implementation block
@property (nonatomic,copy) NSNumber * payloadForcePIN;                                  //@synthesize payloadForcePIN=_payloadForcePIN - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMaxFailedAttempts;                         //@synthesize payloadMaxFailedAttempts=_payloadMaxFailedAttempts - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMaxInactivity;                             //@synthesize payloadMaxInactivity=_payloadMaxInactivity - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMaxPINAgeInDays;                           //@synthesize payloadMaxPINAgeInDays=_payloadMaxPINAgeInDays - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMinComplexChars;                           //@synthesize payloadMinComplexChars=_payloadMinComplexChars - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMinLength;                                 //@synthesize payloadMinLength=_payloadMinLength - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRequireAlphanumeric;                       //@synthesize payloadRequireAlphanumeric=_payloadRequireAlphanumeric - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPinHistory;                                //@synthesize payloadPinHistory=_payloadPinHistory - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMaxGracePeriod;                            //@synthesize payloadMaxGracePeriod=_payloadMaxGracePeriod - In the implementation block
@property (nonatomic,copy) NSNumber * payloadMinutesUntilFailedLoginReset;              //@synthesize payloadMinutesUntilFailedLoginReset=_payloadMinutesUntilFailedLoginReset - In the implementation block
@property (nonatomic,copy) NSNumber * payloadChangeAtNextAuth;                          //@synthesize payloadChangeAtNextAuth=_payloadChangeAtNextAuth - In the implementation block
@property (nonatomic,copy) NSNumber * payloadManualFetchingWhenRoaming;                 //@synthesize payloadManualFetchingWhenRoaming=_payloadManualFetchingWhenRoaming - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowFingerprintForUnlock;                 //@synthesize payloadAllowFingerprintForUnlock=_payloadAllowFingerprintForUnlock - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowFingerprintModification;              //@synthesize payloadAllowFingerprintModification=_payloadAllowFingerprintModification - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowPasscodeModification;                 //@synthesize payloadAllowPasscodeModification=_payloadAllowPasscodeModification - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAutoUnlock;                           //@synthesize payloadAllowAutoUnlock=_payloadAllowAutoUnlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withAllowSimple:(id)arg2 withForcePIN:(id)arg3 withMaxFailedAttempts:(id)arg4 withMaxInactivity:(id)arg5 withMaxPINAgeInDays:(id)arg6 withMinComplexChars:(id)arg7 withMinLength:(id)arg8 withRequireAlphanumeric:(id)arg9 withPinHistory:(id)arg10 withMaxGracePeriod:(id)arg11 withMinutesUntilFailedLoginReset:(id)arg12 withChangeAtNextAuth:(id)arg13 withManualFetchingWhenRoaming:(id)arg14 withAllowFingerprintForUnlock:(id)arg15 withAllowFingerprintModification:(id)arg16 withAllowPasscodeModification:(id)arg17 withAllowAutoUnlock:(id)arg18 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowSimple:(NSNumber *)arg1 ;
-(void)setPayloadForcePIN:(NSNumber *)arg1 ;
-(void)setPayloadMaxFailedAttempts:(NSNumber *)arg1 ;
-(void)setPayloadMaxInactivity:(NSNumber *)arg1 ;
-(void)setPayloadMaxPINAgeInDays:(NSNumber *)arg1 ;
-(void)setPayloadMinComplexChars:(NSNumber *)arg1 ;
-(void)setPayloadMinLength:(NSNumber *)arg1 ;
-(void)setPayloadRequireAlphanumeric:(NSNumber *)arg1 ;
-(void)setPayloadPinHistory:(NSNumber *)arg1 ;
-(void)setPayloadMaxGracePeriod:(NSNumber *)arg1 ;
-(void)setPayloadMinutesUntilFailedLoginReset:(NSNumber *)arg1 ;
-(void)setPayloadChangeAtNextAuth:(NSNumber *)arg1 ;
-(void)setPayloadManualFetchingWhenRoaming:(NSNumber *)arg1 ;
-(void)setPayloadAllowFingerprintForUnlock:(NSNumber *)arg1 ;
-(void)setPayloadAllowFingerprintModification:(NSNumber *)arg1 ;
-(void)setPayloadAllowPasscodeModification:(NSNumber *)arg1 ;
-(void)setPayloadAllowAutoUnlock:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowSimple;
-(NSNumber *)payloadForcePIN;
-(NSNumber *)payloadMaxFailedAttempts;
-(NSNumber *)payloadMaxInactivity;
-(NSNumber *)payloadMaxPINAgeInDays;
-(NSNumber *)payloadMinComplexChars;
-(NSNumber *)payloadMinLength;
-(NSNumber *)payloadRequireAlphanumeric;
-(NSNumber *)payloadPinHistory;
-(NSNumber *)payloadMaxGracePeriod;
-(NSNumber *)payloadMinutesUntilFailedLoginReset;
-(NSNumber *)payloadChangeAtNextAuth;
-(NSNumber *)payloadManualFetchingWhenRoaming;
-(NSNumber *)payloadAllowFingerprintForUnlock;
-(NSNumber *)payloadAllowFingerprintModification;
-(NSNumber *)payloadAllowPasscodeModification;
-(NSNumber *)payloadAllowAutoUnlock;
@end
