/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class KTPatInclusionProofVerifier, TransparencyManagedDataStore, NSDictionary, LogEntry;

@interface PatInclusionProof : GPBMessage <TransparencyVerifiable>

@property (retain) KTPatInclusionProofVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) unsigned long long patLogBeginningMs; 
@property (readonly) unsigned long long tltLogBeginningMs; 
@property (readonly) NSDictionary * metadata; 
@property (nonatomic,retain) LogEntry * perApplicationTreeEntry; 
@property (assign,nonatomic) BOOL hasPerApplicationTreeEntry; 
@property (nonatomic,retain) LogEntry * topLevelTreeEntry; 
@property (assign,nonatomic) BOOL hasTopLevelTreeEntry; 
+(id)descriptor;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(NSDictionary *)metadata;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(KTPatInclusionProofVerifier *)verifier;
-(void)setVerifier:(KTPatInclusionProofVerifier *)arg1 ;
-(void)setMetadataValue:(id)arg1 key:(id)arg2 ;
-(unsigned long long)patLogBeginningMs;
-(id)vrfPublicKeyWithError:(id*)arg1 ;
-(unsigned long long)tltLogBeginningMs;
-(id)patSigningKeyWithError:(id*)arg1 ;
@end

