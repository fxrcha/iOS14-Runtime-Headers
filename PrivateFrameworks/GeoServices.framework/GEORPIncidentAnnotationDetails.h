/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEORPUserLocationDetails;

@interface GEORPIncidentAnnotationDetails : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _incidentId;
	GEORPUserLocationDetails* _userLocation;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _annotationType;
	struct {
		unsigned has_annotationType : 1;
		unsigned read_incidentId : 1;
		unsigned read_userLocation : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUserLocation; 
@property (nonatomic,retain) GEORPUserLocationDetails * userLocation; 
@property (nonatomic,readonly) BOOL hasIncidentId; 
@property (nonatomic,retain) NSString * incidentId; 
@property (assign,nonatomic) BOOL hasAnnotationType; 
@property (assign,nonatomic) int annotationType; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)setUserLocation:(GEORPUserLocationDetails *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIncidentId:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasIncidentId;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEORPUserLocationDetails *)userLocation;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAnnotationType:(int)arg1 ;
-(BOOL)hasUserLocation;
-(int)annotationType;
-(void)setHasAnnotationType:(BOOL)arg1 ;
-(BOOL)hasAnnotationType;
-(id)annotationTypeAsString:(int)arg1 ;
-(int)StringAsAnnotationType:(id)arg1 ;
-(NSString *)incidentId;
-(id)description;
-(id)dictionaryRepresentation;
@end
