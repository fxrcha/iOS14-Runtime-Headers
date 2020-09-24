/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, ATXPBBlendingSessionDeviceContext, ATXPBBlendingSessionUICache;

@interface ATXPBBlendingSessionBlendingUpdate : PBCodable <NSCopying> {

	NSString* _blendingABGroup;
	NSString* _blendingUpdateUUID;
	NSMutableArray* _clientModelUpdates;
	NSString* _consumerSubType;
	ATXPBBlendingSessionDeviceContext* _deviceContext;
	ATXPBBlendingSessionUICache* _uiCache;

}

@property (nonatomic,readonly) BOOL hasBlendingUpdateUUID; 
@property (nonatomic,retain) NSString * blendingUpdateUUID;                                  //@synthesize blendingUpdateUUID=_blendingUpdateUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasBlendingABGroup; 
@property (nonatomic,retain) NSString * blendingABGroup;                                     //@synthesize blendingABGroup=_blendingABGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasConsumerSubType; 
@property (nonatomic,retain) NSString * consumerSubType;                                     //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceContext; 
@property (nonatomic,retain) ATXPBBlendingSessionDeviceContext * deviceContext;              //@synthesize deviceContext=_deviceContext - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientModelUpdates;                            //@synthesize clientModelUpdates=_clientModelUpdates - In the implementation block
@property (nonatomic,readonly) BOOL hasUiCache; 
@property (nonatomic,retain) ATXPBBlendingSessionUICache * uiCache;                          //@synthesize uiCache=_uiCache - In the implementation block
+(Class)clientModelUpdateType;
-(NSString *)consumerSubType;
-(BOOL)hasConsumerSubType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setConsumerSubType:(NSString *)arg1 ;
-(ATXPBBlendingSessionDeviceContext *)deviceContext;
-(void)mergeFrom:(id)arg1 ;
-(ATXPBBlendingSessionUICache *)uiCache;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDeviceContext:(ATXPBBlendingSessionDeviceContext *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setBlendingUpdateUUID:(NSString *)arg1 ;
-(void)setBlendingABGroup:(NSString *)arg1 ;
-(void)setClientModelUpdates:(NSMutableArray *)arg1 ;
-(void)setUiCache:(ATXPBBlendingSessionUICache *)arg1 ;
-(void)addClientModelUpdate:(id)arg1 ;
-(unsigned long long)clientModelUpdatesCount;
-(void)clearClientModelUpdates;
-(id)clientModelUpdateAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBlendingUpdateUUID;
-(BOOL)hasBlendingABGroup;
-(BOOL)hasDeviceContext;
-(BOOL)hasUiCache;
-(NSString *)blendingUpdateUUID;
-(NSString *)blendingABGroup;
-(NSMutableArray *)clientModelUpdates;
@end
