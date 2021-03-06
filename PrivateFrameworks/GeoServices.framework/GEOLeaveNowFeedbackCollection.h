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

@interface GEOLeaveNowFeedbackCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	double _currentTimestamp;
	double _eventTimestamp;
	double _travelDuration;
	int _actionType;
	int _alertType;
	int _travelState;
	struct {
		unsigned has_sessionID : 1;
		unsigned has_currentTimestamp : 1;
		unsigned has_eventTimestamp : 1;
		unsigned has_travelDuration : 1;
		unsigned has_actionType : 1;
		unsigned has_alertType : 1;
		unsigned has_travelState : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID; 
@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType; 
@property (assign,nonatomic) BOOL hasAlertType; 
@property (assign,nonatomic) int alertType; 
@property (assign,nonatomic) BOOL hasTravelState; 
@property (assign,nonatomic) int travelState; 
@property (assign,nonatomic) BOOL hasEventTimestamp; 
@property (assign,nonatomic) double eventTimestamp; 
@property (assign,nonatomic) BOOL hasCurrentTimestamp; 
@property (assign,nonatomic) double currentTimestamp; 
@property (assign,nonatomic) BOOL hasTravelDuration; 
@property (assign,nonatomic) double travelDuration; 
+(BOOL)isValid:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(int)travelState;
-(int)actionType;
-(BOOL)hasSessionID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)currentTimestamp;
-(void)writeTo:(id)arg1 ;
-(void)setAlertType:(int)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEOSessionID)sessionID;
-(int)alertType;
-(id)jsonRepresentation;
-(void)setActionType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTravelState:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasAlertType;
-(void)setEventTimestamp:(double)arg1 ;
-(void)setCurrentTimestamp:(double)arg1 ;
-(void)setTravelDuration:(double)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(BOOL)hasTravelState;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(void)setHasAlertType:(BOOL)arg1 ;
-(id)alertTypeAsString:(int)arg1 ;
-(int)StringAsAlertType:(id)arg1 ;
-(void)setHasTravelState:(BOOL)arg1 ;
-(id)travelStateAsString:(int)arg1 ;
-(int)StringAsTravelState:(id)arg1 ;
-(double)eventTimestamp;
-(void)setHasEventTimestamp:(BOOL)arg1 ;
-(BOOL)hasEventTimestamp;
-(void)setHasCurrentTimestamp:(BOOL)arg1 ;
-(BOOL)hasCurrentTimestamp;
-(double)travelDuration;
-(void)setHasTravelDuration:(BOOL)arg1 ;
-(BOOL)hasTravelDuration;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

