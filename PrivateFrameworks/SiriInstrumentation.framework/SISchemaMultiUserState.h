/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData;

@interface SISchemaMultiUserState : PBCodable {

	NSArray* _enrolledUsers;

}

@property (nonatomic,copy) NSArray * enrolledUsers;              //@synthesize enrolledUsers=_enrolledUsers - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)enrolledUsersCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
-(void)addEnrolledUsers:(id)arg1 ;
-(NSArray *)enrolledUsers;
-(void)clearEnrolledUsers;
-(id)enrolledUsersAtIndex:(unsigned long long)arg1 ;
-(void)setEnrolledUsers:(NSArray *)arg1 ;
@end
