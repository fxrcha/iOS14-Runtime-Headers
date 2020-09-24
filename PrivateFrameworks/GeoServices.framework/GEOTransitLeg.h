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

@class PBUnknownFields;

@interface GEOTransitLeg : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _restrictedToSectionIndexs;
	int _sectionOptionIndex;
	struct {
		unsigned has_sectionOptionIndex : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSectionOptionIndex; 
@property (assign,nonatomic) int sectionOptionIndex; 
@property (nonatomic,readonly) unsigned long long restrictedToSectionIndexsCount; 
@property (nonatomic,readonly) int* restrictedToSectionIndexs; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setSectionOptionIndex:(int)arg1 ;
-(void)addRestrictedToSectionIndex:(int)arg1 ;
-(unsigned long long)restrictedToSectionIndexsCount;
-(void)setHasSectionOptionIndex:(BOOL)arg1 ;
-(void)clearRestrictedToSectionIndexs;
-(int)restrictedToSectionIndexAtIndex:(unsigned long long)arg1 ;
-(int)sectionOptionIndex;
-(BOOL)hasSectionOptionIndex;
-(int*)restrictedToSectionIndexs;
-(void)setRestrictedToSectionIndexs:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)dealloc;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
