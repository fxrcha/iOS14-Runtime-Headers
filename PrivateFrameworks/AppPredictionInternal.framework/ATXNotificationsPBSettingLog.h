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

@class ATXNotificationsPBAggregateData, ATXNotificationsPBSetting, ATXNotificationsPBUsageData;

@interface ATXNotificationsPBSettingLog : PBCodable <NSCopying> {

	ATXNotificationsPBAggregateData* _aggregate;
	ATXNotificationsPBSetting* _setting;
	ATXNotificationsPBUsageData* _usage;

}

@property (nonatomic,readonly) BOOL hasSetting; 
@property (nonatomic,retain) ATXNotificationsPBSetting * setting;                      //@synthesize setting=_setting - In the implementation block
@property (nonatomic,readonly) BOOL hasUsage; 
@property (nonatomic,retain) ATXNotificationsPBUsageData * usage;                      //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) BOOL hasAggregate; 
@property (nonatomic,retain) ATXNotificationsPBAggregateData * aggregate;              //@synthesize aggregate=_aggregate - In the implementation block
-(ATXNotificationsPBAggregateData *)aggregate;
-(void)setSetting:(ATXNotificationsPBSetting *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(ATXNotificationsPBUsageData *)usage;
-(ATXNotificationsPBSetting *)setting;
-(void)setUsage:(ATXNotificationsPBUsageData *)arg1 ;
-(void)setAggregate:(ATXNotificationsPBAggregateData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasUsage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasSetting;
-(BOOL)hasAggregate;
@end

