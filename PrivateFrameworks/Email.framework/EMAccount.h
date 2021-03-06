/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMObject.h>

@class NSString;

@interface EMAccount : EMObject {

	BOOL _primaryiCloudAccount;
	NSString* _name;
	NSString* _username;
	NSString* _hostname;

}

@property (nonatomic,copy,readonly) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostname;                                             //@synthesize hostname=_hostname - In the implementation block
@property (getter=isPrimaryiCloudAccount,nonatomic,readonly) BOOL primaryiCloudAccount;              //@synthesize primaryiCloudAccount=_primaryiCloudAccount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForReceivingAccounts;
+(id)predicateForDeliveryAccounts;
+(id)sortDescriptorForNameAscending:(BOOL)arg1 ;
-(id)ef_publicDescription;
-(BOOL)isPrimaryiCloudAccount;
-(NSString *)username;
-(NSString *)hostname;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
@end

