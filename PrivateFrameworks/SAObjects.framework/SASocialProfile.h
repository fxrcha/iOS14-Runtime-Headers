/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceComparable.h>

@class NSString;

@interface SASocialProfile : AceObject <SAAceSerializable, SAAceComparable>

@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * userName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialProfile;
+(id)socialProfileWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)userName;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)url;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)serviceType;
@end
