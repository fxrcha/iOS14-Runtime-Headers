/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray, NSData;

@interface GEOTFIncident : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE72* _geoids;
	NSString* _crossStreet;
	unsigned long long _durationMin;
	double _endOffset;
	NSString* _incidentId;
	NSMutableArray* _infos;
	double _latitude;
	double _longitude;
	NSData* _openlr;
	double _startOffset;
	long long _startTime;
	NSString* _street;
	long long _updateTime;
	NSData* _zilch;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _alertCCode;
	int _color;
	float _delay;
	unsigned _laneClosureCount;
	int _laneClosureType;
	unsigned _maxZoomLevel;
	unsigned _minZoomLevel;
	int _significance;
	float _speed;
	int _trafficTrend;
	int _type;
	BOOL _blocked;
	BOOL _endTimeReliable;
	BOOL _hardBlocked;
	BOOL _hidden;
	BOOL _navigationAlert;
	struct {
		unsigned has_durationMin : 1;
		unsigned has_endOffset : 1;
		unsigned has_latitude : 1;
		unsigned has_longitude : 1;
		unsigned has_startOffset : 1;
		unsigned has_startTime : 1;
		unsigned has_updateTime : 1;
		unsigned has_alertCCode : 1;
		unsigned has_color : 1;
		unsigned has_delay : 1;
		unsigned has_laneClosureCount : 1;
		unsigned has_laneClosureType : 1;
		unsigned has_maxZoomLevel : 1;
		unsigned has_minZoomLevel : 1;
		unsigned has_significance : 1;
		unsigned has_speed : 1;
		unsigned has_trafficTrend : 1;
		unsigned has_type : 1;
		unsigned has_blocked : 1;
		unsigned has_endTimeReliable : 1;
		unsigned has_hardBlocked : 1;
		unsigned has_hidden : 1;
		unsigned has_navigationAlert : 1;
		unsigned read_geoids : 1;
		unsigned read_crossStreet : 1;
		unsigned read_incidentId : 1;
		unsigned read_infos : 1;
		unsigned read_openlr : 1;
		unsigned read_street : 1;
		unsigned read_zilch : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) unsigned long long geoidsCount; 
@property (nonatomic,readonly) long long* geoids; 
@property (nonatomic,retain) NSMutableArray * infos; 
@property (nonatomic,readonly) BOOL hasIncidentId; 
@property (nonatomic,retain) NSString * incidentId; 
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime; 
@property (assign,nonatomic) BOOL hasUpdateTime; 
@property (assign,nonatomic) long long updateTime; 
@property (assign,nonatomic) BOOL hasBlocked; 
@property (assign,nonatomic) BOOL blocked; 
@property (nonatomic,readonly) BOOL hasStreet; 
@property (nonatomic,retain) NSString * street; 
@property (nonatomic,readonly) BOOL hasCrossStreet; 
@property (nonatomic,retain) NSString * crossStreet; 
@property (assign,nonatomic) BOOL hasLaneClosureCount; 
@property (assign,nonatomic) unsigned laneClosureCount; 
@property (assign,nonatomic) BOOL hasEndTimeReliable; 
@property (assign,nonatomic) BOOL endTimeReliable; 
@property (assign,nonatomic) BOOL hasLaneClosureType; 
@property (assign,nonatomic) int laneClosureType; 
@property (assign,nonatomic) BOOL hasHardBlocked; 
@property (assign,nonatomic) BOOL hardBlocked; 
@property (assign,nonatomic) BOOL hasStartOffset; 
@property (assign,nonatomic) double startOffset; 
@property (assign,nonatomic) BOOL hasEndOffset; 
@property (assign,nonatomic) double endOffset; 
@property (assign,nonatomic) BOOL hasDelay; 
@property (assign,nonatomic) float delay; 
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) int significance; 
@property (assign,nonatomic) BOOL hasMinZoomLevel; 
@property (assign,nonatomic) unsigned minZoomLevel; 
@property (assign,nonatomic) BOOL hasMaxZoomLevel; 
@property (assign,nonatomic) unsigned maxZoomLevel; 
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) float speed; 
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL hasTrafficTrend; 
@property (assign,nonatomic) int trafficTrend; 
@property (assign,nonatomic) BOOL hasColor; 
@property (assign,nonatomic) int color; 
@property (assign,nonatomic) BOOL hasDurationMin; 
@property (assign,nonatomic) unsigned long long durationMin; 
@property (nonatomic,readonly) BOOL hasZilch; 
@property (nonatomic,retain) NSData * zilch; 
@property (assign,nonatomic) BOOL hasAlertCCode; 
@property (assign,nonatomic) unsigned alertCCode; 
@property (assign,nonatomic) BOOL hasNavigationAlert; 
@property (assign,nonatomic) BOOL navigationAlert; 
@property (nonatomic,readonly) BOOL hasOpenlr; 
@property (nonatomic,retain) NSData * openlr; 
+(Class)infoType;
+(BOOL)isValid:(id)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)setStartOffset:(double)arg1 ;
-(NSData *)zilch;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasStartTime;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)openlr;
-(long long*)geoids;
-(void)addInfo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hidden;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)street;
-(void)setSpeed:(float)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasHidden;
-(void)setHasSignificance:(BOOL)arg1 ;
-(BOOL)blocked;
-(void)dealloc;
-(id)jsonRepresentation;
-(long long)startTime;
-(void)setHasHidden:(BOOL)arg1 ;
-(void)setStartTime:(long long)arg1 ;
-(NSString *)crossStreet;
-(float)delay;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasColor;
-(BOOL)hasDelay;
-(void)setDelay:(float)arg1 ;
-(BOOL)hasSpeed;
-(BOOL)hasZilch;
-(id)init;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)infos;
-(int)type;
-(void)setSignificance:(int)arg1 ;
-(void)setUpdateTime:(long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasOpenlr;
-(void)setEndOffset:(double)arg1 ;
-(void)setHasStartOffset:(BOOL)arg1 ;
-(BOOL)hasStartOffset;
-(void)setHasEndOffset:(BOOL)arg1 ;
-(BOOL)hasEndOffset;
-(void)setHasColor:(BOOL)arg1 ;
-(id)colorAsString:(int)arg1 ;
-(int)StringAsColor:(id)arg1 ;
-(void)addGeoid:(long long)arg1 ;
-(void)setIncidentId:(NSString *)arg1 ;
-(void)setCrossStreet:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setLaneClosureCount:(unsigned)arg1 ;
-(void)setEndTimeReliable:(BOOL)arg1 ;
-(void)setLaneClosureType:(int)arg1 ;
-(void)setHardBlocked:(BOOL)arg1 ;
-(unsigned long long)infosCount;
-(void)setMinZoomLevel:(unsigned)arg1 ;
-(void)setMaxZoomLevel:(unsigned)arg1 ;
-(void)setTrafficTrend:(int)arg1 ;
-(void)setDurationMin:(unsigned long long)arg1 ;
-(void)setAlertCCode:(unsigned)arg1 ;
-(void)setNavigationAlert:(BOOL)arg1 ;
-(unsigned long long)geoidsCount;
-(void)clearGeoids;
-(long long)geoidAtIndex:(unsigned long long)arg1 ;
-(id)infoAtIndex:(unsigned long long)arg1 ;
-(void)setGeoids:(long long*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasIncidentId;
-(void)setHasUpdateTime:(BOOL)arg1 ;
-(BOOL)hasUpdateTime;
-(void)setHasBlocked:(BOOL)arg1 ;
-(BOOL)hasCrossStreet;
-(BOOL)hardBlocked;
-(unsigned)laneClosureCount;
-(void)setHasLaneClosureCount:(BOOL)arg1 ;
-(BOOL)hasLaneClosureCount;
-(BOOL)endTimeReliable;
-(unsigned)alertCCode;
-(void)setHasEndTimeReliable:(BOOL)arg1 ;
-(BOOL)hasEndTimeReliable;
-(int)laneClosureType;
-(void)setHasLaneClosureType:(BOOL)arg1 ;
-(BOOL)hasLaneClosureType;
-(id)laneClosureTypeAsString:(int)arg1 ;
-(int)StringAsLaneClosureType:(id)arg1 ;
-(void)setHasHardBlocked:(BOOL)arg1 ;
-(BOOL)hasHardBlocked;
-(void)setHasDelay:(BOOL)arg1 ;
-(id)significanceAsString:(int)arg1 ;
-(int)StringAsSignificance:(id)arg1 ;
-(unsigned)minZoomLevel;
-(void)setHasMinZoomLevel:(BOOL)arg1 ;
-(BOOL)hasMinZoomLevel;
-(unsigned)maxZoomLevel;
-(void)setHasMaxZoomLevel:(BOOL)arg1 ;
-(BOOL)hasMaxZoomLevel;
-(void)setHasSpeed:(BOOL)arg1 ;
-(int)trafficTrend;
-(void)setHasTrafficTrend:(BOOL)arg1 ;
-(BOOL)hasTrafficTrend;
-(id)trafficTrendAsString:(int)arg1 ;
-(int)StringAsTrafficTrend:(id)arg1 ;
-(unsigned long long)durationMin;
-(void)setHasDurationMin:(BOOL)arg1 ;
-(BOOL)hasDurationMin;
-(void)setHasAlertCCode:(BOOL)arg1 ;
-(BOOL)hasSignificance;
-(BOOL)hasAlertCCode;
-(BOOL)navigationAlert;
-(void)setHasNavigationAlert:(BOOL)arg1 ;
-(BOOL)hasNavigationAlert;
-(void)setZilch:(NSData *)arg1 ;
-(void)setInfos:(NSMutableArray *)arg1 ;
-(double)longitude;
-(void)setType:(int)arg1 ;
-(double)latitude;
-(long long)updateTime;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(float)speed;
-(int)color;
-(void)setHidden:(BOOL)arg1 ;
-(void)setColor:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasStreet;
-(void)setLatitude:(double)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(double)startOffset;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(void)setOpenlr:(NSData *)arg1 ;
-(NSString *)incidentId;
-(void)clearInfos;
-(BOOL)hasBlocked;
-(id)description;
-(void)setLongitude:(double)arg1 ;
-(double)endOffset;
-(int)significance;
-(id)dictionaryRepresentation;
@end
