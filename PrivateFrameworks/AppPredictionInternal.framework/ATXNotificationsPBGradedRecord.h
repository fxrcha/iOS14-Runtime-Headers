/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ATXNotificationsPBContext, ATXNotificationsPBGrade;

@interface ATXNotificationsPBGradedRecord : PBCodable <NSCopying> {

	NSString* _bundleId;
	ATXNotificationsPBContext* _context;
	ATXNotificationsPBGrade* _grade;
	NSString* _message;
	NSString* _subtitle;
	int _suppActions;
	int _timezone;
	NSString* _title;
	NSString* _topic;
	NSString* _userid;
	SCD_Struct_AT2 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                                 //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) BOOL hasContext; 
@property (nonatomic,retain) ATXNotificationsPBContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasSuppActions; 
@property (assign,nonatomic) int suppActions;                                  //@synthesize suppActions=_suppActions - In the implementation block
@property (assign,nonatomic) BOOL hasTimezone; 
@property (assign,nonatomic) int timezone;                                     //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) BOOL hasGrade; 
@property (nonatomic,retain) ATXNotificationsPBGrade * grade;                  //@synthesize grade=_grade - In the implementation block
@property (nonatomic,readonly) BOOL hasUserid; 
@property (nonatomic,retain) NSString * userid;                                //@synthesize userid=_userid - In the implementation block
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
-(BOOL)hasTimezone;
-(ATXNotificationsPBGrade *)grade;
-(int)timezone;
-(NSString *)subtitle;
-(BOOL)hasContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTopic;
-(BOOL)hasTitle;
-(NSString *)title;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)userid;
-(BOOL)hasSubtitle;
-(void)setMessage:(NSString *)arg1 ;
-(void)setContext:(ATXNotificationsPBContext *)arg1 ;
-(void)setTimezone:(int)arg1 ;
-(void)setHasTimezone:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasGrade;
-(BOOL)isEqual:(id)arg1 ;
-(ATXNotificationsPBContext *)context;
-(NSString *)bundleId;
-(unsigned long long)hash;
-(BOOL)hasMessage;
-(void)setTitle:(NSString *)arg1 ;
-(void)setGrade:(ATXNotificationsPBGrade *)arg1 ;
-(NSString *)message;
-(BOOL)hasBundleId;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setSuppActions:(int)arg1 ;
-(void)setHasSuppActions:(BOOL)arg1 ;
-(BOOL)hasSuppActions;
-(int)suppActions;
-(void)setUserid:(NSString *)arg1 ;
-(BOOL)hasUserid;
@end

