/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, NSArray, SAMLEvidence;

@interface SAMLAuthZDecisionQueryElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,retain) NSString * resource; 
@property (nonatomic,retain) NSString * channelId; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,retain) SAMLEvidence * evidence; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)destination;
-(NSString *)resource;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(SAMLSubject *)subject;
-(NSArray *)actions;
-(void)setResource:(NSString *)arg1 ;
-(void)addAction:(id)arg1 ;
-(SAMLSignature *)signature;
-(NSString *)consent;
-(void)setChannelId:(NSString *)arg1 ;
-(NSString *)channelId;
-(NSDate *)issueInstant;
-(SAMLEvidence *)evidence;
-(void)setEvidence:(SAMLEvidence *)arg1 ;
@end

