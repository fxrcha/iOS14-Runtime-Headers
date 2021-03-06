/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOVLFEntryPoint, NSMutableArray, GEOVLFCorrection;

@interface GEOLogMsgEventVLFUsage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOVLFEntryPoint* _entryPoint;
	NSMutableArray* _localizationDetails;
	GEOVLFCorrection* _postFusionCorrection;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _finalState;
	unsigned _sessionTimeMs;
	unsigned _timeRoundedToHour;
	struct {
		unsigned has_finalState : 1;
		unsigned has_sessionTimeMs : 1;
		unsigned has_timeRoundedToHour : 1;
		unsigned read_entryPoint : 1;
		unsigned read_localizationDetails : 1;
		unsigned read_postFusionCorrection : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEntryPoint; 
@property (nonatomic,retain) GEOVLFEntryPoint * entryPoint; 
@property (assign,nonatomic) BOOL hasSessionTimeMs; 
@property (assign,nonatomic) unsigned sessionTimeMs; 
@property (nonatomic,retain) NSMutableArray * localizationDetails; 
@property (assign,nonatomic) BOOL hasFinalState; 
@property (assign,nonatomic) int finalState; 
@property (nonatomic,readonly) BOOL hasPostFusionCorrection; 
@property (nonatomic,retain) GEOVLFCorrection * postFusionCorrection; 
@property (assign,nonatomic) BOOL hasTimeRoundedToHour; 
@property (assign,nonatomic) unsigned timeRoundedToHour; 
+(Class)localizationDetailsType;
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOVLFEntryPoint *)entryPoint;
-(int)finalState;
-(GEOVLFCorrection *)postFusionCorrection;
-(void)addLocalizationDetails:(id)arg1 ;
-(unsigned long long)localizationDetailsCount;
-(void)clearLocalizationDetails;
-(id)localizationDetailsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasEntryPoint;
-(unsigned)sessionTimeMs;
-(BOOL)hasFinalState;
-(void)setHasSessionTimeMs:(BOOL)arg1 ;
-(BOOL)hasSessionTimeMs;
-(void)setHasFinalState:(BOOL)arg1 ;
-(id)finalStateAsString:(int)arg1 ;
-(int)StringAsFinalState:(id)arg1 ;
-(BOOL)hasPostFusionCorrection;
-(void)setHasTimeRoundedToHour:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(unsigned)timeRoundedToHour;
-(void)setTimeRoundedToHour:(unsigned)arg1 ;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setSessionTimeMs:(unsigned)arg1 ;
-(NSMutableArray *)localizationDetails;
-(void)setLocalizationDetails:(NSMutableArray *)arg1 ;
-(void)setEntryPoint:(GEOVLFEntryPoint *)arg1 ;
-(void)setFinalState:(int)arg1 ;
-(void)setPostFusionCorrection:(GEOVLFCorrection *)arg1 ;
-(BOOL)hasTimeRoundedToHour;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

