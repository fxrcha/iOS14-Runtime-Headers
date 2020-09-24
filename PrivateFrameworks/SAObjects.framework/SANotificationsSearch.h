/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SANotificationsSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * afterNotificationId; 
@property (nonatomic,copy) NSString * priority; 
@property (nonatomic,copy) NSString * sourceAppId; 
@property (nonatomic,copy) NSNumber * supportsSpokenNotifications; 
+(id)notificationsSearch;
+(id)notificationsSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)sourceAppId;
-(id)groupIdentifier;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)afterNotificationId;
-(void)setAfterNotificationId:(NSString *)arg1 ;
-(NSNumber *)supportsSpokenNotifications;
-(void)setSupportsSpokenNotifications:(NSNumber *)arg1 ;
-(BOOL)requiresResponse;
-(void)setSourceAppId:(NSString *)arg1 ;
-(NSString *)priority;
@end
