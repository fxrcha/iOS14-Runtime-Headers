/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray;

@interface PLURIArrayWithHashes : NSObject {

	CFArrayRef _uris;
	CFArrayRef _hashes;
	NSMutableArray* _attributeValues;
	NSMutableArray* _relationshipValues;

}

@property (assign,nonatomic) CFArrayRef uris;                                  //@synthesize uris=_uris - In the implementation block
@property (assign,nonatomic) CFArrayRef hashes;                                //@synthesize hashes=_hashes - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributeValues;                 //@synthesize attributeValues=_attributeValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * relationshipValues;              //@synthesize relationshipValues=_relationshipValues - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) BOOL isUpdate; 
-(BOOL)isUpdate;
-(CFArrayRef)uris;
-(id)initForUpdates:(BOOL)arg1 ;
-(void)setHashes:(CFArrayRef)arg1 ;
-(void)setAttributeValues:(NSMutableArray *)arg1 ;
-(NSMutableArray *)relationshipValues;
-(void)setRelationshipValues:(NSMutableArray *)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)setUris:(CFArrayRef)arg1 ;
-(NSMutableArray *)attributeValues;
-(id)description;
-(CFArrayRef)hashes;
@end
