/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface PKAddPaymentPassRequest : NSObject <NSSecureCoding> {

	NSData* _encryptedPassData;
	NSData* _activationData;
	NSData* _ephemeralPublicKey;
	NSData* _wrappedKey;
	NSString* _encryptionVersion;
	NSData* _publicKeyHash;
	NSString* _issuerIdentifier;
	NSData* _nonce;
	NSString* _hostApplicationIdentifier;
	NSString* _hostApplicationVersion;
	NSData* _FPInfo;

}

@property (nonatomic,copy) NSString * encryptionVersion;                      //@synthesize encryptionVersion=_encryptionVersion - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                            //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSString * issuerIdentifier;                       //@synthesize issuerIdentifier=_issuerIdentifier - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                    //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationIdentifier;              //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostApplicationVersion;                 //@synthesize hostApplicationVersion=_hostApplicationVersion - In the implementation block
@property (nonatomic,copy) NSData * FPInfo;                                   //@synthesize FPInfo=_FPInfo - In the implementation block
@property (nonatomic,copy) NSData * encryptedPassData;                        //@synthesize encryptedPassData=_encryptedPassData - In the implementation block
@property (nonatomic,copy) NSData * activationData;                           //@synthesize activationData=_activationData - In the implementation block
@property (nonatomic,copy) NSData * ephemeralPublicKey;                       //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSData * wrappedKey;                               //@synthesize wrappedKey=_wrappedKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)nonce;
-(NSData *)FPInfo;
-(void)setNonce:(NSData *)arg1 ;
-(void)dealloc;
-(NSString *)encryptionVersion;
-(id)init;
-(void)setEncryptionVersion:(NSString *)arg1 ;
-(void)setIssuerIdentifier:(NSString *)arg1 ;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(void)setHostApplicationVersion:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFPInfo:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(NSData *)publicKeyHash;
-(NSString *)issuerIdentifier;
-(BOOL)_hasRequiredThirdPartyFields:(BOOL)arg1 ;
-(BOOL)_hasRequiredFields:(BOOL)arg1 ;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSData *)ephemeralPublicKey;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(NSData *)encryptedPassData;
-(void)setEncryptedPassData:(NSData *)arg1 ;
-(NSData *)activationData;
-(void)setActivationData:(NSData *)arg1 ;
-(void)setWrappedKey:(NSData *)arg1 ;
-(NSString *)hostApplicationVersion;
-(NSData *)wrappedKey;
@end

