/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonaKit/PersonaKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSMutableSet, NSDate, NSString, NSSet;

@interface PRLikeness : NSObject <NSSecureCoding> {

	CGImageRef _staticRepresentation;
	NSData* _staticRepresentationData;
	NSMutableSet* _dirtyProperties;
	BOOL _isCurrent;
	unsigned long long _type;
	unsigned long long _scope;
	NSData* _recipe;
	NSDate* _creationDate;
	NSString* _uniqueIdentifier;
	NSString* _externalIdentifier;
	unsigned long long _version;
	NSDate* _expirationDate;
	NSDate* _softExpirationDate;
	NSString* _ownerID;
	long long _source;
	NSDate* _insertionDate;
	CGRect _cropRectForTopLeftOrigin;

}

@property (assign,setter=setCurrent:,nonatomic) BOOL isCurrent;                 //@synthesize isCurrent=_isCurrent - In the implementation block
@property (assign,nonatomic) unsigned long long version;                        //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                           //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSDate * softExpirationDate;                       //@synthesize softExpirationDate=_softExpirationDate - In the implementation block
@property (nonatomic,retain) NSData * staticRepresentationData; 
@property (nonatomic,retain) NSString * ownerID;                                //@synthesize ownerID=_ownerID - In the implementation block
@property (assign,nonatomic) unsigned long long type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long scope;                          //@synthesize scope=_scope - In the implementation block
@property (assign,nonatomic) long long source;                                  //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSString * typeDescription; 
@property (nonatomic,readonly) NSString * scopeDescription; 
@property (nonatomic,retain) NSDate * insertionDate;                            //@synthesize insertionDate=_insertionDate - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                             //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSSet * dirtyProperties;                           //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (nonatomic,readonly) BOOL isDirty; 
@property (nonatomic,copy) NSData * recipe;                                     //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) CGRect cropRectForTopLeftOrigin;                   //@synthesize cropRectForTopLeftOrigin=_cropRectForTopLeftOrigin - In the implementation block
@property (nonatomic,readonly) CGRect cropRectForBottomLeftOrigin; 
@property (nonatomic,readonly) NSString * uniqueIdentifier;                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * externalIdentifier;                       //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
+(id)_dateFormatter;
+(BOOL)supportsSecureCoding;
+(id)photoWithImage:(CGImageRef)arg1 ;
+(id)monogramWithScope:(unsigned long long)arg1 recipe:(id)arg2 staticRepresentation:(CGImageRef)arg3 ;
+(id)diddlySquatLikeness;
+(id)monogramWithRecipe:(id)arg1 staticRepresentation:(CGImageRef)arg2 ;
+(CGRect)_flippedRectForRect:(CGRect)arg1 relativeToImage:(CGImageRef)arg2 ;
+(id)photoWithScope:(unsigned long long)arg1 image:(CGImageRef)arg2 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRectForTopLeftOrigin:(CGRect)arg2 ;
+(BOOL)automaticallyNotifiesObserversOfCropRectForTopLeftOrigin;
+(id)photoWithImage:(CGImageRef)arg1 cropRectForBottomLeftOrigin:(CGRect)arg2 ;
+(id)_photoWithScope:(unsigned long long)arg1 image:(CGImageRef)arg2 cropRectForTopLeftOrigin:(CGRect)arg3 ;
+(id)likenessWithPropagatedData:(id)arg1 ;
+(id)descriptionForScope:(unsigned long long)arg1 ;
+(unsigned long long)scopeFromDescription:(id)arg1 ;
+(id)photoWithImage:(CGImageRef)arg1 cropRect:(CGRect)arg2 ;
-(id)accentColor;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)_accentColorForMonogram;
-(id)_accentColorForPhoto;
-(id)_photoSnapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(BOOL)isDirty;
-(void)setCropRect:(CGRect)arg1 ;
-(CGRect)cropRect;
-(void)setScope:(unsigned long long)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)clearDirtyProperties;
-(unsigned long long)version;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(BOOL)isCurrent;
-(NSString *)externalIdentifier;
-(unsigned long long)scope;
-(void)setRecipe:(NSData *)arg1 ;
-(NSDate *)expirationDate;
-(NSData *)recipe;
-(void)setVersion:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setSource:(long long)arg1 ;
-(NSSet *)dirtyProperties;
-(NSString *)ownerID;
-(void)setDirtyProperties:(NSSet *)arg1 ;
-(id)init;
-(NSString *)uniqueIdentifier;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSDate *)creationDate;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)source;
-(void)setCurrent:(BOOL)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(id)description;
-(NSString *)typeDescription;
-(void)setOwnerID:(NSString *)arg1 ;
-(void)setStaticRepresentation:(CGImageRef)arg1 ;
-(void)setCropRectForTopLeftOrigin:(CGRect)arg1 ;
-(NSData *)staticRepresentationData;
-(CGRect)cropRectForTopLeftOrigin;
-(BOOL)isDiddlySquat;
-(id)dataForPropagation;
-(CGRect)cropRectForBottomLeftOrigin;
-(CGImageRef)staticRepresentation;
-(void)setStaticRepresentationData:(NSData *)arg1 ;
-(NSString *)scopeDescription;
-(NSDate *)softExpirationDate;
-(void)setSoftExpirationDate:(NSDate *)arg1 ;
-(NSDate *)insertionDate;
-(void)setInsertionDate:(NSDate *)arg1 ;
@end

