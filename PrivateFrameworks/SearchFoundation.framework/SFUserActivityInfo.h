/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFUserActivityInfo.h>
@class NSString, NSURL, NSDictionary, NSData;


@protocol SFUserActivityInfo <NSObject>
@property (assign,nonatomic) int valueType; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSURL * urlValue; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(int)valueType;
-(NSURL *)urlValue;
-(NSString *)key;
-(void)setKey:(id)arg1;
-(void)setUrlValue:(id)arg1;
-(void)setStringValue:(id)arg1;
-(NSString *)stringValue;
-(void)setValueType:(int)arg1;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDictionary, NSData;

@interface SFUserActivityInfo : NSObject <SFUserActivityInfo, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _valueType;
	NSString* _key;
	NSString* _stringValue;
	NSURL* _urlValue;

}

@property (assign,nonatomic) int valueType;                                          //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,copy) NSString * key;                                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy) NSURL * urlValue;                                         //@synthesize urlValue=_urlValue - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(int)valueType;
-(NSURL *)urlValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setUrlValue:(NSURL *)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)stringValue;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasValueType;
-(void)setValueType:(int)arg1 ;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;
@end

