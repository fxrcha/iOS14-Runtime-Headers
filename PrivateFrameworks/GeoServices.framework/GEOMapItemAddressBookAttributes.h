/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOMapItemAddressBookAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _addressIdentifier;
	NSString* _name;
	NSString* _spokenName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _addressType;
	BOOL _isMe;
	struct {
		unsigned has_addressType : 1;
		unsigned has_isMe : 1;
		unsigned read_unknownFields : 1;
		unsigned read_addressIdentifier : 1;
		unsigned read_name : 1;
		unsigned read_spokenName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAddressType; 
@property (assign,nonatomic) int addressType; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasSpokenName; 
@property (nonatomic,retain) NSString * spokenName; 
@property (assign,nonatomic) BOOL hasIsMe; 
@property (assign,nonatomic) BOOL isMe; 
@property (nonatomic,readonly) BOOL hasAddressIdentifier; 
@property (nonatomic,retain) NSString * addressIdentifier; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isMe;
-(NSString *)addressIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsMe:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSpokenName;
-(BOOL)hasIsMe;
-(id)jsonRepresentation;
-(BOOL)hasName;
-(void)setAddressType:(int)arg1 ;
-(int)addressType;
-(id)init;
-(void)setHasAddressType:(BOOL)arg1 ;
-(BOOL)hasAddressType;
-(id)addressTypeAsString:(int)arg1 ;
-(int)StringAsAddressType:(id)arg1 ;
-(void)setAddressIdentifier:(NSString *)arg1 ;
-(void)setHasIsMe:(BOOL)arg1 ;
-(BOOL)hasAddressIdentifier;
-(NSString *)spokenName;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setSpokenName:(NSString *)arg1 ;
-(NSString *)name;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

