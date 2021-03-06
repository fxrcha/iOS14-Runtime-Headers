/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NPKProtoCatalog, NSMutableArray, NPKProtoPassSyncStateItem, NSString;

@interface NPKProtoPassSyncStateChange : PBCodable <NSCopying> {

	NSData* _baseManifestHashForPartialUpdate;
	int _changeType;
	NSData* _changeUUID;
	NPKProtoCatalog* _companionCatalog;
	NSData* _lastKnownReconciledPassSyncStateHash;
	NSData* _passData;
	unsigned _passSegmentIndex;
	unsigned _passSegmentTotal;
	NSMutableArray* _remoteAssetsForPartialUpdates;
	NPKProtoPassSyncStateItem* _syncStateItem;
	NSString* _uniqueID;
	NPKProtoCatalog* _watchCatalog;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,retain) NSData * changeUUID;                                         //@synthesize changeUUID=_changeUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasLastKnownReconciledPassSyncStateHash; 
@property (nonatomic,retain) NSData * lastKnownReconciledPassSyncStateHash;               //@synthesize lastKnownReconciledPassSyncStateHash=_lastKnownReconciledPassSyncStateHash - In the implementation block
@property (assign,nonatomic) int changeType;                                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncStateItem; 
@property (nonatomic,retain) NPKProtoPassSyncStateItem * syncStateItem;                   //@synthesize syncStateItem=_syncStateItem - In the implementation block
@property (nonatomic,readonly) BOOL hasPassData; 
@property (nonatomic,retain) NSData * passData;                                           //@synthesize passData=_passData - In the implementation block
@property (assign,nonatomic) BOOL hasPassSegmentIndex; 
@property (assign,nonatomic) unsigned passSegmentIndex;                                   //@synthesize passSegmentIndex=_passSegmentIndex - In the implementation block
@property (assign,nonatomic) BOOL hasPassSegmentTotal; 
@property (assign,nonatomic) unsigned passSegmentTotal;                                   //@synthesize passSegmentTotal=_passSegmentTotal - In the implementation block
@property (nonatomic,readonly) BOOL hasCompanionCatalog; 
@property (nonatomic,retain) NPKProtoCatalog * companionCatalog;                          //@synthesize companionCatalog=_companionCatalog - In the implementation block
@property (nonatomic,readonly) BOOL hasBaseManifestHashForPartialUpdate; 
@property (nonatomic,retain) NSData * baseManifestHashForPartialUpdate;                   //@synthesize baseManifestHashForPartialUpdate=_baseManifestHashForPartialUpdate - In the implementation block
@property (nonatomic,retain) NSMutableArray * remoteAssetsForPartialUpdates;              //@synthesize remoteAssetsForPartialUpdates=_remoteAssetsForPartialUpdates - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchCatalog; 
@property (nonatomic,retain) NPKProtoCatalog * watchCatalog;                              //@synthesize watchCatalog=_watchCatalog - In the implementation block
+(Class)remoteAssetsForPartialUpdateType;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(int)changeType;
-(NSString *)uniqueID;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)passData;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setCompanionCatalog:(NPKProtoCatalog *)arg1 ;
-(void)setWatchCatalog:(NPKProtoCatalog *)arg1 ;
-(BOOL)hasPassSegmentIndex;
-(unsigned)passSegmentIndex;
-(NSData *)changeUUID;
-(unsigned)passSegmentTotal;
-(BOOL)hasPassSegmentTotal;
-(id)npkDescription;
-(void)setPassData:(NSData *)arg1 ;
-(BOOL)hasCompanionCatalog;
-(BOOL)hasWatchCatalog;
-(NPKProtoCatalog *)companionCatalog;
-(NPKProtoCatalog *)watchCatalog;
-(void)setPassSegmentIndex:(unsigned)arg1 ;
-(void)setPassSegmentTotal:(unsigned)arg1 ;
-(NPKProtoPassSyncStateItem *)syncStateItem;
-(NSData *)baseManifestHashForPartialUpdate;
-(void)setBaseManifestHashForPartialUpdate:(NSData *)arg1 ;
-(void)setChangeUUID:(NSData *)arg1 ;
-(void)setSyncStateItem:(NPKProtoPassSyncStateItem *)arg1 ;
-(BOOL)hasPassData;
-(void)addRemoteAssetsForPartialUpdate:(id)arg1 ;
-(void)setLastKnownReconciledPassSyncStateHash:(NSData *)arg1 ;
-(unsigned long long)remoteAssetsForPartialUpdatesCount;
-(void)clearRemoteAssetsForPartialUpdates;
-(id)remoteAssetsForPartialUpdateAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasLastKnownReconciledPassSyncStateHash;
-(BOOL)hasSyncStateItem;
-(void)setHasPassSegmentIndex:(BOOL)arg1 ;
-(void)setHasPassSegmentTotal:(BOOL)arg1 ;
-(BOOL)hasBaseManifestHashForPartialUpdate;
-(NSData *)lastKnownReconciledPassSyncStateHash;
-(NSMutableArray *)remoteAssetsForPartialUpdates;
-(void)setRemoteAssetsForPartialUpdates:(NSMutableArray *)arg1 ;
@end

