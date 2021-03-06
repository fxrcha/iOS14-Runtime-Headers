/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IDSAuthenticationCertificate, NSData;

@interface IDSAuthenticationCertificateSignature : NSObject {

	NSString* _subscriptionIdentifier;
	IDSAuthenticationCertificate* _authenticationCertificate;
	NSData* _signature;
	NSString* _serverVerifiableEncoding;

}

@property (nonatomic,readonly) NSString * subscriptionIdentifier;                                     //@synthesize subscriptionIdentifier=_subscriptionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * serverVerifiableEncoding;                                   //@synthesize serverVerifiableEncoding=_serverVerifiableEncoding - In the implementation block
@property (nonatomic,readonly) IDSAuthenticationCertificate * authenticationCertificate;              //@synthesize authenticationCertificate=_authenticationCertificate - In the implementation block
@property (nonatomic,readonly) NSData * signature;                                                    //@synthesize signature=_signature - In the implementation block
-(NSData *)signature;
-(NSString *)subscriptionIdentifier;
-(NSString *)serverVerifiableEncoding;
-(id)initWithSubscriptionIdentifier:(id)arg1 authenticationCertificate:(id)arg2 signature:(id)arg3 serverVerifiableEncoding:(id)arg4 ;
-(IDSAuthenticationCertificate *)authenticationCertificate;
-(id)description;
@end

