/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {

	unsigned long long _contentRequestAuthorizeGetOptions;
	NSMutableArray* _contentRequestHeaders;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * contentRequestHeaders;                            //@synthesize contentRequestHeaders=_contentRequestHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasContentRequestAuthorizeGetOptions; 
@property (assign,nonatomic) unsigned long long contentRequestAuthorizeGetOptions;              //@synthesize contentRequestAuthorizeGetOptions=_contentRequestAuthorizeGetOptions - In the implementation block
+(Class)contentRequestHeadersType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setContentRequestAuthorizeGetOptions:(unsigned long long)arg1 ;
-(void)setContentRequestHeaders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentRequestHeaders;
-(void)addContentRequestHeaders:(id)arg1 ;
-(unsigned long long)contentRequestHeadersCount;
-(void)clearContentRequestHeaders;
-(id)contentRequestHeadersAtIndex:(unsigned long long)arg1 ;
-(void)setHasContentRequestAuthorizeGetOptions:(BOOL)arg1 ;
-(BOOL)hasContentRequestAuthorizeGetOptions;
-(unsigned long long)contentRequestAuthorizeGetOptions;
@end
